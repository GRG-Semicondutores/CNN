module ReLU #(
    parameter DATA_WIDTH = 32;
) (
    input logic signed [DATA_WIDTH-1:0] in,
    output logic signed [DATA_WIDTH-1:0] out
);

localparam MSB = DATA_WIDTH - 1;

// Saída assume 0 para entrada negativa, e assume a própria entrada, para entrada positiva. 
// Checa número negativo analisando o último bit: em complemento de 2, último bit 1 significa nº negativo.
assign out = in[MSB] ? '0 : in;

endmodule
