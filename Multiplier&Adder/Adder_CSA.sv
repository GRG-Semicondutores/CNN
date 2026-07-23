module Adder_CSA #(parameter int ADD_LENGTH = 4) (
    input [ADD_LENGTH - 1 : 0] A,
    input [ADD_LENGTH - 1 : 0] B,
    input [ADD_LENGTH - 1 : 0] Cin,
    output [ADD_LENGTH - 1 : 0] PreSum,
    output [ADD_LENGTH - 1 : 0] Cout
);

    assign PreSum = A ^ B ^ Cin;
    assign Cout = (A & B) | (B & Cin) | (A & Cin);

endmodule
