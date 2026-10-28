#!/usr/bin/env python3
"""Render xezim's native code_coverage database without changing its counts."""

import argparse
import csv
import html
import json
import os
from pathlib import Path
import re


METRICS = ('statement', 'branch', 'toggle')
DESIGNS = {
    'rtl': ('RTL', 'UVM + RTL',
            'Cobertura dos arquivos RTL elaborados na CNN, coletada pelo xezim.',
            'Cobertura do RTL nos escopos instrumentados; a bancada UVM fica fora '
            'do escopo padrão tb_cnn.dut.'),
    'sdf': ('NETLIST + SDF', 'UVM + netlist + SDF',
            'Cobertura da netlist OpenROAD e dos modelos de células com anotação SDF.',
            'Cobertura da netlist e dos modelos de células nos escopos instrumentados; '
            'não representa cobertura do RTL original.'),
}


def read_log(path):
    text = path.read_text() if path and path.is_file() else ''
    matches = re.findall(r'^\[RESULT\] (PASS|FAIL)\s*$', text, re.MULTILINE)
    config = re.search(r'^\[CFG\] (.+)$', text, re.MULTILINE)
    summaries = re.findall(r'^\[SUMMARY\] (.+)$', text, re.MULTILINE)
    return (matches[-1] if matches else 'NAO INFORMADO',
            dict(re.findall(r'(\w+)=([^\s]+)', config[1] if config else '')),
            dict(re.findall(r'(\w+)=(\d+)', ' '.join(summaries))))


def render_html(code, metrics, units, database_path, out, design, result, config, counts):
    esc = html.escape
    label, title, description, note = DESIGNS[design]
    cards = []
    names = {'statement': 'INSTRUÇÕES', 'branch': 'DECISÕES', 'toggle': 'TRANSIÇÕES'}
    for metric in metrics:
        tally = code[metric]
        covered, total = tally['covered'], tally['total']
        percent = 100 * covered / total if total else 0
        display = f'{percent:.2f}%' if total else 'N/A'
        detail = f'{covered:,} de {total:,} pontos cobertos'.replace(',', '.')
        foot = 'Duas direções por bit rastreado' if metric == 'toggle' else 'Pontos contados por instância'
        cards.append(f'''<article class="card {'' if total else 'na'}">
<div class="metric-top"><span class="metric-name">{metric.title()}</span><span class="metric-tag">{names[metric]}</span></div>
<div class="metric-value">{display}</div><div class="metric-detail">{detail}</div>
<div class="track" role="img" aria-label="{metric}: {display}"><div class="fill" style="width:{percent:.4f}%"></div></div>
<p class="metric-foot">{foot if total else 'Nenhum ponto instrumentado nesta métrica'}</p></article>''')
    headers = '<th><button data-key="name">Módulo</button></th><th><button data-key="instances">Instâncias</button></th>'
    headers += ''.join(f'<th><button data-key="{m}">{m.title()}</button></th>' for m in metrics)
    rows = []
    for unit in units:
        partial = any(unit[m]['covered'] < unit[m]['total'] for m in metrics)
        zero = any(unit[m]['total'] > 0 and not unit[m]['covered'] for m in metrics)
        attrs = (f'data-name="{esc(unit["design_unit"], quote=True)}" '
                 f'data-instances="{unit["instances"]}" data-partial="{int(partial)}" data-zero="{int(zero)}"')
        cells = f'<td class="unit">{esc(unit["design_unit"])}</td><td class="numeric">{unit["instances"]}</td>'
        for metric in metrics:
            tally = unit[metric]
            covered, total = tally['covered'], tally['total']
            percent = 100 * covered / total if total else -1
            attrs += f' data-{metric}="{percent:.4f}"'
            display = f'{percent:.2f}%' if total else 'N/A'
            cells += (f'<td class="coverage-cell"><div class="numbers"><b>{display}</b>'
                      f'<small>{covered}/{total}</small></div><div class="track">'
                      f'<div class="fill" style="width:{max(0, percent):.4f}%"></div></div></td>')
        rows.append(f'<tr {attrs}>{cells}</tr>')

    chips = [('Escopos', str(len(code['scopes'])))]
    chips += [(label, config[key]) for label, key in
              [('Teste', 'TEST'), ('Seed', 'SEED'), ('Aleatórios configurados', 'RANDOM_COUNT')]
              if key in config]
    campaign = '<div class="campaign-label"><strong>Resultado da bancada</strong>Contagens registradas no log UVM</div>'
    for name, key, css in [('Iniciadas', 'total_starts', ''), ('PASS', 'checked_PASS', 'pass'),
                           ('FAIL', 'checked_FAIL', 'fail'), ('Reset', 'aborted_by_reset', ''),
                           ('Incompletas', 'incomplete', '')]:
        campaign += f'<div class="stat {css}">{name}<b>{esc(counts.get(key, "—"))}</b></div>'

    replacements = {
        'TITLE': esc(title), 'DESIGN_LABEL': esc(label), 'DESCRIPTION': esc(description),
        'DESIGN_NOTE': esc(note), 'RESULT': esc(result if result in ('PASS', 'FAIL') else 'SEM CONCLUSÃO'),
        'RESULT_CLASS': result.lower() if result in ('PASS', 'FAIL') else '',
        'METRIC_COUNT': str(len(metrics)), 'CARDS': ''.join(cards), 'CAMPAIGN': campaign,
        'HEADERS': headers, 'ROWS': ''.join(rows), 'UNIT_COUNT': str(len(units)),
        'CHIPS': ''.join(f'<span class="chip">{esc(k)}<b>{esc(v)}</b></span>' for k, v in chips),
        'DB_LINK': esc(os.path.relpath(database_path.resolve(), out.resolve()), quote=True),
        'DB_PATH': esc(str(database_path.resolve())),
    }
    template = Path(__file__).with_name('xezim_coverage.html').read_text()
    return re.sub(r'@@([A-Z_]+)@@', lambda match: replacements[match[1]], template)


def cell(row, metric):
    tally = row[metric]
    covered, total = tally['covered'], tally['total']
    if not total:
        return 'N/A (0/0)'
    return f'{covered}/{total} ({100 * covered / total:.2f}%)'


def write_table(path, rows, name, metrics):
    identifiers = [name] + (['design_unit'] if name != 'design_unit' else []) + ['instances']
    fields = identifiers + [f'{metric}_{key}' for metric in metrics
               for key in ('covered', 'total', 'percent')]
    with path.open('w', newline='') as handle:
        writer = csv.DictWriter(handle, fieldnames=fields)
        writer.writeheader()
        for row in rows:
            entry = {key: row.get(key, '') for key in identifiers}
            for metric in metrics:
                tally = row[metric]
                entry[f'{metric}_covered'] = tally['covered']
                entry[f'{metric}_total'] = tally['total']
                entry[f'{metric}_percent'] = (
                    100 * tally['covered'] / tally['total'] if tally['total'] else '')
            writer.writerow(entry)


def write_uncovered(path, scopes):
    with path.open('w', newline='') as handle:
        fields = ['metric', 'scope', 'design_unit', 'file', 'line', 'kind',
                  'signal', 'bit', 'direction', 'count']
        writer = csv.DictWriter(handle, fieldnames=fields)
        writer.writeheader()
        for scope in scopes:
            base = {key: scope[key] for key in ('scope', 'design_unit')}
            for site in scope.get('statements', []):
                if not site['count']:
                    writer.writerow(dict(base, metric='statement',
                                         **{key: site[key] for key in
                                            ('file', 'line', 'kind', 'count')}))
            for site in scope.get('branches', []):
                for arm in site['arms']:
                    if not arm['count']:
                        writer.writerow(dict(base, metric='branch', file=site['file'],
                                             line=arm['line'], kind=arm['arm'], count=0))
            for site in scope.get('toggles', []):
                for direction in ('rise', 'fall'):
                    for bit, count in enumerate(site[direction]):
                        if not count:
                            writer.writerow(dict(base, metric='toggle', signal=site['signal'],
                                                 bit=bit, direction=direction, count=0))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--database', type=Path, required=True)
    parser.add_argument('--output-dir', type=Path, required=True)
    parser.add_argument('--simulation-log', type=Path)
    parser.add_argument('--design-kind', choices=DESIGNS, default='sdf')
    args = parser.parse_args()
    try:
        database = json.loads(args.database.read_text())
        code = database.get('code_coverage')
        if not code or not code.get('scopes'):
            raise ValueError('banco sem code coverage; execute coverage ou run ENABLE_COVERAGE=1')
        metrics = [metric for metric in METRICS if metric in code]
        if not metrics or not any(code[metric]['total'] for metric in metrics):
            raise ValueError('nenhum ponto instrumentado; confira COVERAGE_SCOPE')
        scopes = code['scopes']
        units = code.get('design_units', [])
        result, config, counts = read_log(args.simulation_log)

        out = args.output_dir
        out.mkdir(parents=True, exist_ok=True)
        lines = [f'Code coverage — xezim / CNN {DESIGNS[args.design_kind][1]}',
                 f'Banco: {args.database.resolve()}',
                 f'Resultado UVM registrado: {result}',
                 f'Tempo final do banco (unidades do simulador): {database["sim_time"]}',
                 f'Escopos instrumentados: {len(scopes)}']
        lines += [f'{metric}: {cell(code, metric)}' for metric in metrics]
        note = (DESIGNS[args.design_kind][3] + ' Toggle conta duas direcoes por bit. '
                'Total zero e N/A. Cobertura nao implica aprovacao funcional. '
                'Totais por design unit unem hits de suas instancias; '
                'os totais globais contam os pontos por instancia.')
        lines += [note]
        (out / 'summary.txt').write_text('\n'.join(lines) + '\n')
        write_table(out / 'scopes.csv', scopes, 'scope', metrics)
        write_table(out / 'design_units.csv', units, 'design_unit', metrics)
        write_uncovered(out / 'uncovered.csv', scopes)

        document = render_html(code, metrics, units, args.database, out,
                               args.design_kind, result, config, counts)
        (out / 'index.html').write_text(document)
        print('\n'.join(lines))
        print(f'[REPORT] Code coverage HTML={out / "index.html"}')
    except (OSError, ValueError, KeyError, TypeError) as error:
        parser.exit(1, f'ERRO: {error}\n')


if __name__ == '__main__':
    main()
