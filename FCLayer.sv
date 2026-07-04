module FCLayer #(
    parameter N_NEURONS = 10
) (

);

genvar n;

generate 
    for (n = 0; n < N_NEURONS; n = n + 1) begin
        Neuron #(

        ) neuron (

        );
    end
endgenerate

endmodule
