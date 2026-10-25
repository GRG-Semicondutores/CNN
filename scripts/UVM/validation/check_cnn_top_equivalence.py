#!/usr/bin/env python3
"""Compara as bancadas funcional/UVM por pinos e resumos; nao abre fontes RTL."""
import argparse
import csv
from itertools import zip_longest
from pathlib import Path
import re
import resource
import subprocess

ROOT = Path(__file__).resolve().parents[3]
FIELDS = {
    'imagem': ('N_CHANNELS', 'N_PIXELS'),
    'kernel1': ('N_FILTERS_LAYER_1', 'N_CHANNELS', 'N_KERNEL'),
    'kernel2': ('N_FILTERS_LAYER_2', 'N_FILTERS_LAYER_1', 'N_KERNEL'),
    'FCWeight1': ('N_NEURONS_1', 'N_FLAT'),
    'FCWeight2': ('N_NEURONS_2', 'N_NEURONS_1'),
    'ConvBias1': ('N_FILTERS_LAYER_1',), 'ConvBias2': ('N_FILTERS_LAYER_2',),
    'FCBias1': ('N_NEURONS_1',), 'FCBias2': ('N_NEURONS_2',),
}
RTL = ['CNN.sv', 'ConvLayer.sv', 'FeatureMap.sv', 'Convolution/Convolution.sv',
       'DotProduct/DotProduct.sv', 'FCLayer.sv', 'Neuron.sv', 'Quantizer.sv',
       'ReLU/ReLU.sv', 'MaxPooling.sv', 'Flatten.sv']


def instrument(source, destination, uvm):
    prefix = 'cif.' if uvm else ''
    case = 'cif.tb_case_id' if uvm else 'case_index(active_case)'
    tx = 'cif.tb_tx_id' if uvm else 'transaction_count'
    params = (ROOT/'UVM/CNN_top/UVM_tb_params.svh').read_text()
    structure = re.search(r'typedef struct packed \{.*?\} cnn_payload_t;', params, re.S)[0]
    structure = structure.replace('cnn_payload_t', 'cnn_audit_pins_t')
    assignments = ''
    for field, dimensions in FIELDS.items():
        indices = 'abc'[:len(dimensions)]
        for level, (index, dim) in enumerate(zip(indices, dimensions)):
            assignments += '        ' + '    '*level + f'for (int {index}=0; {index}<{dim}; {index}++)\n'
        suffix = ''.join(f'[{index}]' for index in indices)
        assignments += '        ' + '    '*len(dimensions) + f'pins.{field}{suffix}={prefix}{field}{suffix};\n'
    observer = f'''
    {structure}
    int cnn_audit_fd;
    longint unsigned cnn_audit_cycle=0;
    string cnn_audit_path;
    initial begin
        if (!$value$plusargs("CNN_AUDIT_TRACE=%s",cnn_audit_path)) $fatal(1,"CNN_AUDIT_TRACE ausente");
        cnn_audit_fd=$fopen(cnn_audit_path,"w");
        if (!cnn_audit_fd) $fatal(1,"Nao foi possivel abrir trace");
    end
    always @(posedge clk) begin : audit_public_pins
        cnn_audit_pins_t pins;
        logic sampled_rst, sampled_start;
        logic [N_NEURONS_2-1:0][DATA_WIDTH-1:0] result;
        int case_id, tx_id;
        cnn_audit_cycle++;
        sampled_rst={prefix}rst; sampled_start={prefix}start;
        case_id={case}; tx_id={tx};
{assignments}
        #1ps;
        for (int n=0;n<N_NEURONS_2;n++) result[n]={prefix}result_FC2[n];
        $fdisplay(cnn_audit_fd,"%0d %0d %0d %b %b %h %b %h",
                  cnn_audit_cycle,case_id,tx_id,sampled_rst,sampled_start,pins,{prefix}valid_out4,result);
        $fflush(cnn_audit_fd);
    end
'''
    text = source.read_text()
    if uvm:
        checks = (ROOT/'scripts/UVM/validation/cnn_scoreboard_checks.svh').read_text()
        anchor = '    `include "UVM_test.sv"\n'
        assert text.count(anchor) == 1
        text = text.replace(anchor, anchor + checks)
    head, tail = text.rsplit('endmodule', 1)
    destination.write_text(head + observer + '\nendmodule' + tail)


def execute(command, cwd, log, timeout):
    with log.open('w') as output:
        return subprocess.run(command, cwd=cwd, stdout=output,
                              stderr=subprocess.STDOUT, timeout=timeout).returncode


def compare(output):
    with (output/'functional.trace').open() as left, (output/'uvm.trace').open() as right:
        count = 0
        for count, (expected, observed) in enumerate(zip_longest(left, right), 1):
            if expected != observed:
                raise SystemExit(f'Divergencia nos pinos no ciclo {count}:\nREF: {expected!r}\nUVM: {observed!r}')
    if count == 0:
        raise SystemExit('Auditoria vazia: nenhum ciclo comparado')
    reports = []
    for name in ('functional', 'uvm'):
        log = (output/name/'simulation.log').read_text()
        lines = [line for line in log.splitlines() if line.startswith(('[SUMMARY]', '[CASE]', '[COVERAGE]', '[RESULT]'))]
        if not any(line.startswith('[RESULT]') for line in lines):
            raise SystemExit(f'{name}: simulacao nao concluiu a campanha')
        reports.append(lines)
    if reports[0] != reports[1]:
        raise SystemExit('Resumos diferentes:\nREF:\n'+'\n'.join(reports[0])+'\nUVM:\n'+'\n'.join(reports[1]))
    csv_rows = []
    for name in ('functional', 'uvm'):
        with (output/name/'cnn_verif_results.csv').open() as handle:
            csv_rows.append(list(csv.DictReader(handle)))
    if csv_rows[0] != csv_rows[1]:
        for index, (expected, observed) in enumerate(zip_longest(*csv_rows), 1):
            if expected != observed:
                raise SystemExit(f'CSV diverge na linha de dados {index}:\nREF: {expected}\nUVM: {observed}')
    unit_log = (output/'uvm/scoreboard_checks.log').read_text()
    if 'CNN SCOREBOARD CHECKS PASS: 8/8' not in unit_log or \
       re.search(r'^(?:%Error|\[\d+\]\s+%Fatal)', unit_log, re.M):
        raise SystemExit('Evidencia dos testes isolados do scoreboard ausente ou reprovada')
    summary = (f'EQUIVALENCIA CNN PASS: {count} ciclos identicos; '
               f'{len(csv_rows[0])} linhas CSV e resumos identicos.\n'
               'CNN SCOREBOARD CHECKS PASS: 8/8\n'+'\n'.join(reports[1])+'\n')
    (output/'equivalence_summary.log').write_text(summary)
    print(summary, end='')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT/'results_uvm/CNN_top/equivalence')
    parser.add_argument('--uvm-home', type=Path, default=ROOT/'.deps/1800.2-2017-1.0/src')
    parser.add_argument('--jobs', type=int, default=1)
    parser.add_argument('--compare-only', action='store_true')
    parser.add_argument('--test', default='ALL')
    parser.add_argument('--random-count', type=int, default=1000)
    parser.add_argument('--seed', type=int, default=20261025)
    args = parser.parse_args()
    resource.setrlimit(resource.RLIMIT_CORE, (0, 0))
    output = args.output.resolve(); output.mkdir(parents=True, exist_ok=True)
    if not args.compare_only:
        uvm_home = args.uvm_home.resolve()
        if not (uvm_home/'uvm_pkg.sv').is_file():
            raise SystemExit('UVM ausente: execute uvm_cnn_top.sh setup_uvm ou informe --uvm-home')
        for name, uvm in (('functional', False), ('uvm', True)):
            work = output/name; work.mkdir(exist_ok=True)
            source = ROOT/('UVM' if uvm else 'testbenchs')/'CNN_top/testbench.sv'
            probe = work/'testbench.sv'; instrument(source, probe, uvm)
            obj = work/'obj_dir'
            top = 'tb_cnn' if uvm else 'testbench'
            command = ['verilator', '--binary', '--timing', '--assert', '-j', str(args.jobs),
                       '-Wno-fatal', '--output-split', '5000', '--output-split-cfuncs', '5000',
                       '-CFLAGS', '-O0', '-MAKEFLAGS', 'OBJCACHE= OPT_FAST=-O0 OPT_SLOW=-O0',
                       '--Mdir', str(obj), '--top-module', top,
                       str(ROOT/'scripts/UVM/validation/cnn_uvm.vlt')]
            if uvm:
                command += ['+define+UVM_NO_DPI', f'+incdir+{uvm_home}',
                            f'+incdir+{source.parent}', str(uvm_home/'uvm_pkg.sv')]
            command += [str(ROOT/'src'/name) for name in RTL] + [str(probe)]
            print(f'Compilando {name}; log: {work}/compile.log', flush=True)
            if execute(command, work, work/'compile.log', 1800):
                raise SystemExit(f'Compilacao de {name} falhou; consulte {work}/compile.log')
            common = [f'+CNN_AUDIT_TRACE={output/name}.trace', f'+TEST={args.test}',
                      f'+RANDOM_COUNT={args.random_count}', f'+SEED={args.seed}']
            if uvm:
                unit = [str(obj/f'V{top}'), '+UVM_TESTNAME=cnn_scoreboard_checks',
                        '+UVM_VERBOSITY=UVM_NONE', '+UVM_NO_RELNOTES',
                        f'+CNN_AUDIT_TRACE={output}/checks.trace']
                if execute(unit, work, work/'scoreboard_checks.log', 120) or \
                   'CNN SCOREBOARD CHECKS PASS: 8/8' not in (work/'scoreboard_checks.log').read_text():
                    raise SystemExit(f'Testes isolados do scoreboard falharam: {work}/scoreboard_checks.log')
                common += ['+UVM_TESTNAME=cnn_test', '+UVM_VERBOSITY=UVM_NONE', '+UVM_NO_RELNOTES']
            print(f'Executando {name}', flush=True)
            status = execute([str(obj/f'V{top}')] + common, work, work/'simulation.log', 600)
            (work/'simulation.exitcode').write_text(str(status)+'\n')
        compare(output)
    else:
        compare(output)


if __name__ == '__main__':
    main()
