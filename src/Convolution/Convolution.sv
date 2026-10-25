module Convolution #(
    parameter DATA_WIDTH = 8,
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE = 3,
    parameter PADDING = 0,

    localparam N_PIXELS = IMG_SIZE * IMG_SIZE,
    localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE,
    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(N_KERNEL),
    localparam OUT_SIZE = IMG_SIZE + 2 * PADDING - KERNEL_SIZE + 1,
    localparam N_OUT = OUT_SIZE * OUT_SIZE,
    localparam BIT_COUNT = $clog2(N_OUT + 1),
    localparam BIT_CONV = $clog2(OUT_SIZE)
) (
    input logic clk,
    input logic rst,
    input logic signed [DATA_WIDTH-1:0] imagem [0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel [0:N_KERNEL-1],
    input logic start,
    output logic signed [ACC_WIDTH-1:0] result [0:N_OUT-1],
    output logic valid_out //Quando a convolução está concluída e a saída está pronta, valid_out se torna 1
);



logic signed [DATA_WIDTH-1:0] imagem_slice [0:N_KERNEL-1];
logic signed [ACC_WIDTH-1:0] single_result;
logic [BIT_COUNT-1:0] count;
logic [BIT_CONV-1:0] conv_row;
logic [BIT_CONV-1:0] conv_col;
logic valid_product;
logic valid_in;

DotProduct #(
    .DATA_WIDTH(DATA_WIDTH),
    .N_INPUTS(N_KERNEL)
) convolve (
    .clk(clk),
    .rst(rst),
    .input_vec(imagem_slice),
    .weight(kernel),
    .valid_in(valid_in),
    .valid_out(valid_product),
    .out(single_result)
);

always @(posedge clk) begin :conv_window
    if (rst) begin
        conv_row <= 0;
        conv_col <= 0;
        valid_in <= 0;
    end else if (start) begin //start é um único pulso de clock que deve ser enviado quando tem uma imagem pronta para passar pelo processamento
        if (valid_in == 0) begin
            valid_in <= 1'b1;
            conv_row <= 0;
            conv_col <= 0;
        end

    end else if (valid_in) begin //valid_in diz ao bloco de MAC (dotProduct) que está sendo enviado um dado válido para ele poder validar a saída
        if (conv_col < OUT_SIZE - 1) begin
            conv_col <= conv_col + 'b1;
        end else if (conv_row < OUT_SIZE - 1) begin
            conv_col <= 0;
            conv_row <= conv_row + 'b1; //desliza as linhas
        end else if (conv_row == (OUT_SIZE - 1) && conv_col == (OUT_SIZE - 1)) begin //terminou de deslizar, acabaram as entradas válidas, pois terminou a convolução
            valid_in <= 1'b0;
        end
    end
end

integer i;
integer j;

integer row;
integer col;



//image_slice é o pedaço de imagem com tamanho do kernel que vai ser enviado para o MAC junto com o kernel
always @(*) begin
    for (i = 0; i < KERNEL_SIZE; i = i + 1) begin
        for (j = 0; j < KERNEL_SIZE; j = j + 1) begin
            row = conv_row + i - PADDING;
            col = conv_col + j - PADDING;
            if (row < 0 || row >= IMG_SIZE || col < 0 || col >= IMG_SIZE)
                imagem_slice[KERNEL_SIZE * i + j] = 0;
            else
                imagem_slice[KERNEL_SIZE * i + j] = imagem[IMG_SIZE * row + col];
        end
    end
end

always @(posedge clk) begin // ERRO: count e valid_out tambem sao escritos pelo bloco conv_window; mantenha cada registrador em somente um always_ff/always.
    if (rst) begin
        count <= 1'b0;
        valid_out <= 1'b0;
    end else begin
        if (count < N_OUT) begin
            valid_out <= 1'b0; //valid_out sinaliza a saída deste bloco com os resultados prontos
            if (valid_product) begin//valid_product é enviado pelo dotProduct para saber se há uma saída válida no resultado do pipeline
                result[count] <= single_result;
                count <= count + 1;
            end
        end else begin //terminou de contar, saída válida
            count <= 0;
            valid_out <= 1'b1;
        end
    end
end


endmodule
