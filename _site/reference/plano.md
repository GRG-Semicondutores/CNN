# Plano de verificação do topo CNN

<div align="justify">

**Projeto:** GRG-Semicondutores/CNN  
**DUT:** módulo `CNN`  
**Ambiente UVM:** `UVM/CNN_top/`, módulo de simulação `tb_cnn`  
**Versão do plano:** 1.2 — 25/10/2026  
**Configuração:** rede reduzida com imagem 4 × 4 × 1 e dados signed de 8 bits

Este plano define os estímulos, o modelo matemático e os critérios de
avaliação da campanha. O [guia UVM](README_UVM.md) contém os comandos de uso;
o [relatório em PDF](doc_verif/doc_verificacao_CNN_top.pdf) registra os
resultados da execução. As bancadas sem UVM usam os mesmos parâmetros e
critérios matemáticos, com as diferenças de ferramenta descritas no
[respectivo guia](../../testbenchs/CNN_top/README.md).

## 1. Objetivo e escopo

Verificar se as entradas públicas da CNN produzem os resultados finais
calculados por um modelo aritmético independente. A campanha também verifica
respostas válidas, pulsos de controle, cancelamento por reset e recuperação.

A avaliação é em caixa preta: os verificadores observam as entradas,
`result_FC2` e `valid_out4`. As matrizes intermediárias do modelo são cálculos
de referência, não observações de estágios internos do DUT. A cobertura de
código é obtida pela instrumentação automática do Verilator em `src`.

Os testes usam imagens e pesos sintéticos. Não avaliam acurácia de
classificação, treinamento, softmax ou frequência máxima de operação física.

### Base documental

- [Notas do bloco CNN](../../docs/CNN_block_notes.pdf): produtos internos e validade, pp. 1–2; canais e filtros, pp. 3–5; neurônios e FC, pp. 6–7; pooling, ReLU, quantização e flatten, pp. 8–11; interface do topo, p. 12.
- [IA353, tópico 9, parte 2](../../docs/topico9_P2_IA353_1s2026.pdf): correlação cruzada em CNNs, pp. 11–12; camadas densas e pooling.
- [A-408 — Arquiteturas de hardware para CNNs](../../docs/material_de_aula_cd_hbr_de_arquiteturas_para_redes_neurais.pdf): organização das camadas e cálculo de somas ponderadas com bias.
- [Guia das referências](../../docs/README.md): contexto dos materiais acadêmicos e distinção entre teoria, implementação e verificação.

As notas descrevem a função dos blocos. Para comparar valores bit a bit, este
plano também fixa convenções de indexação, arredondamento e saturação. A
confirmação dessas regras na especificação do projeto permanece necessária
para decidir se uma divergência exige mudança no DUT ou no modelo.

## 2. Configuração e interface

<table align="center">
<thead>
<tr>
<th>Parâmetro</th>
<th align="right">Valor</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>DATA_WIDTH</code></td>
<td align="right">8</td>
</tr>
<tr>
<td><code>IMG_SIZE_1</code></td>
<td align="right">4</td>
</tr>
<tr>
<td><code>KERNEL_SIZE</code></td>
<td align="right">3</td>
</tr>
<tr>
<td><code>N_CHANNELS</code></td>
<td align="right">1</td>
</tr>
<tr>
<td><code>N_FILTERS_LAYER_1</code>, <code>N_FILTERS_LAYER_2</code></td>
<td align="right">2, 2</td>
</tr>
<tr>
<td><code>PADDING_1</code>, <code>PADDING_2</code></td>
<td align="right">1, 1</td>
</tr>
<tr>
<td><code>N_NEURONS_1</code>, <code>N_NEURONS_2</code></td>
<td align="right">2, 2</td>
</tr>
<tr>
<td><code>SHIFT_1</code>, <code>SHIFT_2</code>, <code>SHIFT_3</code>, <code>SHIFT_4</code></td>
<td align="right">1, 1, 1, 1</td>
</tr>
<tr>
<td>Período do clock da bancada</td>
<td align="right">10 ns</td>
</tr>
</tbody>
</table>

<table align="center">
<thead>
<tr>
<th>Porta</th>
<th>Direção</th>
<th>Organização na configuração executada</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>clk</code>, <code>rst</code>, <code>start</code></td>
<td>Entrada</td>
<td>Clock; reset ativo alto; solicitação de processamento.</td>
</tr>
<tr>
<td><code>imagem</code></td>
<td>Entrada</td>
<td><code>[canal][pixel]</code>: 1 × 16 valores.</td>
</tr>
<tr>
<td><code>kernel1</code></td>
<td>Entrada</td>
<td><code>[filtro][canal][posição]</code>: 2 × 1 × 9 valores.</td>
</tr>
<tr>
<td><code>kernel2</code></td>
<td>Entrada</td>
<td><code>[filtro][canal][posição]</code>: 2 × 2 × 9 valores.</td>
</tr>
<tr>
<td><code>FCWeight1</code>, <code>FCWeight2</code></td>
<td>Entrada</td>
<td><code>[neurônio][entrada]</code>: 2 × 2 valores em cada matriz.</td>
</tr>
<tr>
<td><code>ConvBias1</code>, <code>ConvBias2</code>, <code>FCBias1</code>, <code>FCBias2</code></td>
<td>Entrada</td>
<td>Dois valores em cada grupo.</td>
</tr>
<tr>
<td><code>result_FC2</code></td>
<td>Saída</td>
<td>Dois valores signed de 8 bits.</td>
</tr>
<tr>
<td><code>valid_out4</code></td>
<td>Saída</td>
<td>Qualifica o vetor final.</td>
</tr>
</tbody>
</table>

Os operandos e as saídas têm representação em complemento de dois, no
intervalo de −128 a 127. A interface contém 86 operandos de 8 bits, duas
saídas de 8 bits e quatro sinais escalares, incluindo clock e controles:
92 elementos observáveis no dump.

**REQ-CFG-001:** instanciar o DUT com todos os parâmetros desta seção.  
**REQ-CFG-002:** registrar configuração, seed e controles usados na execução.

## 3. Modelo aritmético

O modelo recebe uma cópia das entradas observadas no lançamento e calcula
uma expectativa fixa para aquela transação. A resposta do DUT não participa
do cálculo esperado.

### 3.1 Indexação e convoluções

A imagem é organizada por linhas: `imagem[ch][4*r+c]` representa o pixel
`(r,c)` do canal `ch`. Os kernels usam `k = 3*kr+kc`. O modelo percorre as
janelas sem inverter o kernel, seguindo a convenção de correlação cruzada
usualmente denominada convolução em CNNs.

Para cada filtro, o acumulador recebe uma vez o bias e soma os produtos de
todos os canais e posições válidas da janela. Fora dos limites da imagem,
a contribuição é zero. Cada filtro produz um mapa distinto; os mapas não
são somados entre si.

### 3.2 Quantização, ativação e redução espacial

A quantização adotada é:

```text
rounded = (acc + 2^(SHIFT-1)) >>> SHIFT
Q(acc)  = limitar rounded ao intervalo [-128, 127]
```

O deslocamento é aritmético. Com os shifts iguais a 1, o arredondamento é ao
mais próximo, com empate para +∞. Por exemplo, `Q(-3) = -1`, `Q(-1) = 0` e
`Q(3) = 2`. A saturação ocorre depois do arredondamento.

Nas convoluções, a ordem é soma de produtos com bias → quantização → ReLU →
max pooling. A ReLU calcula `max(0, valor)`. O pooling seleciona o máximo de
cada região 2 × 2, sem sobreposição.

O flatten ordena primeiro por filtro e depois por posição espacial, por
linhas. Cada FC calcula `a_n = bias_n + Σ(x_i × peso_n,i)`, aplica ReLU ao
acumulador e quantiza o resultado. Os acumuladores do modelo usam `longint`
para evitar overflow matemático com as dimensões desta campanha; essa escolha
não descreve larguras internas do DUT.

<table align="center">
<thead>
<tr>
<th>Etapa do modelo</th>
<th>Forma lógica</th>
<th align="right">Elementos</th>
</tr>
</thead>
<tbody>
<tr>
<td>Entrada</td>
<td>4 × 4 × 1</td>
<td align="right">16</td>
</tr>
<tr>
<td>Convolução 1</td>
<td>4 × 4 × 2</td>
<td align="right">32</td>
</tr>
<tr>
<td>Pooling 1</td>
<td>2 × 2 × 2</td>
<td align="right">8</td>
</tr>
<tr>
<td>Convolução 2</td>
<td>2 × 2 × 2</td>
<td align="right">8</td>
</tr>
<tr>
<td>Pooling 2</td>
<td>1 × 1 × 2</td>
<td align="right">2</td>
</tr>
<tr>
<td>Flatten, FC1 e FC2</td>
<td>Vetor de 2 valores em cada etapa</td>
<td align="right">2</td>
</tr>
</tbody>
</table>

**REQ-GM-001:** calcular expectativas somente a partir das entradas.  
**REQ-GM-002:** manter a representação signed, o padding e a ordem de operações definidos acima.  
**REQ-GM-003:** manter a expectativa da transação estável até resposta, timeout ou reset.  
**REQ-GM-004:** confirmar as regras de ponto fixo com a especificação do projeto; exemplos genéricos das referências não substituem esse detalhamento.

## 4. Estímulos e conjuntos de pesos

<table align="center">
<thead>
<tr>
<th>Conjunto</th>
<th>Construção e finalidade</th>
</tr>
</thead>
<tbody>
<tr>
<td>W00</td>
<td>Pesos e biases zerados; verifica o caminho de resultado nulo.</td>
</tr>
<tr>
<td>W01</td>
<td>Elemento central unitário nos kernels; correspondência dos filtros na segunda convolução; matrizes diagonais com peso 2 nas FCs; biases zerados. Facilita cálculos analíticos.</td>
</tr>
<tr>
<td>W02</td>
<td>Kernels Sobel na primeira convolução e combinações dirigidas nas camadas seguintes; exercita orientação e posição espacial.</td>
</tr>
<tr>
<td>W03</td>
<td>Valores signed distribuídos a partir do padrão <code>[-128,127,-64,64,-3,3,-1,1]</code>, com offsets por filtro, canal e neurônio; inclui biases não nulos.</td>
</tr>
<tr>
<td>WSAT_POS / WSAT_NEG</td>
<td>Pesos e biases uniformes em 127 ou −128; exercitam candidatos à saturação.</td>
</tr>
</tbody>
</table>

A construção exata dos vetores é feita em
[UVM_sequence.sv](UVM_sequence.sv). No IMG-16, um bias de W01 é alterado para
+45 ou −45; o campo `weights` continua como W01, e a alteração é identificada
pelo nome do subcaso.

O IMG-14 usa xorshift32 com estado próprio e seed padrão 20261025. A seed e a
quantidade de imagens são registradas para permitir a reprodução dos vetores.

### Matriz de cenários

<table align="center">
<thead>
<tr>
<th>Caso</th>
<th>Estímulo</th>
<th align="right">Starts padrão</th>
<th>Verificação principal</th>
</tr>
</thead>
<tbody>
<tr>
<td>IMG-00</td>
<td>Imagem nula com W00, W01 e W03</td>
<td align="right">3</td>
<td>Resultado nulo e contribuição dos biases.</td>
</tr>
<tr>
<td>IMG-01</td>
<td>Constantes 1, 16 e 127, com W01</td>
<td align="right">3</td>
<td>Valores positivos e extremo superior.</td>
</tr>
<tr>
<td>IMG-02</td>
<td>Constantes −1, −16 e −128, com W03</td>
<td align="right">3</td>
<td>Valores negativos e extremo inferior.</td>
</tr>
<tr>
<td>IMG-03</td>
<td>Quatro impulsos internos positivos e um negativo</td>
<td align="right">5</td>
<td>Posições internas e polaridade.</td>
</tr>
<tr>
<td>IMG-04</td>
<td>Impulsos nos quatro cantos e um negativo</td>
<td align="right">5</td>
<td>Cantos e padding.</td>
</tr>
<tr>
<td>IMG-05</td>
<td>Impulsos nos oito pixels de borda sem cantos e um negativo</td>
<td align="right">9</td>
<td>Bordas; completa as 16 posições com IMG-03/04.</td>
</tr>
<tr>
<td>IMG-06</td>
<td>Gradiente horizontal</td>
<td align="right">1</td>
<td>Orientação horizontal.</td>
</tr>
<tr>
<td>IMG-07</td>
<td>Gradiente vertical</td>
<td align="right">1</td>
<td>Orientação vertical.</td>
</tr>
<tr>
<td>IMG-08</td>
<td>Xadrez de +32/−32</td>
<td align="right">1</td>
<td>Alternância espacial.</td>
</tr>
<tr>
<td>IMG-09</td>
<td>Faixas horizontais, duas polaridades</td>
<td align="right">2</td>
<td>Alternância por linhas.</td>
</tr>
<tr>
<td>IMG-10</td>
<td>Faixas verticais, duas polaridades</td>
<td align="right">2</td>
<td>Alternância por colunas.</td>
</tr>
<tr>
<td>IMG-11</td>
<td>Diagonal principal</td>
<td align="right">1</td>
<td>Distribuição espacial dirigida.</td>
</tr>
<tr>
<td>IMG-12</td>
<td>Diagonal secundária</td>
<td align="right">1</td>
<td>Orientação complementar.</td>
</tr>
<tr>
<td>IMG-13</td>
<td>Xadrez extremo, imagem 127 e imagem −128</td>
<td align="right">3</td>
<td>Limites signed.</td>
</tr>
<tr>
<td>IMG-14</td>
<td>Imagens pseudoaleatórias com W03</td>
<td align="right">1.000</td>
<td>Amostragem reproduzível do espaço de imagens.</td>
</tr>
<tr>
<td>IMG-15</td>
<td>Gradiente fixo com W01, W02 e W03</td>
<td align="right">3</td>
<td>Dependência dos pesos e biases.</td>
</tr>
<tr>
<td>IMG-16</td>
<td>Gradiente vertical e alteração isolada dos quatro grupos de bias</td>
<td align="right">8</td>
<td>Bias +45/−45 por camada.</td>
</tr>
<tr>
<td>IMG-17</td>
<td>Imagens A, B e C, sem sobreposição</td>
<td align="right">3</td>
<td>Associação entre estímulo e resposta.</td>
</tr>
<tr>
<td>IMG-18</td>
<td>Reset em três offsets e três imagens de recuperação</td>
<td align="right">6</td>
<td>Três cancelamentos esperados e recuperação.</td>
</tr>
<tr>
<td>IMG-19</td>
<td>Três starts para cada intervalo de 2, 3, 4 e 8 clocks</td>
<td align="right">12</td>
<td>Caracterização exploratória de sobreposição.</td>
</tr>
<tr>
<td>IMG-20</td>
<td>Gradiente-base e 16 variantes com um pixel incrementado</td>
<td align="right">17</td>
<td>Perturbação de cada posição.</td>
</tr>
<tr>
<td>IMG-21</td>
<td>Pesos/bias extremos e entradas de −3 a 3</td>
<td align="right">11</td>
<td>Saturação e arredondamento.</td>
</tr>
</tbody>
</table>

Com `TEST=ALL` e `RANDOM_COUNT=1000`, a sequência inicia 1.100 transações.
Nessa seleção, o total esperado é `100 + RANDOM_COUNT`.

## 5. Protocolo, temporização e reset

O reset inicial permanece ativo por quatro ciclos. A sequence começa após
mais duas bordas de descida. Os dados são preparados antes da ativação de
`start`, que fica alto entre duas bordas de descida consecutivas. O monitor
captura as entradas na borda de subida e observa a resposta 1 ps depois,
após as atualizações NBA.

Uma transação pontuada mantém as entradas estáveis durante a janela de
observação. O sequenciamento aguarda um intervalo fixo, controlado por
`OBS_CYCLES`; não usa `valid_out4` para decidir quando lançar a próxima imagem.
O scoreboard rastreia uma única pendência.

A latência é a diferença entre o ciclo de lançamento e o ciclo da resposta
válida. `EXPECTED_LATENCY=0` caracteriza o tempo observado. Um valor positivo
ativa a comparação com uma exigência temporal fornecida pela especificação.
`OBS_CYCLES=64` limita a espera por uma resposta. `+NO_TIMING_CHECK` desativa a
comparação de latência contratual e marca a campanha como INCOMPLETE; o limite
de espera por resposta continua ativo.

No IMG-18, reset cancela a pendência. Cada rodada inicia uma imagem de
recuperação, cujo resultado deve ser comparado normalmente. Os offsets 1, 4
e 8 são parâmetros do teste e não identificam estágios internos.

No IMG-19, os dados podem mudar com uma operação ainda em andamento. Todos
os seus starts são exploratórios: a interface não possui ready/busy nem um
contrato de aceitação de sobreposição. O cenário não estabelece throughput
mínimo ou máximo.

**REQ-IF-001:** comparar o vetor final somente quando `valid_out4` estiver ativo.  
**REQ-IF-002:** preparar dados e amostrar respostas em fases de clock definidas.  
**REQ-TIME-001:** detectar ausência de resposta na janela configurada.  
**REQ-TIME-002:** comparar latência exata somente quando houver um valor contratual positivo.  
**REQ-RST-001:** cancelar pendências em reset e verificar as respostas de recuperação.  
**REQ-SEQ-001:** pontuar imagens isoladas; classificar a sobreposição sem contrato como exploratória.

## 6. Verificadores e classificação

O scoreboard compara cada uma das duas saídas com o modelo e detecta resposta
inesperada, novo start com pendência, timeout e erro nas contagens de estímulos.
Na UVM, as verificações de protocolo são procedurais: pulso de start de um
ciclo, validade após reset, pulso de saída de um ciclo e ausência de X/Z em
resposta válida, respeitando a limitação de dois estados do Verilator.

<table align="center">
<thead>
<tr>
<th>Registro</th>
<th>Significado</th>
</tr>
</thead>
<tbody>
<tr>
<td>PASS</td>
<td>Transação pontuada sem erro de dados ou controle detectado.</td>
</tr>
<tr>
<td>FAIL</td>
<td>Divergência em um dos critérios executáveis da bancada.</td>
</tr>
<tr>
<td>ABORT</td>
<td>Pendência cancelada intencionalmente por reset. Não é uma comparação aprovada ou reprovada.</td>
</tr>
<tr>
<td>INCOMPLETE</td>
<td>Transação exploratória ou campanha sem condições para aprovação, como diagnóstico com comparação temporal desativada.</td>
</tr>
</tbody>
</table>

No resultado global, `FAIL` tem precedência sobre `INCOMPLETE`, que tem
precedência sobre `PASS`. A UVM retorna erro ao shell para FAIL e INCOMPLETE.
A bancada sem UVM registra INCOMPLETE no log, mas encerra esse estado com
`$finish`; por isso o código de saída isolado não representa aprovação.

**REQ-SB-001:** registrar cenário, subcaso, índice, esperado, observado e ciclo nas divergências.  
**REQ-SB-002:** reconciliar starts com PASS, FAIL, abortos e incompletos.  
**REQ-RESULT-001:** manter os estados distintos no resumo; abortos esperados e casos exploratórios não devem ser apresentados como PASS.  
**REQ-XZ-001:** não declarar validação de X/Z com base em uma simulação de dois estados.

## 7. Cobertura

### 7.1 Funcional

<table align="center">
<thead>
<tr>
<th>Grupo</th>
<th>O que amostra</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>cg_scenario</code></td>
<td>IDs de teste, rótulos de pesos e cruzamento entre eles.</td>
</tr>
<tr>
<td><code>cg_pixel</code></td>
<td>−128, negativos, zero, positivos e 127.</td>
</tr>
<tr>
<td><code>cg_spatial</code></td>
<td>Linha e coluna dos impulsos únicos em IMG-03/04/05.</td>
</tr>
<tr>
<td><code>cg_bias</code></td>
<td>Bias negativo, zero e positivo.</td>
</tr>
<tr>
<td><code>cg_quant</code></td>
<td>Estágio e classe de saturação calculados pelo modelo.</td>
</tr>
</tbody>
</table>

A cobertura de quantização descreve a referência matemática. Os dois bins de
saturação negativa nas FCs não são atingíveis com ReLU antes da quantização.
O cruzamento cenário × pesos inclui combinações não previstas pela sequência
e um rótulo `modified` não usado. Esses pontos precisam de revisão de
alcançabilidade; os percentuais registrados não foram recalculados para
excluí-los.

### 7.2 Estrutural

O fluxo Verilator instrumenta os arquivos de `src` elaborados no topo. O
relatório estrutural exclui a biblioteca UVM, a bancada e seus covergroups.
O resumo nativo apresenta pontos de linha, branch, expressão, toggle e FSM
quando disponíveis. O HTML LCOV apresenta linhas físicas e ramos; seus
contadores têm denominadores diferentes dos pontos nativos.

**REQ-COV-001:** apresentar cobertura funcional e estrutural separadamente.  
**REQ-COV-002:** manter os contadores de cobertura mesmo em uma execução FAIL.  
**REQ-COV-003:** justificar bins ausentes ou inalcançáveis sem tratá-los como exercitados.  
**REQ-COV-004:** avaliar a cobertura junto dos resultados funcionais; atividade de código não implica correção do DUT.

## 8. Execução e registros

O [guia UVM](README_UVM.md) é a referência de comandos. A campanha completa é:

```bash
bash scripts/UVM/bash/CNN_top/uvm_cnn_top.sh coverage \
  TEST=ALL RANDOM_COUNT=1000 SEED=20261025
```

Os logs, o CSV e os relatórios de cobertura ficam em `results_uvm/CNN_top/`.
O dump nativo é `waveform/CNN_top_UVM.fst`, com profundidade 1 e somente as IOs
públicas espelhadas em `tb_cnn`. A contagem dos elementos de arrays não aumenta
a profundidade de hierarquia de módulos.

O CSV tem o cabeçalho:

```csv
tx_id,test_id,subcase,weights,start_cycle,end_cycle,latency_cycles,expected0,expected1,observed0,observed1,status,errors
```

Transações concluídas ou exploratórias geram linhas CSV. Os abortos constam
no log e no resumo, sem linha própria. Assim, a campanha padrão tem 1.097
linhas CSV e três registros de aborto.

**REQ-REP-001:** guardar logs, CSV, versão do simulador, parâmetros e seed.  
**REQ-REP-002:** manter as evidências usadas pelo relatório junto ao documento.  
**REQ-REP-003:** registrar, em uma próxima revisão do fluxo, a revisão exata dos fontes executados e dos parâmetros de construção, para completar a rastreabilidade da campanha.

## 9. Aprovação e pendências

A configuração só pode ser aprovada quando os casos pontuados coincidirem
com o modelo, as contagens estiverem reconciliadas e as verificações de
controle não acusarem erro. As regras matemáticas precisam corresponder à
especificação do projeto. Uma aprovação que inclua latência contratual,
sobreposição ou X/Z depende também dos respectivos critérios e execuções.

<table align="center">
<thead>
<tr>
<th>Item</th>
<th>Situação em 25/10/2026</th>
</tr>
</thead>
<tbody>
<tr>
<td>Execução dos 22 cenários</td>
<td>Concluída no Verilator 5.052, com UVM 2017-1.0.</td>
</tr>
<tr>
<td>Resultado funcional</td>
<td>FAIL: IMG-00/W03 e IMG-16/<code>ConvBias2[0] = -45</code>.</td>
</tr>
<tr>
<td>Reset em voo e recuperação</td>
<td>Três cancelamentos esperados e três recuperações PASS.</td>
</tr>
<tr>
<td>Latência observada</td>
<td>37 ciclos nas 1.085 respostas comparadas; exigência contratual ainda a definir.</td>
</tr>
<tr>
<td>Sobreposição</td>
<td>12 INCOMPLETE do IMG-19; falta contrato de aceitação.</td>
</tr>
<tr>
<td>Quantização e indexação</td>
<td>Regras do modelo definidas; confirmação na especificação ainda necessária.</td>
</tr>
<tr>
<td>Metas de cobertura</td>
<td>Revisar bins inalcançáveis, cruzamentos não planejados e lacunas estruturais.</td>
</tr>
<tr>
<td>X/Z</td>
<td>Verificação em quatro estados não concluída para a campanha UVM.</td>
</tr>
<tr>
<td>Identificação dos fontes</td>
<td>Incluir a revisão e o estado dos arquivos executados no registro automatizado.</td>
</tr>
</tbody>
</table>

O [relatório](doc_verif/doc_verificacao_CNN_top.pdf) apresenta as contagens,
os cálculos dos casos de falha e a cobertura. O plano define critérios e
pendências; ele não substitui as evidências de execução.

## 10. Rastreabilidade

<table align="center">
<thead>
<tr>
<th>Requisitos</th>
<th>Implementação / evidência</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>REQ-CFG-*</code></td>
<td>Parâmetros em <code>UVM_tb_params.svh</code> e instanciação em <code>testbench.sv</code>.</td>
</tr>
<tr>
<td><code>REQ-GM-*</code></td>
<td><code>UVM_reference.sv</code>; cálculos analíticos documentados no relatório.</td>
</tr>
<tr>
<td><code>REQ-IF-*</code>, <code>REQ-TIME-*</code></td>
<td><code>UVM_driver.sv</code>, <code>UVM_monitor.sv</code> e <code>UVM_scoreboard.sv</code>.</td>
</tr>
<tr>
<td><code>REQ-RST-*</code>, <code>REQ-SEQ-*</code></td>
<td>IMG-17/18/19 em <code>UVM_sequence.sv</code>; registros de recuperação e cancelamento.</td>
</tr>
<tr>
<td><code>REQ-SB-*</code>, <code>REQ-RESULT-*</code>, <code>REQ-XZ-*</code></td>
<td>Scoreboard, resumo final e logs; limitações do simulador identificadas.</td>
</tr>
<tr>
<td><code>REQ-COV-*</code></td>
<td><code>UVM_coverage.sv</code>, scripts de cobertura e relatórios separados.</td>
</tr>
<tr>
<td><code>REQ-REP-*</code></td>
<td>Logs, CSV e cópia de evidências; revisão exata dos fontes permanece pendente.</td>
</tr>
</tbody>
</table>

A versão 1.2 reúne os critérios vigentes e a situação dos requisitos para
a configuração documentada.

</div>
