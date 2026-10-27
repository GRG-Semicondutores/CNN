# Simulação do topo CNN sem UVM

<div align="justify">

A bancada aplica os 22 cenários IMG-00 a IMG-21 à configuração reduzida da CNN
e compara `result_FC2` quando `valid_out4` está ativo. Os parâmetros, o modelo
matemático e os critérios estão no
[plano de verificação](../../UVM/CNN_top/req_verif_CNN_top.md).
Para o ambiente UVM, consulte o [guia UVM](../../UVM/CNN_top/README_UVM.md).

## Icarus Verilog

Requer `iverilog`, `vvp` e Make. Execute a partir da raiz do repositório:

```bash
# Campanha completa ou um cenário.
bash scripts/testbenchs/bash/CNN_top/cnn_top.sh
bash scripts/testbenchs/bash/CNN_top/cnn_top.sh run TEST=IMG-01

# Compilar sem executar.
bash scripts/testbenchs/bash/CNN_top/cnn_top.sh compile

# Gerar VCD opcional.
bash scripts/testbenchs/bash/CNN_top/cnn_top.sh wave TEST=IMG-01
```

Os resultados ficam em `results_tb/CNN_top/icarus/`: executável `cnn_top.vvp`,
logs de compilação e simulação, `cnn_verif_results.csv` e, quando solicitado,
`tb_cnn_top_images.vcd`. No Icarus, as verificações de protocolo são
procedurais; os covergroups não são suportados e aparecem como `N/A`.

## Verilator e cobertura

O fluxo foi validado com Verilator 5.052. Requer compilador C++, Make e Python 3;
os relatórios usam `verilator_coverage`, `lcov` e `genhtml`.

```bash
# Campanha completa com cobertura, ou execução de um cenário.
bash scripts/testbenchs/bash/CNN_top/cnn_top_verilator.sh coverage
bash scripts/testbenchs/bash/CNN_top/cnn_top_verilator.sh run TEST=IMG-01

# Amostra pseudoaleatória reproduzível.
bash scripts/testbenchs/bash/CNN_top/cnn_top_verilator.sh coverage TEST=IMG-14 RANDOM_COUNT=100 SEED=42

# Reprocessar a cobertura existente.
bash scripts/testbenchs/bash/CNN_top/cnn_top_verilator.sh report
```

Os resultados ficam em `results_tb/CNN_top/verilator/`. Os principais arquivos
são `logs/simulation_coverage.log`, `cnn_verif_results.csv`,
`coverage/coverage_summary.log`, `coverage/coverage_by_file.csv` e
`coverage/html/index.html`. Os bins da bancada ficam separados em
`coverage/functional_summary.log`, `coverage/coverage_bins.log` e
`coverage/functional_html/index.html`.

O resumo nativo mede pontos de linha, branch, expressão e toggle, além de
FSMs quando instrumentadas. O HTML LCOV apresenta linhas físicas e ramos;
os denominadores dessas representações são diferentes. A biblioteca de
verificação e o testbench não entram no denominador da cobertura RTL.
Somente os arquivos de `src` elaborados na hierarquia são medidos.

`coverage` executa uma nova campanha; `report` processa o banco já existente.
Os dados são gravados antes do encerramento FAIL e o relatório é gerado
mesmo quando há divergências. O Verilator não valida a propagação de X/Z em
quatro estados.

## Controles e interpretação

Os dois scripts aceitam `TEST`, `RANDOM_COUNT`, `SEED`, `OBS_CYCLES`,
`EXPECTED_LATENCY`, `TRACE_EXPECTED`, `PRINT_IMAGES`, `RESULTS_ROOT` e
`PLUSARGS`. Use `help` para consultar os alvos e controles de cada fluxo.
No Verilator sem UVM, `JOBS=2` é o padrão de compilação.

A latência é medida entre start e resposta válida. `EXPECTED_LATENCY=0`
caracteriza o valor observado; um número positivo ativa a comparação exata.
`OBS_CYCLES=64` é a janela de observação e o limite de espera por resposta.
`PLUSARGS=+NO_TIMING_CHECK` desativa a comparação de latência contratual,
mas mantém esse limite e marca a campanha como INCOMPLETE.

O CSV registra esperado, observado, ciclos, latência, status e quantidade de
erros. Os três cancelamentos intencionais do IMG-18 aparecem no log e no resumo,
sem linha CSV própria. O IMG-19 permanece exploratório, sem pontuação funcional,
até existir contrato para aceitação de imagens sobrepostas.

Confira sempre `[RESULT]` no log. Nesta bancada, FAIL retorna erro por
`$fatal`, enquanto INCOMPLETE encerra com `$finish` e pode retornar zero ao
shell. Na UVM, os dois estados retornam erro. Essa diferença de encerramento
não muda a classificação funcional das transações.

O VCD opcional pertence a estes fluxos sem UVM. O ambiente UVM gera o dump
nativo FST, com profundidade 1, em `waveform/CNN_top_UVM.fst`.

</div>
