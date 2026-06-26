module Conv2D #(
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32,
    parameter KERNEL_SIZE = 3
) (
    input logic clk,
    input logic [10:0] imagem,
    logic signed [DATA_WIDTH-1:0] kernel [0:KERNEL_SIZE * KERNEL_SIZE-1]
);

localparam N_INPUTS = KERNEL_SIZE * KERNEL_SIZE;
localparam STAGES = $clog2(N_INPUTS);

    logic [1:0] mult;

genvar i;

generate
    for (i = 0; i < STAGES; i = i + 1) begin : stages

    end
endgenerate

always @(posedge clk) begin
    for (i = 0; i < MULT; i = i + 1) begin
        mult[i] <= imagem[i] * kernel[i];
    end
end

endmodule