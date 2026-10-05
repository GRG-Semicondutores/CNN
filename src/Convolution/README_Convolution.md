# Convolution

## Descrição

O módulo **Convolution** implementa uma operação de **convolução bidimensional** entre uma imagem quadrada e um kernel quadrado, ambos formados por valores binários com sinal.

O circuito seleciona uma janela da imagem com as dimensões do kernel e utiliza o módulo **DotProduct** para multiplicar os elementos correspondentes e somar os produtos. A janela percorre a imagem e cada resultado é armazenado no vetor de saída.

No projeto CNN, o bloco gera o mapa de características (**feature map**) correspondente à aplicação de um kernel sobre uma imagem. Conforme a documentação geral do repositório, o bloco **FeatureMap** combina os resultados parciais dos canais, enquanto **ConvLayer** organiza múltiplos filtros e múltiplos canais para extrair diferentes características da entrada.

A implementação utiliza deslocamento de um elemento por posição (**stride = 1**) e permite configurar o preenchimento das bordas com zeros (**zero padding**).

## Parâmetros

| Parâmetro | Descrição |
|---|---|
| `DATA_WIDTH` | Define a largura, em bits, de cada elemento da imagem e do kernel. O valor padrão é 8 bits. |
| `IMG_SIZE` | Define a quantidade de linhas e colunas da imagem quadrada. O valor padrão é 5. |
| `KERNEL_SIZE` | Define a quantidade de linhas e colunas do kernel quadrado. O valor padrão é 3. |
| `PADDING` | Define a quantidade de posições preenchidas com zeros em cada borda da imagem. O valor padrão é 0. |
| `N_PIXELS` | Define internamente a quantidade de elementos da imagem: `IMG_SIZE × IMG_SIZE`. |
| `N_KERNEL` | Define internamente a quantidade de elementos do kernel: `KERNEL_SIZE × KERNEL_SIZE`. |
| `ACC_WIDTH` | Define internamente a largura de cada resultado: `2 × DATA_WIDTH + $clog2(N_KERNEL)`. |
| `OUT_SIZE` | Define internamente a quantidade de linhas e colunas da saída: `IMG_SIZE + 2 × PADDING - KERNEL_SIZE + 1`. |
| `N_OUT` | Define internamente a quantidade de resultados: `OUT_SIZE × OUT_SIZE`. |
| `BIT_COUNT` | Define internamente a largura do contador de resultados: `$clog2(N_OUT + 1)`. |
| `BIT_CONV` | Define internamente a largura dos índices de linha e coluna da janela: `$clog2(OUT_SIZE)`. |

Com os valores padrão, a imagem possui 25 elementos, o kernel possui 9 elementos e a saída possui 9 resultados de 20 bits, correspondentes a uma matriz de 3 × 3.

## Entrada e saída

| Sinal | Direção | Largura | Descrição |
|---|---|---:|---|
| `clk` | Entrada | 1 bit | Clock utilizado para controlar a posição da janela, o pipeline do DotProduct e o armazenamento dos resultados. |
| `rst` | Entrada | 1 bit | Reset síncrono dos índices da janela, do contador de resultados e dos sinais de validade. |
| `imagem` | Entrada | `N_PIXELS × DATA_WIDTH` | Array de elementos com sinal que representa a imagem quadrada. |
| `kernel` | Entrada | `N_KERNEL × DATA_WIDTH` | Array de pesos com sinal que representa o kernel quadrado. |
| `start` | Entrada | 1 bit | Pulso de um ciclo de clock que inicia o envio das janelas ao DotProduct. |
| `result` | Saída | `N_OUT × ACC_WIDTH` | Array com os resultados calculados para as posições da janela. |
| `valid_out` | Saída | 1 bit | Pulso que indica a conclusão do armazenamento dos `N_OUT` resultados. |

As larguras totais dos arrays são indicadas na tabela. No RTL, cada array possui elementos separados, e cada elemento de `imagem` e `kernel` tem `DATA_WIDTH` bits; cada elemento de `result` tem `ACC_WIDTH` bits.

## Comportamento esperado

A imagem e o kernel são organizados em arrays unidimensionais, com os elementos armazenados por linha.

O elemento da imagem na posição `(linha, coluna)` é acessado por:

**imagem[IMG_SIZE × linha + coluna]**

O elemento do kernel na posição `(i, j)` é acessado por:

**kernel[KERNEL_SIZE × i + j]**

Para cada posição de saída `(r, c)`, o circuito seleciona uma janela da imagem, multiplica seus elementos pelos pesos correspondentes do kernel e soma os produtos.

A relação funcional esperada é:

**result[OUT_SIZE × r + c] = Σᵢ Σⱼ imagem_preenchida(r + i - PADDING, c + j - PADDING) × kernel[KERNEL_SIZE × i + j]**

Os índices `i` e `j` variam de zero até `KERNEL_SIZE - 1`. A função `imagem_preenchida` representa o elemento da imagem quando as coordenadas estão dentro de seus limites e o valor zero quando estão fora.

A janela percorre primeiro as colunas e depois avança para a próxima linha. Os resultados são armazenados na mesma ordem.

O kernel é utilizado na ordem em que foi fornecido, sem inversão das linhas e colunas. Portanto, a operação corresponde matematicamente a uma **correlação cruzada**, normalmente chamada de convolução no contexto de redes neurais.

## Pipeline

A seleção dos elementos de cada janela é combinacional. Os sinais `conv_row` e `conv_col` determinam a posição utilizada para formar o array interno `imagem_slice`.

Após o pulso de `start`, o circuito ativa `valid_in` e começa a fornecer as janelas ao DotProduct. Durante a varredura, uma nova janela é enviada a cada ciclo de clock, desde que `start` permaneça desativado.

O DotProduct registra as multiplicações e distribui as somas em uma árvore pipelineada. A quantidade de estágios dessa árvore é determinada por:

**STAGES = ceil(log2(N_KERNEL))**

Na implementação, esse valor é obtido por `$clog2(N_KERNEL)`. O pipeline do DotProduct possui um registro de multiplicação e `STAGES` registros de soma.

O sinal `valid_product` indica que `single_result` deve ser armazenado em `result[count]`. Como esse armazenamento ocorre em outro bloco sequencial, ele captura a saída do DotProduct na borda de clock seguinte à atualização dessa saída e de seu sinal de validade.

Após o armazenamento do último resultado, `valid_out` é ativado na borda de clock seguinte e permanece ativo por um ciclo. O contador volta a zero e o array de resultados permanece armazenado até receber novas escritas.

Com os parâmetros padrão, são enviados nove elementos de janela ao longo de nove ciclos, e o DotProduct utiliza quatro estágios de soma além do registro de multiplicação. A conclusão também depende do escoamento desse pipeline e do armazenamento dos resultados.

## Características

- Circuito sequencial com processamento pipelineado;
- Utiliza clock;
- Opera com elementos binários com sinal;
- Processa uma imagem quadrada e um kernel quadrado;
- Seleciona janelas da imagem por lógica combinacional;
- Reutiliza uma instância de DotProduct para todas as posições de saída;
- Executa as multiplicações de cada janela em paralelo no DotProduct;
- Percorre a imagem por linhas, com stride fixo igual a 1;
- Suporta preenchimento das bordas com zeros;
- Possui largura dos elementos, tamanho da imagem e tamanho do kernel configuráveis;
- Dimensiona automaticamente a quantidade e a largura dos resultados;
- Armazena o mapa de saída em um array;
- Possui sinalização de início e conclusão do processamento.

## Exemplo de funcionamento

Considerando os parâmetros padrão e a seguinte imagem:

| | Coluna 0 | Coluna 1 | Coluna 2 | Coluna 3 | Coluna 4 |
|---|---:|---:|---:|---:|---:|
| Linha 0 | 1 | 2 | 3 | 4 | 5 |
| Linha 1 | 6 | 7 | 8 | 9 | 10 |
| Linha 2 | 11 | 12 | 13 | 14 | 15 |
| Linha 3 | 16 | 17 | 18 | 19 | 20 |
| Linha 4 | 21 | 22 | 23 | 24 | 25 |

Considerando um kernel de 3 × 3 com todos os pesos iguais a 1 e sem padding, a primeira janela contém:

| | Coluna 0 | Coluna 1 | Coluna 2 |
|---|---:|---:|---:|
| Linha 0 | 1 | 2 | 3 |
| Linha 1 | 6 | 7 | 8 |
| Linha 2 | 11 | 12 | 13 |

O primeiro resultado esperado é:

**result[0] = 1 + 2 + 3 + 6 + 7 + 8 + 11 + 12 + 13 = 63**

Após percorrer todas as posições, o mapa de saída esperado é:

| | Coluna 0 | Coluna 1 | Coluna 2 |
|---|---:|---:|---:|
| Linha 0 | 63 | 72 | 81 |
| Linha 1 | 108 | 117 | 126 |
| Linha 2 | 153 | 162 | 171 |

No array de saída, esses valores correspondem a:

**result = {63, 72, 81, 108, 117, 126, 153, 162, 171}**

Esses valores descrevem a operação matemática esperada. A obtenção desses resultados no RTL depende da correção da propagação dos elementos ímpares no DotProduct, descrita nas observações.

## Aplicações

O módulo pode ser utilizado em estruturas como:

- Camadas convolucionais de redes neurais;
- Aceleradores de inteligência artificial;
- Filtros digitais bidimensionais;
- Processamento de imagens;
- Extração de características;
- Sistemas digitais que executem somas ponderadas sobre janelas de dados.

## Observações

Os elementos de `imagem`, `kernel` e `result` são declarados com sinal, permitindo operações com números positivos e negativos. O módulo não implementa bias, função de ativação, saturação ou reescala dos resultados.

A imagem e o kernel não são copiados para registradores internos no início da operação. Eles devem permanecer estáveis durante o processamento, até a indicação de conclusão.

O sinal `start` deve ser aplicado como um pulso de um ciclo quando o circuito estiver livre. A implementação não possui saída `busy` nem um protocolo para aceitar novas imagens durante uma operação. Um novo pulso durante a varredura suspende o avanço da janela naquela borda, podendo provocar o envio repetido de uma posição. Recomenda-se iniciar a próxima operação somente após a conclusão da anterior.

O sinal `rst` reinicializa o controle da varredura, o contador e os sinais de validade, mas não reinicializa o array `result` nem os registradores de dados do DotProduct. Antes da conclusão de uma operação, `result` pode conter valores antigos, indefinidos ou parcialmente atualizados. O sinal `valid_out` é um pulso de conclusão; os resultados continuam armazenados após esse pulso.

Os parâmetros devem produzir uma dimensão de saída positiva. Para `OUT_SIZE = 1`, o cálculo de `BIT_CONV` resulta em zero e a declaração `[BIT_CONV-1:0]` não representa a largura pretendida para os índices. Esse caso requer revisão do dimensionamento. Um kernel de 1 × 1 também requer adaptação do DotProduct, pois `N_INPUTS = 1` resulta em zero estágios de soma.

Na versão anexada do DotProduct, o pipeline de validade utiliza `valid_pipe[LATENCY-1]`, com `LATENCY = STAGES + 1`. Dessa forma, sua profundidade acompanha os registros de multiplicação e soma. A observação sobre um ciclo extra de validade presente no README de referência descreve outra declaração do pipeline e não se aplica a esta versão anexada.

Entretanto, a propagação de elementos ímpares na árvore de soma do DotProduct precisa ser revisada. Para estágios posteriores ao primeiro, a condição de paridade considera a quantidade de elementos de um nível anterior ao necessário. Com o kernel padrão de 3 × 3, os nove produtos geram cinco elementos no primeiro estágio; o estágio seguinte deveria somar dois pares e encaminhar o quinto elemento separadamente. No RTL anexado, esse encaminhamento escreve em `soma[1][1]`, posição também escrita por um somador, em vez de encaminhar o elemento para `soma[1][2]`. Isso provoca múltiplas escritas no mesmo registrador e deixa o caminho do elemento restante incompleto. Portanto, o resultado correto para essa configuração não está garantido pela implementação atual.

O comentário no bloco de armazenamento do Convolution afirma que `count` e `valid_out` também são escritos por `conv_window`. No arquivo anexado, esses sinais são escritos somente no bloco de armazenamento; esse comentário não corresponde ao código apresentado.

## Referências do projeto

- [README geral da CNN — branch develop](https://github.com/GRG-Semicondutores/CNN/blob/develop/README.md): contexto da arquitetura e relação entre Convolution, FeatureMap e ConvLayer.
- [Notas do bloco CNN](https://github.com/GRG-Semicondutores/CNN/blob/develop/docs/CNN_block_notes.pdf): material conceitual indicado pelo README geral.

A descrição da interface, dos parâmetros, do controle e das limitações foi baseada nos arquivos RTL fornecidos para esta documentação.
