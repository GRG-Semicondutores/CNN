# Relatório de verificação do topo CNN

<div align="justify">

- [Relatório em PDF](doc_verificacao_CNN_top.pdf).
- [Fonte LaTeX](doc_verificacao_CNN_top.tex).
- [Evidências da campanha](evidencias/README.md).
- [Plano de verificação](../req_verif_CNN_top.md).

O relatório documenta a campanha de 25/10/2026, com Verilator 5.052,
UVM 2017-1.0, `TEST=ALL`, `RANDOM_COUNT=1000` e `SEED=20261025`.
A versão 1.1 foi revisada com base nas
[referências do projeto](../../../docs/README.md) e nos registros da execução.

O documento apresenta a configuração, os cenários, os critérios, a análise
das duas falhas e as métricas de cobertura. Os valores intermediários descritos
são cálculos do modelo, e a observação funcional do DUT se limita às portas
públicas. O resultado global permanece **FAIL**.

## Recompilar o PDF

A partir da raiz do repositório, execute duas vezes com uma instalação LaTeX:

```bash
pdflatex -interaction=nonstopmode -halt-on-error \
  -output-directory UVM/CNN_top/doc_verif \
  UVM/CNN_top/doc_verif/doc_verificacao_CNN_top.tex
```

Com Tectonic, uma chamada resolve as passagens necessárias:

```bash
tectonic --keep-logs --outdir UVM/CNN_top/doc_verif \
  UVM/CNN_top/doc_verif/doc_verificacao_CNN_top.tex
```

O PDF desta revisão foi compilado com Tectonic 0.17.0, em A4 paisagem.
Uma nova simulação não atualiza o documento automaticamente. Para registrar
outra campanha, confira os logs e o CSV, revise as tabelas e renove a cópia
das evidências e seu manifesto.

</div>
