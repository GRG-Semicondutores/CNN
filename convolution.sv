module convolution #(
    parameter IMG_SIZE = 5,
    parameter KERNEL_SIZE = 3,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32
) (
    input logic signed [DATA_WIDTH-1:0] imagem [0:N_PIXELS-1],
    input logic signed [DATA_WIDTH-1:0] kernel [0:N_KERNEL-1],
    output logic signed [ACC_WIDTH-1:0] result [0:N_OUT-1]
);

localparam N_PIXELS = IMG_SIZE * IMG_SIZE;
localparam N_KERNEL = KERNEL_SIZE * KERNEL_SIZE;
localparam OUT_SIZE = IMG_SIZE - KERNEL_SIZE + 1;
localparam N_OUT = OUT_SIZE * OUT_SIZE;

logic signed [DATA_WIDTH-1:0] imagem_slice [0:N_KERNEL-1];

//todo: saída result deve ser populada um a um pelo pipeline do dotProduct
//bias em convolução
//implementar estratégias de valid no dotProduct para saber quando pode mandar a próxima
DotProduct #(
    .DATA_WIDTH(DATA_WIDTH),
    .ACC_WIDTH(ACC_WIDTH),
    .N_INPUTS(N_KERNEL)
) convolve (
    .clk(clk),
    .input_vec(imagem_slice),
    .weight(kernel),
    .out(result)
);

always_comb begin : conv_comb
    conv = conv_row + IMG_SIZE * conv_col;
end

always @(posedge clk) begin
    if (rst) begin
        conv <= 0;
        conv_row <= 0;
        conv_col <= 0;
    end else begin
        if (conv_row < OUT_SIZE - 1) begin
            conv_row <= conv_row + 'b1;
        end else if (conv_col < OUT_SIZE - 1) begin
            conv_row <= 0;
            conv_col <= conv_col + 'b1;
        end else begin
            valid = 1'b1;
        end
    end
end

always @(*) begin
    for (i = 0; i < KERNEL_SIZE; i = i + 1) begin
        for (j = 0; j < KERNEL_SIZE; j = j + 1) begin
            imagem_slice[KERNEL_SIZE * i + j] = imagem[(IMG_SIZE * i) + j + conv];
        end
    end
end


endmodule
