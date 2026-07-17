module FCLayer #(
    parameter DATA_WIDTH = 8,
    parameter N_NEURONS = 10,
    parameter WEIGHTS = 2
) (
    input logic clk,
    input logic valid_in,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:WEIGHTS-1][0:N_NEURONS-1], // ERRO: a primeira dimensao e WEIGHTS, mas abaixo w[n] e usado como se ela fosse N_NEURONS; a fatia resultante tem N_NEURONS elementos, nao WEIGHTS.
    input logic signed [DATA_WIDTH-1:0] b [0:N_NEURONS-1],
    output logic signed [ACC_WIDTH-1:0] z [0:N_NEURONS-1], // ERRO DE ELABORACAO: ACC_WIDTH nao foi declarado em FCLayer; defina-o (2*DATA_WIDTH + $clog2(WEIGHTS)) para compatibilizar com Neuron.
    output logic valid_out
);

genvar n;

generate
    for (n = 0; n < N_NEURONS; n = n + 1) begin
        Neuron #(
            .WEIGHTS(WEIGHTS),
            .DATA_WIDTH(DATA_WIDTH)
        ) neuron (
            .clk(clk),
            .valid_in(valid_in),
            .x(x),
            .w(w[n]), // ERRO: seleciona a dimensao de pesos pelo indice do neuronio; alem de transpor a matriz, entrega N_NEURONS elementos a uma porta que exige WEIGHTS.
            .b(b[n]),
            .z(z[n]),
            .valid_out(valid_out) // ERRO: cada instancia de Neuron dirige a mesma variavel valid_out; ha multiplos drivers. Use um sinal por neuronio ou conecte somente uma instancia.
        );
    end
endgenerate

endmodule
