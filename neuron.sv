module Neuron #(
    parameter WEIGHTS = 2,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32
)
(
    input logic clk,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:WEIGHTS-1],
    input logic signed [ACC_WIDTH-1:0] b,
    output logic signed [ACC_WIDTH-1:0] z
);

    logic signed [ACC_WIDTH-1:0] y_1;
    logic signed [ACC_WIDTH-1:0] y;
    
    DotProduct #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH),
        .N_INPUTS(WEIGHTS)
    ) neuronMAC (
        .clk(clk),
        .input_vec(x),
        .weight(w),
        .out(y_1)
    );

    ReLU #(
        .DATA_WIDTH(ACC_WIDTH)
    ) activationFunction (
        .in(y),
        .out(z)
    );

    assign y = y_1 + b;

endmodule