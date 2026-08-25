# Plano de Verificação — DotProduct

## 1. Objetivo

Este plano de verificação tem como objetivo validar funcional e temporalmente o módulo **DotProduct**, responsável pelo cálculo do produto escalar entre um vetor de entrada `input_vec` e um vetor de pesos `weight`.

O módulo realiza multiplicações elemento a elemento e posteriormente reduz os produtos por meio de uma árvore de somadores pipelineada.

Na configuração padrão:

* `DATA_WIDTH = 8`;
* `N_INPUTS = 32`;
* cada elemento possui 8 bits;
* cada vetor possui 32 elementos;
* `input_vec` possui 256 bits;
* `weight` possui 256 bits;
* `ACC_WIDTH` é calculado internamente para acomodar o resultado acumulado.

Os testes deverão verificar:

* funcionamento do clock;
* comportamento do reset;
* funcionamento de `valid_in`;
* funcionamento de `valid_out`;
* multiplicação dos elementos;
* soma dos produtos;
* comportamento signed;
* funcionamento da árvore de redução;
* indexação dos 32 elementos;
* propagação das transações pelo pipeline;
* comportamento diante de `X`;
* comportamento diante de `Z`;
* operação contínua;
* gaps entre transações;
* valores extremos;
* cancelamentos;
* ordenação dos resultados;
* ausência de perda ou duplicação;
* **latência de cada transação processada**.

---

# 2. Interface considerada

| Sinal       | Direção | Função                                |
| ----------- | ------- | ------------------------------------- |
| `clk`       | Entrada | Clock utilizado pelo pipeline         |
| `rst`       | Entrada | Reset do pipeline de validade         |
| `input_vec` | Entrada | Vetor contendo os valores de entrada  |
| `weight`    | Entrada | Vetor contendo os pesos               |
| `valid_in`  | Entrada | Indica que a entrada atual é válida   |
| `valid_out` | Saída   | Indica que o resultado atual é válido |
| `out`       | Saída   | Resultado do produto escalar          |

As larguras e funções seguem a interface documentada para o módulo.

---

# 3. Modelo funcional de referência

O resultado esperado será calculado pelo testbench utilizando:

$$
expected=
\sum_{i=0}^{N\_INPUTS-1}
input\_vec[i]\times weight[i]
$$

conforme o comportamento funcional especificado para o DotProduct.

Para cada transação válida, o testbench deverá:

1. capturar `input_vec`;
2. capturar `weight`;
3. separar os elementos individuais;
4. interpretar cada elemento como signed;
5. realizar as multiplicações;
6. realizar a soma dos produtos;
7. armazenar o resultado esperado;
8. registrar o ciclo de entrada;
9. calcular o ciclo esperado de saída;
10. inserir a transação na estrutura de referência.

---

# 4. Requisito geral de latência

A verificação de latência será um **requisito obrigatório de todos os casos de teste**.

Não será suficiente que o DUT produza o valor matematicamente correto.

O valor deverá também aparecer no ciclo esperado.

Para cada transação serão registrados:

```text
transaction_id
test_id
round
seed
input_cycle
expected_cycle
expected_value
observed_cycle
valid_cycle
```

Considerando uma transação aplicada no ciclo:

$$
C_{IN}
$$

o ciclo esperado será:

$$
C_{EXPECTED}=C_{IN}+LATENCY
$$

A latência observada do caminho de dados será:

$$
L_{DATA}=C_{OUT}-C_{IN}
$$

e a latência observada de validade será:

$$
L_{VALID}=C_{VALID}-C_{IN}
$$

A condição desejada será:

$$
L_{DATA}=L_{VALID}=LATENCY
$$

Assim, um valor matematicamente correto que apareça no ciclo errado deverá ser considerado falha.

A implementação utiliza uma árvore cuja quantidade de estágios é determinada por:

$$
STAGES=\lceil\log_2(N\_INPUTS)\rceil
$$

e a documentação atual aponta também uma possível diferença de um ciclo entre o caminho dos dados e `valid_out`.
Portanto, a bancada deverá avaliar separadamente:

* latência do dado;
* latência de `valid_out`;
* alinhamento entre ambos.

---

# 5. Geração de clock

O testbench deverá gerar automaticamente um clock periódico durante toda a execução.

O período deverá permanecer constante durante todos os testes.

Os estímulos deverão ser aplicados de forma sincronizada ao clock.

A contagem de ciclos utilizada para análise de latência deverá utilizar o mesmo clock.

Exemplo conceitual:

```text
cycle = cycle + 1
```

a cada borda ativa.

---

# 6. Testes de reset

## T00 — Reset inicial

### Objetivo

Verificar a inicialização do DUT e do pipeline de validade.

### Procedimento

1. iniciar a simulação;
2. manter `rst` ativo;
3. manter `valid_in = 0`;
4. aplicar alguns ciclos de clock;
5. desativar `rst`;
6. iniciar a aplicação das transações.

### Verificações

* nenhuma transação deverá ser considerada válida durante o reset;
* `valid_out` não deverá indicar uma operação válida indevida;
* após a liberação do reset, a primeira operação deverá apresentar a latência nominal prevista.

### Verificação de latência

A primeira transação válida após o reset deverá obedecer:

$$
L_{PÓS-RESET}=LATENCY
$$

---

## T01 — Reset durante atividade

### Objetivo

Verificar o comportamento do DUT quando o reset ocorre com transações em processamento.

### Procedimento

Aplicar várias operações válidas consecutivas e posteriormente ativar `rst`.

Exemplo:

```text
clk       ↑ ↑ ↑ ↑ ↑ ↑ ↑ ↑
valid_in  1 1 1 1 1 1 1 1
rst       0 0 0 1 0 0 0 0
```

### Resultado esperado

As operações cuja validade tenha sido eliminada pelo reset não deverão posteriormente aparecer como resultados válidos.

Após o reset, novas operações deverão novamente apresentar a latência nominal.

O valor de `out` não deverá necessariamente ser utilizado para determinar se o reset funcionou, pois a implementação documentada aplica `rst` somente ao pipeline de validade.

### Verificação de latência

Será observado se:

* transações anteriores ao reset são invalidadas corretamente;
* transações posteriores ao reset mantêm a latência nominal;
* o reset não introduz deslocamento permanente no pipeline.

---

# 7. Testes de varredura

## T02 — Um elemento ativo de 8 bits

### Configuração

* elementos ativos: `1`;
* largura do elemento: `8 bits`;
* valores de entrada: `0` até `255`;
* demais elementos: `0`;
* pesos: aleatórios entre `0` e `31`;
* rodadas: `4`;
* casos por rodada: `256`.

### Total

$$
4\times256=1024
$$

transações.

### Verificação

Para cada um dos 1024 casos:

* calcular o resultado esperado;
* comparar com `out`;
* verificar `valid_out`;
* verificar ordem;
* verificar ciclo de saída;
* verificar latência.

Cada rodada deverá utilizar uma seed diferente.

---

## T03 — Quatro elementos restritos a 4 bits

### Configuração

* elementos ativos: `4`;
* elementos fisicamente mantidos com 8 bits;
* valores utilizados: `0` até `15`;
* quatro MSBs de cada elemento: `0`;
* demais elementos do vetor: `0`;
* pesos: aleatórios entre `0` e `15`;
* casos por rodada: `256`;
* rodadas: `4`.

Representação dos elementos:

```text
0000_0000
0000_0001
...
0000_1111
```

### Total

$$
4\times256=1024
$$

transações.

### Verificação

Cada transação será avaliada quanto a:

* resultado matemático;
* validade;
* ordem;
* latência.

---

## T04 — Oito elementos restritos a 1 bit

### Configuração

* elementos ativos: `8`;
* valores permitidos: `0` ou `1`;
* demais bits: `0`;
* demais elementos: `0`;
* pesos: aleatórios entre `0` e `3`;
* rodadas: `4`.

Os oito elementos produzem:

$$
2^8=256
$$

combinações por rodada.

### Total

$$
4\times256=1024
$$

transações.

### Verificação

Além do resultado, todas as 1024 transações deverão respeitar a latência esperada.

---

## T05 — Quatro elementos ativos de 8 bits

### Configuração

* elementos ativos: `4`;
* largura utilizada: `8 bits`;
* demais elementos: `0`;
* pesos: aleatórios entre `0` e `31`;
* casos por rodada: `4096`;
* rodadas: `4`.

### Total

$$
4\times4096=16384
$$

transações.

Os 4096 casos representam uma amostragem controlada do espaço de possíveis combinações dos quatro elementos.

### Verificação

Para cada transação:

```text
DATA_OK
LATENCY_OK
VALID_OK
ORDER_OK
```

deverão ser analisados.

---

## T06 — Doze elementos restritos a 4 bits

### Configuração

* elementos ativos: `12`;
* valores individuais: `0` até `15`;
* elementos restantes: `0`;
* pesos: aleatórios entre `0` e `31`;
* casos por rodada: `65536`;
* rodadas: `4`.

### Total

$$
4\times65536=262144
$$

transações.

O espaço completo dos 12 elementos seria:

$$
16^{12}=2^{48}
$$

Portanto, os 65.536 casos representam uma amostragem de:

$$
2^{16}
$$

combinações do espaço total.

### Verificação

Todas as 262.144 transações deverão ser avaliadas quanto a:

* correção matemática;
* validade;
* latência;
* ordem.

---

# 8. Testes com estados desconhecidos

Os casos contendo `X` e `Z` deverão utilizar regras específicas de comparação.

Nestes casos não será realizada apenas comparação aritmética convencional.

A verificação poderá utilizar:

```text
$isunknown(out)
```

quando apropriado.

Mesmo nesses casos, a latência continuará sendo verificada normalmente.

---

## T07 — Entrada fixada em X

### Configuração

```text
input = XXXXXXXX
```

com:

```text
weight = random(0..31)
```

e os demais elementos zerados.

### Resultado esperado

O resultado associado à operação deverá apresentar estado desconhecido.

### Latência

O estado desconhecido correspondente deverá atingir a saída no ciclo previsto para a transação.

---

## T08 — Entrada fixada em Z

### Configuração

```text
input = ZZZZZZZZ
```

Pesos:

```text
random(0..31)
```

### Resultado esperado

A participação de `Z` em operações aritméticas deverá provocar estado desconhecido no resultado.

### Latência

A ocorrência deverá ser verificada no ciclo correspondente à latência nominal.

---

## T09 — Entrada com Z alternado

Aplicar padrões como:

```text
0Z0Z0Z0Z
Z0Z0Z0Z0
1Z1Z1Z1Z
Z1Z1Z1Z1
```

Pesos:

```text
random(0..31)
```

### Verificação

* propagação de desconhecidos;
* `valid_out`;
* latência.

---

## T10 — Entrada Z e pesos alternando X/Z

Entrada:

```text
ZZZZZZZZ
```

Pesos:

```text
XZXZXZXZ
ZXZXZXZX
```

### Verificação

O resultado deverá apresentar estado desconhecido dentro da janela temporal prevista.

---

## T11 — Entrada alternada em Z e pesos alternados X/Z

Exemplos:

```text
input  = 0Z1Z0Z1Z
weight = XZXZXZXZ
```

e:

```text
input  = Z0Z1Z0Z1
weight = ZXZXZXZX
```

### Verificação

* propagação de estado desconhecido;
* ciclo correto de saída;
* ciclo correto de `valid_out`.

---

# 9. Testes dirigidos adicionais

## T12 — Todos os elementos iguais a zero

### Configuração

```text
input_vec = 0
weight    = random
```

### Resultado esperado

$$
out=0
$$

### Latência

O zero correspondente à transação deverá ser reconhecido como válido exatamente no ciclo esperado.

---

## T13 — Todos os pesos iguais a zero

### Configuração

```text
input_vec = random
weight    = 0
```

### Resultado esperado

$$
out=0
$$

### Latência

O resultado zero deverá obedecer à mesma latência dos demais casos.

---

## T14 — Elemento unitário

### Configuração

Um único elemento ativo:

```text
input[i]  = X
weight[i] = 1
```

Demais posições:

```text
0
```

### Resultado esperado

$$
out=X
$$

onde `X`, neste contexto, representa o valor numérico aplicado ao elemento e não estado desconhecido.

Serão utilizados valores positivos e negativos.

### Latência

Cada operação deverá atingir a saída no mesmo número de ciclos.

---

# 10. Verificação de indexação

## T15 — Walking element

### Objetivo

Verificar individualmente as 32 posições do vetor.

Um único elemento ficará ativo por transação:

```text
Teste 00 -> input[0]
Teste 01 -> input[1]
Teste 02 -> input[2]
...
Teste 31 -> input[31]
```

Exemplo:

```text
input[i]  = 37
weight[i] = 1
```

Demais posições:

```text
0
```

### Resultado esperado

$$
out=37
$$

para todas as posições.

### Verificação de latência

Além de todas as 32 posições apresentarem o mesmo resultado, todas deverão apresentar também a mesma latência.

Esse teste permite detectar possíveis diferenças temporais ou estruturais entre ramos da árvore.

---

# 11. Testes signed

Os elementos são tratados como valores signed.

Para elementos de 8 bits:

$$
-128\leq valor\leq127
$$

---

## T16 — Valores extremos signed

Testar:

```text
+127 × +127
+127 × -128
-128 × +127
-128 × -128
```

### Objetivos

Verificar:

* interpretação signed;
* extensão de sinal;
* multiplicação signed;
* soma signed;
* largura intermediária;
* largura do acumulador.

### Latência

Todos os quatro casos deverão apresentar a mesma latência nominal.

---

## T17 — Máximo positivo em todos os elementos

Configuração:

```text
input[i]  = +127
weight[i] = +127
```

para:

```text
i = 0..31
```

Resultado esperado:

$$
out=32\times127\times127
$$

### Verificação

* valor final;
* ausência de overflow indevido;
* latência.

---

## T18 — Mínimo negativo em todos os elementos

Configuração:

```text
input[i]  = -128
weight[i] = -128
```

para todos os elementos.

Resultado esperado:

$$
out=32\times(-128)\times(-128)
$$

### Verificação

* operação signed;
* largura do acumulador;
* valor final;
* latência.

---

# 12. Testes de cancelamento

## T19 — Sinais alternados

Primeiro padrão:

```text
input:
+127 -128 +127 -128 ...

weight:
1 1 1 1 ...
```

Segundo padrão:

```text
input:
+127 +127 +127 +127 ...

weight:
+1 -1 +1 -1 ...
```

### Objetivo

Exercitar simultaneamente diferentes ramos da árvore de soma e operações positivas e negativas.

### Latência

Os cancelamentos internos não deverão alterar o tempo de propagação da operação.

---

## T20 — Cancelamento perfeito

Exemplo:

```text
input:
10 10 10 10

weight:
1 -1 1 -1
```

restante zerado.

Resultado:

$$
10-10+10-10=0
$$

### Verificação

* resultado exatamente igual a zero;
* interpretação signed;
* latência nominal.

---

# 13. Testes de pipeline

## T21 — Operações back-to-back

### Objetivo

Verificar a capacidade de aceitar uma nova transação em cada ciclo.

Utilizar:

```text
valid_in = 1
```

continuamente.

Exemplo:

```text
Clock       1   2   3   4   5   6 ...
Entrada     A   B   C   D   E   F ...
```

Após o preenchimento do pipeline:

```text
Saída                   A   B   C   D ...
```

### Verificações

O teste deverá verificar:

* throughput;
* ordem;
* ausência de perda;
* ausência de duplicação;
* valor;
* `valid_out`;
* latência individual de cada transação.

Cada transação deverá possuir um ID.

Exemplo:

```text
Ciclo 100 -> TX000
Ciclo 101 -> TX001
Ciclo 102 -> TX002
Ciclo 103 -> TX003
```

Se a latência especificada for `L`:

```text
Ciclo 100+L -> TX000
Ciclo 101+L -> TX001
Ciclo 102+L -> TX002
Ciclo 103+L -> TX003
```

---

## T22 — Gaps aleatórios em valid_in

### Objetivo

Verificar o alinhamento entre dados e sinalização de validade.

Exemplo:

```text
valid_in:
1 1 0 1 0 0 1 1 1 0 1 ...
```

Somente os ciclos nos quais:

```text
valid_in == 1
```

deverão gerar transações no scoreboard.

### Verificações

O padrão observado em `valid_out` deverá corresponder ao padrão de `valid_in` deslocado pela latência esperada.

Também deverão ser avaliados:

* dados;
* ordem;
* perdas;
* duplicações;
* latência.

Este teste é especialmente importante em razão da possível diferença de um ciclo documentada entre o pipeline de validade e o caminho dos dados.

---

# 14. Teste dedicado de caracterização da latência

Além da avaliação de latência em todos os casos anteriores, deverá existir um teste dedicado para caracterizar diretamente o pipeline.

## T23 — Impulso único

### Configuração

Aplicar uma única transação válida:

```text
valid_in
____|‾|________________
```

Por exemplo:

```text
input[0]  = 7
weight[0] = 3
restante  = 0
```

Resultado esperado:

$$
out=21
$$

### Medições

Registrar:

```text
input_cycle
data_cycle
valid_cycle
```

Calcular:

$$
L_{DATA}=data\_cycle-input\_cycle
$$

$$
L_{VALID}=valid\_cycle-input\_cycle
$$

### Objetivo

Determinar experimentalmente:

* latência efetiva do datapath;
* latência efetiva de `valid_out`;
* alinhamento entre dado e validade.

---

## T24 — Padrão conhecido de valid_in

Aplicar:

```text
valid_in:
1 0 1 1 0 0 1 0 1
```

Esperar o mesmo padrão deslocado pela latência:

```text
valid_out:
        1 0 1 1 0 0 1 0 1
        <--- LATENCY --->
```

### Objetivo

Verificar isoladamente o pipeline de validade.

---

## T25 — Latência após reset

Após um reset, aplicar uma única transação reconhecível.

Verificar:

$$
L_{PÓS-RESET}=L_{NORMAL}
$$

O reset não deverá modificar permanentemente a latência do pipeline.

---

# 15. Scoreboard

O scoreboard deverá utilizar uma estrutura temporal, e não apenas uma fila de valores.

Cada transação deverá possuir pelo menos:

```text
transaction_id
test_id
round
seed
input_cycle
expected_cycle
expected_value
```

Opcionalmente:

```text
observed_cycle
valid_cycle
input_vec
weight
```

Exemplo:

```text
+------+-------------+----------------+----------+
| ID   | INPUT CYCLE | EXPECTED CYCLE | EXPECTED |
+------+-------------+----------------+----------+
| 0001 |     100     |      106       |    21    |
| 0002 |     101     |      107       |    52    |
| 0003 |     102     |      108       |   -13    |
+------+-------------+----------------+----------+
```

O scoreboard não deverá simplesmente esperar por `valid_out` para realizar a comparação.

No ciclo previsto deverá verificar independentemente:

```text
out
valid_out
```

Isso evita que um erro em que `out` e `valid_out` estejam ambos atrasados passe despercebido.

---

# 16. Classificação das falhas

As falhas deverão ser separadas em categorias.

## DATA_ERROR

O resultado apareceu no ciclo esperado, porém seu valor está incorreto.

## LATENCY_ERROR

O valor correspondente à transação apareceu fora do ciclo esperado.

## VALID_ERROR

`valid_out`:

* não apareceu;
* apareceu cedo;
* apareceu tarde;
* permaneceu ativo por duração incorreta.

## ORDER_ERROR

Uma transação posterior apareceu antes de uma transação anterior.

## UNKNOWN_ERROR

O comportamento esperado para `X` ou `Z` não ocorreu corretamente.

Uma única transação poderá apresentar mais de uma classificação de erro.

---

# 17. Critério de aprovação individual

Cada transação somente será considerada aprovada quando:

$$
PASS=
DATA\_OK
\land
LATENCY\_OK
\land
VALID\_OK
\land
ORDER\_OK
$$

Portanto:

```text
valor correto + ciclo correto       = PASS

valor errado + ciclo correto        = FAIL
valor correto + ciclo errado        = FAIL
valor correto + valid_out errado    = FAIL
valor correto + ordem errada        = FAIL
```

Nos casos de `X` e `Z`, `DATA_OK` será substituído pela verificação apropriada de estado desconhecido.

---

# 18. Assertions

As assertions deverão complementar o scoreboard.

Deverão existir verificações para:

```text
valid_in
   ↓
LATENCY
   ↓
valid_out
```

Também poderão ser verificadas condições como:

```text
input_vec == 0
→ resultado válido == 0
```

e:

```text
weight == 0
→ resultado válido == 0
```

As assertions de latência deverão verificar que uma transação válida produza sua indicação de saída exatamente após o número esperado de ciclos.

Caso construções SVA não sejam adequadamente suportadas pelo simulador utilizado, a mesma verificação deverá ser realizada por meio de:

* shift registers;
* contadores;
* filas;
* comparação explícita de ciclos.

As verificações envolvendo reset deverão considerar que o reset documentado atua somente sobre o pipeline de validade.

---

# 19. Seeds das rodadas aleatórias

Cada uma das quatro rodadas dos testes de varredura deverá possuir seed própria.

Exemplo:

```text
ROUND 0 -> SEED_0
ROUND 1 -> SEED_1
ROUND 2 -> SEED_2
ROUND 3 -> SEED_3
```

As seeds deverão ser registradas no relatório.

Em caso de falha deverão ser armazenados:

```text
Test ID
Transaction ID
Round
Seed
Input Cycle
Expected Cycle
Observed Cycle
Valid Cycle
input_vec
weight
expected
out
valid_in
valid_out
```

Isso permitirá reprodução determinística da falha.

---

# 20. Quantidade mínima de transações

| Teste               | Casos/rodada | Rodadas |       Total |
| ------------------- | -----------: | ------: | ----------: |
| T02 — 1 × 8 bits    |          256 |       4 |       1.024 |
| T03 — 4 × 4 bits    |          256 |       4 |       1.024 |
| T04 — 8 × 1 bit     |          256 |       4 |       1.024 |
| T05 — 4 × 8 bits    |        4.096 |       4 |      16.384 |
| T06 — 12 × 4 bits   |       65.536 |       4 |     262.144 |
| **Total principal** |              |         | **281.600** |

A esse número serão adicionados:

* testes de reset;
* testes de `X`;
* testes de `Z`;
* testes signed;
* walking element;
* testes de cancelamento;
* testes back-to-back;
* testes com gaps;
* testes específicos de caracterização da latência.

Além disso, **cada uma das 281.600 transações principais também será uma verificação de latência**.

---

# 21. Estratégia para redução do custo computacional

O espaço de possibilidades completo do circuito é inviável para uma simulação exaustiva.

Somente para `input_vec`, considerando 32 elementos de 8 bits:

$$
256^{32}=2^{256}
$$

combinações são possíveis.

Considerando simultaneamente `weight`, o espaço é ainda maior.

Assim, a estratégia adotada será baseada em:

* testes dirigidos;
* corner cases;
* valores extremos;
* comportamento signed;
* varreduras exaustivas de subespaços reduzidos;
* amostragem controlada de espaços maiores;
* randomização;
* seeds reproduzíveis;
* scoreboard;
* assertions;
* cobertura funcional;
* verificação temporal por transação.

---

# 22. Otimização da execução do pipeline

O DUT é pipelineado e, portanto, não será necessário aguardar a conclusão de uma operação antes de inserir a próxima.

Preferencialmente será utilizado:

```text
CLK       1   2   3   4   5   6   7 ...
INPUT     A   B   C   D   E   F   G ...
                  pipeline
OUTPUT                A   B   C   D ...
```

O scoreboard será responsável por associar cada entrada ao respectivo ciclo esperado de saída.

Essa estratégia permite que, após o preenchimento inicial do pipeline, aproximadamente um novo resultado seja verificado a cada ciclo.

---

# 23. Redução de logs

Para evitar impacto desnecessário no desempenho:

```text
PASS individual -> não imprimir
FAIL            -> imprimir
Resumo          -> imprimir
```

Um `FAIL` deverá apresentar informações suficientes para reprodução.

Exemplo:

```text
[FAIL][T06][TX 18442]

Seed           : 147
Input cycle    : 20291
Expected cycle : 20297
Observed cycle : 20298

Expected       : 315
Observed       : 315

ERROR          : LATENCY_ERROR
```

Assim é possível distinguir imediatamente um erro matemático de um erro temporal.

---

# 24. Waveform

A geração de waveform poderá ser desabilitada nas regressões completas para reduzir:

* tempo de simulação;
* consumo de memória;
* tamanho dos arquivos.

Durante depuração, a geração deverá ser habilitada para um teste ou seed específica.

---

# 25. Cobertura funcional

A cobertura deverá registrar pelo menos:

| Grupo             | Casos                           |
| ----------------- | ------------------------------- |
| Reset             | inicial / durante processamento |
| Validade          | 0 / 1                           |
| Pipeline          | isolado / back-to-back / gaps   |
| Elementos ativos  | 1 / 4 / 8 / 12 / 32             |
| Entrada           | zero / positiva / negativa      |
| Limites signed    | -128 / +127                     |
| Pesos             | zero / positivo / negativo      |
| Resultado         | negativo / zero / positivo      |
| Estados especiais | X / Z / X-Z                     |
| Indexação         | posições 0 até 31               |
| Cancelamento      | parcial / total                 |
| Latência          | correta / antecipada / atrasada |
| Ordem             | correta / incorreta             |

A cobertura funcional deverá permitir confirmar que os cenários definidos neste plano foram efetivamente exercitados.

---

# 26. Cobertura de latência

Além da cobertura funcional, deverão ser coletadas informações específicas da latência.

Para cada transação válida deverão ser obtidos:

```text
expected_latency
observed_data_latency
observed_valid_latency
```

Ao final da regressão deverão ser conhecidos:

* menor latência observada;
* maior latência observada;
* latência média;
* quantidade de operações com latência correta;
* quantidade de operações antecipadas;
* quantidade de operações atrasadas;
* quantidade de diferenças entre `out` e `valid_out`.

Em uma implementação de latência fixa espera-se:

```text
minimum_latency == expected_latency
maximum_latency == expected_latency
```

para todas as operações válidas.

---

# 27. Resumo dos casos

| ID  | Caso                    | Funcional | Latência |
| --- | ----------------------- | --------: | -------: |
| T00 | Reset inicial           |       Sim |      Sim |
| T01 | Reset durante atividade |       Sim |      Sim |
| T02 | 1 elemento × 8 bits     |       Sim |      Sim |
| T03 | 4 elementos × 4 bits    |       Sim |      Sim |
| T04 | 8 elementos × 1 bit     |       Sim |      Sim |
| T05 | 4 elementos × 8 bits    |       Sim |      Sim |
| T06 | 12 elementos × 4 bits   |       Sim |      Sim |
| T07 | Entrada X               |       Sim |      Sim |
| T08 | Entrada Z               |       Sim |      Sim |
| T09 | Z alternado             |       Sim |      Sim |
| T10 | Z × X/Z                 |       Sim |      Sim |
| T11 | Z alternado × X/Z       |       Sim |      Sim |
| T12 | Entradas zero           |       Sim |      Sim |
| T13 | Pesos zero              |       Sim |      Sim |
| T14 | Elemento unitário       |       Sim |      Sim |
| T15 | Walking element         |       Sim |      Sim |
| T16 | Extremos signed         |       Sim |      Sim |
| T17 | Máximo positivo         |       Sim |      Sim |
| T18 | Mínimo negativo         |       Sim |      Sim |
| T19 | Sinais alternados       |       Sim |      Sim |
| T20 | Cancelamento perfeito   |       Sim |      Sim |
| T21 | Back-to-back            |       Sim |      Sim |
| T22 | Gaps em `valid_in`      |       Sim |      Sim |
| T23 | Impulso único           |       Sim |      Sim |
| T24 | Padrão de validade      |       Sim |      Sim |
| T25 | Latência pós-reset      |       Sim |      Sim |

---

# 28. Critérios de aprovação da regressão

A regressão será considerada aprovada somente quando:

1. todos os testes dirigidos forem executados;
2. todas as quatro rodadas das varreduras forem concluídas;
3. os 281.600 casos principais forem processados;
4. não existirem divergências matemáticas não justificadas;
5. os 32 elementos forem exercitados individualmente;
6. os valores signed forem corretamente interpretados;
7. os casos extremos apresentarem resultados corretos;
8. os casos de cancelamento apresentarem resultados corretos;
9. os estados `X` e `Z` apresentarem o comportamento esperado;
10. não ocorrer perda de transações;
11. não ocorrer duplicação de transações;
12. não ocorrer reordenação;
13. `valid_out` estiver corretamente associado às respectivas operações;
14. cada transação apresentar a latência especificada;
15. a latência permanecer constante em operações back-to-back;
16. a presença de gaps não modificar a latência das transações válidas;
17. a primeira operação após reset apresentar a latência nominal;
18. o caminho dos dados e o caminho de validade estiverem temporalmente alinhados;
19. as assertions não apresentarem violações não justificadas;
20. qualquer falha puder ser reproduzida por ID, rodada e seed.

---

# 29. Relatório final

O relatório deverá separar os resultados funcionais dos temporais.

Exemplo:

```text
+------------------------------------------------------+
|              DOTPRODUCT TEST SUMMARY                 |
+------------------------------------------------------+
| Total Transactions    : XXXXX                        |
| Sweep Transactions    : 281600                       |
| Directed Transactions : XXXXX                        |
+------------------------------------------------------+
| Functional PASS       : XXXXX                        |
| Functional FAIL       : XXXXX                        |
| Latency PASS          : XXXXX                        |
| Latency FAIL          : XXXXX                        |
| Valid FAIL            : XXXXX                        |
| Order FAIL            : XXXXX                        |
| Unknown-state FAIL    : XXXXX                        |
+------------------------------------------------------+
| Expected Latency      : XX cycles                    |
| Minimum Latency       : XX cycles                    |
| Maximum Latency       : XX cycles                    |
| Data Latency          : XX cycles                    |
| Valid Latency         : XX cycles                    |
+------------------------------------------------------+
| Assertions PASS       : XXXXX                        |
| Assertions FAIL       : XXXXX                        |
+------------------------------------------------------+
| FINAL RESULT          : PASS / FAIL                  |
+------------------------------------------------------+
```

---

# 30. Estratégia geral de verificação

A estratégia de verificação do DotProduct será baseada na combinação de:

```text
Testes dirigidos
        +
Varreduras de subespaços
        +
Randomização controlada
        +
Corner cases
        +
Testes signed
        +
X/Z
        +
Scoreboard
        +
Assertions
        +
Cobertura funcional
        +
Verificação de pipeline
        +
Verificação de latência por transação
```

A latência não será tratada apenas como um teste isolado.

**Toda transação funcional válida será simultaneamente uma transação de verificação temporal.**

Dessa forma, uma operação somente será considerada correta se:

1. produzir o resultado matemático correto;
2. produzir esse resultado no ciclo correto;
3. apresentar `valid_out` no ciclo correto;
4. preservar a ordem da operação dentro do pipeline.

Essa abordagem permite verificar de maneira ampla o DotProduct sem exigir uma simulação exaustiva do espaço completo de estados, que é computacionalmente inviável.
