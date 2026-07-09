module CNN #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter N_CHANNELS = 3,
    parameter KERNEL_SIZE = 3,
    parameter N_FILTERS_LAYER_1 = 16,
    parameter N_FILTERS_LAYER_2 = 32,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE,
    localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE
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

convLayer #(
    .N_FILTERS(N_FILTERS_LAYER_1),
    .DATA_WIDTH(DATA_WIDTH),
    .IMG_SIZE(IMG_SIZE),
    .N_CHANNELS(N_CHANNELS),
    .KERNEL_SIZE(KERNEL_SIZE)
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

        maxPooling #(

        ) maxPoolLayer1 (

        );
    end
endgenerate

convLayer #(
    .N_FILTERS(N_FILTERS_LAYER_2),
    .DATA_WIDTH(DATA_WIDTH),
    .IMG_SIZE(IMG_SIZE),
    .N_CHANNELS(N_CHANNELS),
    .KERNEL_SIZE(KERNEL_SIZE)
) ConvLayer2(
    .clk(clk),
    .rst(rst),
    .start(start),
    .imagem(imagem),
    .kernel(kernel2),
    .result(result2)
);

genvar layer2;

generate
    for (layer2 = 0; layer2 < 32; layer2 = layer2 + 1) begin
        ReLU #(

        ) ReLULayer2 (

        );

        maxPooling #(

        ) maxPoolLayer2 (

        );
    end
endgenerate

FCLayer #(
    .N_NEURONS(128)
) FCLayer3 (

);

FCLayer #(
    .N_NEURONS(10)
) FCLayer4 (

);



endmodule
