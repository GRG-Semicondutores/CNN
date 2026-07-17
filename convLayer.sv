module ConvLayer #(
    parameter ACC_WIDTH = 32,
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE = 3,
    parameter N_CHANNELS = 3,
    parameter N_FILTERS = 10,
    parameter PADDING = 0,

    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1, // ERRO: PADDING foi omitido; deve ser IMG_SIZE + 2*PADDING - KERNEL_SIZE + 1. Com PADDING=1, CNN espera 32x32, mas esta porta tem 30x30.
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam N_PIXELS = IMG_SIZE * IMG_SIZE

) (
    input logic clk,
    input logic rst,
    input logic start,
    input logic [DATA_WIDTH-1:0] imagem [0:N_CHANNELS-1][0:N_PIXELS-1], // ERRO: CNN fornece dados signed, mas esta porta os converte para unsigned antes de FeatureMap/Convolution.
    input logic [DATA_WIDTH-1:0] kernel [0:N_FILTERS-1][0:N_CHANNELS-1][0:N_KERNEL-1], // ERRO: CNN fornece kernels signed, mas esta porta os converte para unsigned.
    output logic [DATA_WIDTH-1:0] result [0:N_FILTERS-1][0:N_OUT-1] // ERRO: FeatureMap produz ACC_WIDTH_FMAP bits por posicao; a porta de 8 bits descarta os bits mais significativos sem quantizacao.
);

genvar n;

generate
    for (n = 0; n < N_FILTERS; n = n + 1) begin
        FeatureMap #(
            .DATA_WIDTH(DATA_WIDTH),
            .IMG_SIZE(IMG_SIZE),
            .N_CHANNELS(N_CHANNELS),
            .KERNEL_SIZE(KERNEL_SIZE),
            .ACC_WIDTH(ACC_WIDTH), // ERRO: FeatureMap nao declara o parametro ACC_WIDTH; o compilador ignora esta sobrescrita.
            .PADDING(PADDING)
        ) filter (
            .clk(clk),
            .rst(rst),
            .start(start),
            .imagem(imagem),
            .kernel(kernel[n]),
            .result(result[n]) // ERRO: liga a saida acumulada de FeatureMap a um vetor DATA_WIDTH, causando truncamento de largura.
        );
    end
endgenerate

endmodule
