module Neuron #(
    parameter DATA_WIDTH = 8,
    parameter WEIGHTS = 2,

    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(WEIGHTS)
) (
    input logic clk,
    input logic valid_in,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] b,
    output logic signed [ACC_WIDTH-1:0] z,
    output logic valid_out
);

logic signed [ACC_WIDTH-1:0] y_1;
logic signed [ACC_WIDTH-1:0] y;

DotProduct #(
    .DATA_WIDTH(DATA_WIDTH),
    .N_INPUTS(WEIGHTS)
) neuronMAC (
    .clk(clk),
    .input_vec(x),
    .weight(w),
    .out(y_1),
    .valid_in(valid_in),
    .valid_out(valid_out)
);

ReLU #(
    .DATA_WIDTH(ACC_WIDTH)
) activationFunction (
    .in(y),
    .out(z)
);

assign y = y_1 + {{(ACC_WIDTH - DATA_WIDTH){b[DATA_WIDTH-1]}}, b};

endmodule
