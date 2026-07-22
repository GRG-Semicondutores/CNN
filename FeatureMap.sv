/* Módulo FeatureMap declara N_CHANNELS blocos de convolução e os soma para formar a feature map final */
module FeatureMap #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE =  3,
    parameter N_CHANNELS = 3,
    parameter PADDING = 0,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(N_KERNEL),
    localparam ACC_WIDTH_FMAP = ACC_WIDTH + $clog2(N_CHANNELS),
    localparam OUT_SIZE = IMG_SIZE + 2 * PADDING - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic signed [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel [0:N_CHANNELS-1][0:N_KERNEL-1],
    input logic signed [DATA_WIDTH-1:0] bias [0:N_CHANNELS-1], // ERRO: ConvLayer nao conecta este barramento. Alem disso, uma CNN normalmente usa um unico bias por filtro, somado apos reduzir todos os canais, e nao um bias por canal.
    output logic signed [ACC_WIDTH_FMAP-1:0] result [0:N_OUT-1],
    output logic valid_out
);

logic signed [ACC_WIDTH-1:0] partial_result [0:N_CHANNELS-1][0:N_OUT-1];
logic partial_valid_out [0:N_CHANNELS-1];

genvar c;

assign valid_out = &partial_valid_out; //este bloco só manda um valid_out quando todos os valid_out dos blocos convolucionais estiverem válidos.

generate
    for (c = 0; c < N_CHANNELS; c = c + 1) begin :gen_channels
        Convolution #(
            .IMG_SIZE(IMG_SIZE),
            .DATA_WIDTH(DATA_WIDTH),
            .KERNEL_SIZE(KERNEL_SIZE),
            .PADDING(PADDING)
        ) filters (
            .clk(clk),
            .rst(rst),
            .start(start), //propaga o pulso de start para o convolution
            .imagem(imagem[c]),
            .kernel(kernel[c]),
            .bias(bias[c]),
            .result(partial_result[c]),
            .valid_out(partial_valid_out[c]) //junta todos os valid_out dos blocos convolucionais
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
