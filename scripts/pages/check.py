#!/usr/bin/env python3
"""Confere links locais, IDs, imagens e placeholders do site gerado."""

import argparse
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit


class Page(HTMLParser):
    def __init__(self):
        super().__init__()
        self.ids, self.links, self.headings = set(), [], 0
        self.images = 0

    def handle_starttag(self, tag, attrs):
        attrs = dict(attrs)
        if "id" in attrs:
            if attrs["id"] in self.ids:
                raise ValueError(f'ID duplicado: {attrs["id"]}')
            self.ids.add(attrs["id"])
        if tag == "h1": self.headings += 1
        if tag in ("a", "link", "img", "script", "iframe"):
            target = attrs.get("href") if tag in ("a", "link") else attrs.get("src")
            if target: self.links.append(target)
        if tag == "img":
            self.images += 1
            if "alt" not in attrs:
                raise ValueError("Imagem sem atributo alt")


def check(output):
    output = output.resolve()
    pages = {}
    for path in output.rglob("*.html"):
        source = path.read_text()
        if "{{" in source or "/home/" in source:
            raise ValueError(f"Placeholder ou caminho absoluto em {path}")
        page = Page()
        page.feed(source)
        if page.headings != 1:
            raise ValueError(f"A página deve ter um h1: {path}")
        pages[path.resolve()] = page
    for path, page in pages.items():
        for target in page.links:
            url = urlsplit(target)
            if url.scheme or url.netloc:
                continue
            if url.path.startswith("/"):
                raise ValueError(f"Link incompatível com subdiretório GitHub Pages: {target}")
            destination = (path.parent / unquote(url.path)).resolve() if url.path else path
            if not destination.is_relative_to(output) or not destination.exists():
                raise ValueError(f"Link local inválido: {path}: {target}")
            if url.fragment and destination in pages and unquote(url.fragment) not in pages[destination].ids:
                raise ValueError(f"Âncora inexistente: {path}: {target}")
    for path in (output / "downloads").rglob("*"):
        if path.is_file() and "/home/" in path.read_text():
            raise ValueError(f"Download com caminho pessoal: {path}")
    print(f"PASS: {len(pages)} páginas, {sum(len(page.links) for page in pages.values())} links e {sum(page.images for page in pages.values())} imagens/ocorrências conferidos.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("output", type=Path)
    check(parser.parse_args().output)
