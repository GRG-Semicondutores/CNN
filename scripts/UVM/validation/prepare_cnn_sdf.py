#!/usr/bin/env python3
"""Check the fixed CNN interface and scope OpenROAD SDF for xezim 0.11.3."""

import argparse
import hashlib
import json
from pathlib import Path
import re


def expand_udp_binary_edges(text):
    """Expand UDP (bx) into (0x)/(1x), preserving its IEEE truth table.

    xezim 0.11.3 otherwise treats the entire ASAP7 altos_dff primitive as
    an empty module. Only generated copies of the library are rewritten.
    """
    count = 0
    result = []
    in_table = False
    for line in text.splitlines(keepends=True):
        if line.strip() == 'table':
            in_table = True
        if line.strip() == 'endtable':
            in_table = False
        if in_table and '(bx)' in line:
            count += 1
            result.extend([line.replace('(bx)', '(0x)'), line.replace('(bx)', '(1x)')])
        else:
            result.append(line)
    return ''.join(result), count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--netlist', type=Path, required=True)
    parser.add_argument('--sdf', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--scope', default='dut')
    parser.add_argument('--cells', type=Path, nargs='+', required=True)
    args = parser.parse_args()
    if not re.fullmatch(r'\w+(?:\.\w+)*', args.scope):
        parser.error('escopo invalido')
    if args.output.resolve() == args.sdf.resolve():
        parser.error('a copia com escopo deve ser diferente do SDF original')
    if len({path.name for path in args.cells}) != len(args.cells):
        parser.error('os arquivos de celulas devem ter nomes distintos')
    sources = [args.netlist, args.sdf, *args.cells]
    for source in sources:
        if not source.is_file() or not source.stat().st_size:
            parser.error(f'arquivo ausente ou vazio: {source}')

    netlist = args.netlist.read_text()
    if not re.search(r'\bmodule\s+CNN\s*\(', netlist):
        parser.error('netlist deve conter o modulo CNN sem parametros')
    # Interface sintetizada: 8 bits, imagem 4x4, dois filtros e dois neuronios.
    expected = {'clk': 1, 'rst': 1, 'start': 1, 'valid_out4': 1,
                'imagem': 128, 'kernel1': 144, 'kernel2': 288,
                'FCWeight1': 32, 'FCWeight2': 32, 'ConvBias1': 16,
                'ConvBias2': 16, 'FCBias1': 16, 'FCBias2': 16, 'result_FC2': 16}
    ports = {}
    for direction, msb, lsb, name in re.findall(
            r'^\s*(input|output)\s+(?:\[(\d+):(\d+)\]\s+)?(\w+)\s*;', netlist, re.M):
        ports[name] = abs(int(msb) - int(lsb)) + 1 if msb else 1
    if ports != expected:
        parser.error(f'portas da netlist incompativeis com UVM_tb_params.svh: {ports}')
    used = set(re.findall(r'^\s+(\w+_ASAP7_\w+)\s+', netlist, re.M))
    defined = set()
    cell_copies = {}
    udp_edges = 0
    for source in args.cells:
        text = source.read_text()
        if 'specify' not in text:
            parser.error(f'modelo sem specify para anotacao temporal: {source}')
        defined.update(re.findall(r'\bmodule\s+(\w+)', text))
        cell_copies[source.name], expanded = expand_udp_binary_edges(text)
        udp_edges += expanded
    if used - defined:
        parser.error(f'celulas sem modelo: {sorted(used - defined)}')

    sdf = args.sdf.read_text()
    if not re.search(r'\(DESIGN\s+"CNN"\)', sdf):
        parser.error('SDF deve pertencer ao DESIGN CNN')
    divider_match = re.search(r'\(DIVIDER\s+([/.])\)', sdf)
    if not divider_match:
        parser.error('DIVIDER do SDF nao reconhecido')
    divider = divider_match.group(1)
    # xezim's SDF reader uses flattened dot-separated signal-table keys,
    # without the top-module prefix; it does not interpret DIVIDER/escapes.
    # INTERCONNECT endpoints also need explicit scope (CELL scope is ignored).
    def lookup_name(name):
        return name.replace('\\', '').replace(divider, '.')

    prefix = args.scope
    roots = 0

    def scope_instance(match):
        nonlocal roots
        name = match.group(1).strip()
        if not name:
            roots += 1
        return f'(INSTANCE {prefix}{"." + lookup_name(name) if name else ""})'

    scoped, count = re.subn(r'\(INSTANCE\s*([^)]*)\)', scope_instance, sdf)
    if roots != 1 or count < 2:
        parser.error(f'SDF sem hierarquia esperada: {roots} raizes, {count} celulas')
    scoped = re.sub(r'\(DIVIDER\s+[/.]\)', '(DIVIDER .)', scoped)
    scoped = re.sub(r'\(INTERCONNECT\s+(\S+)\s+(\S+)',
                    lambda match: f'(INTERCONNECT {prefix}.{lookup_name(match[1])} '
                                  f'{prefix}.{lookup_name(match[2])}', scoped)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(scoped)
    cell_dir = args.output.parent / 'cells'
    cell_dir.mkdir(exist_ok=True)
    for name, text in cell_copies.items():
        (cell_dir / name).write_text(text)
    manifest = {'scope': args.scope, 'sdf_cells': count,
                'udp_binary_edges_expanded': udp_edges, 'inputs': {}}
    for source in sources:
        manifest['inputs'][str(source.resolve())] = hashlib.sha256(source.read_bytes()).hexdigest()
    args.output.with_suffix('.inputs.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'[PREPARE] {len(used)} tipos de celulas com modelos; {count} celulas SDF; escopo={args.scope}')
    print(f'[PREPARE] SDF com escopo: {args.output}')
    print(f'[PREPARE] {udp_edges} linhas UDP (bx) expandidas em copias dos modelos')


if __name__ == '__main__':
    main()
