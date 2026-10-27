# Evidências da campanha CNN com SDF — 26/10/2026

Esta cópia foi preservada na emissão do relatório em 27/10/2026 para evitar
que novas simulações sobrescrevam seus resultados. A origem e os horários de
modificação dos arquivos estão em `origens.json`, no fuso America/Sao_Paulo.
Os horários são metadados dos arquivos, não medições independentes do início
e fim da execução. O custo de aproximadamente 53 min 33 s foi informado pelo
próprio xezim no log.

| Arquivo | Conteúdo |
| --- | --- |
| `simulation.log` | Execução completa: configuração, anotação SDF, 25 erros de saída, abortos, 22 cenários, cobertura, resultado e tempos. |
| `simulation.exitcode` | Retorno original do simulador: 1. |
| `cnn_verif_results.csv` | 1.097 registros: 1.065 PASS, 20 FAIL e 12 INCOMPLETE. Os três abortos estão no log. |
| `report.log` | Resumo extraído do log, com as contagens e configurações. |
| `falhas.csv` | Todas as 20 transações reprovadas, com esperado, observado e ciclos. |
| `resumo_por_cenario.csv` | Reconciliação dos 22 cenários, incluindo três abortos inferidos e conferidos com o log. |
| `comparacao_RTL_SDF.csv` | Quantidades de falhas por cenário nas campanhas preservadas. |
| `xezim_cov.json` | Banco funcional: cinco grupos, 75.374 amostras; sem relatório estrutural de linha/branch/toggle. |
| `6_final_xezim.inputs.json` | Manifesto usado pelo preparador: hashes da netlist, SDF e cinco bibliotecas originais, escopo `dut` e 30 linhas UDP expandidas nas cópias. |
| `inputs.log` | Preparação de 69 tipos de células e 47.390 entradas CELL do SDF, incluindo a raiz. |
| `export_sdf.log` | Exportação do SDF e bibliotecas Liberty FF utilizadas. |
| `rtl_referencia/` | CSV e resumo copiados da evidência do relatório RTL anterior, preservados separadamente. |
| `audit/summary.json` | Resultado e hashes das fontes usados na auditoria complementar. |
| `audit/normal/` | Três transações aprovadas e 214 ciclos de observação independente dos pinos. |
| `audit/bad_result/` | Três respostas da interface zeradas: erros OUTPUT e três FAIL esperados. |
| `audit/missing_valid/` | Valid da interface bloqueado: três timeouts e três FAIL esperados. |
| `origens.json` | Caminhos de origem, hashes, horários de modificação, estado Git na emissão e conferências dos manifestos. |
| `metricas.json` | Dados derivados e reconciliados pelo script `gerar_metricas.py`. |
| `SHA256SUMS` | Integridade dos arquivos documentais desta pasta e subpastas. |

Os logs da auditoria são de testes complementares isolados de `IMG-01`, não
uma segunda observação independente das 1.100 transações da campanha completa.
As falhas deliberadas são usadas para verificar a detecção de defeitos e não
integram as 20 falhas da campanha principal.

Não foram duplicados os arquivos grandes `6_final.v`, `6_final.sdf` e o SDF
preparado. Os originais permanecem em `synth_org/top/results/asap7/top/base/`
e `results_uvm/CNN_top_sdf/`. Seus hashes e tamanhos foram registrados e os
hashes originais conferiram com o manifesto da execução. A cópia histórica
`6_final_tb_cnn.inputs.json` não foi usada nesta análise; o manifesto atual
é `6_final_xezim.inputs.json`.

A linha de comando efetiva completa não foi gravada no log. Os argumentos
explícitos do relatório orientam a reprodução e distinguem os padrões do
script das opções historicamente comprovadas. Em particular, `max` é o
padrão do seletor SDF, mas o log sozinho não demonstra esse seletor.

Confira a integridade **antes** de regenerar os dados derivados:

```bash
sha256sum -c SHA256SUMS
```
