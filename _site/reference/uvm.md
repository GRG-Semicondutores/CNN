# Verificação UVM do topo CNN

<div align="justify">

A bancada verifica o módulo `CNN` com imagens sintéticas e um modelo
aritmético independente. A configuração executada usa imagem 4 × 4 × 1,
dados signed de 8 bits, dois filtros por camada convolucional e dois
neurônios por FC.

- [Plano de verificação](req_verif_CNN_top.md): parâmetros, modelo matemático, cenários e critérios.
- [Relatório em PDF](doc_verif/doc_verificacao_CNN_top.pdf): análise da campanha e da cobertura.
- [Evidências](doc_verif/evidencias/README.md): logs e CSV usados no relatório.

A observação funcional usa as portas públicas, incluindo `result_FC2` e
`valid_out4`. A cobertura do RTL é obtida pela instrumentação automática do
Verilator em `src`.

## Executar

O fluxo foi validado com Verilator 5.052 e UVM Accellera 2017-1.0. Requer
Verilator com suporte aos covergroups usados pela bancada, compilador C++,
Make e Python 3. Os relatórios de cobertura também usam `verilator_coverage`,
`lcov` e `genhtml`.

Execute os exemplos a partir da raiz do repositório:

```bash
# Instalar a biblioteca UVM da campanha.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh setup_uvm

# Conferir a elaboração e simular um cenário.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh lint
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh run TEST=IMG-01

# Executar todos os cenários e gerar cobertura do RTL e da bancada.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh coverage

# Selecionar uma amostra pseudoaleatória reproduzível.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh coverage TEST=IMG-14 RANDOM_COUNT=100 SEED=42

# Processar a cobertura já coletada, sem simular novamente.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh report

# Abrir o último FST, sem repetir a simulação.
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh gtk
```

Sem alvo explícito, o script executa `coverage`. O setup verifica o SHA-256 da
distribuição UVM e a instala em `.deps/1800.2-2017-1.0/`. Uma instalação
existente pode ser selecionada com `UVM_HOME=/caminho/uvm/src`.
`JOBS=1` é o padrão de compilação para limitar o consumo de memória.

<table align="center">
<thead>
<tr>
<th>Controle</th>
<th>Padrão</th>
<th>Uso</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>TEST</code></td>
<td><code>ALL</code></td>
<td>Todos os cenários ou um ID de <code>IMG-00</code> a <code>IMG-21</code>.</td>
</tr>
<tr>
<td><code>RANDOM_COUNT</code></td>
<td><code>1000</code></td>
<td>Quantidade de imagens do IMG-14.</td>
</tr>
<tr>
<td><code>SEED</code></td>
<td><code>20261025</code></td>
<td>Seed do xorshift32 dos estímulos.</td>
</tr>
<tr>
<td><code>OBS_CYCLES</code></td>
<td><code>64</code></td>
<td>Janela de observação e limite de espera por resposta.</td>
</tr>
<tr>
<td><code>EXPECTED_LATENCY</code></td>
<td><code>0</code></td>
<td>Zero caracteriza a latência; valor positivo ativa a comparação contratual.</td>
</tr>
<tr>
<td><code>TRACE_EXPECTED</code></td>
<td><code>0</code></td>
<td>Imprime o resultado do modelo para cada lançamento.</td>
</tr>
<tr>
<td><code>PRINT_IMAGES</code></td>
<td><code>0</code></td>
<td>Imprime a matriz de pixels aplicada.</td>
</tr>
<tr>
<td><code>ENABLE_WAVEFORM</code></td>
<td><code>1</code></td>
<td>Gera FST; use 0 para desativar.</td>
</tr>
<tr>
<td><code>UVM_VERBOSITY</code></td>
<td><code>UVM_LOW</code></td>
<td>Verbosidade UVM; os resumos continuam visíveis em <code>UVM_NONE</code>.</td>
</tr>
<tr>
<td><code>RESULTS_ROOT</code></td>
<td><code>results_uvm</code></td>
<td>Raiz dos logs, CSV e bancos de cobertura.</td>
</tr>
<tr>
<td><code>PLUSARGS</code></td>
<td>Vazio</td>
<td>Argumentos adicionais do simulador, como <code>+CSV_PATH=...</code>.</td>
</tr>
</tbody>
</table>

`run` executa sem instrumentação de cobertura; `run_cov` executa com coleta,
sem gerar o HTML. `coverage` coleta e gera os relatórios; `report` usa o banco
existente. Uma nova simulação substitui os arquivos de saída daquela execução.

## Organização do ambiente

<table align="center">
<thead>
<tr>
<th>Função</th>
<th>Arquivo</th>
</tr>
</thead>
<tbody>
<tr>
<td>Parâmetros e tipos</td>
<td><code>UVM_tb_params.svh</code></td>
</tr>
<tr>
<td>Configuração e argumentos</td>
<td><code>UVM_config.sv</code></td>
</tr>
<tr>
<td>Comandos e amostras dos pinos</td>
<td><code>UVM_seq_item.sv</code></td>
</tr>
<tr>
<td>Cenários IMG-00 a IMG-21</td>
<td><code>UVM_sequence.sv</code></td>
</tr>
<tr>
<td>Sequenciador e aplicação dos estímulos</td>
<td><code>UVM_sequencer.sv</code>, <code>UVM_driver.sv</code></td>
</tr>
<tr>
<td>Captura das entradas e respostas</td>
<td><code>UVM_monitor.sv</code></td>
</tr>
<tr>
<td>Modelo matemático</td>
<td><code>UVM_reference.sv</code></td>
</tr>
<tr>
<td>Comparações e verificações de protocolo</td>
<td><code>UVM_scoreboard.sv</code></td>
</tr>
<tr>
<td>Covergroups funcionais</td>
<td><code>UVM_coverage.sv</code></td>
</tr>
<tr>
<td>Conexões e controle da campanha</td>
<td><code>UVM_agent.sv</code>, <code>UVM_env.sv</code>, <code>UVM_test.sv</code></td>
</tr>
<tr>
<td>Interface, clock, DUT e espelhos das IOs</td>
<td><code>testbench.sv</code></td>
</tr>
</tbody>
</table>

O monitor publica as amostras no scoreboard e no subscriber de cobertura.
O scoreboard calcula a expectativa a partir das entradas capturadas; o driver
não fornece resultados esperados. A cobertura de quantização recebe eventos
do modelo matemático.

O driver prepara os dados antes do pulso de start. O monitor captura as
entradas no `posedge` e as saídas após `#1ps`, depois das atualizações NBA.
As verificações procedurais de protocolo usam também as amostras anteriores
a essas atualizações. A sequência pontuada mantém uma única transação em voo
e aguarda a janela configurada antes do próximo lançamento.

## Arquivos gerados

Os resultados da execução ficam em `results_uvm/CNN_top/`:

<table align="center">
<thead>
<tr>
<th>Caminho relativo</th>
<th>Conteúdo</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>logs/simulation.log</code></td>
<td>Execução do alvo <code>run</code>.</td>
</tr>
<tr>
<td><code>logs/simulation_coverage.log</code></td>
<td>Execução com coleta de cobertura.</td>
</tr>
<tr>
<td><code>logs/report.log</code></td>
<td>Resultado global e contagens por cenário.</td>
</tr>
<tr>
<td><code>cnn_verif_results.csv</code></td>
<td>Esperado, observado, ciclos, latência, status e erros por transação não abortada.</td>
</tr>
<tr>
<td><code>logs/coverage_exit_code.txt</code></td>
<td>Retorno original da simulação com cobertura.</td>
</tr>
<tr>
<td><code>coverage/coverage_summary.log</code></td>
<td>Contadores estruturais nativos do RTL.</td>
</tr>
<tr>
<td><code>coverage/coverage_by_file.csv</code></td>
<td>Cobertura nativa por arquivo de <code>src</code>.</td>
</tr>
<tr>
<td><code>coverage/html/index.html</code></td>
<td>Linhas físicas e ramos do RTL, em LCOV.</td>
</tr>
<tr>
<td><code>coverage/functional_summary.log</code></td>
<td>Total de bins funcionais atingidos.</td>
</tr>
<tr>
<td><code>coverage/coverage_bins.log</code></td>
<td>Detalhamento dos covergroups e cruzamentos.</td>
</tr>
<tr>
<td><code>coverage/functional_html/index.html</code></td>
<td>Visualização dos bins da bancada.</td>
</tr>
</tbody>
</table>

O FST fica em `waveform/CNN_top_UVM.fst`, na raiz do repositório, mesmo quando
`RESULTS_ROOT` é alterado. A compilação usa `--trace-fst --trace-depth 1` e a
bancada usa `$dumpvars(1,tb_cnn)`. Os 92 elementos públicos estão espelhados
nesse primeiro nível; os subgrupos dos arrays pertencem à representação FST.

## Interpretar o resultado

O resultado global segue `FAIL > INCOMPLETE > PASS`. FAIL e INCOMPLETE retornam
erro ao shell. Mesmo em uma campanha FAIL, a cobertura é gravada e seus
relatórios são gerados. A ausência de falhas de assertions indica zero
violações detectadas; o contador não informa quantas avaliações ocorreram.

A campanha de 25/10/2026 registrou 1.100 starts: 1.083 PASS, duas FAIL,
três canceladas intencionalmente por reset e 12 INCOMPLETE exploratórias.
As 1.085 respostas comparadas apresentaram latência de 37 ciclos. As falhas
foram IMG-00/W03 e IMG-16/`ConvBias2[0] = -45`; a análise está no relatório.

Os grupos de cobertura do modelo e os contadores do RTL têm objetivos
diferentes. O relatório separa os bancos, os denominadores e as lacunas.
Percentuais altos não substituem a comparação correta dos resultados.

## Validação dos verificadores e limites

Os oito testes isolados do scoreboard foram aprovados: resposta correta,
dado incorreto, timeout, resposta sem solicitação, sobreposição,
reset/recuperação, latência divergente e duplicação. O resultado registrado
está em [scoreboard_checks.log](doc_verif/evidencias/scoreboard_checks.log).

A aprovação desses testes demonstra o exercício dos mecanismos de detecção,
mas não aprova o DUT. A rotina de validação está em
[check_cnn_top_equivalence.py](../../scripts/UVM/validation/check_cnn_top_equivalence.py).

O Verilator usa dois estados; a campanha UVM não comprova comportamento X/Z.
A latência exata e a aceitação de starts sobrepostos ainda precisam de critérios
na especificação do projeto. As pendências e as regras aritméticas estão no
[plano de verificação](req_verif_CNN_top.md).

</div>
