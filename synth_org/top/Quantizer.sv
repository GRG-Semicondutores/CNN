module Quantizer #(
    parameter SIZE_IN = 16, //tamanho do barramento de entrada (geralmente vem de multiplicações e somas acumuladas)
    parameter SIZE_OUT = 8, //tamanho do barramento de saída
    /*
    |  O shift é sempre válido somente se as escalas forem potências de 2, pois um shift divide/multiplica por 2.
    |  Felizmente, as escalas fracionárias utilizadas em ponto fixo são sempre potências de 2.
    |  O shift serve para REALINHAR a escala fracionária escolhida para as camadas trabalharem.
    |  Ex: inputs em Q1.7 e weights em Q1.7. A multiplicação entre eles vai gerar um Q2.14. A escala que a outra camada espera também é Q1.7
    |  Logo, espera-se que o shift elimine 7 bits fracionários da escala resultante para voltar à escala desejada. Então a conta do shift é
    |  num_de_bits_frac_input + num_de_bits_frac_weights - num_de_bits_frac_output.
    |  Isso gera Q2.7 (9 bits). Como o registro de saída so reserva SIZE_OUT bits (formato Q1.7, 8 bits), qualquer valor cujo resultado real precise
    |  do segundo bit inteiro será saturado no máximo/mínimo de Q1.7.
    */
    parameter SHIFT = 1,
    localparam signed [SIZE_IN-1:0] QMAX = (1 <<< (SIZE_OUT - 1)) - 1, // valor máximo positivo. Ex: 8 bits = 1 << 7 - 1 = 10000000 - 1 = 0111111
    localparam signed [SIZE_IN-1:0] QMIN = -(1 <<< (SIZE_OUT - 1)) // valor mínimo negativo. Ex: 8 bits = 1 << 7 = 10000000
) (
    input logic signed [SIZE_IN-1:0] in,
    output logic signed [SIZE_OUT-1:0] out
);

    logic signed [SIZE_IN-1:0] rounded;
    // in + (1 com shift de SHIFT - 1) introduz "meio bit" na escala de saída (shift de SHIFT é igual a um shift de (SHIFT - 1) / 2), serve para não ocorrer arredondamento
    // sempre para baixo.
    assign rounded = (in + (1 <<< (SHIFT - 1))) >>> (SHIFT); // ERRO DE PARAMETRIZACAO: requer SIZE_IN > SIZE_OUT; com SHIFT <= 0, SHIFT-1 e deslocamentos negativos/inadequados.

    // Introduz saturação para, caso o número shiftado para escala de saída dê maior que a máxima representação possível com o número de saída de bits,
    // ou menor que a mínima representação, o resultado sature.
    assign out = ((rounded > QMAX) ? QMAX[SIZE_OUT-1:0] : ((rounded < QMIN) ? QMIN : rounded[SIZE_OUT-1:0]));
endmodule
