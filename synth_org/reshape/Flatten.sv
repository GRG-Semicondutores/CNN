module Flatten #(
    parameter DATA_WIDTH = 8,
    parameter N_FEATURES = 1,
    parameter N_PIXELS_FEATURE = 10,

    localparam FLAT_OUT = N_PIXELS_FEATURE * N_FEATURES
) (
    input logic signed [DATA_WIDTH-1:0] features_in [0:N_FEATURES-1][0:N_PIXELS_FEATURE-1],
    output logic signed [DATA_WIDTH-1:0] flat_out [0:FLAT_OUT-1]
);

integer i;
integer j;

always @(*) begin
    for (i = 0; i < N_FEATURES; i = i + 1) begin
        for (j = 0; j < N_PIXELS_FEATURE; j = j + 1) begin
            flat_out[N_PIXELS_FEATURE * i + j] = features_in[i][j];
        end
    end
end

endmodule
