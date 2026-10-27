"""Leitura dos registros de verificação e síntese; não abre arquivos RTL."""

import csv
import hashlib
import re
from pathlib import Path


EVIDENCE = Path("UVM/CNN_top/doc_verif/evidencias")
SYNTHESIS = Path("synth_org/top/reports/asap7/top/base")


def match(pattern, text):
    result = re.search(pattern, text, re.MULTILINE)
    if result is None:
        raise ValueError(f"Registro obrigatório ausente: {pattern}")
    return result


def native_metrics(text):
    metrics = {}
    for name, percentage, hit, total in re.findall(
        r"^\s*(\w+)\s*:\s*([\d.]+)%\s*\(\s*(\d+)/\s*(\d+)\)", text, re.M
    ):
        metrics[name] = {"hit": int(hit), "total": int(total), "percent": float(percentage)}
    return metrics


def read_lcov(path):
    records = []
    current = None
    for line in path.read_text().splitlines():
        if line.startswith("SF:"):
            name = line[3:]
            if not name.startswith("src/") or ".." in Path(name).parts:
                raise ValueError(f"Caminho LCOV inválido: {name}")
            current = {"file": name, "lines": [], "branches": []}
            records.append(current)
        elif line.startswith("DA:") and current is not None:
            number, count, *_ = line[3:].split(",")
            current["lines"].append((int(number), int(count)))
        elif line.startswith("BRDA:") and current is not None:
            current["branches"].append(line.rsplit(",", 1)[1] not in ("-", "0"))
    if not records:
        raise ValueError("Banco LCOV vazio")
    for record in records:
        record["line_hit"] = sum(count > 0 for _, count in record["lines"])
        record["line_total"] = len(record["lines"])
        record["branch_hit"] = sum(record["branches"])
        record["branch_total"] = len(record["branches"])
    return records


def load(root):
    evidence = root / EVIDENCE
    for line in (evidence / "SHA256SUMS").read_text().splitlines():
        digest, filename = line.split("  ", 1)
        path = (evidence / filename).resolve()
        if path.parent != evidence.resolve():
            raise ValueError("Caminho inválido no manifesto")
        if hashlib.sha256(path.read_bytes()).hexdigest() != digest:
            raise ValueError(f"Hash divergente: {filename}")

    report = (evidence / "report.log").read_text()
    summary = dict((key, int(value)) for key, value in re.findall(r"(\w+)=(\d+)", "\n".join(
        line for line in report.splitlines() if line.startswith("[SUMMARY]")
    )))
    status = match(r"^\[RESULT\] (PASS|FAIL|INCOMPLETE)$", report).group(1)
    keys = ("total_starts", "checked_PASS", "checked_FAIL", "aborted_by_reset", "incomplete", "outputs_checked", "latency_min", "latency_max", "errors", "assertions", "seed", "sim_cycles")
    if any(key not in summary for key in keys):
        raise ValueError("Resumo da campanha incompleto")
    if summary["total_starts"] != sum(summary[key] for key in ("checked_PASS", "checked_FAIL", "aborted_by_reset", "incomplete")):
        raise ValueError("Contagens da campanha não reconciliam")
    if summary["outputs_checked"] != summary["checked_PASS"] + summary["checked_FAIL"]:
        raise ValueError("Número de respostas comparadas divergente")
    if summary["checked_FAIL"] and status != "FAIL":
        raise ValueError("A campanha contém falhas mas seu status não é FAIL")

    with (evidence / "cnn_verif_results.csv").open() as source:
        transactions = list(csv.DictReader(source))
    for state, key in (("PASS", "checked_PASS"), ("FAIL", "checked_FAIL"), ("INCOMPLETE", "incomplete")):
        if sum(row["status"] == state for row in transactions) != summary[key]:
            raise ValueError(f"CSV e log divergentes: {state}")
    cases = []
    for number, starts, passed, failed, incomplete in re.findall(
        r"^\[CASE\] IMG-(\d+) starts=(\d+) pass=(\d+) fail=(\d+) incomplete=(\d+)", report, re.M
    ):
        number, starts, passed, failed, incomplete = map(int, (number, starts, passed, failed, incomplete))
        aborted = starts - passed - failed - incomplete
        if aborted < 0:
            raise ValueError("Contagem por cenário inválida")
        cases.append(dict(id=f"IMG-{number:02d}", number=number, starts=starts, passed=passed, failed=failed,
                          incomplete=incomplete, aborted=aborted, status="FAIL" if failed else "INCOMPLETE" if incomplete else "PASS"))
    if len(cases) != 22 or sum(case["starts"] for case in cases) != summary["total_starts"]:
        raise ValueError("Matriz de cenários incompleta")
    functional_groups = dict((key, float(value)) for key, value in re.findall(
        r"(scenarios|pixels|impulses|bias|quantization)=([\d.]+)%", report
    ))
    native = native_metrics((evidence / "coverage_summary.log").read_text())
    functional = native_metrics((evidence / "functional_summary.log").read_text())["covergroup"]
    group_bins = {}
    bins_text = (evidence / "coverage_bins.log").read_text()
    for name, percent, hit, total in re.findall(
        r"^  __vlAnonCG_cg_(\w+)\n\s+covergroup\s*:\s*([\d.]+)%\s*\(\s*(\d+)/\s*(\d+)\)", bins_text, re.M
    ):
        group_bins[name] = {"percent": float(percent), "hit": int(hit), "total": int(total)}
    if sum(item["hit"] for item in group_bins.values()) != functional["hit"] or sum(item["total"] for item in group_bins.values()) != functional["total"]:
        raise ValueError("Bins funcionais e agregado inconsistentes")
    with (evidence / "coverage_by_file.csv").open() as source:
        per_file = list(csv.DictReader(source))
    for kind in ("line", "branch", "expr", "toggle"):
        rows = [row for row in per_file if row["type"] == kind]
        if sum(int(row["total_points"]) for row in rows) != native[kind]["total"] or sum(int(row["covered_points"]) for row in rows) != native[kind]["hit"]:
            raise ValueError(f"Cobertura por arquivo inconsistente: {kind}")
    lcov = read_lcov(root / "site/evidence/rtl.lcov")
    lcov_total = {key: sum(record[key] for record in lcov) for key in ("line_hit", "line_total", "branch_hit", "branch_total")}
    lcov_summary = (evidence / "rtl_lcov_summary.log").read_text()
    for kind in ("line", "branch"):
        label = "lines" if kind == "line" else "branches"
        hit, total = map(int, match(rf"{label}.*?\((\d+) of (\d+) {label}\)", lcov_summary).groups())
        if (hit, total) != (lcov_total[kind + "_hit"], lcov_total[kind + "_total"]):
            raise ValueError("LCOV e resumo registrado divergentes")

    statistics = (root / SYNTHESIS / "synth_stat.txt").read_text()
    cells = []
    for count, area, name in re.findall(r"^\s*(\d+)\s+([\d.]+)\s+\d+\s+[\d.]+\s+(\S+_ASAP7_\S+)$", statistics, re.M):
        cells.append({"type": name, "count": int(count), "area": float(area)})
    cell_total = int(match(r"^\s*(\d+)\s+[\d.E+]+\s+\d+\s+[\d.E+]+\s+cells$", statistics).group(1))
    if sum(cell["count"] for cell in cells) != cell_total:
        raise ValueError("Contagem de células não reconciliada")
    area = float(match(r"Chip area for module.*?:\s*([\d.]+)", statistics).group(1))
    timing = (root / SYNTHESIS / "6_finish.rpt").read_text()
    timing_metrics = {name: float(match(pattern, timing).group(1)) for name, pattern in {
        "tns": r"^tns max ([-\d.]+)", "wns": r"^wns max ([-\d.]+)",
        "slack": r"^worst slack max ([-\d.]+)", "setup": r"^setup violation count (\d+)",
        "hold": r"^hold violation count (\d+)",
    }.items()}
    power = float(match(r"^Total\s+[\deE+.-]+\s+[\deE+.-]+\s+[\deE+.-]+\s+([\deE+.-]+)", timing).group(1))
    params_text = (root / "UVM/CNN_top/UVM_tb_params.svh").read_text()
    params = {name: int(value) for name, value in re.findall(r"localparam int (\w+)\s*=\s*(\d+)\s*;", params_text)}
    expected_params = dict(DATA_WIDTH=8, IMG_SIZE_1=4, KERNEL_SIZE=3, N_CHANNELS=1,
                           N_FILTERS_LAYER_1=2, N_FILTERS_LAYER_2=2, PADDING_1=1, PADDING_2=1,
                           N_NEURONS_1=2, N_NEURONS_2=2, SHIFT_1=1, SHIFT_2=1, SHIFT_3=1, SHIFT_4=1)
    if any(params.get(name) != value for name, value in expected_params.items()):
        raise ValueError("Os parâmetros atuais diferem da configuração documentada; atualizar a campanha")
    return dict(summary=summary, status=status, cases=cases, transactions=transactions,
                failures=[row for row in transactions if row["status"] == "FAIL"], native=native,
                functional=functional, functional_groups=functional_groups, group_bins=group_bins, per_file=per_file,
                lcov=lcov, lcov_total=lcov_total, cells=cells, cell_total=cell_total, area=area,
                timing=timing_metrics, power=power, params=params)
