/* Módulo ConvLayer utilizado como abstração para declarar N_FILTERS feature maps para a camada */
module ConvLayer #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE = 3,
    parameter N_CHANNELS = 3,
    parameter N_FILTERS = 10,
    parameter PADDING = 0,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam OUT_SIZE = IMG_SIZE + 2 * PADDING - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE,
    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(N_KERNEL * N_CHANNELS)

) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic signed [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel [0:N_FILTERS-1][0:N_CHANNELS-1][0:N_KERNEL-1],
    input logic signed [DATA_WIDTH-1:0] bias [0:N_FILTERS-1],
    output logic signed [ACC_WIDTH-1:0] result [0:N_FILTERS-1][0:N_OUT-1],
    output logic valid_out
);

logic [0:N_FILTERS-1] partial_valid_out;

assign valid_out = &partial_valid_out; //só manda valid_out se todos os valid_out das features estiverem válidos.

genvar n;

generate
    for (n = 0; n < N_FILTERS; n = n + 1) begin :gen_feature_maps
        FeatureMap #(
            .DATA_WIDTH(DATA_WIDTH),
            .IMG_SIZE(IMG_SIZE),
            .N_CHANNELS(N_CHANNELS),
            .KERNEL_SIZE(KERNEL_SIZE),
            .PADDING(PADDING)
        ) filter (
            .clk(clk),
            .rst(rst),
            .start(start), //ConvLayer propaga o pulso de start para os feature maps...
            .imagem(imagem),
            .kernel(kernel[n]),
            .bias(bias[n]),
            .result(result[n]),
            .valid_out(partial_valid_out[n]) //pega todos os valid_out de todos os featureMaps
        );
    end
endgenerate

endmodule
