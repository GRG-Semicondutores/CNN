module FeatureMap #(
    parameter ACC_WIDTH = 32,
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE =  3,
    parameter N_CHANNELS = 3,
    parameter PADDING = 0,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic [DATA_WIDTH-1:0] kernel [0:N_CHANNELS-1][0:N_KERNEL-1],
    output logic [DATA_WIDTH-1:0] result [0:N_OUT-1]
);

logic [DATA_WIDTH-1:0] partial_result [0:N_CHANNELS-1][0:N_OUT-1];

genvar c;

generate
    for (c = 0; c < N_CHANNELS; c = c + 1) begin
        Convolution #(
            .IMG_SIZE(IMG_SIZE),
            .DATA_WIDTH(DATA_WIDTH),
            .KERNEL_SIZE(KERNEL_SIZE),
            .ACC_WIDTH(ACC_WIDTH),
            .PADDING(PADDING)
        ) filters (
            .clk(clk),
            .rst(rst),
            .start(start),
            .imagem(imagem[c]),
            .kernel(kernel[c]),
            .result(partial_result[c])
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
