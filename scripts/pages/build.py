#!/usr/bin/env python3
"""Gera a apresentação estática da CNN com métricas extraídas dos artefatos."""

import argparse
from datetime import datetime
import hashlib
from html import escape
from html.parser import HTMLParser
import json
from pathlib import Path
import re
import shutil
import subprocess
from urllib.parse import quote, unquote, urlsplit
from zoneinfo import ZoneInfo

import markdown

from data import EVIDENCE, SYNTHESIS, load

ROOT = Path(__file__).resolve().parents[2]


def integer(value):
    return f"{int(value):,}".replace(",", ".")


def decimal(value, digits=1):
    return f"{value:.{digits}f}".replace(".", ",")


def scrub(text, root=ROOT):
    text = text.replace(str(root) + "/", "")
    return re.sub(r"/home/[^/\s'\"<>]+/", "~/", text)


def render(template, values):
    def replace(found):
        key = found.group(1)
        if key not in values:
            raise ValueError(f"Campo de template não preenchido: {key}")
        return str(values[key])
    return re.sub(r"\{\{([A-Z_]+)\}\}", replace, template)


def gallery(items, kind):
    cards = []
    for number, (filename, title, caption) in enumerate(items, 1):
        cards.append(f'''<figure class="gallery-card">
<a class="image-link" href="assets/images/{escape(filename)}" data-lightbox data-gallery="{kind}" data-title="{escape(title, quote=True)}">
<img src="assets/images/{escape(filename)}" alt="{escape(title)}" loading="lazy" decoding="async" width="1080" height="1080"><span class="expand-label">Ampliar ↗</span></a>
<figcaption><span class="mono image-number">{number:02d} / {"FST" if kind == "waves" else "ASAP7"}</span><h3>{escape(title)}</h3><p>{escape(caption)}</p></figcaption></figure>''')
    return "\n".join(cards)


def meter(label, metric, detail=""):
    percentage = metric["percent"]
    return f'''<div class="meter"><div class="meter-label"><span>{escape(label)}</span><strong>{decimal(percentage)}%</strong></div>
<div class="meter-track" role="meter" aria-label="{escape(label)}" aria-valuemin="0" aria-valuemax="100" aria-valuenow="{percentage}"><span style="width:{percentage}%"></span></div>
<p class="small muted">{integer(metric['hit'])} / {integer(metric['total'])} {escape(detail)}</p></div>'''


def table_rows(data):
    native = {}
    for row in data["per_file"]:
        native.setdefault(row["file"], {})[row["type"]] = row
    rows = []
    for name, kinds in sorted(native.items()):
        cells = []
        for kind in ("line", "branch", "expr", "toggle"):
            item = kinds.get(kind)
            cells.append(f'<td title="{item["covered_points"]}/{item["total_points"]}">{decimal(float(item["percent"]), 2)}%</td>' if item else '<td class="muted">—</td>')
        rows.append(f'<tr><th scope="row"><code>{escape(name)}</code></th>{"".join(cells)}</tr>')
    return "\n".join(rows)


class DocumentLinks(HTMLParser):
    def __init__(self, source, documents, media, repository, output):
        super().__init__(convert_charrefs=False)
        self.source, self.documents, self.media = source, documents, media
        self.repository, self.output = repository, output
        self.parts = []

    def rewrite(self, target, image=False):
        parsed = urlsplit(target)
        if parsed.scheme or not parsed.path:
            return target
        path = (self.source.parent / unquote(parsed.path)).resolve()
        try:
            relative = path.relative_to(ROOT).as_posix()
        except ValueError:
            raise ValueError(f"Link fora do repositório: {target}")
        fragment = "#" + parsed.fragment if parsed.fragment else ""
        if relative in self.documents:
            return self.documents[relative] + fragment
        if relative in self.media:
            return "../" + self.media[relative] + fragment
        if image:
            if not path.is_file() or path.suffix.lower() not in (".png", ".jpg", ".jpeg", ".webp", ".svg"):
                raise ValueError(f"Imagem ausente: {relative}")
            filename = hashlib.sha256(relative.encode()).hexdigest()[:8] + "-" + path.name
            destination = "assets/images/" + filename
            shutil.copyfile(path, self.output / destination)
            self.media[relative] = destination
            return "../" + destination + fragment
        return self.repository + "/blob/main/" + quote(relative, safe="/") + fragment

    def handle_starttag(self, tag, attrs):
        rewritten = []
        for name, value in attrs:
            if name in ("href", "src") and value:
                value = self.rewrite(value, image=name == "src")
            rewritten.append(name if value is None else f'{name}="{escape(value, quote=True)}"')
        self.parts.append("<" + tag + (" " if rewritten else "") + " ".join(rewritten) + ">")

    def handle_startendtag(self, tag, attrs):
        self.handle_starttag(tag, attrs)

    def handle_endtag(self, tag): self.parts.append(f"</{tag}>")
    def handle_data(self, data): self.parts.append(data)
    def handle_entityref(self, name): self.parts.append(f"&{name};")
    def handle_charref(self, name): self.parts.append(f"&#{name};")


def build(output, root=ROOT):
    if root != ROOT:
        raise ValueError("Raiz de projeto não suportada")
    output = output.resolve()
    if output == root or output in root.parents or output == root / "site" or output == root / "src":
        raise ValueError("Diretório de saída inseguro")
    if output.is_relative_to(root) and output.relative_to(root).parts[0] in (".git", "site", "src", "docs", "UVM", "scripts", "synth_org", "testbenchs", "images"):
        raise ValueError("A saída não pode substituir diretórios de fontes")
    if output.exists() and not (output / ".cnn-site-output").is_file():
        raise ValueError("O diretório existente não foi criado pelo gerador da CNN")
    data = load(root)
    catalog = json.loads((root / "site/catalog.json").read_text())
    if len(catalog["scenarios"]) != len(data["cases"]):
        raise ValueError("Catálogo de cenários incompleto")
    if output.exists():
        shutil.rmtree(output)
    for directory in ("assets/images", "assets/documents", "downloads/campaign", "downloads/synthesis", "reference", "coverage"):
        (output / directory).mkdir(parents=True, exist_ok=True)
    (output / ".cnn-site-output").write_text("Saída gerada por scripts/pages/build.py\n")
    (output / ".nojekyll").touch()
    for source in (root / "site/assets").iterdir():
        if source.is_file(): shutil.copyfile(source, output / "assets" / source.name)
    media = {}
    for section, base in (("physical", SYNTHESIS), ("waveforms", Path("images"))):
        for filename, _, _ in catalog[section]:
            source = root / base / filename
            shutil.copyfile(source, output / "assets/images" / filename)
            media[(base / filename).as_posix()] = "assets/images/" + filename
    for filename in ("neural_draw.png", "organization.png", "sheet_diagram.png", "dot_product_example.jpg"):
        shutil.copyfile(root / "images" / filename, output / "assets/images" / filename)
        media["images/" + filename] = "assets/images/" + filename
    for source, destination in (("UVM/CNN_top/doc_verif/doc_verificacao_CNN_top.pdf", "relatorio-cnn.pdf"),
                                ("docs/CNN_block_notes.pdf", "notas-cnn.pdf")):
        shutil.copyfile(root / source, output / "assets/documents" / destination)
        media[source] = "assets/documents/" + destination
    # Publica cópias dos registros sem caminhos absolutos locais.
    for source in (root / EVIDENCE).iterdir():
        if source.is_file() and source.suffix in (".log", ".csv"):
            (output / "downloads/campaign" / source.name).write_text(scrub(source.read_text(), root))
            media[source.relative_to(root).as_posix()] = "downloads/campaign/" + source.name
    for filename, destination in (("synth_stat.txt", "synth-stat.txt"), ("6_finish.rpt", "timing.rpt")):
        (output / "downloads/synthesis" / destination).write_text(scrub((root / SYNTHESIS / filename).read_text(), root))
    shutil.copyfile(root / "site/evidence/rtl.lcov", output / "downloads/rtl.lcov")

    repository = catalog["repository"]
    document_map = {source: slug + ".html" for slug, source, _, _ in catalog["documents"]}
    document_cards = []
    for slug, source, title, description in catalog["documents"]:
        path = root / source
        raw = path.read_text()
        raw = raw.replace('<div align="justify">', "", 1)
        if raw.rstrip().endswith("</div>"):
            raw = raw.rstrip()[:-6]
        converter = markdown.Markdown(extensions=["tables", "fenced_code", "toc", "sane_lists", "md_in_html"], extension_configs={"toc": {"permalink": False}})
        content = converter.convert(raw)
        links = DocumentLinks(path, document_map, media, repository, output)
        links.feed(content)
        page = render((root / "site/document.html").read_text(), dict(
            TITLE=escape(title), CONTENT="".join(links.parts), TOC=converter.toc,
            SOURCE=escape(source), GITHUB=repository + "/blob/main/" + source,
            RAW=slug + ".md", DESCRIPTION=escape(description)))
        (output / "reference" / (slug + ".html")).write_text(page)
        (output / "reference" / (slug + ".md")).write_text(path.read_text())
        document_cards.append(f'<a class="resource-card" href="reference/{slug}.html"><span class="mono">DOCUMENTO ↗</span><h3>{escape(title)}</h3><p>{escape(description)}</p></a>')

    summary = data["summary"]
    cases = []
    for case in data["cases"]:
        cases.append(f'<tr data-case="{case["status"]}"><th scope="row"><code>{case["id"]}</code></th><td>{escape(catalog["scenarios"][case["number"]])}</td>' +
                     "".join(f'<td>{integer(case[key])}</td>' for key in ("starts", "passed", "failed", "aborted", "incomplete")) +
                     f'<td><span class="badge {case["status"].lower()}">{case["status"]}</span></td></tr>')
    failures = []
    for failure in data["failures"]:
        failures.append(f'''<article class="failure-card"><span class="badge fail">{failure['test_id']} · tx {failure['tx_id']}</span>
<h3>{escape(catalog["failure_descriptions"].get(failure["subcase"], failure["subcase"]))}</h3><p class="small muted"><code>{escape(failure["subcase"])}</code></p><div class="comparison"><div><span>Esperado</span><strong>[{failure['expected0']}, {failure['expected1']}]</strong></div><div><span>Observado</span><strong>[{failure['observed0']}, {failure['observed1']}]</strong></div></div>
<p>Resposta no ciclo {integer(failure['end_cycle'])}, após {failure['latency_cycles']} ciclos. Divergências nas saídas: {failure['errors']}.</p></article>''')
    cells = sorted(data["cells"], key=lambda item: item["count"], reverse=True)
    cell_rows = "\n".join(f'<tr><th scope="row"><code>{escape(cell["type"])}</code></th><td>{integer(cell["count"])}</td><td>{decimal(cell["area"],3)}</td></tr>' for cell in cells)
    native_rows = table_rows(data)
    lcov_rows = "\n".join(f'<tr><th scope="row"><code>{escape(item["file"])}</code></th><td>{item["line_hit"]}/{item["line_total"]}</td><td>{item["branch_hit"]}/{item["branch_total"]}</td></tr>' for item in data["lcov"])
    groups = data["functional_groups"]
    functional_meters = "".join(meter(label, {**data["group_bins"][name], "percent": groups[key]}, "bins") for label, key, name in (
        ("Cenário × pesos", "scenarios", "scenario"), ("Classes de pixels", "pixels", "pixel"),
        ("Posição dos impulsos", "impulses", "spatial"), ("Sinal do bias", "bias", "bias"), ("Quantização do modelo", "quantization", "quant")))
    modules = "".join(f'<details class="module"><summary><span class="mono">{i:02d}</span><strong>{escape(name)}</strong><span>{escape(title)}</span><span class="module-plus" aria-hidden="true">+</span></summary><div><p>{escape(description)}</p><a class="text-link" href="{repository}/blob/main/{quote(source, safe="/")}" target="_blank" rel="noopener noreferrer">Arquivo no repositório ↗</a></div></details>' for i,(name,title,description,source) in enumerate(catalog["modules"],1))
    try:
        commit = subprocess.check_output(["git", "rev-parse", "--short=8", "HEAD"], cwd=root, text=True).strip()
        dirty = bool(subprocess.check_output(["git", "status", "--porcelain"], cwd=root, text=True).strip())
    except (subprocess.CalledProcessError, FileNotFoundError):
        commit, dirty = "não disponível", True
    context = dict(REPOSITORY=repository, CAMPAIGN_DATE=catalog["campaign_date"], SITE_COMMIT=escape(commit + (" · alterações locais" if dirty else "")),
        BUILD_DATE=datetime.now(ZoneInfo("America/Sao_Paulo")).strftime("%d/%m/%Y %H:%M"),
        CELL_COUNT=integer(data["cell_total"]), AREA=decimal(data["area"],3), POWER=decimal(data["power"]*1000),
        STARTS=integer(summary["total_starts"]), PASSED=integer(summary["checked_PASS"]), FAILED=summary["checked_FAIL"],
        ABORTED=summary["aborted_by_reset"], INCOMPLETE=summary["incomplete"], LATENCY=summary["latency_min"],
        RESPONSES=integer(summary["outputs_checked"]), STATUS=data["status"], STATUS_CLASS=data["status"].lower(), SEED=summary["seed"],
        TIMING_STATUS="Sem violações" if not data["timing"]["setup"] and not data["timing"]["hold"] else "Com violações",
        SETUP=int(data["timing"]["setup"]), HOLD=int(data["timing"]["hold"]), TNS=decimal(data["timing"]["tns"],2), WNS=decimal(data["timing"]["wns"],2),
        CELL_ROWS=cell_rows, PHYSICAL_GALLERY=gallery(catalog["physical"], "physical"), WAVE_GALLERY=gallery(catalog["waveforms"], "waves"),
        CASE_ROWS="\n".join(cases), FAILURES="".join(failures), COVERAGE_ROWS=native_rows, LCOV_ROWS=lcov_rows,
        NATIVE_METERS="".join(meter(label,data["native"][kind],"pontos") for label,kind in (("Linhas","line"),("Ramos","branch"),("Expressões","expr"),("Transições","toggle"))),
        FUNCTIONAL_METERS=functional_meters, FUNCTIONAL_HIT=data["functional"]["hit"], FUNCTIONAL_TOTAL=data["functional"]["total"],
        FUNCTIONAL_PERCENT=decimal(data["functional"]["percent"]),
        LCOV_LINES=f'{data["lcov_total"]["line_hit"]}/{data["lcov_total"]["line_total"]}',
        LCOV_BRANCHES=f'{data["lcov_total"]["branch_hit"]}/{data["lcov_total"]["branch_total"]}',
        MODULES=modules, DOCUMENTS="".join(document_cards))
    (output / "index.html").write_text(render((root / "site/index.html").read_text(), context))
    (output / "coverage/index.html").write_text(render((root / "site/coverage.html").read_text(), context))
    (output / "assets/data.json").write_text(json.dumps({"campaign_date":catalog["campaign_date"],"summary":summary,"status":data["status"],"native":data["native"],"functional":data["functional"],"lcov":data["lcov_total"],"synthesis":{"cells":data["cell_total"],"area":data["area"],"power_W":data["power"],"timing":data["timing"]}},ensure_ascii=False,indent=2)+"\n")
    manifest = []
    for path in sorted((output / "downloads").rglob("*")):
        if path.is_file(): manifest.append(f'{hashlib.sha256(path.read_bytes()).hexdigest()}  {path.relative_to(output).as_posix()}')
    (output / "SHA256SUMS").write_text("\n".join(manifest)+"\n")
    print(f"Site gerado em {output}: {len(cases)} cenários, {data['status']}, {len(catalog['physical'])+len(catalog['waveforms'])} capturas.")
    return output


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--output", type=Path, default=ROOT / "_site")
    args = parser.parse_args()
    build(args.output)
