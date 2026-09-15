# ReLU

## Descrição

O módulo **ReLU** implementa a função de ativação **Rectified Linear Unit (ReLU)** para valores binários com sinal.

O circuito recebe um valor de entrada e verifica seu sinal. Valores positivos e iguais a zero são preservados, enquanto valores negativos são substituídos por zero.

## Parâmetro

| Parâmetro | Descrição |
|---|---|
| `DATA_WIDTH` | Define a largura, em bits, da entrada e da saída. O valor padrão é 32 bits. |

## Entrada e saída

| Sinal | Direção | Largura | Descrição |
|---|---|---:|---|
| `in` | Entrada | `DATA_WIDTH` | Valor de entrada representado com sinal em complemento de dois. |
| `out` | Saída | `DATA_WIDTH` | Resultado após a aplicação da função ReLU. |

## Comportamento esperado

O circuito analisa o sinal do valor presente na entrada.

- Quando a entrada é positiva, a saída recebe o mesmo valor;
- Quando a entrada é igual a zero, a saída permanece igual a zero;
- Quando a entrada é negativa, a saída é forçada para zero.

A relação funcional esperada é:

**out = máximo entre 0 e in**

A identificação de números negativos é feita pelo bit mais significativo do valor de entrada, seguindo a representação em complemento de dois.

## Características

- Circuito puramente combinacional;
- Não utiliza clock;
- Não utiliza reset;
- Opera com números binários com sinal;
- Utiliza representação em complemento de dois;
- Possui largura de dados configurável por parâmetro;
- A saída possui a mesma largura da entrada;
- Não introduz latência em ciclos de clock.

## Exemplo de funcionamento

Considerando uma largura de 8 bits:

- Uma entrada igual a 25 produz uma saída igual a 25;
- Uma entrada igual a 0 produz uma saída igual a 0;
- Uma entrada igual a -12 produz uma saída igual a 0.

## Aplicações

O módulo pode ser utilizado como função de ativação em estruturas como:

- Redes neurais;
- Camadas convolucionais;
- Camadas totalmente conectadas;
- Aceleradores de inteligência artificial;
- Sistemas digitais de inferência.

## Observações

Como a entrada é interpretada como um número com sinal em complemento de dois, o bit mais significativo determina se o valor é negativo.

O módulo não realiza saturação positiva nem alteração da magnitude de valores positivos. Portanto, qualquer valor positivo representável em `DATA_WIDTH` bits é encaminhado diretamente para a saída.
