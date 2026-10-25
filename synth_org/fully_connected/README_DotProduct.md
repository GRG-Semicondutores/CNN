# DotProduct

## Descrição

O módulo **DotProduct** implementa o cálculo do **produto escalar** entre um vetor de entrada e um vetor de pesos, ambos formados por valores binários com sinal.

O circuito realiza a multiplicação elemento a elemento entre `input_vec` e `weight` e, em seguida, soma todos os produtos por meio de uma árvore de somadores pipelineada.

## Parâmetros

| Parâmetro | Descrição |
|---|---|
| `DATA_WIDTH` | Define a largura, em bits, de cada elemento dos vetores de entrada e de pesos. O valor padrão é 8 bits. |
| `N_INPUTS` | Define a quantidade de elementos presentes nos vetores. O valor padrão é 32. |
| `ACC_WIDTH` | Define internamente a largura do acumulador e da saída, calculada a partir de `DATA_WIDTH` e `N_INPUTS`. |

## Entrada e saída

| Sinal | Direção | Largura | Descrição |
|---|---|---:|---|
| `clk` | Entrada | 1 bit | Clock utilizado para registrar as multiplicações, os estágios da árvore de soma e o pipeline de validação. |
| `rst` | Entrada | 1 bit | Reset síncrono aplicado ao pipeline do sinal de validade. |
| `input_vec` | Entrada | `N_INPUTS × DATA_WIDTH` | Vetor de valores de entrada representados com sinal. |
| `weight` | Entrada | `N_INPUTS × DATA_WIDTH` | Vetor de pesos representados com sinal. |
| `valid_in` | Entrada | 1 bit | Indica que os valores presentes nos vetores de entrada devem ser considerados válidos. |
| `valid_out` | Saída | 1 bit | Indica a validade temporal da saída de acordo com o pipeline interno. |
| `out` | Saída | `ACC_WIDTH` | Resultado do produto escalar entre `input_vec` e `weight`. |

## Comportamento esperado

O circuito calcula o produto escalar entre os dois vetores de entrada.

Para cada posição dos vetores, é realizada uma multiplicação entre o valor de entrada e o peso correspondente. Em seguida, todos os produtos são somados até que reste apenas um resultado.

A relação funcional esperada é:

**out = input_vec[0] × weight[0] + input_vec[1] × weight[1] + ... + input_vec[N_INPUTS-1] × weight[N_INPUTS-1]**

As multiplicações são registradas em clock e as somas são distribuídas em uma árvore de redução pipelineada. Quando um estágio possui uma quantidade ímpar de elementos, o elemento restante é encaminhado ao estágio seguinte sem ser descartado.

## Pipeline

A quantidade de estágios da árvore de soma é determinada por:

**STAGES = ceil(log2(N_INPUTS))**

Na implementação, esse valor é obtido por `$clog2(N_INPUTS)`.

Os produtos são inicialmente registrados no vetor interno de multiplicações. Nos ciclos seguintes, os resultados percorrem os estágios da árvore de soma até alcançar a saída.

O sinal `valid_in` também é armazenado em um pipeline para indicar quando uma operação deve ser considerada válida na saída.

## Características

- Circuito sequencial e pipelineado;
- Utiliza clock;
- Opera com valores binários com sinal;
- Executa multiplicações em paralelo entre elementos correspondentes dos vetores;
- Utiliza uma árvore de somadores para reduzir os produtos até um único resultado;
- Suporta quantidades de elementos que não sejam potências de dois, propagando elementos ímpares para o estágio seguinte;
- Possui largura dos elementos configurável por parâmetro;
- Possui quantidade de entradas configurável por parâmetro;
- Dimensiona automaticamente a largura do acumulador;
- Possui sinalização de validade de entrada e saída.

## Exemplo de funcionamento

Considerando quatro elementos de entrada:

- `input_vec = {1, 2, 3, 4}`;
- `weight = {5, 6, 7, 8}`.

O resultado esperado é:

**out = (1 × 5) + (2 × 6) + (3 × 7) + (4 × 8)**

**out = 5 + 12 + 21 + 32 = 70**

O valor é produzido após percorrer os registros de multiplicação e os estágios da árvore de soma.

## Aplicações

O módulo pode ser utilizado em estruturas como:

- Redes neurais;
- Camadas totalmente conectadas;
- Operações de convolução;
- Unidades de multiplicação e acumulação;
- Aceleradores de inteligência artificial;
- Processamento digital de sinais;
- Sistemas digitais que executem somas ponderadas.

## Observações

Os elementos de `input_vec` e `weight` são declarados como valores com sinal, permitindo operações com números positivos e negativos.

O sinal `rst` atua somente sobre o pipeline de validade. Os registradores utilizados nas multiplicações e na árvore de soma não são reinicializados pelo reset, portanto o conteúdo de `out` não deve ser considerado válido até que uma operação válida tenha percorrido o pipeline.

A implementação pressupõe `N_INPUTS` maior ou igual a 2. Para `N_INPUTS = 1`, o cálculo de `STAGES` resulta em zero e o acesso utilizado para formar `out` deixa de representar uma estrutura válida.

Na implementação atual, `LATENCY` é definido como `STAGES + 1`, enquanto `valid_pipe` possui índices de `0` até `LATENCY` e `valid_out` utiliza `valid_pipe[LATENCY]`. Isso faz com que a sinalização de `valid_out` fique um ciclo além do percurso de dados pela multiplicação e pela árvore de soma. Caso `valid_out` deva marcar exatamente o ciclo em que o resultado correspondente aparece em `out`, esse alinhamento deve ser revisado no RTL.