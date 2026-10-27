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
