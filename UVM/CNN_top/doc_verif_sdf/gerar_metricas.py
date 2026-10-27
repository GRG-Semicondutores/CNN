#!/usr/bin/env python3
"""Reconcile frozen verification evidence and generate the report's tables.

This script does not compile or simulate the DUT and never changes the bench.
Run from any directory after the evidence snapshot has been populated.
"""

import csv
from collections import Counter
import hashlib
import json
from pathlib import Path
import re

HERE = Path(__file__).resolve().parent
EVIDENCE = HERE / 'evidencias'
TABLES = HERE / 'tabelas'

NAMES = [
    'Imagem nula / biases', 'Constantes positivas', 'Constantes negativas',
    'Impulsos internos', 'Impulsos nos cantos', 'Impulsos nas bordas',
    'Gradiente horizontal', 'Gradiente vertical', 'Xadrez', 'Faixas horizontais',
    'Faixas verticais', 'Diagonal principal', 'Diagonal secundária',
    'Fronteiras signed', 'Imagens pseudoaleatórias', 'Troca de pesos',
    'Bias isolado por camada', 'Sequência de imagens isoladas',
    'Reset em voo / recuperação', 'Starts sobrepostos',
    'Perturbação de um pixel', 'Quantização e saturação',
]


def read_csv(path):
    with path.open() as handle:
        return list(csv.DictReader(handle))


def write_csv(path, rows):
    with path.open('w', newline='') as handle:
        writer = csv.DictWriter(handle, fieldnames=list(rows[0]))
        writer.writeheader()
        writer.writerows(rows)


def escape(value):
    return str(value).replace('\\', r'\textbackslash{}').replace('_', r'\_').replace('%', r'\%')


def integer(value):
    return f'{value:,}'.replace(',', '.')


def main():
    checksum_file = EVIDENCE / 'SHA256SUMS'
    if checksum_file.exists():
        for line in checksum_file.read_text().splitlines():
            digest, name = line.split('  ', 1)
            assert hashlib.sha256((EVIDENCE / name).read_bytes()).hexdigest() == digest, name
    TABLES.mkdir(exist_ok=True)
    log = (EVIDENCE / 'simulation.log').read_text()
    rows = read_csv(EVIDENCE / 'cnn_verif_results.csv')
    old = read_csv(EVIDENCE / 'rtl_referencia/cnn_verif_results.csv')
    old_by_id = {row['tx_id']: row for row in old}
    assert len(old_by_id) == len(old)
    summary = re.search(r'\[SUMMARY\] total_starts=(\d+) checked_PASS=(\d+) checked_FAIL=(\d+) '
                        r'aborted_by_reset=(\d+) incomplete=(\d+)', log)
    starts, passed, failed, aborted, incomplete = map(int, summary.groups())
    errors, assertions, cycles, seed = map(int, re.search(
        r'\[SUMMARY\] errors=(\d+) assertions=(\d+) sim_cycles=(\d+) seed=(\d+)', log).groups())
    checked, min_latency, max_latency = map(int, re.search(
        r'\[SUMMARY\] outputs_checked=(\d+) latency_min=(\d+) latency_max=(\d+)', log).groups())
    counts = Counter(row['status'] for row in rows)
    assert counts == {'PASS': passed, 'FAIL': failed, 'INCOMPLETE': incomplete}
    assert starts == passed + failed + aborted + incomplete
    assert len(rows) == starts - aborted and checked == passed + failed
    assert len({row['tx_id'] for row in rows}) == len(rows)
    assert {row['tx_id'] for row in rows} == set(old_by_id)
    comparable = [row for row in rows if row['status'] != 'INCOMPLETE']
    assert all(int(row['end_cycle']) - int(row['start_cycle']) == int(row['latency_cycles'])
               for row in comparable)
    assert {int(row['latency_cycles']) for row in comparable} == {min_latency, max_latency}
    assert all((row['test_id'], row['subcase'], row['weights'], row['expected0'], row['expected1']) ==
               tuple(old_by_id[row['tx_id']][field] for field in
                     ('test_id', 'subcase', 'weights', 'expected0', 'expected1')) for row in rows)

    cases = []
    for case_id, launch, ok, bad, inc in re.findall(
            r'\[CASE\] IMG-(\d+) starts=(\d+) pass=(\d+) fail=(\d+) incomplete=(\d+)', log):
        values = dict(zip(('case', 'starts', 'pass', 'fail', 'incomplete'),
                          map(int, (case_id, launch, ok, bad, inc))))
        values['abort'] = values['starts'] - values['pass'] - values['fail'] - values['incomplete']
        assert values['abort'] >= 0
        case_rows = [row for row in rows if row['test_id'] == f'IMG-{values["case"]:02d}']
        assert Counter(row['status'] for row in case_rows) == {
            key: value for key, value in [('PASS', values['pass']), ('FAIL', values['fail']),
                                         ('INCOMPLETE', values['incomplete'])] if value}
        cases.append(values)
    assert len(cases) == 22
    assert sum(case['starts'] for case in cases) == starts
    assert sum(case['abort'] for case in cases) == aborted
    fail_rows = [row for row in rows if row['status'] == 'FAIL']
    mismatches = sum(sum(row[f'expected{i}'] != row[f'observed{i}'] for i in range(2))
                     for row in fail_rows)
    assert mismatches == errors == sum(int(row['errors']) for row in fail_rows)
    assert len(re.findall(r'\[FAIL\]\[OUTPUT\]', log)) == errors
    aborts = [{'tx': int(tx), 'case': case, 'subcase': subcase, 'cycle': int(cycle)}
              for tx, case, subcase, cycle in re.findall(
                  r'\[ABORT\] tx=(\d+) (IMG-\d+)/([^ ]+) cancelada por reset no ciclo=(\d+)', log)]
    assert len(aborts) == aborted
    assert set(range(1, starts + 1)) - {int(row['tx_id']) for row in rows} == {row['tx'] for row in aborts}

    old_fail = {row['tx_id'] for row in old if row['status'] == 'FAIL'}
    new_fail = {row['tx_id'] for row in fail_rows}
    comparison = []
    for case in cases:
        ident = f'IMG-{case["case"]:02d}'
        old_fail_count = sum(row['status'] == 'FAIL' and row['test_id'] == ident for row in old)
        comparison.append({'caso': ident, 'falhas_RTL': old_fail_count,
                           'falhas_SDF': case['fail'], 'delta': case['fail'] - old_fail_count})
    random_rows = [row for row in rows if row['test_id'] == 'IMG-14']
    output_histogram = Counter((row['expected0'], row['expected1']) for row in random_rows)
    json_cov = json.loads((EVIDENCE / 'xezim_cov.json').read_text())
    assert sum(group['samples'] for group in json_cov['covergroups']) == 75374
    assert sum(group['bins'][name] for group in json_cov['covergroups']
               if group['name'].endswith('cg_scenario')
               for name in group['bins'] if name.startswith('cp_test.cases[')) == starts

    metrics = {
        'starts': starts, 'pass': passed, 'fail': failed, 'abort': aborted, 'incomplete': incomplete,
        'csv_rows': len(rows), 'outputs_checked': checked, 'output_differences': errors,
        'assertion_failures': assertions, 'cycles': cycles, 'seed': seed,
        'latency_min': min_latency, 'latency_max': max_latency,
        'simulation_ns': cycles * 10, 'tool_total_ms': float(re.search(
            r'\[PHASE\] total: ([\d.]+)ms', log)[1]),
        'sdf_signals': int(re.search(r'\[SDF\] annotated (\d+) signals', log)[1]),
        'sdf_timing_checks': int(re.search(r'\[SDF\] annotated (\d+) timing check', log)[1]),
        'raw_exitcode': int((EVIDENCE / 'simulation.exitcode').read_text()),
        'global_result': re.search(r'^\[RESULT\] (\w+)', log, re.M)[1],
        'cases': cases, 'aborts': aborts,
        'old_fail_ids': sorted(map(int, old_fail)), 'new_fail_ids': sorted(map(int, new_fail)),
        'additional_fail_ids': sorted(map(int, new_fail - old_fail)),
        'common_fail_ids': sorted(map(int, new_fail & old_fail)),
        'same_expected_metadata_rows': len(rows),
        'random_expected_histogram': {f'[{a},{b}]': count for (a, b), count in output_histogram.items()},
        'directed_scored': checked - len(random_rows), 'directed_pass': passed - len(random_rows),
    }
    (EVIDENCE / 'metricas.json').write_text(json.dumps(metrics, indent=2, ensure_ascii=False) + '\n')
    write_csv(EVIDENCE / 'falhas.csv', fail_rows)
    write_csv(EVIDENCE / 'comparacao_RTL_SDF.csv', comparison)
    write_csv(EVIDENCE / 'resumo_por_cenario.csv', cases)

    lines = []
    for case in cases:
        status = 'FAIL' if case['fail'] else 'INCOMPLETE' if case['incomplete'] else 'PASS (reset)' if case['abort'] else 'PASS'
        lines.append(' & '.join([f'IMG-{case["case"]:02d}', NAMES[case['case']],
                                 *[integer(case[key]) for key in ('starts', 'pass', 'fail', 'abort', 'incomplete')],
                                 status]) + r'\\')
    case_head = r'''\small
\begin{longtable}{l p{8.1cm} r r r r r l}
\toprule\textbf{ID} & \textbf{Caso} & \textbf{Starts} & \textbf{PASS} & \textbf{FAIL} & \textbf{ABORT} & \textbf{INC.} & \textbf{Situação}\\\midrule
\endfirsthead
\toprule\textbf{ID} & \textbf{Caso} & \textbf{Starts} & \textbf{PASS} & \textbf{FAIL} & \textbf{ABORT} & \textbf{INC.} & \textbf{Situação}\\\midrule\endhead
'''
    case_foot = (r'\midrule\textbf{Total} && ' + ' & '.join(
        r'\textbf{' + integer(value) + '}' for value in (starts, passed, failed, aborted, incomplete)) +
        r' & \textbf{FAIL}\\\bottomrule' + '\n' + r'\end{longtable}\normalsize' + '\n')
    (TABLES / 'resultados_por_cenario.tex').write_text(case_head + '\n'.join(lines) + '\n' + case_foot)
    lines = []
    for row in fail_rows:
        end_time_ns = (int(row['end_cycle']) - 1) * 10 + 5 + 0.001
        lines.append(' & '.join([row['tx_id'], row['test_id'], r'\arquivo{' + row['subcase'] + '}',
                                 f'$[{row["expected0"]},{row["expected1"]}]$',
                                 f'$[{row["observed0"]},{row["observed1"]}]$',
                                 row['start_cycle'], row['end_cycle'], row['errors'],
                                 f'{end_time_ns:.3f}'.replace('.', ',')]) + r'\\')
    fail_head = r'''\small
\begin{longtable}{r l p{5.8cm} c c r r r r}
\toprule\textbf{Tx} & \textbf{Caso} & \textbf{Subcaso} & \textbf{Esperado} & \textbf{Observado} & \textbf{Lanç.} & \textbf{Resp.} & \textbf{Erros} & \textbf{Tempo (ns)}\\\midrule
\endfirsthead
\toprule\textbf{Tx} & \textbf{Caso} & \textbf{Subcaso} & \textbf{Esperado} & \textbf{Observado} & \textbf{Lanç.} & \textbf{Resp.} & \textbf{Erros} & \textbf{Tempo (ns)}\\\midrule\endhead
'''
    (TABLES / 'falhas.tex').write_text(fail_head + '\n'.join(lines) + '\n' +
                                     r'\bottomrule\end{longtable}\normalsize' + '\n')
    compare_head = r'''\begin{tabular}{lrrr}
\toprule\textbf{Caso com divergência} & \textbf{FAIL no RTL} & \textbf{FAIL com SDF} & \textbf{Diferença}\\\midrule
'''
    (TABLES / 'comparacao.tex').write_text(compare_head + '\n'.join(
        ' & '.join([row['caso'], str(row['falhas_RTL']), str(row['falhas_SDF']),
                    f'+{row["delta"]}']) + r'\\' for row in comparison if row['falhas_SDF']) + '\n' +
                                          r'\bottomrule\end{tabular}' + '\n')
    report_lines = [line for line in log.splitlines() if line.startswith(
        ('[CFG]', '[SDF]', '[SUMMARY]', '[CASE]', '[COVERAGE]', '[RESULT]', '[ABORT]', '[PHASE]'))]
    (EVIDENCE / 'report.log').write_text('\n'.join(report_lines) + '\n')
    manifest = []
    for path in sorted(EVIDENCE.rglob('*')):
        if path.is_file() and path.name != 'SHA256SUMS':
            manifest.append(hashlib.sha256(path.read_bytes()).hexdigest() + '  ' +
                            path.relative_to(EVIDENCE).as_posix())
    (EVIDENCE / 'SHA256SUMS').write_text('\n'.join(manifest) + '\n')
    print(json.dumps({key: metrics[key] for key in ('starts', 'pass', 'fail', 'abort',
          'incomplete', 'csv_rows', 'output_differences', 'latency_min', 'global_result')}, ensure_ascii=False))
    print(f'Conferencia concluida: {len(manifest)} evidencias com SHA-256; tabelas atualizadas.')


if __name__ == '__main__':
    main()
