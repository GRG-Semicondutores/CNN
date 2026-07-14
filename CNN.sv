module CNN #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE_1 = 32,
    parameter N_CHANNELS = 3,
    parameter KERNEL_SIZE = 3,
    parameter N_FILTERS_LAYER_1 = 16,
    parameter N_FILTERS_LAYER_2 = 32,
    parameter PADDING_1 = 1,
    parameter PADDING_2 = 1,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam N_PIXELS = IMG_SIZE_1 * IMG_SIZE_1,
    localparam OUT_SIZE_1 = IMG_SIZE_1 + 2 * PADDING_1 - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE_1 * OUT_SIZE_1,
    localparam N_OUT_POOLED = N_OUT / 4,
    localparam IMG_SIZE_2 = OUT_SIZE_1 / 2,
    localparam N_CHANNELS_2 = N_FILTERS_LAYER_1,
    localparam OUT_SIZE_2 = IMG_SIZE_2 + 2 * PADDING_2 - KERNEL_SIZE + 1,
    localparam N_OUT_2 = OUT_SIZE_2 * OUT_SIZE_2,
    localparam N_OUT_POOLED_2 = N_OUT_2 / 4,
    localparam N_NEURONS_1 = 128,
    localparam N_NEURONS_2 = 10
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel1 [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1],
    input logic signed [DATA_WIDTH-1:0] kernel2 [0:N_FILTERS_LAYER_2-1][0:N_CHANNELS-1][0:N_KERNEL-1]

);



logic signed [DATA_WIDTH-1:0] result1 [0:N_FILTERS_LAYER_1-1][0:N_OUT-1];
logic signed [DATA_WIDTH-1:0] result1_relu [0:N_FILTERS_LAYER_1-1][0:N_OUT-1];
logic signed [DATA_WIDTH-1:0] result1_pooled [0:N_FILTERS_LAYER_1-1][0:N_OUT_POOLED-1];

logic signed [DATA_WIDTH-1:0] result2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
logic signed [DATA_WIDTH-1:0] result2_relu [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
logic signed [DATA_WIDTH-1:0] result2_pooled [0:N_FILTERS_LAYER_2-1][0:N_OUT_POOLED_2-1];

ConvLayer #(
    .N_FILTERS(N_FILTERS_LAYER_1), //16 filtros
    .DATA_WIDTH(DATA_WIDTH), //8 bits
    .IMG_SIZE(IMG_SIZE_1), //imagem 5x5
    .N_CHANNELS(N_CHANNELS), //3 canais
    .KERNEL_SIZE(KERNEL_SIZE), //kernel 3x3
    .ACC_WIDTH(ACC_WIDTH),
    .PADDING(PADDING_1)
) ConvLayer1 (
    .clk(clk),
    .rst(rst),
    .start(start),
    .imagem(imagem),
    .kernel(kernel1),
    .result(result1)
);

genvar layer1;
genvar pos1;

generate
    for (layer1 = 0; layer1 < N_FILTERS_LAYER_1; layer1 = layer1 + 1) begin
        for (pos1 = 0; pos1 < N_OUT; pos1 = pos1 + 1) begin
            ReLU #(
                .DATA_WIDTH(DATA_WIDTH)
            ) ReLULayer1 (
                .in(result1[layer1][pos1]),
                .out(result1_relu[layer1][pos1])
            );
        end

        MaxPooling #(
            .SIDE(OUT_SIZE_1), //imagem de entrada do tamanho da saída da primeira convolução
            .DATA_WIDTH(DATA_WIDTH)
        ) maxPoolLayer1 (
            .imagem_in(result1_relu[layer1]),
            .imagem_out(result1_pooled[layer1])
        );
    end
endgenerate

ConvLayer #(
    .N_FILTERS(N_FILTERS_LAYER_2),
    .DATA_WIDTH(DATA_WIDTH),
    .IMG_SIZE(IMG_SIZE_2),
    .N_CHANNELS(N_CHANNELS_2),
    .KERNEL_SIZE(KERNEL_SIZE)
) ConvLayer2(
    .clk(clk),
    .rst(rst),
    .start(start),
    .imagem(result1_pooled),
    .kernel(kernel2),
    .result(result2)
);

genvar layer2;
genvar pos2;

generate
    for (layer2 = 0; layer2 < N_FILTERS_LAYER_2; layer2 = layer2 + 1) begin
        for (pos2 = 0; pos2 < N_OUT_2; pos2 = pos2 + 1) begin
            ReLU #(
                .DATA_WIDTH(DATA_WIDTH)
            ) ReLULayer2 (
                .in(result2[layer2][pos2]),
                .out(result2_relu[layer2][pos2])
            );
        end

        MaxPooling #(
            .SIDE(OUT_SIZE_2), //imagem de entrada do tamanho da saída da segunda convolução
            .DATA_WIDTH(DATA_WIDTH)
        ) maxPoolLayer2 (
            .imagem_in(result2_relu[layer2]),
            .imagem_out(result2_pooled[layer2])
        );
    end
endgenerate

FCLayer #(
    .DATA_WIDTH(DATA_WIDTH),
    .ACC_WIDTH(32),
    .WEIGHTS(),
    .N_NEURONS(N_NEURONS_1)
) FCLayer3 (

);

FCLayer #(
    .DATA_WIDTH(DATA_WIDTH),
    .ACC_WIDTH(32),
    .WEIGHTS(),
    .N_NEURONS(N_NEURONS_2)
) FCLayer4 (

);

endmodule
