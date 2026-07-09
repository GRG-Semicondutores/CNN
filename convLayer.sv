module convLayer #(
    parameter DATA_WIDTH = 8,
    parameter N_FILTERS = 10,
    parameter IMG_SIZE = 5,
    parameter N_CHANNELS = 3,
    parameter KERNEL_SIZE = 3,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE

) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic [DATA_WIDTH-1:0] kernel [0:N_FILTERS-1][0:N_CHANNELS-1][0:N_KERNEL-1],
    output logic [DATA_WIDTH-1:0] result [0:N_FILTERS-1][0:N_OUT-1]
);



genvar n;

generate 
    for (n = 0; n < N_FILTERS; n = n + 1) begin
        featureMap #(
            .DATA_WIDTH(DATA_WIDTH),
            .IMG_SIZE(IMG_SIZE),
            .N_CHANNELS(N_CHANNELS),
            .KERNEL_SIZE(KERNEL_SIZE)
        ) filter (
            .clk(clk),
            .rst(rst),
            .start(start),
            .imagem(imagem),
            .kernel(kernel[n]),
            .result(result[n])
        );
    end
endgenerate

endmodule
