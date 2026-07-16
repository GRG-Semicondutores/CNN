module FCLayer #(
    parameter DATA_WIDTH = 8,
    parameter N_NEURONS = 10,
    parameter WEIGHTS = 2
) (
    input logic clk,
    input logic valid_in,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:WEIGHTS-1][0:N_NEURONS-1],
    input logic signed [DATA_WIDTH-1:0] b [0:N_NEURONS-1],
    output logic signed [ACC_WIDTH-1:0] z [0:N_NEURONS-1],
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
            .w(w[n]),
            .b(b[n]),
            .z(z[n]),
            .valid_out(valid_out)
        );
    end
endgenerate

endmodule
