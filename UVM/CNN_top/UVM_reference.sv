class cnn_reference_model;
    // Referencia aritmetica independente da implementacao; usa apenas payload observado.
    cnn_coverage coverage;
    data_t imagem     [0:N_CHANNELS-1][0:N_PIXELS-1];
    data_t kernel1    [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1];
    data_t kernel2    [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1];
    data_t FCWeight1  [0:N_NEURONS_1-1][0:N_FLAT-1];
    data_t FCWeight2  [0:N_NEURONS_2-1][0:N_NEURONS_1-1];
    data_t ConvBias1  [0:N_FILTERS_LAYER_1-1];
    data_t ConvBias2  [0:N_FILTERS_LAYER_2-1];
    data_t FCBias1    [0:N_NEURONS_1-1];
    data_t FCBias2    [0:N_NEURONS_2-1];

    data_t ex_q1 [0:N_FILTERS_LAYER_1-1][0:N_OUT_1-1];
    data_t ex_pool1 [0:N_FILTERS_LAYER_1-1][0:(N_OUT_1/4)-1];
    data_t ex_q2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
    data_t ex_pool2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_POOLED_2-1];
    data_t ex_flat [0:N_FLAT-1];
    data_t ex_fc1 [0:N_NEURONS_1-1];
    data_t ex_fc2 [0:N_NEURONS_2-1];

    function automatic data_t reference_quant(input longint signed acc,
                                               input int shift_bits,
                                               input int stage);
        longint signed rounded;
        int kind;
        rounded = (acc + (64'sd1 <<< (shift_bits-1))) >>> shift_bits;
        if (rounded > 127)
            begin
                kind = 1;
                rounded = 127;
            end
        else if (rounded < -128)
            begin
                kind = 2;
                rounded = -128;
            end
        else
            begin
                kind = 0;
            end
        if (coverage!=null) coverage.sample_quant(stage,kind);
        return data_t'(rounded);
    endfunction

    function automatic data_t reference_relu(input data_t value);
        return ($signed(value) < 0) ? data_t'(0) : value;
    endfunction

    function automatic longint signed reference_relu_acc(input longint signed value);
        return (value < 0) ? 64'sd0 : value;
    endfunction

    function cnn_result_t predict(cnn_payload_t pins);
        data_t relu1[0:N_FILTERS_LAYER_1-1][0:N_OUT_1-1];
        data_t relu2[0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
        int input_r, input_c, kernel_r, kernel_c;
        int out_r, out_c, pos, idx;
        longint signed acc;

        cnn_result_t result;
        for (int a=0; a<N_CHANNELS; a++)
            for (int b=0; b<N_PIXELS; b++)
                imagem[a][b] = pins.imagem[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            for (int b=0; b<N_CHANNELS; b++)
                for (int c=0; c<N_KERNEL; c++)
                    kernel1[a][b][c] = pins.kernel1[a][b][c];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            for (int b=0; b<N_FILTERS_LAYER_1; b++)
                for (int c=0; c<N_KERNEL; c++)
                    kernel2[a][b][c] = pins.kernel2[a][b][c];
        for (int a=0; a<N_NEURONS_1; a++)
            for (int b=0; b<N_FLAT; b++)
                FCWeight1[a][b] = pins.FCWeight1[a][b];
        for (int a=0; a<N_NEURONS_2; a++)
            for (int b=0; b<N_NEURONS_1; b++)
                FCWeight2[a][b] = pins.FCWeight2[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            ConvBias1[a] = pins.ConvBias1[a];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            ConvBias2[a] = pins.ConvBias2[a];
        for (int a=0; a<N_NEURONS_1; a++)
            FCBias1[a] = pins.FCBias1[a];
        for (int a=0; a<N_NEURONS_2; a++)
            FCBias2[a] = pins.FCBias2[a];
        for (int f=0; f<N_FILTERS_LAYER_1; f++)
            begin
                for (int r=0; r<OUT_SIZE_1; r++)
                    begin
                        for (int c=0; c<OUT_SIZE_1; c++)
                            begin
                                pos = r*OUT_SIZE_1+c;
                                acc = $signed(ConvBias1[f]);
                                for (int ch=0; ch<N_CHANNELS; ch++)
                                    begin
                                        for (int kr=0; kr<KERNEL_SIZE; kr++)
                                            begin
                                                for (int kc=0; kc<KERNEL_SIZE; kc++)
                                                    begin
                                                        input_r = r+kr-PADDING_1;
                                                        input_c = c+kc-PADDING_1;
                                                        if ((input_r>=0) && (input_r<IMG_SIZE_1) &&
                                                            (input_c>=0) && (input_c<IMG_SIZE_1))
                                                            begin
                                                                acc += $signed(imagem[ch][input_r*IMG_SIZE_1+input_c]) *
                                                                       $signed(kernel1[f][ch][kr*KERNEL_SIZE+kc]);
                                                            end
                                                    end
                                            end
                                    end
                                ex_q1[f][pos] = reference_quant(acc,SHIFT_1,0);
                                relu1[f][pos] = reference_relu(ex_q1[f][pos]);
                            end
                    end
                for (int pr=0; pr<OUT_SIZE_1/2; pr++)
                    begin
                        for (int pc=0; pc<OUT_SIZE_1/2; pc++)
                            begin
                                data_t maximum;
                                maximum = relu1[f][(2*pr)*OUT_SIZE_1+2*pc];
                                for (int dr=0; dr<2; dr++)
                                    begin
                                        for (int dc=0; dc<2; dc++)
                                            begin
                                                idx=(2*pr+dr)*OUT_SIZE_1+2*pc+dc;
                                                if ($signed(relu1[f][idx]) > $signed(maximum))
                                                    begin
                                                        maximum=relu1[f][idx];
                                                    end
                                            end
                                    end
                                ex_pool1[f][pr*(OUT_SIZE_1/2)+pc] = maximum;
                            end
                    end
            end

        for (int f=0; f<N_FILTERS_LAYER_2; f++)
            begin
                for (int r=0; r<OUT_SIZE_2; r++)
                    begin
                        for (int c=0; c<OUT_SIZE_2; c++)
                            begin
                                pos=r*OUT_SIZE_2+c;
                                acc=$signed(ConvBias2[f]);
                                for (int ch=0; ch<N_FILTERS_LAYER_1; ch++)
                                    begin
                                        for (int kr=0; kr<KERNEL_SIZE; kr++)
                                            begin
                                                for (int kc=0; kc<KERNEL_SIZE; kc++)
                                                    begin
                                                        input_r=r+kr-PADDING_2;
                                                        input_c=c+kc-PADDING_2;
                                                        if ((input_r>=0) && (input_r<IMG_SIZE_2) &&
                                                            (input_c>=0) && (input_c<IMG_SIZE_2))
                                                            begin
                                                                acc += $signed(ex_pool1[ch][input_r*IMG_SIZE_2+input_c]) *
                                                                       $signed(kernel2[f][ch][kr*KERNEL_SIZE+kc]);
                                                            end
                                                    end
                                            end
                                    end
                                ex_q2[f][pos]=reference_quant(acc,SHIFT_2,1);
                                relu2[f][pos]=reference_relu(ex_q2[f][pos]);
                            end
                    end
                for (int pr=0; pr<OUT_SIZE_2/2; pr++)
                    begin
                        for (int pc=0; pc<OUT_SIZE_2/2; pc++)
                            begin
                                data_t maximum;
                                maximum=relu2[f][(2*pr)*OUT_SIZE_2+2*pc];
                                for (int dr=0; dr<2; dr++)
                                    begin
                                        for (int dc=0; dc<2; dc++)
                                            begin
                                                idx=(2*pr+dr)*OUT_SIZE_2+2*pc+dc;
                                                if ($signed(relu2[f][idx])>$signed(maximum))
                                                    begin
                                                        maximum=relu2[f][idx];
                                                    end
                                            end
                                    end
                                ex_pool2[f][pr*(OUT_SIZE_2/2)+pc]=maximum;
                            end
                    end
            end
        for (int f=0; f<N_FILTERS_LAYER_2; f++)
            begin
                for (int p=0; p<N_OUT_POOLED_2; p++)
                    begin
                        ex_flat[f*N_OUT_POOLED_2+p]=ex_pool2[f][p];
                    end
            end
        for (int n=0; n<N_NEURONS_1; n++)
            begin
                acc=$signed(FCBias1[n]);
                for (int w=0; w<N_FLAT; w++)
                    begin
                        acc += $signed(ex_flat[w]) * $signed(FCWeight1[n][w]);
                    end
                ex_fc1[n]=reference_quant(reference_relu_acc(acc),SHIFT_3,2);
            end
        for (int n=0; n<N_NEURONS_2; n++)
            begin
                acc=$signed(FCBias2[n]);
                for (int w=0; w<N_NEURONS_1; w++)
                    begin
                        acc += $signed(ex_fc1[w]) * $signed(FCWeight2[n][w]);
                    end
                ex_fc2[n]=reference_quant(reference_relu_acc(acc),SHIFT_4,3);
            end
        for (int n=0;n<N_NEURONS_2;n++) result[n]=ex_fc2[n];
        return result;
    endfunction

endclass
