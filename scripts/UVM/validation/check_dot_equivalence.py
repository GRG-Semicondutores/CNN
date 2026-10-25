#!/usr/bin/env python3
"""Compare the functional and UVM DOT benches using the same Verilator build.

Instrument copies only: no edits to the reference bench or RTL. Both simulations
may return INCOMPLETE for mandatory X/Z cases; that is not equivalence failure.
Full traces and logs are retained in --output for debugging.
"""
import argparse
import os
import re
from itertools import zip_longest
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[3]


def instrument(source, dest, uvm):
    prefix = 'dif.' if uvm else ''
    test = 'dif.tb_test_id' if uvm else 'current_test'
    rnd = 'dif.tb_round' if uvm else 'current_round'
    seed = 'dif.tb_seed' if uvm else 'current_seed'
    tx = 'dif.tb_tx_id' if uvm else 'tx_count'
    observer = f'''
    // Observer used exclusively by check_dot_equivalence.py.
    integer audit_fd, audit_cycle=0;
    string audit_path;
    initial begin
        if (!$value$plusargs("DOT_AUDIT_TRACE=%s", audit_path))
            $fatal(1,"Missing DOT_AUDIT_TRACE");
        audit_fd=$fopen(audit_path,"w");
        if (!audit_fd) $fatal(1,"Cannot open audit trace");
    end
    always @(posedge clk) begin : audit_sample
        logic [VECTOR_BITS-1:0] iv, wv;
        logic sampled_rst, sampled_valid;
        integer tid, rid, sid, xid;
        audit_cycle++;
        sampled_rst={prefix}rst; sampled_valid={prefix}valid_in;
        tid={test}; rid=sampled_valid ? {rnd} : -1;
        sid=sampled_valid ? {seed} : 0; xid=sampled_valid ? {tx} : 0;
        for (int k=0;k<N_INPUTS;k++) begin
            iv[k*DATA_WIDTH+:DATA_WIDTH]={prefix}input_vec[k];
            wv[k*DATA_WIDTH+:DATA_WIDTH]={prefix}weight[k];
        end
        #1;
        $fdisplay(audit_fd,"%0d %0d %0d %08x %0d %b %b %h %h %b %h",
            audit_cycle,tid,rid,sid,xid,sampled_rst,sampled_valid,
            iv,wv,{prefix}valid_out,{prefix}out);
        $fflush(audit_fd);
    end
'''
    head, tail = source.read_text().rsplit('endmodule', 1)
    checks = (Path(__file__).with_name('dot_scoreboard_checks.svh').read_text() if uvm else '')
    dest.write_text(head + checks + observer + '\nendmodule' + tail)


def execute(command, log, timeout):
    with log.open('w') as stream:
        return subprocess.run(command, cwd=ROOT, stdout=stream,
                              stderr=subprocess.STDOUT, timeout=timeout).returncode


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=ROOT/'results_uvm/DOT/equivalence')
    parser.add_argument('--uvm-home', default='/home/matheus/tools/1800.2-2017-1.0/src')
    parser.add_argument('--jobs', type=int, default=1)
    parser.add_argument('--compare-only', action='store_true')
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    if not args.compare_only:
        os.environ['CCACHE_DISABLE'] = '1'
        rng_obj = output/'obj_rng'
        rng_command = ['verilator','--binary','--timing','-j',str(args.jobs),'-Wno-fatal',
                       f'+incdir+{ROOT}/UVM/DOT','--top-module','random_check','--Mdir',str(rng_obj),
                       str(Path(__file__).with_name('dot_random_checks.sv'))]
        if execute(rng_command,output/'rng.build.log',120):
            raise SystemExit('RNG compatibility build failed; inspect rng.build.log')
        if execute([str(rng_obj/'Vrandom_check')],output/'rng.run.log',30):
            raise SystemExit('RNG differs from the installed Verilator; inspect rng.run.log')
        for name, uvm in [('functional', False), ('uvm', True)]:
            source = ROOT/('UVM' if uvm else 'testbenchs')/'DOT/testbench.sv'
            tb = output/f'{name}.sv'
            instrument(source, tb, uvm)
            obj = output/f'obj_{name}'
            command = ['verilator', '--binary', '--timing', '--assert', '-j', str(args.jobs),
                       '-Wno-fatal', '-Wno-WIDTHTRUNC', '-Wno-WIDTHEXPAND',
                       '--output-split', '5000', '--output-split-cfuncs', '5000',
                       '-CFLAGS', '-O0', '--Mdir', str(obj),
                       '--top-module', 'tb_dot' if uvm else 'testbench']
            if uvm:
                command += ['+define+UVM_NO_DPI', f'+incdir+{args.uvm_home}',
                            f'+incdir+{source.parent}', str(Path(args.uvm_home)/'uvm_pkg.sv')]
            command += [str(ROOT/'src/DotProduct/DotProduct.sv'), str(tb)]
            # Avoid global ccache writes in restricted environments.
            os.environ['CCACHE_DISABLE'] = '1'
            print(f'Building {name}; log: {output/name}.build.log', flush=True)
            rc = execute(command, output/f'{name}.build.log', 1200)
            if rc:
                raise SystemExit(f'{name} build failed ({rc}); inspect build log')
            command = [str(obj/('Vtb_dot' if uvm else 'Vtestbench')),
                       f'+DOT_AUDIT_TRACE={output/name}.trace']
            if uvm:
                command += ['+UVM_TESTNAME=dot_test', '+UVM_VERBOSITY=UVM_LOW', '+UVM_NO_RELNOTES']
            if uvm:
                unit_command = [command[0], f'+DOT_AUDIT_TRACE={output}/checks.trace',
                                '+UVM_TESTNAME=dot_scoreboard_checks', '+UVM_VERBOSITY=UVM_NONE']
                unit_rc = execute(unit_command, output/'checks.run.log', 60)
                if unit_rc or 'SCOREBOARD CHECKS PASS' not in (output/'checks.run.log').read_text():
                    raise SystemExit('Scoreboard checks failed; inspect checks.run.log')
            print(f'Running {name}', flush=True)
            rc = execute(command, output/f'{name}.run.log', 600)
            log = (output/f'{name}.run.log').read_text()
            if 'RESULTADO FINAL' not in log or 'REGRESSAO DOTPRODUCT INCOMPLETA' not in log:
                raise SystemExit(f'{name} did not finish the expected 2-state regression ({rc})')
    count = 0
    with (output/'functional.trace').open() as ref, (output/'uvm.trace').open() as actual:
        for count, (left, right) in enumerate(zip_longest(ref, actual), 1):
            if left != right:
                raise SystemExit(f'Difference at cycle {count}:\nfunctional: {left}uvm:        {right}')
    functional_log = (output/'functional.run.log').read_text()
    uvm_log = (output/'uvm.run.log').read_text()
    ref_cases = re.findall(r'^ T(\d{2}) .*?\s+(\d+)\s+(\d+)\s+(\d+)\s+(PASS|SKIP|FAIL)(?: \((\d+)\))?$', functional_log, re.MULTILINE)
    uvm_cases = re.findall(r'^ T(\d{2}) .*?\s+(\d+)\s+(\d+)\s+(\d+)\s+(PASS|SKIP|FAIL)(?: \((\d+)\))?$', uvm_log, re.MULTILINE)
    if len(ref_cases) != 29 or ref_cases != uvm_cases:
        raise SystemExit(f'Per-test summary differs:\nfunctional={ref_cases}\nuvm={uvm_cases}')
    patterns = [
        r'Functional PASS/FAIL:\s*(\d+) / (\d+)',
        r'Latency PASS/FAIL\s*:\s*(\d+) / (\d+)',
        r'Assertions\s*:\s*(\d+) PASS / (\d+) FAIL',
        r'T23 first appearance: L_DATA=(-?\d+) L_VALID=(-?\d+)',
        r'T25 first appearance: L_DATA=(-?\d+) L_VALID=(-?\d+)',
    ]
    metrics = [(pattern,pattern) for pattern in patterns]
    for ref_pattern, uvm_pattern in metrics:
        left, right = re.search(ref_pattern,functional_log), re.search(uvm_pattern,uvm_log)
        if not left or not right or left.groups() != right.groups():
            raise SystemExit(f'Summary metric differs: {ref_pattern} / {uvm_pattern}')
    summary = (
        'PASS: all 29 per-test summaries, functional/latency counts, measurements and assertions match.\n'
        f'PASS: {count} cycles identical (metadata, reset, valid, all input/weight bits and outputs).\n'
        'X/Z cases require a 4-state UVM simulator; equivalence here covers Verilator execution.\n'
    )
    (output/'equivalence_summary.txt').write_text(summary)
    print(summary, end='')


if __name__ == '__main__':
    main()
