module FeatureMap #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE =  3,
    parameter N_CHANNELS = 3,
    parameter PADDING = 0,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam ACC_WIDTH = DATA_WIDTH * DATA_WIDTH + $clog2(N_KERNEL), // ERRO: produto de dois operandos DATA_WIDTH requer 2*DATA_WIDTH bits, nao DATA_WIDTH*DATA_WIDTH; a mesma formula inconsistente e repetida em Convolution/DotProduct.
    localparam ACC_WIDTH_FMAP = ACC_WIDTH + $clog2(N_CHANNELS),
    localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1, // ERRO: PADDING foi omitido; Convolution gera (IMG_SIZE + 2*PADDING - KERNEL_SIZE + 1)^2 valores, enquanto partial_result/result foram dimensionados sem padding.
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1], // ERRO: esta interface e unsigned, mas Convolution espera signed; amostras negativas mudam de significado.
    input logic [DATA_WIDTH-1:0] kernel [0:N_CHANNELS-1][0:N_KERNEL-1], // ERRO: esta interface e unsigned, mas Convolution espera signed; pesos negativos mudam de significado.
    output logic [ACC_WIDTH_FMAP-1:0] result [0:N_OUT-1]
);

logic [ACC_WIDTH-1:0] partial_result [0:N_CHANNELS-1][0:N_OUT-1];

genvar c;

generate
    for (c = 0; c < N_CHANNELS; c = c + 1) begin
        Convolution #(
            .IMG_SIZE(IMG_SIZE),
            .DATA_WIDTH(DATA_WIDTH),
            .KERNEL_SIZE(KERNEL_SIZE),
            .PADDING(PADDING)
        ) filters (
            .clk(clk),
            .rst(rst),
            .start(start),
            .imagem(imagem[c]),
            .kernel(kernel[c]),
            // ERRO: a porta obrigatoria bias de Convolution nao esta conectada; cada convolucao soma Z/X ao resultado.
            .result(partial_result[c]) // ERRO: com PADDING diferente de zero, Convolution tem N_OUT com padding e partial_result tem N_OUT sem padding.
        );
    end
endgenerate

integer i;
integer j;

always @(*) begin
    for (j = 0; j < N_OUT; j = j + 1) begin
        result[j] = '0;

        for (i = 0; i < N_CHANNELS; i = i + 1) begin
            result[j] += partial_result[i][j];
        end
    end
end

endmodule
