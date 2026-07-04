module convLayer #(
    parameter N_FILTERS = 10
) (

);

genvar n;

generate 
    for (n = 0; n < N_FILTERS; n = n + 1) begin
        featureMap #(

        ) filter (

        );
    end
endgenerate

endmodule
