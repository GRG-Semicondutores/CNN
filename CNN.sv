module CNN #(
    parameter DATA_WIDTH = 8, //largura do barramento de dados, utilizado em pesos e entradas
    parameter IMG_SIZE_1 = 32, //tamanho do lado da imagem
    parameter KERNEL_SIZE = 3, //tamanho do lado dos kernels
    parameter N_CHANNELS = 3, //número de canais iniciais da imagem
    parameter N_FILTERS_LAYER_1 = 2, //número de filtros da primeira camada
    parameter N_FILTERS_LAYER_2 = 4, //número de filtros da segunda camada
    parameter PADDING_1 = 1, //padding da primeira camada
    parameter PADDING_2 = 1, //padding da segunda camada
    parameter N_NEURONS_1 = 8, //número de neurônios da primeira camada Fully Connected
    parameter N_NEURONS_2 = 10, //número de neurônios da última camada (classes finais)
    parameter SHIFT_1 = 1, //shift do Quantizer (ver arquivo para mais detalhes). Deve vir de um script externo, que indica o formato de ponto fixo adotado para a rede
    parameter SHIFT_2 = 1, //idem, para camada 2
    parameter SHIFT_3 = 1, //camada FC1
    parameter SHIFT_4 = 1, //camada FC2

    //Todas as etapas da CNN devem envolver tamanhos pares. Caso necessário, utilizar padding para transformar em par.
    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE, //número de elementos totais do kernel
    localparam N_PIXELS = IMG_SIZE_1 * IMG_SIZE_1, //número de pixels totais da imagem
    localparam OUT_SIZE_1 = IMG_SIZE_1 + 2 * PADDING_1 - KERNEL_SIZE + 1, //tamanho do lado das (pré) feature maps de saída, resultado do processamento da convolução da primeira camada
    localparam N_OUT = OUT_SIZE_1 * OUT_SIZE_1, //número de elementos totais das (pré) feature maps de saída da primeira camada
    localparam N_OUT_POOLED = N_OUT / 4, //número de elementos totais das feature maps após a aplicação do maxPooling
    localparam IMG_SIZE_2 = OUT_SIZE_1 / 2, //tamanho do lado da "imagem" de entrada da segunda camada, que na verdade são as feature maps totalmente processadas da primeira camada
    localparam N_CHANNELS_2 = N_FILTERS_LAYER_1, //número de canais da segunda camada, sendo equivalente ao número de filtros adotados pela primeira camada
    localparam OUT_SIZE_2 = IMG_SIZE_2 + 2 * PADDING_2 - KERNEL_SIZE + 1, //tamanho do lado das (pré) feature maps de saída da segunda camada, resultado das convoluções
    localparam N_OUT_2 = OUT_SIZE_2 * OUT_SIZE_2, //número de elementos totais das (pré) feature maps de saída da segunda camada
    localparam N_OUT_POOLED_2 = N_OUT_2 / 4, //número de elementos totais das feature maps da segunda camada após a aplicação do maxPooling
    localparam N_FLAT = N_OUT_POOLED_2 * N_FILTERS_LAYER_2 //número de elementos totais de todos os filtros da segunda camada somados, gerando uma camada flat
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic signed [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel1 [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1],
    input logic signed [DATA_WIDTH-1:0] kernel2 [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1],
    input logic signed [DATA_WIDTH-1:0] FCWeight1 [0:N_NEURONS_1-1][0:N_FLAT-1],
    input logic signed [DATA_WIDTH-1:0] FCWeight2 [0:N_NEURONS_2-1][0:N_NEURONS_1-1],
    input logic signed [DATA_WIDTH-1:0] ConvBias1 [0:N_FILTERS_LAYER_1-1],
    input logic signed [DATA_WIDTH-1:0] ConvBias2 [0:N_FILTERS_LAYER_2-1],
    input logic signed [DATA_WIDTH-1:0] FCBias1 [0:N_NEURONS_1-1],
    input logic signed [DATA_WIDTH-1:0] FCBias2 [0:N_NEURONS_2-1],
    output logic signed [DATA_WIDTH-1:0] result_FC2 [0:N_NEURONS_2-1],
    output logic valid_out4
);

localparam ACC_WIDTH_1 = 2 * DATA_WIDTH + $clog2(N_KERNEL * N_CHANNELS);
localparam ACC_WIDTH_2 = 2 * DATA_WIDTH + $clog2(N_KERNEL * N_CHANNELS_2);

logic signed [ACC_WIDTH_1-1:0] result1 [0:N_FILTERS_LAYER_1-1][0:N_OUT-1];
logic signed [DATA_WIDTH-1:0] result1_quantized [0:N_FILTERS_LAYER_1-1][0:N_OUT-1];
logic signed [DATA_WIDTH-1:0] result1_relu [0:N_FILTERS_LAYER_1-1][0:N_OUT-1];
logic signed [DATA_WIDTH-1:0] result1_pooled [0:N_FILTERS_LAYER_1-1][0:N_OUT_POOLED-1];

logic signed [ACC_WIDTH_2-1:0] result2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
logic signed [DATA_WIDTH-1:0] result2_quantized [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
logic signed [DATA_WIDTH-1:0] result2_relu [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
logic signed [DATA_WIDTH-1:0] result2_pooled [0:N_FILTERS_LAYER_2-1][0:N_OUT_POOLED_2-1];

logic signed [DATA_WIDTH-1:0] result2_flatten [0:N_FLAT-1];
logic signed [DATA_WIDTH-1:0] result_FC1 [0:N_NEURONS_1-1];


logic valid_out1;
logic valid_out2;
logic valid_out3;

ConvLayer #(
    .DATA_WIDTH(DATA_WIDTH), //8 bits
    .IMG_SIZE(IMG_SIZE_1), //imagem 5x5
    .KERNEL_SIZE(KERNEL_SIZE), //kernel 3x3
    .N_CHANNELS(N_CHANNELS), //3 canais
    .N_FILTERS(N_FILTERS_LAYER_1), //16 filtros
    .PADDING(PADDING_1)
) ConvLayer1 (
    .clk(clk),
    .rst(rst),
    .start(start), //manda um pulso de start pra convLayer1...
    .imagem(imagem),
    .kernel(kernel1),
    .bias(ConvBias1),
    .result(result1),
    .valid_out(valid_out1)
);

genvar layer1;
genvar pos1;

generate
    for (layer1 = 0; layer1 < N_FILTERS_LAYER_1; layer1 = layer1 + 1) begin :gen_layer1
        for (pos1 = 0; pos1 < N_OUT; pos1 = pos1 + 1) begin :gen_pos1
            Quantizer #(
                .SIZE_IN(ACC_WIDTH_1),
                .SIZE_OUT(DATA_WIDTH),
                .SHIFT(SHIFT_1)
            ) QuantizerLayer1 (
                .in(result1[layer1][pos1]),
                .out(result1_quantized[layer1][pos1])
            );

            ReLU #(
                .DATA_WIDTH(DATA_WIDTH)
            ) ReLULayer1 (
                .in(result1_quantized[layer1][pos1]),
                .out(result1_relu[layer1][pos1])
            );
        end

        MaxPooling #(
            .DATA_WIDTH(DATA_WIDTH),
            .SIDE(OUT_SIZE_1) //imagem de entrada do tamanho da saída da primeira convolução
        ) maxPoolLayer1 (
            .imagem_in(result1_relu[layer1]),
            .imagem_out(result1_pooled[layer1])
        );
    end
endgenerate

ConvLayer #(
    .DATA_WIDTH(DATA_WIDTH),
    .IMG_SIZE(IMG_SIZE_2),
    .KERNEL_SIZE(KERNEL_SIZE),
    .N_CHANNELS(N_CHANNELS_2), //16 canais
    .N_FILTERS(N_FILTERS_LAYER_2), //32 filtros
    .PADDING(PADDING_2)
) ConvLayer2(
    .clk(clk),
    .rst(rst),
    .start(valid_out1), //começa quando a primeira camada manda que seus resultados estão válidos
    .imagem(result1_pooled),
    .kernel(kernel2),
    .bias(ConvBias2),
    .result(result2),
    .valid_out(valid_out2)
);

genvar layer2;
genvar pos2;

generate
    for (layer2 = 0; layer2 < N_FILTERS_LAYER_2; layer2 = layer2 + 1) begin :gen_layer2
        for (pos2 = 0; pos2 < N_OUT_2; pos2 = pos2 + 1) begin :gen_pos2
            Quantizer #(
                .SIZE_IN(ACC_WIDTH_2),
                .SIZE_OUT(DATA_WIDTH),
                .SHIFT(SHIFT_2)
            ) QuantizerLayer2 (
                .in(result2[layer2][pos2]),
                .out(result2_quantized[layer2][pos2])
            );

            ReLU #(
                .DATA_WIDTH(DATA_WIDTH)
            ) ReLULayer2 (
                .in(result2_quantized[layer2][pos2]),
                .out(result2_relu[layer2][pos2])
            );
        end

        MaxPooling #(
            .DATA_WIDTH(DATA_WIDTH),
            .SIDE(OUT_SIZE_2) //imagem de entrada do tamanho da saída da segunda convolução
        ) maxPoolLayer2 (
            .imagem_in(result2_relu[layer2]),
            .imagem_out(result2_pooled[layer2])
        );
    end
endgenerate

//Transforma todas as features em um único vetor de entrada
Flatten #(
    .DATA_WIDTH(DATA_WIDTH),
    .N_FEATURES(N_FILTERS_LAYER_2),
    .N_PIXELS_FEATURE(N_OUT_POOLED_2)
) flatten (
    .features_in(result2_pooled),
    .flat_out(result2_flatten)
);

FCLayer #(
    .DATA_WIDTH(DATA_WIDTH),
    .N_NEURONS(N_NEURONS_1),
    .WEIGHTS(N_FLAT),
    .SHIFT(SHIFT_3)
) FCLayer3 (
    .clk(clk),
    .valid_in(valid_out2), //começa quando a camada anterior mandar válido
    .rst(rst),
    .x(result2_flatten), //utiliza o vetor de entrada flatten, que é a saída da última camada conv
    .w(FCWeight1),
    .b(FCBias1),
    .z(result_FC1),
    .valid_out(valid_out3)
);

FCLayer #(
    .DATA_WIDTH(DATA_WIDTH),
    .N_NEURONS(N_NEURONS_2),
    .WEIGHTS(N_NEURONS_1),
    .SHIFT(SHIFT_4)
) FCLayer4 (
    .clk(clk),
    .valid_in(valid_out3),
    .rst(rst),
    .x(result_FC1), //as entradas da camada 2 são as saídas dos neurônios da camada 1
    .w(FCWeight2),
    .b(FCBias2),
    .z(result_FC2),
    .valid_out(valid_out4) //último valid, indicando o término da rede, e gerando um resultado final válido
);

endmodule
