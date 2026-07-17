`define MAX2(a,b) (((a) > (b)) ? (a) : (b))

/* MaxPooling pega o maior elemento dentre quatro elementos e joga na saída. Imagem deve ser NxN com N par */
module MaxPooling #(
    parameter DATA_WIDTH = 8,
    parameter SIDE = 4,

    localparam SIDE_POOLED = SIDE / 2,
    localparam N_PIXELS = SIDE * SIDE,
    localparam N_PIXELS_POOLED = SIDE_POOLED * SIDE_POOLED
) (
    input logic [DATA_WIDTH-1:0] imagem_in [0:N_PIXELS-1], // ERRO DE TIPO: CNN conecta result*_relu signed a esta porta unsigned; preserve signed para que a interface seja compativel, mesmo que ReLU torne os valores nao negativos.
    output logic [DATA_WIDTH-1:0] imagem_out [0:N_PIXELS_POOLED-1] // ERRO DE TIPO: CNN recebe este vetor em logic signed; a interface do pooling nao e consistente com os demais mapas de caracteristicas.
);



genvar i;
genvar j;

generate
    for (i = 0; i < SIDE; i = i + 2) begin :pool_row
        for (j = 0; j < SIDE; j = j + 2) begin :pool_col
            assign imagem_out[((SIDE * i) / 4)  + (j / 2)] = `MAX2(
                `MAX2(imagem_in[SIDE * (i) + j], imagem_in[SIDE * (i) + j + 1]), 
                `MAX2(imagem_in[SIDE * (i + 1) + j], imagem_in[SIDE * (i + 1) + j + 1])
                );
        end
    end
endgenerate

endmodule
