module Quantizer #(
    parameter SIZE_IN = 16,
    parameter SIZE_OUT = 8,

    localparam SHIFT = SIZE_IN - SIZE_OUT, // O shift (divide/multiplica por 2) da diferença entre as escalas é sempre válido somente se as escalas forem potências de 2.
    localparam signed [SIZE_IN-1:0] QMAX = (1 <<< (SIZE_OUT - 1)) - 1, // valor máximo positivo. Ex: 8 bits = 1 << 7 - 1 = 10000000 - 1 = 0111111
    localparam signed [SIZE_IN-1:0] QMIN = -(1 <<< (SIZE_OUT - 1)) // valor mínimo negativo. Ex: 8 bits = 1 << 7 = 10000000
) (
    input logic signed [SIZE_IN-1:0] in,
    output logic signed [SIZE_OUT-1:0] out
);

    logic signed [SIZE_IN-1:0] rounded;
    // in + (1 com shift de SHIFT - 1) introduz "meio bit" na escala de saída (shift de SHIFT é igual a um shift de (SHIFT - 1) / 2), serve para não ocorrer arredondamento
    // sempre para baixo.
    assign rounded = (in + (1 <<< (SHIFT - 1))) >>> (SHIFT);

    // Introduz saturação para, caso o número shiftado para escala de saída dê maior que a máxima representação possível com o número de saída de bits, 
    // ou menor que a mínima representação, o resultado sature.
    assign out = ((rounded > QMAX) ? QMAX[SIZE_OUT-1:0] : ((rounded < QMIN) ? QMIN : rounded[SIZE_OUT-1:0]));
endmodule
