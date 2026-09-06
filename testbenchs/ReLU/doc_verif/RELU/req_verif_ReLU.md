# Plano de Verificação do sub-bloco ReLU

## 1. Objetivo:

O objetivo da verificação é garantir que o módulo **ReLU**, configurado para uma largura de 32 bits, apresente o comportamento esperado para valores positivos, negativos e zero.

Como seria inviável testar exaustivamente todas as combinações possíveis de uma entrada de 32 bits, a estratégia de verificação será baseado em rotinas.

O comportamento do circuito depende principalmente do bit mais significativo (MSB) da entrada, responsável por indicar o sinal do número em representação de complemento de dois.

Dessa forma:

- `MSB = 0`: a entrada representa um valor não negativo e deve ser propagada para a saída;
- `MSB = 1`: a entrada representa um valor negativo e a saída deve ser igual a zero.

Os demais 31 bits serão exercitados utilizando diferentes padrões representativos.

---

## 2. Estratégia de verificação

Os testes serão divididos de acordo com o valor do MSB e com o padrão aplicado aos demais bits da entrada.

Para cada padrão dos 31 bits menos significativos, serão verificados os dois estados funcionais principais do MSB:

- MSB igual a `0`;
- MSB igual a `1`.

Isso permite verificar tanto a decisão tomada pelo circuito quanto a correta propagação ou descarte dos demais bits.

---

## 3. Rotinas de teste

##### > 1° - Completando os demais bits com valores aleatórios.

##### > 2° - Fixando os demais bits em 0.

##### > 3° - Fixando os demais bits em 1.

##### > 4° - Fixando os demais bits em valores alterandos entre 0 e 1.

##### > 5° - Fixando os demais bits em alta impedância (Z).

##### > 6° - Fixando os demais bits em indefinido (X).

##### > 7° - Fixando os demais bits em valores alterandos entre X e Z.

---

## 4. Matriz principal de verificação

| Caso | MSB | Bits `[30:0]` | Resultado esperado |
|---|---:|---|---|
| 1 | 0 | Aleatórios | `out = in` |
| 2 | 1 | Aleatórios | `out = 0` |
| 3 | 0 | Todos `0` | `out = 0` |
| 4 | 1 | Todos `0` | `out = 0` |
| 5 | 0 | Todos `1` | `out = in` |
| 6 | 1 | Todos `1` | `out = 0` |
| 7 | 0 | Alternados | `out = in` |
| 8 | 1 | Alternados | `out = 0` |
| 9 | 0 | Todos `Z` | `out = in`, com propagação de `Z` |
| 10 | 1 | Todos `Z` | `out = 0` |
| 11 | 0 | Todos `X` | `out = in`, com propagação de `Z` |
| 12 | 1 | Todos `X` | `out = 0` |
| 13 | 0 | Alternados entre X e Z | `out = in`, com propagação de `Z` |
| 14 | 1 | Alternados entre X e Z | `out = 0` |

Para os padrões alternados, recomenda-se executar tanto a sequência `0101...` quanto `1010...`.

---

## 5. Casos de fronteira

Alguns valores possuem importância especial e devem ser garantidos explicitamente durante a verificação:

| Condição | Valor representado | Resultado esperado |
|---|---:|---:|
| Todos os bits em `0` | 0 | 0 |
| MSB `0` e demais bits `1` | Maior positivo | Própria entrada |
| MSB `1` e demais bits `0` | Menor negativo | 0 |
| Todos os bits em `1` | -1 | 0 |

Esses quatro casos verificam os limites das duas regiões de funcionamento da ReLU.

---

## 6. Cobertura funcional

A cobertura deve garantir que tenham sido exercitadas todas as combinações entre:

### Estado do MSB

- `0`;
- `1`.

### Padrão dos demais bits

- Aleatório;
- Todos em `0`;
- Todos em `1`;
- Alternados;
- Todos em `Z`.

A cobertura funcional mínima corresponde, portanto, ao cruzamento dessas duas categorias.

Isso resulta em pelo menos **10 classes principais de teste**, além das repetições dos testes aleatórios e das duas variações do padrão alternado.

---

## 7. Critério de aprovação

O bloco será considerado aprovado quando:

- Todos os casos determinísticos apresentarem o resultado esperado;
- Todos os estímulos aleatórios apresentarem o resultado esperado;
- Valores positivos forem preservados integralmente;
- Valores negativos produzirem saída igual a zero;
- O valor zero produzir saída igual a zero;
- Estados `Z` nos bits inferiores não alterarem a decisão determinada pelo MSB;
- Todas as classes definidas na cobertura funcional forem exercitadas;
- Nenhum erro de comparação for identificado durante a simulação.

## 8. Resumo

A verificação não busca cobrir todas as combinações possíveis dos 32 bits. Em vez disso, o espaço de entrada é dividido segundo o comportamento funcional do circuito.

O MSB é exercitado nos dois estados possíveis, enquanto os demais bits são submetidos a padrões representativos:

1. Aleatórios;
2. Todos em zero;
3. Todos em um;
4. Alternados;
5. Alta impedância.

Essa abordagem permite verificar de forma direcionada que a decisão da ReLU é determinada pelo sinal da entrada e que os demais bits são corretamente propagados ou descartados conforme o estado do MSB.