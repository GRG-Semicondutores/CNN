module featureMap #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter N_CHANNELS = 3
) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic [DATA_WIDTH-1:0] kernel [0:N_CHANNELS-1][0:N_KERNEL-1],
    output logic [DATA_WIDTH-1:0] result [0:N_OUT-1]
);

localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE;
localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1;
localparam N_OUT = OUT_SIZE * OUT_SIZE;

logic [DATA_WIDTH-1:0] partial_result [0:N_CHANNELS-1][0:N_OUT-1];

genvar c;

generate
    for (c = 0; c < N_CHANNELS; c = c + 1) begin
        convolution #(
            .IMG_SIZE(IMG_SIZE),
            .DATA_WIDTH(DATA_WIDTH)
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

always @(*) begin
    for (i = 0; i < N_CHANNELS; i = i + 1) begin
        result[j] = '0;

        for (j = 0; j < N_PIXELS; j = j + 1) begin
            result[j] += partial_result[i][j];
        end
    end
end

endmodule
