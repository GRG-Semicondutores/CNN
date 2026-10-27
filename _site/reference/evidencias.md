# Evidências da campanha de 25/10/2026

<div align="justify">

Estes registros acompanham o relatório para manter seus resultados disponíveis
mesmo após novas simulações. Os logs, o CSV e os resumos de cobertura foram
copiados de `results_uvm/CNN_top/`. `scoreboard_checks.log` contém o resumo
extraído dos registros de validação dos verificadores.

<table align="center">
<thead>
<tr>
<th>Arquivo</th>
<th>Conteúdo</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>simulation_coverage.log</code></td>
<td>Execução completa, incluindo divergências, cancelamentos e casos exploratórios.</td>
</tr>
<tr>
<td><code>report.log</code></td>
<td>Resultado global e contagens por cenário.</td>
</tr>
<tr>
<td><code>cnn_verif_results.csv</code></td>
<td>1.097 transações: 1.083 PASS, duas FAIL e 12 INCOMPLETE. Os três abortos constam no log.</td>
</tr>
<tr>
<td><code>coverage_exit_code.txt</code></td>
<td>Retorno da simulação com cobertura: 1.</td>
</tr>
<tr>
<td><code>verilator_version.log</code></td>
<td>Identificação do Verilator 5.052.</td>
</tr>
<tr>
<td><code>coverage_summary.log</code></td>
<td>Pontos estruturais nativos dos arquivos RTL elaborados.</td>
</tr>
<tr>
<td><code>coverage_by_file.csv</code></td>
<td>Cobertura nativa por arquivo, excluindo bancada e biblioteca UVM.</td>
</tr>
<tr>
<td><code>rtl_lcov_summary.log</code></td>
<td>Conversão LCOV: 75/75 linhas físicas e 199/211 ramos.</td>
</tr>
<tr>
<td><code>functional_summary.log</code></td>
<td>Agregado funcional: 106/234 bins.</td>
</tr>
<tr>
<td><code>coverage_bins.log</code></td>
<td>Grupos, cruzamentos e bins não atingidos.</td>
</tr>
<tr>
<td><code>scoreboard_checks.log</code></td>
<td>Aprovação das oito verificações isoladas do scoreboard.</td>
</tr>
</tbody>
</table>

A execução usa `TEST=ALL`, `RANDOM_COUNT=1000`, `SEED=20261025`,
`OBS_CYCLES=64` e `EXPECTED_LATENCY=0`. O dump dessa campanha fica em
`waveform/CNN_top_UVM.fst`, na raiz do repositório, com profundidade 1 e os
92 elementos das IOs públicas. O binário FST não integra esta cópia de
registros textuais.

Para conferir a integridade dos arquivos de registro, execute nesta pasta:

```bash
sha256sum -c SHA256SUMS
```

Os critérios estão no [plano](../../req_verif_CNN_top.md); a análise está no
[relatório](../doc_verificacao_CNN_top.pdf). Os resultados dos testes dos
verificadores não substituem a avaliação das respostas do DUT.

</div>
