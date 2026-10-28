# CNN: OpenROAD, SDF e UVM no xezim

Na raiz do repositorio:

```bash
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh run TEST=ALL
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh compile
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh audit
```

Sem argumentos, o script compila e simula `TEST=ALL RANDOM_COUNT=1000`:
1000 transacoes aleatorias mais 100 dirigidas, totalizando 1100. Para um
teste curto, use `run TEST=IMG-01` (tres transacoes). `compile` apenas compila
e elabora. O DUT e `synth_org/top/results/asap7/top/base/6_final.v`, com
`6_final.sdf` e os modelos ASAP7 RVT da instalacao ORFS. As variaveis e seus
caminhos podem ser consultados com o alvo `help`.

## Waveform com SDF

A geracao de FST esta habilitada por padrao (`ENABLE_WAVEFORM=1`). Cada nova
simulacao grava as IOs da interface `tb_cnn.cif` em
`waveform/CNN_top_UVM_SDF.fst`. Os atrasos SDF continuam ativos durante a
gravacao. A waveform RTL permanece em `waveform/CNN_top_UVM.fst`.

Para abrir o resultado ou desabilitar o dump em uma execucao:

```bash
gtkwave waveform/CNN_top_UVM_SDF.fst
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh run ENABLE_WAVEFORM=0
```

`WAVE=/caminho/arquivo.fst` permite escolher outro destino. O fluxo rejeita
o caminho da waveform RTL para evitar sua sobrescrita. O FST e mantido
tambem quando a campanha termina em FAIL, permitindo investigar os erros.
As copias com falhas injetadas do alvo `audit` executam sem gerar waveform.

## Code coverage no xezim

O alvo `run` habilita code coverage por padrao (`ENABLE_COVERAGE=1`), com
`--code-coverage=stmt,branch,toggle --code-coverage-scope tb_cnn.dut`.
O escopo inclui a netlist e suas celulas ASAP7, sem instrumentar a bancada
UVM. Essa medicao nao corresponde a cobertura do RTL original.

```bash
# Campanha completa com SDF, waveform e code coverage
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh coverage TEST=ALL RANDOM_COUNT=1000 SEED=20261025
# Regenerar apenas os relatorios do banco existente, sem simular
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh report
# Execucao sem instrumentacao de code coverage
bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh run ENABLE_COVERAGE=0
```

O xezim grava `results_uvm/CNN_top_sdf/xezim_cov.json`, com cobertura de
codigo e os covergroups funcionais. Como nao possui emissor HTML nativo,
`scripts/UVM/validation/report_xezim_coverage.py` converte esse banco em:

- `coverage/index.html`: resumo e tabela por modulo/modelo de celula;
- `coverage/summary.txt`: totais e resultado UVM registrado no log;
- `coverage/scopes.csv`: contagens por instancia;
- `coverage/design_units.csv`: contagens agrupadas por modulo/modelo;
- `coverage/uncovered.csv`: instrucoes, alternativas de decisao e direcoes
  de toggle nao exercitadas, com instancia e localizacao quando disponivel.

O HTML usa um painel responsivo com cartoes de metricas, resultado UVM,
contagens de transacoes, busca, filtros e ordenacao de modulos. O mesmo
layout e usado pelo fluxo UVM + RTL no xezim, com titulos e metodologia
especificos de cada representacao do DUT. O arquivo funciona localmente,
sem dependencias externas.

Para atualizar um HTML antigo para esse layout, basta executar
`bash scripts/UVM/bash/CNN_top/uvm_cnn_top_sdf.sh report`. O alvo seleciona
explicitamente a apresentacao **UVM + netlist + SDF** e reemite o HTML e
os CSVs a partir do banco existente, sem compilar ou simular novamente.
O destino continua sendo `results_uvm/CNN_top_sdf/coverage/index.html`.

Esses caminhos de `coverage/` sao relativos a `results_uvm/CNN_top_sdf/`.
O banco nativo conserva o detalhamento dos pontos e contadores. O relatorio
e gerado mesmo quando a bancada termina em FAIL, preservando o retorno de
erro; falha na coleta ou emissao tambem impede sucesso do script. Antes de
uma nova simulacao, o banco e os relatorios anteriores sao removidos para
nao confundir dados antigos com a nova execucao. Com `ENABLE_COVERAGE=0`,
nao e emitido um novo relatorio de code coverage.

`COVERAGE_KINDS=stmt,branch` permite selecionar metricas, e `COVERAGE_SCOPE`
permite escolher outro subescopo. Toggle conta separadamente as direcoes
0->1 e 1->0 de cada bit; total zero aparece como N/A. Os totais globais
contam pontos por instancia; a tabela por design unit une os hits de suas
instancias. Essa instrumentacao aumenta o tempo de simulacao. Nao ha
cobertura de condicoes, expressoes ou FSM no xezim instalado.

No teste curto IMG-01 com esta netlist e bibliotecas, o banco nativo
registrou `statement=0/0`, `branch=0/0` e toggle de 63.497/429.468 (14,79%).
Assim, instrucoes e decisoes aparecem como N/A, preservando os totais do
xezim; nao sao convertidas em 100%. Esses numeros pertencem somente as
tres transacoes do teste curto, nao a campanha completa de 1.100.

A campanha historica preservada no relatorio SDF foi executada sem code
coverage. E necessario executar novamente para obter essas metricas; os
percentuais dos covergroups daquela campanha nao sao code coverage.
O alvo `audit` continua focado nos pinos e nas falhas injetadas, sem code
coverage ou waveform.

Os ajustes de compatibilidade sao:

- `CNN_openroad_adapter.svh`: liga os arrays da interface aos vetores
  achatados da netlist. O primeiro elemento ocupa os bits mais significativos,
  conforme o frontend Yosys/slang. A instanciacao sintetizada nao recebe
  parametros. `CNN_TOP_GATE_LEVEL` seleciona essa ligacao no testbench.
- `cnn_if.monitor_sample_tick`: o atraso original de 1 ps e gerado na
  interface; o monitor da classe aguarda esse strobe. No xezim 0.11.3, o
  `#1ps` dentro da classe estava demorando 1 ns (5,000 -> 6,000 ns).
- `cnn_scoreboard.case_name`: constroi o zero inicial sem `%02d`, que essa
  versao formatava como espaco. Isso preserva a verificacao original de
  quantidade de transacoes para `TEST=IMG-01`.
- `prepare_cnn_sdf.py`: cria copias dos modelos e do SDF para os nomes de
  hierarquia usados pelo xezim. As linhas UDP `(bx)` sao expandidas em
  `(0x)` e `(1x)`, preservando a tabela logica. O SDF de entrada e os modelos
  originais nao sao alterados. As copias sao especificas para xezim 0.11.3.

O clock continua em 10 ns e a amostragem em 1 ps apos o posedge. As sequencias,
o driver, o modelo de referencia e os criterios de aprovacao permanecem os
da bancada. Nao sao desabilitados os atrasos ou as verificacoes temporais.

Os logs e o CSV ficam em `results_uvm/CNN_top_sdf/`. A auditoria cria copias
isoladas em `audit/`: um observador no modulo compara os pinos com o CSV UVM;
dois casos adicionais zeram resultados ou bloqueiam `valid_out4`. Ambos
devem reprovar todas as transacoes. O arquivo `audit/summary.json` registra
os resultados e os hashes das fontes. A auditoria retorna erro se os pinos
divergirem do scoreboard ou alguma falha injetada for aceita como sucesso.

Validacao local: `IMG-01` com tres transacoes PASS, latencia de 38 ciclos
com SDF (37 no RTL), seis transacoes com falhas injetadas corretamente
reprovadas e 214 ciclos conferidos por caso. Foram anotados 155094 sinais
com atrasos e 26816 verificacoes temporais.
