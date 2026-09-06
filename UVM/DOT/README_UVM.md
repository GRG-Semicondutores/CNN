# Bancada UVM do DotProduct

A referencia desta adaptacao e `testbenchs/DOT/testbench.sv`, acompanhada de
`testbenchs/DOT/README_VERIF_DOT.md`. A copia local do plano contem T00-T28.
A configuracao da regressao e DATA_WIDTH=8, N_INPUTS=32, ACC_WIDTH=21,
clock de 10 ns, seis ocupacoes de pipeline e distancia nominal de cinco
ciclos entre captura e saida. Os casos dirigidos e suas contagens foram
definidos para essa configuracao.

## Mapeamento da bancada funcional

| Responsabilidade original | Componente UVM |
| --- | --- |
| Clock, instancia do DUT e reset inicial T00 | `testbench.sv` / `dot_test` |
| T00-T28, seeds e ordem dos estimulos | `UVM_sequence.sv` |
| Estado aleatorio privado da sequence | `UVM_random.sv` |
| Vetores, IDs, rodada, seed, DATA/GAP/RESET/SKIP | `UVM_seq_item.sv` |
| `apply_transaction`, `apply_gap`, `pulse_reset` | `UVM_driver.sv` |
| Captura de entradas na borda e saidas apos NBA | `UVM_monitor.sv` |
| Referencia signed, fila temporal, assertions, cobertura e relatorio | `UVM_scoreboard.sv` |
| Conexoes sequencer-driver e monitor-scoreboard | `UVM_agent.sv`, `UVM_env.sv` |

O driver preserva a preparacao dos vetores antes do negedge de validacao,
retorna DATA em posedge+2 ns e GAP no proprio negedge. O monitor captura
entradas no posedge e observa as saidas 1 ns depois. Gaps dirigidos T22/T24
atualizam os vetores; a drenagem preserva os vetores anteriores. Reset limpa
a validade, sem zerar o datapath. O encerramento ocorre apos a drenagem,
sem acrescentar ciclos artificiais ao relatorio.

O scoreboard calcula o produto escalar a partir dos pinos observados, sem
receber resultados esperados do driver. Em cada ciclo previsto, dado e
validade sao verificados separadamente, inclusive se ambos estiverem errados
(requisito 15). T21 verifica a ordem independentemente do ciclo de chegada.
A comparacao de dados usa igualdade de quatro estados (`===`).

T23 exige que a primeira aparicao do dado e de valid_out seja a nominal.
T25 compara as duas medidas com T23, sem duplicar como falha de reset um
desalinhamento ja observado antes dele. A janela de medicao termina na troca
de teste; falta de dado, falta de valid ou ausencia do impulso sao falhas.
Nao se aceita uma caracterizacao ausente como resultado aprovado.

As contagens por teste, quatro rodadas/seeds de T02-T06, indexacao, cobertura,
assertions e fila drenada participam do resultado final. Os SKIPs sao
transmitidos pelo driver em uma mascara persistente e contados pelo monitor/
scoreboard, em vez de presumidos antes da execucao.

## Reprodutibilidade dos estimulos

`UVM_random.sv` preserva as chamadas `$urandom`/`$urandom_range` em simuladores
SystemVerilog de quatro estados. No Verilator, utiliza um `VlRNG` privado por
meio de `$c`, disponivel apenas no ramo `VERILATOR`. A expansao da seed e a
reducao dos ranges reproduzem o fluxo da bancada funcional no Verilator 5.050.
Isso evita a diferenca observada entre o RNG global sem processos UVM e o RNG
do processo UVM, alem de isolar o fluxo dos construtores de objetos.

Essa integracao depende da API do Verilator. A auditoria executa primeiro
`dot_random_checks.sv`, comparando o gerador privado com as chamadas originais
do simulador instalado. Ao trocar de versao do Verilator, execute a auditoria
antes de aceitar equivalencia de seeds/vetores. Nao ha dependencia C++ nos
outros simuladores.

## Execucao

Na raiz do repositorio:

```bash
./scripts/UVM/bash/DOT/uvm_dot.sh run
./scripts/UVM/bash/DOT/uvm_dot.sh coverage
./scripts/UVM/bash/DOT/uvm_dot.sh waves
```

`UVM_HOME=/caminho/uvm/src` e `JOBS=N` podem ser passados apos o alvo.
Sem alvo, executa `coverage`. Resultados ficam em `results_uvm/DOT`.
O resumo permanece visivel mesmo com `UVM_VERBOSITY=UVM_NONE`.

A politica do testbench original foi preservada: T07-T11 exigem quatro
estados. No Verilator, sao SKIP e a regressao termina INCOMPLETE com fatal;
nao recebe PASS. O alvo `coverage` gera LCOV/HTML mesmo com FAIL/INCOMPLETE
e devolve o status de erro somente depois de gravar os relatorios. Para validar
X/Z e obter aprovacao completa e necessario executar a bancada em um
simulador UVM de quatro estados. Isso nao suprime outras falhas do relatorio.

## Validacao da adaptacao

```bash
python3 scripts/UVM/validation/check_dot_equivalence.py
```

O script instrumenta copias das duas bancadas, compila com o mesmo Verilator
e compara cada ciclo: IDs, rodadas, seeds, reset, valid_in, todos os bits dos
vetores (inclusive nos gaps), valid_out e out. O testbench funcional e o RTL
nao sao modificados. Logs e traces ficam em `results_uvm/DOT/equivalence`.
A opcao `--compare-only` reutiliza os traces; `--uvm-home` seleciona a biblioteca.

O mesmo executavel de auditoria inclui testes isolados do scoreboard
(`dot_scoreboard_checks.svh`) com erros injetados: dado antecipado, medicao
ausente, erros simultaneos de dado/valid, atraso, duplicacao, ordem, reset,
SKIP persistente e regressao vazia. Esses testes nao integram a bancada de
producao. Um resultado de equivalencia aprovado significa que a adaptacao
reproduz a referencia; nao significa aprovacao do DUT nem validacao de X/Z
no Verilator.

### Resultado da auditoria com Verilator 5.050

- 282.958 ciclos identicos, incluindo os vetores dos ciclos invalidos.
- Resumos dos 29 testes, contagens funcionais/temporais e assertions identicos.
- 281.600 transacoes principais; 282.507 aplicadas no total, 282.503 checadas
  e quatro descartadas pelo reset de T01.
- 16 verificacoes isoladas do scoreboard aprovadas.
- 2.000 valores aleatorios conferidos (palavras e ranges 0..3/15/31/99).
- Lint de producao concluido, com avisos do Verilator/biblioteca UVM.

A referencia e a UVM registram T23 como FAIL: primeira aparicao do dado em
quatro ciclos e valid_out em cinco. A preparacao dos vetores antes do negedge
de validacao faz parte do estimulo original e foi preservada. T25 observa a
mesma caracteristica e passa. T07-T11 sao SKIP; o resultado final de ambas e
INCOMPLETE. Portanto, a equivalencia da adaptacao foi validada, mas nao se
atribui aprovacao completa ao DUT. Os casos X/Z nao foram executados em
simulador UVM de quatro estados nesta auditoria.

## Relatorios e cobertura

O resumo usa a mesma tabela e os mesmos rotulos do testbench funcional, sem
prefixos UVM por linha. `logs/report.log` contem esse resumo, incluindo
contagens, latencias, seeds, cobertura funcional e resultado final.
`logs/simulation.log` e `logs/simulation_coverage.log` mantem o log completo,
inclusive os diagnosticos da infraestrutura UVM.

Com `coverage` (tambem o alvo padrao do bash), sao gerados:

- `coverage/dot_uvm_coverage.dat`: dados brutos da execucao atual;
- `coverage/dot_uvm_coverage.info`: cobertura LCOV filtrada para o RTL;
- `coverage/coverage_summary.log`: resumo da cobertura de codigo;
- `coverage/html/index.html`: relatorio HTML;
- `logs/simulation_coverage.exitcode`: status da simulacao.

Uma regressao com FAIL/INCOMPLETE tambem gera esses artefatos, desde que o
simulador tenha produzido o arquivo de cobertura. O Makefile devolve erro
apos gerar o HTML, preservando a deteccao de falhas em automacoes. O alvo
`run_cov` isolado continua retornando erro imediatamente. Falhas de compilacao,
ausencia dos dados de cobertura ou erros nas ferramentas continuam impedindo
a geracao do relatorio. Cobertura de codigo nao representa aprovacao funcional.
