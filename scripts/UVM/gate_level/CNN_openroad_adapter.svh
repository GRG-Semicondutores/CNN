// Portas achatadas pelo Yosys/slang: o primeiro elemento ocupa os bits altos.
wire [DATA_WIDTH*N_CHANNELS*N_PIXELS-1:0] gls_imagem;
wire [DATA_WIDTH*N_FILTERS_LAYER_1*N_CHANNELS*N_KERNEL-1:0] gls_kernel1;
wire [DATA_WIDTH*N_FILTERS_LAYER_2*N_FILTERS_LAYER_1*N_KERNEL-1:0] gls_kernel2;
wire [DATA_WIDTH*N_NEURONS_1*N_FLAT-1:0] gls_FCWeight1;
wire [DATA_WIDTH*N_NEURONS_2*N_NEURONS_1-1:0] gls_FCWeight2;
wire [DATA_WIDTH*N_FILTERS_LAYER_1-1:0] gls_ConvBias1;
wire [DATA_WIDTH*N_FILTERS_LAYER_2-1:0] gls_ConvBias2;
wire [DATA_WIDTH*N_NEURONS_1-1:0] gls_FCBias1;
wire [DATA_WIDTH*N_NEURONS_2-1:0] gls_FCBias2, gls_result_FC2;

for (genvar c=0; c<N_CHANNELS; c++) begin : gls_image_channels
    for (genvar p=0; p<N_PIXELS; p++) begin : pixels
        assign gls_imagem[(N_CHANNELS*N_PIXELS-c*N_PIXELS-p-1)*DATA_WIDTH +: DATA_WIDTH] = cif.imagem[c][p];
    end
end
for (genvar f=0; f<N_FILTERS_LAYER_1; f++) begin : gls_filters1
    assign gls_ConvBias1[(N_FILTERS_LAYER_1-f-1)*DATA_WIDTH +: DATA_WIDTH] = cif.ConvBias1[f];
    for (genvar c=0; c<N_CHANNELS; c++) begin : channels
        for (genvar k=0; k<N_KERNEL; k++) begin : taps
            assign gls_kernel1[(N_FILTERS_LAYER_1*N_CHANNELS*N_KERNEL-(f*N_CHANNELS+c)*N_KERNEL-k-1)*DATA_WIDTH +: DATA_WIDTH] = cif.kernel1[f][c][k];
        end
    end
end
for (genvar f=0; f<N_FILTERS_LAYER_2; f++) begin : gls_filters2
    assign gls_ConvBias2[(N_FILTERS_LAYER_2-f-1)*DATA_WIDTH +: DATA_WIDTH] = cif.ConvBias2[f];
    for (genvar c=0; c<N_FILTERS_LAYER_1; c++) begin : channels
        for (genvar k=0; k<N_KERNEL; k++) begin : taps
            assign gls_kernel2[(N_FILTERS_LAYER_2*N_FILTERS_LAYER_1*N_KERNEL-(f*N_FILTERS_LAYER_1+c)*N_KERNEL-k-1)*DATA_WIDTH +: DATA_WIDTH] = cif.kernel2[f][c][k];
        end
    end
end
for (genvar n=0; n<N_NEURONS_1; n++) begin : gls_neurons1
    assign gls_FCBias1[(N_NEURONS_1-n-1)*DATA_WIDTH +: DATA_WIDTH] = cif.FCBias1[n];
    for (genvar i=0; i<N_FLAT; i++) begin : weights
        assign gls_FCWeight1[(N_NEURONS_1*N_FLAT-n*N_FLAT-i-1)*DATA_WIDTH +: DATA_WIDTH] = cif.FCWeight1[n][i];
    end
end
for (genvar n=0; n<N_NEURONS_2; n++) begin : gls_neurons2
    assign gls_FCBias2[(N_NEURONS_2-n-1)*DATA_WIDTH +: DATA_WIDTH] = cif.FCBias2[n];
    assign cif.result_FC2[n] = gls_result_FC2[(N_NEURONS_2-n-1)*DATA_WIDTH +: DATA_WIDTH];
    for (genvar i=0; i<N_NEURONS_1; i++) begin : weights
        assign gls_FCWeight2[(N_NEURONS_2*N_NEURONS_1-n*N_NEURONS_1-i-1)*DATA_WIDTH +: DATA_WIDTH] = cif.FCWeight2[n][i];
    end
end

CNN dut (
    .clk(cif.clk), .rst(cif.rst), .start(cif.start), .valid_out4(cif.valid_out4),
    .imagem(gls_imagem), .kernel1(gls_kernel1), .kernel2(gls_kernel2),
    .FCWeight1(gls_FCWeight1), .FCWeight2(gls_FCWeight2),
    .ConvBias1(gls_ConvBias1), .ConvBias2(gls_ConvBias2),
    .FCBias1(gls_FCBias1), .FCBias2(gls_FCBias2), .result_FC2(gls_result_FC2)
);
