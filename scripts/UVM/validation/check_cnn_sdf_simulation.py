#!/usr/bin/env python3
"""Audit gate-level UVM against a module-level pin observer and two faults."""

import argparse
import csv
import hashlib
import json
from pathlib import Path
import shlex
import subprocess

ROOT = Path(__file__).resolve().parents[3]
TB_DIR = ROOT / 'UVM/CNN_top'
ADAPTER = ROOT / 'scripts/UVM/gate_level/CNN_openroad_adapter.svh'
MAKEFILE = ROOT / 'scripts/UVM/makefiles/Makefile_UVM_cnn_top_sdf'

# This observer reads physical DUT ports and interface nets directly. It does
# not call the UVM monitor, its snapshot function, or the reference model.
OBSERVER = '''
    int sdf_audit_fd;
    longint unsigned sdf_audit_cycle=0;
    string sdf_audit_path;
    initial begin
        if (!$value$plusargs("CNN_SDF_AUDIT=%s",sdf_audit_path))
            $fatal(1,"CNN_SDF_AUDIT ausente");
        sdf_audit_fd=$fopen(sdf_audit_path,"w");
        if (!sdf_audit_fd) $fatal(1,"Nao foi possivel abrir auditoria de pinos");
        $fdisplay(sdf_audit_fd,"cycle,rst,start,tx_id,valid,out0,out1,dut_valid,dut_result,imagem,kernel1,kernel2,FCWeight1,FCWeight2,ConvBias1,ConvBias2,FCBias1,FCBias2");
    end
    always @(posedge clk) begin : sdf_audit_public_pins
        logic sampled_rst, sampled_start;
        int sampled_tx;
        sdf_audit_cycle++;
        sampled_rst=cif.rst; sampled_start=cif.start; sampled_tx=cif.tb_tx_id;
        #1ps;
        $fdisplay(sdf_audit_fd,"%0d,%b,%b,%0d,%b,%0d,%0d,%b,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h",
            sdf_audit_cycle,sampled_rst,sampled_start,sampled_tx,cif.valid_out4,
            $signed(cif.result_FC2[0]),$signed(cif.result_FC2[1]),dut.valid_out4,dut.result_FC2,
            dut.imagem,dut.kernel1,dut.kernel2,dut.FCWeight1,dut.FCWeight2,
            dut.ConvBias1,dut.ConvBias2,dut.FCBias1,dut.FCBias2);
        $fflush(sdf_audit_fd);
    end
'''


def read_rows(path):
    with path.open() as handle:
        return list(csv.DictReader(handle))


def require(condition, message):
    if not condition:
        raise RuntimeError(message)


def validate(work, variant, returncode):
    pins = read_rows(work / 'pins.csv')
    transactions = read_rows(work / 'results/CNN_top_sdf/cnn_verif_results.csv')
    require(len(pins) >= 177, f'{variant}: observacao de pinos incompleta')
    require([int(row['cycle']) for row in pins] == list(range(1, len(pins) + 1)),
            f'{variant}: ciclos ausentes ou duplicados no observador')
    starts = [row for row in pins if row['start'] == '1' and row['rst'] == '0']
    require(len(starts) == 3 and len(transactions) == 3,
            f'{variant}: esperado 3 starts reais e 3 transacoes no scoreboard')
    require(all(any(ch not in '0' for ch in row['imagem']) for row in starts),
            f'{variant}: imagem nao foi aplicada aos pinos da netlist')
    by_cycle = {int(row['cycle']): row for row in pins}
    for tr in transactions:
        launch = by_cycle[int(tr['start_cycle'])]
        require(launch['start'] == '1' and launch['tx_id'] == tr['tx_id'],
                f'{variant}: lancamento do scoreboard nao corresponde aos pinos')

    log = (work / 'results/CNN_top_sdf/logs/simulation.log').read_text()
    valid = [row for row in pins if row['valid'] == '1']
    dut_valid = [row for row in pins if row['dut_valid'] == '1']
    require(len(dut_valid) == 3, f'{variant}: netlist nao produziu tres pulsos valid')
    if variant == 'normal':
        require(returncode == 0 and '[RESULT] PASS' in log,
                'normal: simulacao reprovada')
        require(len(valid) == 3 and all(tr['status'] == 'PASS' for tr in transactions),
                'normal: numero de respostas/PASS inconsistente')
        for tr in transactions:
            sample = by_cycle[int(tr['end_cycle'])]
            require(sample['valid'] == '1' and
                    [sample['out0'], sample['out1']] == [tr['observed0'], tr['observed1']],
                    'normal: resultado do scoreboard difere dos pinos observados')
            packed = int(sample['dut_result'], 16)
            raw = [(packed >> 8) & 255, packed & 255]
            signed = [str(value - 256 if value & 128 else value) for value in raw]
            require(signed == [sample['out0'], sample['out1']],
                    'normal: saidas da interface diferem das portas da netlist')
    else:
        require(returncode != 0 and '[RESULT] FAIL' in log,
                f'{variant}: falha injetada foi aceita como sucesso')
        require(all(tr['status'] == 'FAIL' and int(tr['errors']) > 0 for tr in transactions),
                f'{variant}: scoreboard nao reprovou todas as transacoes')
        if variant == 'bad_result':
            require(len(valid) == 3 and all(row['out0'] == row['out1'] == '0' for row in valid),
                    'bad_result: corrupcao nao chegou aos pinos observados')
            require('[FAIL][OUTPUT]' in log, 'bad_result: comparacao de dados nao detectou erro')
        else:
            require(not valid and '[FAIL][TIMEOUT]' in log,
                    'missing_valid: ausencia de resposta nao gerou timeout')
    return {'returncode': returncode, 'observed_cycles': len(pins),
            'real_starts': len(starts), 'dut_valid_pulses': len(dut_valid),
            'interface_valid_pulses': len(valid),
            'scoreboard_statuses': [tr['status'] for tr in transactions]}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT / 'results_uvm/CNN_top_sdf/audit')
    parser.add_argument('--xezim', default='xezim')
    parser.add_argument('--uvm-home', type=Path, default=ROOT / '.deps/1800.2-2017-1.0/src')
    parser.add_argument('--netlist', type=Path, default=ROOT / 'synth_org/top/results/asap7/top/base/6_final.v')
    parser.add_argument('--sdf', type=Path, default=ROOT / 'synth_org/top/results/asap7/top/base/6_final.sdf')
    parser.add_argument('--cells', type=Path, nargs='+', required=True)
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    sources = [TB_DIR / 'testbench.sv', ADAPTER,
               args.netlist.resolve(), args.sdf.resolve()]
    sources.extend(sorted(TB_DIR.glob('UVM_*.sv')))
    sources.append(TB_DIR / 'UVM_tb_params.svh')
    hashes = {str(path): hashlib.sha256(path.read_bytes()).hexdigest() for path in sources}
    original_tb = sources[0].read_text()
    head, tail = original_tb.rsplit('endmodule', 1)
    instrumented = head + OBSERVER + '\nendmodule' + tail
    original_gate = sources[1].read_text()
    variants = {'normal': original_gate}
    assignment = 'assign cif.result_FC2[n] = gls_result_FC2[(N_NEURONS_2-n-1)*DATA_WIDTH +: DATA_WIDTH];'
    require(original_gate.count(assignment) == 1, 'conexao de resultado nao reconhecida')
    variants['bad_result'] = original_gate.replace(assignment, "assign cif.result_FC2[n] = '0;")
    connection = '.valid_out4(cif.valid_out4)'
    require(original_gate.count(connection) == 1, 'conexao de valid nao reconhecida')
    variants['missing_valid'] = ("wire sdf_audit_valid;\nassign cif.valid_out4=1'b0;\n" +
                                original_gate.replace(connection, '.valid_out4(sdf_audit_valid)'))
    summary = {}
    failures = []
    for variant, gate in variants.items():
        work = output / variant
        work.mkdir(exist_ok=True)
        (work / 'testbench.sv').write_text(instrumented)
        (work / ADAPTER.name).write_text(gate)
        command = ['make', '--no-print-directory', '-f', str(MAKEFILE), 'run',
                   f'XEZIM={args.xezim}', f'UVM_HOME={args.uvm_home.resolve()}',
                   f'NETLIST={args.netlist.resolve()}', f'SDF={args.sdf.resolve()}',
                   'CELL_FILES=' + ' '.join(str(path.resolve()) for path in args.cells),
                   f'TB_DIR={work}', f'RESULTS_ROOT={work}/results',
                   f'XEZIM_FLAGS=-I {shlex.quote(str(TB_DIR))}', 'TEST=IMG-01', 'MAX_TIME=5us',
                   'ENABLE_WAVEFORM=0',
                   'ENABLE_COVERAGE=0',
                   f'PLUSARGS={shlex.quote("+CNN_SDF_AUDIT=" + str(work / "pins.csv"))}']
        print(f'[AUDIT] {variant}; log: {work}/run.log', flush=True)
        with (work / 'run.log').open('w') as log:
            run = subprocess.run(command, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT,
                                 timeout=300)
        try:
            summary[variant] = validate(work, variant, run.returncode)
            print(f'[AUDIT] {variant}: OK {summary[variant]}', flush=True)
        except (RuntimeError, OSError, ValueError, KeyError) as error:
            summary[variant] = {'returncode': run.returncode, 'validation_error': str(error)}
            failures.append(f'{variant}: {error}')
            print(f'[AUDIT] {variant}: FAIL {error}', flush=True)
    require(all(hashlib.sha256(Path(name).read_bytes()).hexdigest() == digest
                for name, digest in hashes.items()), 'arquivos originais alterados durante auditoria')
    summary['source_sha256'] = hashes
    (output / 'summary.json').write_text(json.dumps(summary, indent=2) + '\n')
    if failures:
        raise SystemExit('\n'.join(failures))
    print('[AUDIT] PASS: pinos conferidos; dados errados e valid ausente detectados.')


if __name__ == '__main__':
    main()
