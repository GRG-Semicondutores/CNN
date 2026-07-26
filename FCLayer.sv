module FCLayer #(
    parameter DATA_WIDTH = 8,
    parameter N_NEURONS = 10,
    parameter WEIGHTS = 2,
    parameter SHIFT = 1,

    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(WEIGHTS)
) (
    input logic clk,
    input logic valid_in,
    input logic rst,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:N_NEURONS-1][0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] b [0:N_NEURONS-1],
    output logic signed [DATA_WIDTH-1:0] z [0:N_NEURONS-1],
    output logic valid_out
);

logic [0:N_NEURONS-1] partial_valid_out;
logic [ACC_WIDTH-1:0] z_not_quantized [0:N_NEURONS-1];

assign valid_out = &partial_valid_out;

genvar n;

generate
    for (n = 0; n < N_NEURONS; n = n + 1) begin :gen_neurons
        Neuron #(
            .WEIGHTS(WEIGHTS),
            .DATA_WIDTH(DATA_WIDTH)
        ) neuron (
            .clk(clk),
            .valid_in(valid_in),
            .rst(rst),
            .x(x),
            .w(w[n]),
            .b(b[n]),
            .z(z_not_quantized[n]),
            .valid_out(partial_valid_out[n])
        );

        Quantizer #(
            .SIZE_IN(ACC_WIDTH),
            .SIZE_OUT(DATA_WIDTH),
            .SHIFT(SHIFT)
        ) quantizer (
            .in(z_not_quantized[n]),
            .out(z[n])
        );
    end
endgenerate

endmodule
