# Relatório de verificação CNN — UVM com SDF

- [Relatório em PDF](doc_verificacao_CNN_top_SDF.pdf).
- [Fonte LaTeX](doc_verificacao_CNN_top_SDF.tex).
- [Evidências congeladas](evidencias/README.md).
- [Plano da bancada](../req_verif_CNN_top.md).
- [Relatório anterior em RTL](../doc_verif/README.md).

Emissão: **27/10/2026**. Campanha: **26/10/2026**, xezim 0.11.3,
UVM Accellera 1800.2-2017-1.0, netlist final OpenROAD ASAP7 e SDF.
A organização segue os relatórios de CNN, DOT e ReLU: identificação,
objetivo, estratégia, casos, fronteiras, resultados, análise, cobertura,
evidências e conclusão. O formato é A4 paisagem, com parágrafos justificados
e tabelas centralizadas, como no relatório anterior do topo.

## Resultado registrado

| Indicador | Resultado |
| --- | ---: |
| Starts | 1.100 |
| PASS | 1.065 |
| FAIL | 20 |
| Canceladas por reset | 3 |
| INCOMPLETE por sobreposição exploratória | 12 |
| Diferenças de dados | 25 |
| Respostas pontuadas | 1.085 |
| Latência | 38 ciclos |
| Resultado global | **FAIL** |

O relatório contém as 20 divergências, as contagens dos 22 cenários, a
comparação com a campanha RTL (duas falhas em 37 ciclos), a anotação SDF,
a auditoria dos verificadores e a análise das lacunas de cobertura.
As 18 falhas adicionais concentram-se em W02. A aprovação das 1.000 imagens
aleatórias deve ser interpretada com seu limite: todas têm o mesmo vetor
esperado final, `[0,127]`.

Os percentuais de cobertura do xezim não foram tratados como porcentagem de
requisitos aprovados ou copiados das métricas estruturais do Verilator.
A comparação entre campanhas não isola uma causa para as novas divergências.

## Conferir as evidências

A partir da raiz do repositório:

```bash
(cd UVM/CNN_top/doc_verif_sdf/evidencias && sha256sum -c SHA256SUMS)
python3 UVM/CNN_top/doc_verif_sdf/gerar_metricas.py
```

O script usa somente a biblioteca padrão Python, reconcilia o CSV com o log
e gera as tabelas e métricas a partir da cópia congelada. Ele não executa a
simulação e não altera a bancada, a netlist ou o SDF de entrada.

## Recompilar o PDF

Com Tectonic 0.17.0, a partir da raiz do repositório:

```bash
cd UVM/CNN_top/doc_verif_sdf
tectonic --keep-logs doc_verificacao_CNN_top_SDF.tex
```

Com uma instalação LaTeX, execute duas vezes no mesmo diretório:

```bash
pdflatex -interaction=nonstopmode -halt-on-error doc_verificacao_CNN_top_SDF.tex
```

Uma nova execução em `results_uvm/CNN_top_sdf/` não atualiza este relatório.
Outra campanha exige uma nova conferência e renovação das evidências, da
análise e dos hashes. O relatório registra as falhas observadas; os critérios
e as respostas esperadas da bancada não foram ajustados para aprovar o DUT.
