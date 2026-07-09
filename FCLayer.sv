module FCLayer #(
    parameter N_NEURONS = 10,
    parameter WEIGHTS = 2,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32
) (
    input logic clk,
    input logic valid_in,
    input logic signed [DATA_WIDTH-1:0] x [0:WEIGHTS-1],
    input logic signed [DATA_WIDTH-1:0] w [0:WEIGHTS-1],
    input logic signed [ACC_WIDTH-1:0] b,
    output logic signed [ACC_WIDTH-1:0] z,
    output logic valid_out
);

genvar n;

generate 
    for (n = 0; n < N_NEURONS; n = n + 1) begin
        Neuron #(
            .WEIGHTS(WEIGHTS),
            .DATA_WIDTH(DATA_WIDTH),
            .ACC_WIDTH(ACC_WIDTH)
        ) neuron (
            .clk(clk),
            .valid_in(valid_in),
            .x(x),
            .w(w),
            .b(b),
            .z(z),
            .valid_out(valid_out)
        );
    end
endgenerate

endmodule
