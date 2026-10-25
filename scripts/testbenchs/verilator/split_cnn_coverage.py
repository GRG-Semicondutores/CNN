#!/usr/bin/env python3
"""Separa contadores nativos por origem/tipo sem abrir fontes SystemVerilog."""

import argparse
import csv
from collections import Counter
from pathlib import Path


def split_coverage(input_path, rtl_root, testbench, output_dir):
    rtl_root = rtl_root.resolve()
    testbench = testbench.resolve()
    rtl = []
    flow = []
    functional = []
    totals = Counter()
    hits = Counter()
    header = []
    for line in input_path.read_text().splitlines(keepends=True):
        if not line.startswith("C '"):
            if line.startswith("#"):
                header.append(line)
            continue
        try:
            metadata, count = line[3:].rsplit("' ", 1)
            attrs = dict(
                field.split("\x02", 1)
                for field in metadata.split("\x01")
                if "\x02" in field
            )
            source = Path(attrs["f"]).resolve()
            kind = attrs["t"]
            count = int(count)
        except (KeyError, ValueError) as error:
            raise ValueError("Registro de cobertura invalido no banco nativo") from error
        if source.is_relative_to(rtl_root) and kind not in ("covergroup", "user"):
            rtl.append(line)
            if kind in ("line", "branch"):
                flow.append(line)
            key = (str(source.relative_to(rtl_root)), kind)
            totals[key] += 1
            hits[key] += count > 0
        elif source == testbench and kind == "covergroup":
            functional.append(line)

    if not rtl or not flow:
        raise ValueError(
            "Banco sem cobertura estrutural de src. Execute coverage para recompilar "
            "e simular com instrumentacao RTL; um banco apenas funcional nao serve."
        )
    if not functional:
        raise ValueError("Banco sem os covergroups funcionais do testbench")
    output_dir.mkdir(parents=True, exist_ok=True)
    for name, records in (
        ("cnn_top_rtl_coverage.dat", rtl),
        ("cnn_top_rtl_flow.dat", flow),
        ("cnn_top_functional.dat", functional),
    ):
        (output_dir / name).write_text("".join(header + records))
    with (output_dir / "coverage_by_file.csv").open("w", newline="") as output:
        writer = csv.writer(output)
        writer.writerow(("file", "type", "covered_points", "total_points", "percent"))
        for key, total in sorted(totals.items()):
            writer.writerow((*key, hits[key], total, f"{100 * hits[key] / total:.2f}"))
    print(f"RTL: {len(rtl)} contadores de {len({key[0] for key in totals})} arquivos de src")
    print(f"Funcional: {len(functional)} bins do testbench, em banco separado")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--input", required=True, type=Path)
    parser.add_argument("--rtl-root", required=True, type=Path)
    parser.add_argument("--testbench", required=True, type=Path)
    parser.add_argument("--output-dir", required=True, type=Path)
    args = parser.parse_args()
    try:
        split_coverage(args.input, args.rtl_root, args.testbench, args.output_dir)
    except (OSError, ValueError) as error:
        parser.exit(1, f"ERRO: {error}\n")


if __name__ == "__main__":
    main()
