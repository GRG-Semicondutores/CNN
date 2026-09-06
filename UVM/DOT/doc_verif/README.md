# Documento de verificação do DOT

- [Documento de verificação em PDF](doc_verificacao_DOT.pdf).
- [Fonte LaTeX](doc_verificacao_DOT.tex).

O documento segue a estrutura do template `../../ReLU/doc_verif/doc_verificacao_ReLU.tex` e foi
preenchido com o plano `../README_VERIF_DOT.md`, a implementação UVM e os
resultados registrados em `../../../results_uvm/DOT/`.

Os arquivos com nome ReLU pertencem ao template original. As imagens
`cap1.png` e `cap2.png` mostram a cobertura LCOV do DOT e estão incluídas
na seção de evidências visuais do documento.

Para recompilar a partir da raiz do repositório, execute duas vezes:

```bash
pdflatex -interaction=nonstopmode -halt-on-error -output-directory UVM/DOT/doc_verif UVM/DOT/doc_verif/doc_verificacao_DOT.tex
```
