# Plano de Testes — DotProduct

## 1. Objetivo

Este plano de testes tem como objetivo verificar funcionalmente o módulo **DotProduct**, responsável pelo cálculo do produto escalar entre um vetor de entrada `input_vec` e um vetor de pesos `weight`.

O módulo realiza multiplicações elemento a elemento e reduz os produtos por meio de uma árvore de somadores pipelineada.

Na configuração padrão do projeto:

- `DATA_WIDTH = 8`: cada elemento possui 8 bits;
- `N_INPUTS = 32`: cada vetor possui 32 elementos;
- `ACC_WIDTH`: largura do acumulador calculada internamente.

Portanto, `input_vec` e `weight` possuem, por padrão:

\[
32 \times 8 = 256\ bits
\]

Os testes devem verificar:

- funcionamento do clock;
- comportamento do reset;
- funcionamento de `valid_in` e `valid_out`;
- multiplicação dos elementos;
- soma dos produtos;
- comportamento signed;
- funcionamento da árvore de redução;
- indexação dos 32 elementos;
- propagação correta das transações pelo pipeline;
- comportamento diante de `X` e `Z`;
- operação contínua com transações consecutivas;
- funcionamento com elementos não utilizados zerados;
- valores extremos e situações de cancelamento.

---

# 2. Interface considerada

| Sinal | Direção | Função |
|---|---|---|
| `clk` | Entrada | Clock do pipeline |
| `rst` | Entrada | Reset do pipeline de validade |
| `input_vec` | Entrada | Vetor contendo os elementos de entrada |
| `weight` | Entrada | Vetor contendo os pesos |
| `valid_in` | Entrada | Indica entrada válida |
| `valid_out` | Saída | Indica resultado válido |
| `out` | Saída | Resultado do produto escalar |

As larguras e funções desses sinais seguem a interface definida para o DotProduct.

---

# 3. Modelo de referência

O resultado esperado será calculado pelo testbench utilizando:

\[
expected =
\sum_{i=0}^{N\_INPUTS-1}
input\_vec[i]\times weight[i]
\]

equivalente à relação funcional definida para o módulo.

Para cada transação válida, o testbench deverá calcular o resultado esperado no momento da aplicação dos estímulos e armazená-lo em uma estrutura de referência.

Quando `valid_out` indicar que o resultado correspondente chegou à saída, o **scoreboard** realizará a comparação:

```text
out DUT × resultado esperado
```

Cada transação deverá resultar em:

```text
PASS
```

ou:

```text
FAIL
```

Os resultados individuais aprovados não precisam ser impressos continuamente no terminal, evitando impacto desnecessário no desempenho da simulação.

---

# 4. Geração de clock

O testbench deverá gerar automaticamente um clock periódico durante toda a simulação.

O período deverá permanecer constante para todos os testes.

A aplicação dos estímulos deverá ocorrer de forma sincronizada com o clock, respeitando o comportamento sequencial e pipelineado do circuito.

---

# 5. Testes de reset

## T00 — Reset inicial

### Objetivo

Verificar o comportamento do DUT durante a inicialização.

### Procedimento

1. Iniciar a simulação com `rst` ativo.
2. Manter `valid_in = 0`.
3. Aplicar alguns ciclos de clock.
4. Desativar `rst`.
5. Iniciar a aplicação de transações válidas.

### Resultado esperado

Nenhum resultado deverá ser considerado válido durante o reset.

---

## T01 — Reset durante atividade

### Objetivo

Verificar o comportamento do reset quando já existirem operações percorrendo o pipeline.

### Procedimento

Aplicar uma sequência de operações válidas:

```text
valid_in = 1 1 1 1 1 ...
```

e, durante o processamento, ativar `rst`.

Exemplo:

```text
clk       ↑ ↑ ↑ ↑ ↑ ↑ ↑ ↑
valid_in  1 1 1 1 1 1 1 1
rst       0 0 0 1 0 0 0 0
```

### Resultado esperado

As operações cuja validade for eliminada pelo reset não deverão gerar uma indicação válida em `valid_out`.

O valor presente em `out` não deverá ser utilizado como critério de reset.

Na implementação documentada, `rst` atua somente sobre o pipeline de validade e não reinicializa os registradores das multiplicações ou da árvore de soma.

---

# 6. Testes de varredura

## T02 — Um elemento ativo de 8 bits

### Configuração

- elementos ativos: `1`;
- largura física do elemento: `8 bits`;
- valores testados: `0` até `255`;
- elementos restantes: `0`;
- pesos: aleatórios entre `0` e `31`;
- número de rodadas: `4`;
- casos por rodada: `256`.

### Execução

```text
Rodada 1 → 256 casos
Rodada 2 → 256 casos
Rodada 3 → 256 casos
Rodada 4 → 256 casos
```

Total:

\[
4\times256=1024
\]

transações.

Cada rodada utilizará uma seed diferente e reproduzível para geração dos pesos.

---

## T03 — Quatro elementos restritos a 4 bits

### Configuração

- elementos ativos: `4`;
- cada elemento continua fisicamente possuindo `8 bits`;
- somente os quatro bits menos significativos serão utilizados;
- valores entre `0` e `15`;
- demais elementos do vetor: `0`;
- pesos entre `0` e `15`;
- número de rodadas: `4`;
- casos por rodada: `256`.

Representação:

```text
0000_0000
0000_0001
...
0000_1111
```

Total:

\[
4\times256=1024
\]

transações.

---

## T04 — Oito elementos restritos a 1 bit

### Configuração

- elementos ativos: `8`;
- valores possíveis por elemento: `0` ou `1`;
- demais bits e elementos: `0`;
- pesos aleatórios entre `0` e `3`;
- número de rodadas: `4`.

Os oito elementos binários produzem:

\[
2^8=256
\]

combinações por rodada.

Total:

\[
4\times256=1024
\]

transações.

---

## T05 — Quatro elementos ativos de 8 bits

### Configuração

- elementos ativos: `4`;
- valores de 8 bits;
- demais elementos: `0`;
- pesos aleatórios entre `0` e `31`;
- casos executados por rodada: `4096`;
- rodadas: `4`.

Total:

\[
4\times4096=16384
\]

transações.

Os 4096 casos representam uma amostragem controlada do espaço de combinações dos quatro elementos.

---

## T06 — Doze elementos restritos a 4 bits

### Configuração

- elementos ativos: `12`;
- valores entre `0` e `15`;
- demais elementos: `0`;
- pesos aleatórios entre `0` e `31`;
- casos por rodada: `65536`;
- rodadas: `4`.

Total:

\[
4\times65536=262144
\]

transações.

O espaço completo para 12 elementos independentes de 4 bits seria:

\[
16^{12}=2^{48}
\]

Portanto, os 65.536 casos utilizados em cada rodada representam uma **amostragem controlada de \(2^{16}\) combinações**, e não uma varredura exaustiva do espaço de \(2^{48}\) combinações.

---

# 7. Testes com estados desconhecidos

Esses testes serão analisados separadamente das comparações numéricas normais.

O objetivo será verificar a propagação de estados desconhecidos pelas operações aritméticas.

---

## T07 — Entrada fixada em X

### Configuração

Um elemento:

```text
input = XXXXXXXX
```

Peso:

```text
random(0..31)
```

Restante do vetor:

```text
0
```

### Resultado esperado

O resultado associado à operação deverá apresentar estado desconhecido.

O testbench poderá utilizar:

```text
$isunknown(out)
```

para realizar a verificação.

---

## T08 — Entrada fixada em Z

### Configuração

```text
input = ZZZZZZZZ
```

Peso aleatório:

```text
0..31
```

### Resultado esperado

A utilização de `Z` em uma operação aritmética deverá provocar resultado desconhecido.

---

## T09 — Entrada com Z alternado

Aplicar padrões como:

```text
0Z0Z0Z0Z
Z0Z0Z0Z0
1Z1Z1Z1Z
Z1Z1Z1Z1
```

com pesos aleatórios entre:

```text
0..31
```

### Resultado esperado

O resultado deverá apresentar estado desconhecido.

---

## T10 — Entrada em Z e peso alternando X/Z

Entrada:

```text
ZZZZZZZZ
```

Peso:

```text
XZXZXZXZ
ZXZXZXZX
```

### Resultado esperado

O resultado deverá ser classificado como desconhecido.

---

## T11 — Entrada alternando Z e peso alternando X/Z

Exemplo:

```text
input  = 0Z1Z0Z1Z
weight = XZXZXZXZ
```

e:

```text
input  = Z0Z1Z0Z1
weight = ZXZXZXZX
```

### Resultado esperado

Propagação de estado desconhecido até o resultado.

---

# 8. Testes dirigidos adicionais

## T12 — Todos os elementos iguais a zero

Entrada:

```text
input_vec = 0
```

Pesos:

```text
random
```

Resultado esperado:

\[
out=0
\]

Esse teste será realizado com todos os 32 elementos ativos.

---

## T13 — Todos os pesos iguais a zero

Entrada:

```text
input_vec = random
```

Pesos:

```text
weight = 0
```

Resultado esperado:

\[
out=0
\]

---

## T14 — Elemento unitário

Aplicar um único elemento ativo com peso igual a `1`.

Exemplo:

```text
input[0]  = X
weight[0] = 1
```

demais posições:

```text
0
```

Resultado esperado:

\[
out=X
\]

O teste deverá utilizar alguns valores positivos e negativos.

---

# 9. Verificação de indexação

## T15 — Walking element

### Objetivo

Garantir que todos os 32 elementos de entrada sejam corretamente acessados pelo DotProduct.

Um único elemento será ativado a cada transação.

```text
Teste 00 → input[0]
Teste 01 → input[1]
Teste 02 → input[2]
...
Teste 31 → input[31]
```

Exemplo:

```text
input[i]  = 37
weight[i] = 1
```

Todos os demais elementos:

```text
0
```

Resultado esperado em todos os casos:

\[
out=37
\]

O teste deverá executar no mínimo uma passagem pelas 32 posições.

---

# 10. Testes signed

Os elementos do DotProduct são tratados como valores binários com sinal.

Para `DATA_WIDTH = 8`:

\[
-128 \leq valor \leq +127
\]

---

## T16 — Valores extremos signed

Testar explicitamente:

```text
 +127 × +127
 +127 × -128
 -128 × +127
 -128 × -128
```

O objetivo é verificar:

- interpretação signed;
- extensão de sinal;
- multiplicação signed;
- largura intermediária;
- largura do acumulador.

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

\[
out=32\times127\times127
\]

---

## T18 — Mínimo negativo em todos os elementos

Configuração:

```text
input[i]  = -128
weight[i] = -128
```

para os 32 elementos.

Resultado esperado:

\[
out=32\times(-128)\times(-128)
\]

Esse caso também verifica o dimensionamento automático do acumulador.

---

# 11. Testes de cancelamento

## T19 — Sinais alternados

Aplicar valores alternados:

```text
input:
+127 -128 +127 -128 ...
```

com:

```text
weight:
1 1 1 1 ...
```

Em seguida utilizar:

```text
input:
+127 +127 +127 +127 ...

weight:
+1 -1 +1 -1 ...
```

O objetivo é exercitar simultaneamente diferentes ramos da árvore de somadores.

---

## T20 — Cancelamento perfeito

Exemplo:

```text
input:
10 10 10 10

weight:
1 -1 1 -1
```

restante:

```text
0
```

Resultado esperado:

\[
(10\times1)+(10\times-1)+(10\times1)+(10\times-1)=0
\]

---

# 12. Testes de pipeline

As multiplicações e a árvore de soma possuem registradores internos, e `valid_in` também percorre um pipeline destinado a indicar quando o resultado de uma operação deve ser considerado válido.

---

## T21 — Operações back-to-back

### Objetivo

Verificar a capacidade de receber uma nova transação válida a cada ciclo.

Aplicar:

```text
valid_in = 1
```

continuamente.

Exemplo:

```text
Clock       1    2    3    4    5    6 ...
Entrada     A    B    C    D    E    F ...
```

Depois do preenchimento inicial do pipeline, deverão surgir resultados consecutivos correspondentes às entradas:

```text
A
B
C
D
E
F
...
```

A ordem das transações deverá ser preservada.

O teste poderá utilizar alguns milhares de transações pseudoaleatórias.

---

## T22 — Gaps aleatórios em valid_in

### Objetivo

Verificar o alinhamento entre dados e validade.

Utilizar:

```text
valid_in = random(0,1)
```

enquanto `input_vec` e `weight` continuam recebendo novos valores.

Exemplo:

```text
valid_in:
1 1 0 1 0 0 1 1 1 0 1 ...
```

Somente as entradas associadas a:

```text
valid_in == 1
```

deverão entrar na fila de referência do scoreboard.

Esse teste é especialmente importante porque a documentação atual aponta uma possível diferença de um ciclo entre o percurso dos dados e `valid_out`.

A bancada deverá registrar claramente o comportamento observado para determinar se existe efetivamente desalinhamento temporal no RTL.

---

# 13. Scoreboard

O scoreboard deverá manter uma fila de operações válidas.

Para cada:

```text
valid_in == 1
```

deverá:

1. extrair os elementos de `input_vec`;
2. extrair os elementos de `weight`;
3. interpretar os elementos como signed;
4. calcular todos os produtos;
5. somar os produtos;
6. armazenar o resultado esperado.

Quando:

```text
valid_out == 1
```

o scoreboard deverá retirar o resultado correspondente da fila e comparar com:

```text
out
```

A comparação deverá possuir tratamento específico para testes contendo `X` ou `Z`.

---

# 14. Assertions

As assertions deverão complementar o scoreboard verificando principalmente o comportamento temporal do DUT.

Deverão existir verificações para:

```text
valid_in
    ↓
pipeline
    ↓
valid_out
```

e para condições fundamentais como:

```text
input_vec == 0
→ resultado válido == 0
```

e:

```text
weight == 0
→ resultado válido == 0
```

Assertions envolvendo o reset deverão considerar que o reset documentado atua sobre o pipeline de validade e não necessariamente força `out` para zero.

---

# 15. Seeds das rodadas aleatórias

Cada uma das quatro rodadas dos testes de varredura deverá utilizar uma seed diferente.

Exemplo:

```text
ROUND 0 → SEED_0
ROUND 1 → SEED_1
ROUND 2 → SEED_2
ROUND 3 → SEED_3
```

As seeds deverão ser registradas no relatório para permitir reprodução de qualquer falha.

Em caso de erro, deverão ser registrados:

```text
Test ID
Round
Seed
Clock
input_vec
weight
expected
out
valid_in
valid_out
```

---

# 16. Quantidade mínima de transações dos testes de varredura

| Teste | Casos/rodada | Rodadas | Total |
|---|---:|---:|---:|
| T02 — 1 × 8 bits | 256 | 4 | 1.024 |
| T03 — 4 × 4 bits | 256 | 4 | 1.024 |
| T04 — 8 × 1 bit | 256 | 4 | 1.024 |
| T05 — 4 × 8 bits | 4.096 | 4 | 16.384 |
| T06 — 12 × 4 bits | 65.536 | 4 | 262.144 |
| **Total** | | | **281.600** |

Os testes dirigidos, de reset, pipeline e estados desconhecidos serão adicionados a essas 281.600 transações.

---

# 17. Estratégia para redução do custo de simulação

Considerando o elevado espaço de estados do circuito, não será realizada uma tentativa de verificação exaustiva de todas as combinações possíveis.

Com 32 elementos de 8 bits, somente `input_vec` possui:

\[
256^{32}=2^{256}
\]

combinações possíveis.

Considerando também `weight`, o espaço torna-se ainda maior.

Por isso, a estratégia adotada combina:

- testes dirigidos;
- valores extremos;
- testes signed;
- casos de cancelamento;
- varreduras exaustivas de subespaços pequenos;
- amostragem de espaços maiores;
- randomização com seeds reproduzíveis;
- scoreboard;
- assertions;
- testes de pipeline;
- propagação de `X` e `Z`.

---

# 18. Otimização da execução

Como o DUT é pipelineado, os casos de teste deverão ser aplicados preferencialmente em ciclos consecutivos.

Não será necessário aguardar a saída de uma operação antes de inserir a seguinte.

Assim, uma sequência poderá assumir a forma:

```text
CLK           1   2   3   4   5   6   7 ...
INPUT         A   B   C   D   E   F   G ...
                  ↓ pipeline ↓
OUTPUT                    A   B   C   D ...
```

A fila do scoreboard será responsável por manter a associação entre entradas e resultados.

Para reduzir o custo da simulação:

```text
PASS individual → não imprimir
FAIL             → imprimir
Resumo do teste  → imprimir
```

A geração de waveform poderá ser desabilitada durante regressões extensas e utilizada especificamente durante depuração de falhas.

---

# 19. Cobertura funcional

A cobertura deverá registrar pelo menos a ocorrência das principais classes de estímulos:

| Grupo | Condições |
|---|---|
| Reset | inicial / durante processamento |
| Validade | `valid_in=0` / `valid_in=1` |
| Pipeline | back-to-back / gaps |
| Quantidade ativa | 1 / 4 / 8 / 12 / 32 |
| Dados | zero / positivos / negativos |
| Limites signed | `-128` / `+127` |
| Pesos | zero / positivos / negativos |
| Resultado | positivo / zero / negativo |
| Estados especiais | X / Z / X-Z |
| Indexação | posições 0 até 31 |
| Cancelamento | parcial / completo |

A cobertura não substitui o scoreboard, mas permite verificar se os cenários previstos pelo plano foram efetivamente exercitados.

---

# 20. Critérios de aprovação

A regressão será considerada aprovada quando:

1. todos os testes dirigidos forem concluídos;
2. as quatro rodadas dos testes T02 a T06 forem executadas;
3. os **281.600 casos principais de varredura** forem processados;
4. não houver divergências numéricas entre DUT e modelo de referência;
5. todos os 32 elementos forem exercitados pelo teste de walking element;
6. os casos signed apresentarem os resultados esperados;
7. os testes de `X` e `Z` apresentarem propagação de estado desconhecido conforme esperado;
8. não houver perda, duplicação ou reordenação de transações no pipeline;
9. o comportamento de `valid_out` for determinado e comparado com a latência efetiva dos dados;
10. as assertions não apresentarem violações não justificadas;
11. qualquer falha possa ser reproduzida por meio do ID do teste, rodada e seed.

O relatório final deverá apresentar ao menos:

```text
+--------------------------------------------------+
|              DOTPRODUCT TEST SUMMARY             |
+--------------------------------------------------+
| Directed tests : XXXX                            |
| Sweep tests    : 281600                          |
| Random tests   : XXXX                            |
| Assertions     : XXXX                            |
| PASS           : XXXX                            |
| FAIL           : XXXX                            |
+--------------------------------------------------+
| RESULT         : PASS / FAIL                     |
+--------------------------------------------------+
```

O objetivo final é verificar o comportamento funcional do DotProduct de forma abrangente, porém computacionalmente viável, privilegiando testes dirigidos e amostragem de espaços relevantes em vez de tentar realizar uma varredura inviável de todo o espaço de estados.