`ifndef CNN_TB_PARAMS_SVH
`define CNN_TB_PARAMS_SVH
// Contrato de interface da bancada funcional; nenhuma leitura da implementacao.
localparam int DATA_WIDTH        = 8;
localparam int IMG_SIZE_1        = 4;
localparam int KERNEL_SIZE       = 3;
localparam int N_CHANNELS        = 1;
localparam int N_FILTERS_LAYER_1 = 2;
localparam int N_FILTERS_LAYER_2 = 2;
localparam int PADDING_1         = 1;
localparam int PADDING_2         = 1;
localparam int N_NEURONS_1       = 2;
localparam int N_NEURONS_2       = 2;
localparam int SHIFT_1           = 1;
localparam int SHIFT_2           = 1;
localparam int SHIFT_3           = 1;
localparam int SHIFT_4           = 1;

localparam int N_PIXELS          = IMG_SIZE_1 * IMG_SIZE_1;
localparam int N_KERNEL          = KERNEL_SIZE * KERNEL_SIZE;
localparam int OUT_SIZE_1        = IMG_SIZE_1 + 2*PADDING_1 - KERNEL_SIZE + 1;
localparam int N_OUT_1           = OUT_SIZE_1 * OUT_SIZE_1;
localparam int IMG_SIZE_2        = OUT_SIZE_1 / 2;
localparam int OUT_SIZE_2        = IMG_SIZE_2 + 2*PADDING_2 - KERNEL_SIZE + 1;
localparam int N_OUT_2           = OUT_SIZE_2 * OUT_SIZE_2;
localparam int N_OUT_POOLED_2    = N_OUT_2 / 4;
localparam int N_FLAT            = N_OUT_POOLED_2 * N_FILTERS_LAYER_2;
localparam int KERNEL_CENTER     = N_KERNEL / 2;
localparam time CLK_PERIOD       = 10ns;

typedef logic signed [DATA_WIDTH-1:0] data_t;
typedef enum int {W00, W01, W02, W03} weight_id_t;

typedef struct packed {
    logic [N_CHANNELS-1:0][N_PIXELS-1:0][DATA_WIDTH-1:0] imagem;
    logic [N_FILTERS_LAYER_1-1:0][N_CHANNELS-1:0][N_KERNEL-1:0][DATA_WIDTH-1:0] kernel1;
    logic [N_FILTERS_LAYER_2-1:0][N_FILTERS_LAYER_1-1:0][N_KERNEL-1:0][DATA_WIDTH-1:0] kernel2;
    logic [N_NEURONS_1-1:0][N_FLAT-1:0][DATA_WIDTH-1:0] FCWeight1;
    logic [N_NEURONS_2-1:0][N_NEURONS_1-1:0][DATA_WIDTH-1:0] FCWeight2;
    logic [N_FILTERS_LAYER_1-1:0][DATA_WIDTH-1:0] ConvBias1;
    logic [N_FILTERS_LAYER_2-1:0][DATA_WIDTH-1:0] ConvBias2;
    logic [N_NEURONS_1-1:0][DATA_WIDTH-1:0] FCBias1;
    logic [N_NEURONS_2-1:0][DATA_WIDTH-1:0] FCBias2;
} cnn_payload_t;
// Mesmo formato signed por elemento usado nas portas publicas de saida.
typedef data_t cnn_result_t [0:N_NEURONS_2-1];

function automatic logic [1023:0] cnn_label_bits(input string label);
    logic [1023:0] value='0;
    for (int i=0;i<label.len() && i<128;i++) begin
        value=value<<8;
        value[7:0]=byte'(label.getc(i));
    end
    return value;
endfunction
`endif
