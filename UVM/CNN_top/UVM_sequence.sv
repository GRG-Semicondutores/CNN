class cnn_sequence extends uvm_sequence #(cnn_seq_item);
    `uvm_object_utils(cnn_sequence)
    cnn_config cfg;
    int unsigned rng_state, seed, random_count, obs_cycles, transaction_count;
    string active_case, active_subcase, active_weights;
    bit print_images, exploratory_mode;
    data_t imagem     [0:N_CHANNELS-1][0:N_PIXELS-1];
    data_t kernel1    [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1];
    data_t kernel2    [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1];
    data_t FCWeight1  [0:N_NEURONS_1-1][0:N_FLAT-1];
    data_t FCWeight2  [0:N_NEURONS_2-1][0:N_NEURONS_1-1];
    data_t ConvBias1  [0:N_FILTERS_LAYER_1-1];
    data_t ConvBias2  [0:N_FILTERS_LAYER_2-1];
    data_t FCBias1    [0:N_NEURONS_1-1];
    data_t FCBias2    [0:N_NEURONS_2-1];


    function new(string name="cnn_sequence"); super.new(name); endfunction
    function automatic int case_index(input string label);
        int number;
        if ($sscanf(label,"IMG-%d",number) == 1 && number >= 0 && number <= 21)
            begin
                return number;
            end
        return -1;
    endfunction

    function automatic int unsigned next_rng(input int unsigned x);
        x = x ^ (x << 13);
        x = x ^ (x >> 17);
        x = x ^ (x << 5);
        return x;
    endfunction

    function automatic data_t signed_pattern(input int index);
        case (index % 8)
            0: return data_t'(-128);
            1: return data_t'( 127);
            2: return data_t'( -64);
            3: return data_t'(  64);
            4: return data_t'(  -3);
            5: return data_t'(   3);
            6: return data_t'(  -1);
            default: return data_t'(1);
        endcase
    endfunction

    task automatic fill_image(input integer value);
        for (int c = 0; c < N_CHANNELS; c++)
            begin
                for (int p = 0; p < N_PIXELS; p++)
                    begin
                        imagem[c][p] = data_t'(value);
                    end
            end
    endtask

    task automatic set_pixel(input int row, input int col, input integer value);
        // Os cenarios desta campanha utilizam um canal (N_CHANNELS=1).
        imagem[0][row*IMG_SIZE_1 + col] = data_t'(value);
    endtask

    task automatic make_impulse(input int row, input int col, input integer value);
        fill_image(0);
        set_pixel(row, col, value);
    endtask

    task automatic make_gradient(input bit vertical);
        int value;
        for (int row = 0; row < IMG_SIZE_1; row++)
            begin
                for (int col = 0; col < IMG_SIZE_1; col++)
                    begin
                        value = -48 + 32 * (vertical ? row : col);
                        set_pixel(row, col, value);
                    end
            end
    endtask

    task automatic make_chessboard(input integer positive, input integer negative);
        for (int row = 0; row < IMG_SIZE_1; row++)
            begin
                for (int col = 0; col < IMG_SIZE_1; col++)
                    begin
                        set_pixel(row, col, ((row+col)%2 == 0) ? positive : negative);
                    end
            end
    endtask

    task automatic make_stripes(input bit vertical, input bit invert_polarity);
        bit choose_positive;
        for (int row = 0; row < IMG_SIZE_1; row++)
            begin
                for (int col = 0; col < IMG_SIZE_1; col++)
                    begin
                        choose_positive = (((vertical ? col : row) % 2) == 0);
                        if (invert_polarity)
                            begin
                                choose_positive = !choose_positive;
                            end
                        set_pixel(row, col, choose_positive ? 32 : -32);
                    end
            end
    endtask

    task automatic make_diagonal(input bit secondary);
        fill_image(0);
        for (int row = 0; row < IMG_SIZE_1; row++)
            begin
                set_pixel(row, secondary ? IMG_SIZE_1-1-row : row, 32);
            end
    endtask

    task automatic make_random_image();
        for (int p = 0; p < N_PIXELS; p++)
            begin
                rng_state = next_rng(rng_state);
                imagem[0][p] = data_t'(rng_state[7:0]);
            end
    endtask

    task automatic clear_weights();
        for (int f = 0; f < N_FILTERS_LAYER_1; f++)
            begin
                ConvBias1[f] = '0;
                for (int c = 0; c < N_CHANNELS; c++)
                    begin
                        for (int k = 0; k < N_KERNEL; k++)
                            begin
                                kernel1[f][c][k] = '0;
                            end
                    end
            end
        for (int f = 0; f < N_FILTERS_LAYER_2; f++)
            begin
                ConvBias2[f] = '0;
                for (int c = 0; c < N_FILTERS_LAYER_1; c++)
                    begin
                        for (int k = 0; k < N_KERNEL; k++)
                            begin
                                kernel2[f][c][k] = '0;
                            end
                    end
            end
        for (int n = 0; n < N_NEURONS_1; n++)
            begin
                FCBias1[n] = '0;
                for (int w = 0; w < N_FLAT; w++)
                    begin
                        FCWeight1[n][w] = '0;
                    end
            end
        for (int n = 0; n < N_NEURONS_2; n++)
            begin
                FCBias2[n] = '0;
                for (int w = 0; w < N_NEURONS_1; w++)
                    begin
                        FCWeight2[n][w] = '0;
                    end
            end
    endtask

    task automatic load_weights(input weight_id_t id);
        clear_weights();
        case (id)
            W00:
                begin
                    active_weights = "W00";
                end
            W01:
                begin
                    active_weights = "W01";
                    for (int f = 0; f < N_FILTERS_LAYER_1; f++)
                        begin
                            kernel1[f][0][KERNEL_CENTER] = data_t'(1);
                        end
                    for (int f = 0; f < N_FILTERS_LAYER_2; f++)
                        begin
                            for (int c = 0; c < N_FILTERS_LAYER_1; c++)
                                begin
                                    kernel2[f][c][KERNEL_CENTER] = data_t'(f == c ? 1 : 0);
                                end
                        end
                    for (int n = 0; n < N_NEURONS_1; n++)
                        begin
                            for (int w = 0; w < N_FLAT; w++)
                                begin
                                    FCWeight1[n][w] = data_t'(n == w ? 2 : 0);
                                end
                        end
                    for (int n = 0; n < N_NEURONS_2; n++)
                        begin
                            for (int w = 0; w < N_NEURONS_1; w++)
                                begin
                                    FCWeight2[n][w] = data_t'(n == w ? 2 : 0);
                                end
                        end
                end
            W02:
                begin
                    active_weights = "W02";
                    // Sobel vertical/horizontal, posicionados em ordem row-major.
                    for (int k = 0; k < N_KERNEL; k++)
                        begin
                            case (k)
                                0, 6: kernel1[0][0][k] = data_t'(-1);
                                2, 8: kernel1[0][0][k] = data_t'(1);
                                3:    kernel1[0][0][k] = data_t'(-2);
                                5:    kernel1[0][0][k] = data_t'(2);
                                default: kernel1[0][0][k] = data_t'(0);
                            endcase
                            case (k)
                                0, 2: kernel1[1][0][k] = data_t'(-1);
                                6, 8: kernel1[1][0][k] = data_t'(1);
                                1:    kernel1[1][0][k] = data_t'(-2);
                                7:    kernel1[1][0][k] = data_t'(2);
                                default: kernel1[1][0][k] = data_t'(0);
                            endcase
                        end
                    for (int f = 0; f < N_FILTERS_LAYER_2; f++)
                        begin
                            for (int c = 0; c < N_FILTERS_LAYER_1; c++)
                                begin
                                    kernel2[f][c][KERNEL_CENTER] = data_t'(f == c ? 2 : 1);
                                end
                        end
                    for (int n = 0; n < N_NEURONS_1; n++)
                        begin
                            for (int w = 0; w < N_FLAT; w++)
                                begin
                                    FCWeight1[n][w] = data_t'(n == w ? 2 : 0);
                                end
                        end
                    for (int n = 0; n < N_NEURONS_2; n++)
                        begin
                            for (int w = 0; w < N_NEURONS_1; w++)
                                begin
                                    FCWeight2[n][w] = data_t'(n == w ? 2 : 0);
                                end
                        end
                end
            W03:
                begin
                    active_weights = "W03";
                    for (int f = 0; f < N_FILTERS_LAYER_1; f++)
                        begin
                            ConvBias1[f] = signed_pattern(f+4);
                            for (int c = 0; c < N_CHANNELS; c++)
                                begin
                                    for (int k = 0; k < N_KERNEL; k++)
                                        begin
                                            kernel1[f][c][k] = signed_pattern(f*13+c*7+k);
                                        end
                                end
                        end
                    for (int f = 0; f < N_FILTERS_LAYER_2; f++)
                        begin
                            ConvBias2[f] = signed_pattern(f+2);
                            for (int c = 0; c < N_FILTERS_LAYER_1; c++)
                                begin
                                    for (int k = 0; k < N_KERNEL; k++)
                                        begin
                                            kernel2[f][c][k] = signed_pattern(f*17+c*5+k+3);
                                        end
                                end
                        end
                    for (int n = 0; n < N_NEURONS_1; n++)
                        begin
                            FCBias1[n] = signed_pattern(n+6);
                            for (int w = 0; w < N_FLAT; w++)
                                begin
                                    FCWeight1[n][w] = signed_pattern(n*11+w+1);
                                end
                        end
                    for (int n = 0; n < N_NEURONS_2; n++)
                        begin
                            FCBias2[n] = signed_pattern(n+1);
                            for (int w = 0; w < N_NEURONS_1; w++)
                                begin
                                    FCWeight2[n][w] = signed_pattern(n*9+w+4);
                                end
                        end
                end
            default:
                begin
                    active_weights = "W00";
                end
        endcase
    endtask

    task automatic load_uniform_weights(input integer weight_value,
                                        input integer bias_value,
                                        input string description);
        clear_weights();
        active_weights = description;
        for (int f = 0; f < N_FILTERS_LAYER_1; f++)
            begin
                ConvBias1[f] = data_t'(bias_value);
                for (int c = 0; c < N_CHANNELS; c++)
                    begin
                        for (int k = 0; k < N_KERNEL; k++)
                            begin
                                kernel1[f][c][k] = data_t'(weight_value);
                            end
                    end
            end
        for (int f = 0; f < N_FILTERS_LAYER_2; f++)
            begin
                ConvBias2[f] = data_t'(bias_value);
                for (int c = 0; c < N_FILTERS_LAYER_1; c++)
                    begin
                        for (int k = 0; k < N_KERNEL; k++)
                            begin
                                kernel2[f][c][k] = data_t'(weight_value);
                            end
                    end
            end
        for (int n = 0; n < N_NEURONS_1; n++)
            begin
                FCBias1[n] = data_t'(bias_value);
                for (int w = 0; w < N_FLAT; w++)
                    begin
                        FCWeight1[n][w] = data_t'(weight_value);
                    end
            end
        for (int n = 0; n < N_NEURONS_2; n++)
            begin
                FCBias2[n] = data_t'(bias_value);
                for (int w = 0; w < N_NEURONS_1; w++)
                    begin
                        FCWeight2[n][w] = data_t'(weight_value);
                    end
            end
    endtask

    task automatic print_current_image();
        for (int row = 0; row < IMG_SIZE_1; row++)
            begin
                $display("          %4d %4d %4d %4d",
                         $signed(imagem[0][row*IMG_SIZE_1+0]),
                         $signed(imagem[0][row*IMG_SIZE_1+1]),
                         $signed(imagem[0][row*IMG_SIZE_1+2]),
                         $signed(imagem[0][row*IMG_SIZE_1+3]));
            end
    endtask


    function cnn_payload_t snapshot();
        cnn_payload_t value;
        for (int a=0; a<N_CHANNELS; a++)
            for (int b=0; b<N_PIXELS; b++)
                value.imagem[a][b] = imagem[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            for (int b=0; b<N_CHANNELS; b++)
                for (int c=0; c<N_KERNEL; c++)
                    value.kernel1[a][b][c] = kernel1[a][b][c];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            for (int b=0; b<N_FILTERS_LAYER_1; b++)
                for (int c=0; c<N_KERNEL; c++)
                    value.kernel2[a][b][c] = kernel2[a][b][c];
        for (int a=0; a<N_NEURONS_1; a++)
            for (int b=0; b<N_FLAT; b++)
                value.FCWeight1[a][b] = FCWeight1[a][b];
        for (int a=0; a<N_NEURONS_2; a++)
            for (int b=0; b<N_NEURONS_1; b++)
                value.FCWeight2[a][b] = FCWeight2[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            value.ConvBias1[a] = ConvBias1[a];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            value.ConvBias2[a] = ConvBias2[a];
        for (int a=0; a<N_NEURONS_1; a++)
            value.FCBias1[a] = FCBias1[a];
        for (int a=0; a<N_NEURONS_2; a++)
            value.FCBias2[a] = FCBias2[a];
        return value;
    endfunction
    function cnn_seq_item command(cnn_seq_item::kind_e kind);
        cnn_seq_item item;
        item=cnn_seq_item::type_id::create("command");
        item.kind=kind; item.case_id=case_index(active_case); item.tx_id=transaction_count;
        item.subcase=active_subcase; item.weights=active_weights;
        item.exploratory=exploratory_mode;
        return item;
    endfunction
    task wait_cycles(int unsigned cycles);
        cnn_seq_item item=command(cnn_seq_item::CNN_WAIT);
        start_item(item); item.cycles=cycles; finish_item(item);
    endtask
    task send_start(string subcase, int unsigned lead=1);
        cnn_seq_item item;
        transaction_count++;
        active_subcase=subcase;
        item=command(cnn_seq_item::CNN_START);
        start_item(item);
        item.pins=snapshot(); item.lead_cycles=lead;
        finish_item(item);
        if (print_images) print_current_image();
    endtask
    task launch_start(string subcase); send_start(subcase); endtask
    task prepare_inputs();
        cnn_seq_item item=command(cnn_seq_item::CNN_PREPARE);
        start_item(item); item.pins=snapshot(); finish_item(item);
    endtask
    task execute_image(string subcase);
        launch_start(subcase);
        wait_cycles(obs_cycles);
    endtask
    task send_reset(int unsigned cycles, int unsigned lead=1);
        cnn_seq_item item=command(cnn_seq_item::CNN_RESET);
        start_item(item); item.cycles=cycles; item.lead_cycles=lead; finish_item(item);
    endtask
    task apply_reset(int cycles); send_reset(cycles); endtask
    task start_case(string id);
        cnn_seq_item item;
        active_case=id; exploratory_mode=(id=="IMG-19");
        item=command(cnn_seq_item::CNN_CASE);
        start_item(item); finish_item(item);
        $display("\n========== %s ==========",id);
    endtask
    // ------------------------------------------------------------------------
    // IMG-00: imagem nula
    // ------------------------------------------------------------------------
    task automatic test_IMG_00();
        start_case("IMG-00");
        fill_image(0);
        load_weights(W00);
        execute_image("zero_W00");
        load_weights(W01);
        execute_image("zero_W01");
        load_weights(W03);
        execute_image("zero_com_bias_W03");
    endtask

    // IMG-01: constantes positivas (+1, +16, +127)
    task automatic test_IMG_01();
        start_case("IMG-01");
        load_weights(W01);
        fill_image(1);   execute_image("const_pos_1");
        fill_image(16);  execute_image("const_pos_16");
        fill_image(127); execute_image("const_pos_127");
    endtask

    // IMG-02: constantes negativas (-1, -16, -128)
    task automatic test_IMG_02();
        start_case("IMG-02");
        load_weights(W03);
        fill_image(-1);   execute_image("const_neg_1");
        fill_image(-16);  execute_image("const_neg_16");
        fill_image(-128); execute_image("const_neg_128");
    endtask

    // IMG-03: impulso nas quatro posicoes internas, com sinal invertido
    task automatic test_IMG_03();
        start_case("IMG-03");
        load_weights(W02);
        for (int row = 1; row <= 2; row++)
            begin
                for (int col = 1; col <= 2; col++)
                    begin
                        make_impulse(row, col, 16);
                        execute_image($sformatf("imp_pos_r%0d_c%0d", row, col));
                    end
            end
        make_impulse(1, 1, -16);
        execute_image("imp_neg_r1_c1");
    endtask

    // IMG-04: impulso nos quatro cantos
    task automatic test_IMG_04();
        start_case("IMG-04");
        load_weights(W02);
        for (int row = 0; row < IMG_SIZE_1; row += IMG_SIZE_1-1)
            begin
                for (int col = 0; col < IMG_SIZE_1; col += IMG_SIZE_1-1)
                    begin
                        make_impulse(row, col, 16);
                        execute_image($sformatf("corner_pos_r%0d_c%0d", row, col));
                    end
            end
        make_impulse(0, 0, -16);
        execute_image("corner_neg_r0_c0");
    endtask

    // IMG-05: oito pixels nas bordas, excluindo cantos
    task automatic test_IMG_05();
        start_case("IMG-05");
        load_weights(W02);
        for (int pos = 0; pos < N_PIXELS; pos++)
            begin
                int row;
                int col;
                row = pos / IMG_SIZE_1;
                col = pos % IMG_SIZE_1;
                if (((row == 0) || (row == IMG_SIZE_1-1) ||
                     (col == 0) || (col == IMG_SIZE_1-1)) &&
                    !(((row == 0) || (row == IMG_SIZE_1-1)) &&
                      ((col == 0) || (col == IMG_SIZE_1-1))))
                    begin
                        make_impulse(row, col, 16);
                        execute_image($sformatf("edge_pos_r%0d_c%0d", row, col));
                    end
            end
        make_impulse(0, 1, -16);
        execute_image("edge_neg_r0_c1");
    endtask

    // IMG-06: gradiente horizontal
    task automatic test_IMG_06();
        start_case("IMG-06");
        load_weights(W02);
        make_gradient(1'b0);
        execute_image("grad_h");
    endtask

    // IMG-07: gradiente vertical
    task automatic test_IMG_07();
        start_case("IMG-07");
        load_weights(W02);
        make_gradient(1'b1);
        execute_image("grad_v");
    endtask

    // IMG-08: xadrez
    task automatic test_IMG_08();
        start_case("IMG-08");
        load_weights(W02);
        make_chessboard(32, -32);
        execute_image("chessboard");
    endtask

    // IMG-09: faixas horizontais (ambas polaridades)
    task automatic test_IMG_09();
        start_case("IMG-09");
        load_weights(W02);
        make_stripes(1'b0, 1'b0);
        execute_image("horizontal_pos_first");
        make_stripes(1'b0, 1'b1);
        execute_image("horizontal_neg_first");
    endtask

    // IMG-10: faixas verticais (ambas polaridades)
    task automatic test_IMG_10();
        start_case("IMG-10");
        load_weights(W02);
        make_stripes(1'b1, 1'b0);
        execute_image("vertical_pos_first");
        make_stripes(1'b1, 1'b1);
        execute_image("vertical_neg_first");
    endtask

    // IMG-11: diagonal principal
    task automatic test_IMG_11();
        start_case("IMG-11");
        load_weights(W02);
        make_diagonal(1'b0);
        execute_image("main_diagonal");
    endtask

    // IMG-12: diagonal secundaria
    task automatic test_IMG_12();
        start_case("IMG-12");
        load_weights(W02);
        make_diagonal(1'b1);
        execute_image("secondary_diagonal");
    endtask

    // IMG-13: fronteiras signed em tres padroes
    task automatic test_IMG_13();
        start_case("IMG-13");
        load_weights(W03);
        make_chessboard(127, -128);
        execute_image("extreme_chessboard");
        fill_image(127);
        execute_image("all_127");
        fill_image(-128);
        execute_image("all_minus_128");
    endtask

    // IMG-14: imagens pseudoaleatorias; xorshift32 e seed registrados
    task automatic test_IMG_14();
        start_case("IMG-14");
        load_weights(W03);
        $display("[CFG] IMG-14 seed=%0d quantidade=%0d", seed, random_count);
        for (int n = 0; n < random_count; n++)
            begin
                make_random_image();
                execute_image($sformatf("random_%0d", n));
            end
    endtask

    // IMG-15: mesma imagem e conjuntos distintos de pesos
    task automatic test_IMG_15();
        start_case("IMG-15");
        make_gradient(1'b0);
        load_weights(W01);
        execute_image("fixed_img_W01");
        load_weights(W02);
        execute_image("fixed_img_W02");
        load_weights(W03);
        execute_image("fixed_img_W03");
    endtask

    // IMG-16: variar isoladamente cada grupo de bias, +/-45
    task automatic test_IMG_16();
        start_case("IMG-16");
        for (int group = 0; group < 4; group++)
            begin
                for (int sign_idx = 0; sign_idx < 2; sign_idx++)
                    begin
                        int bias_value;
                        bias_value = (sign_idx == 0) ? 45 : -45;
                        load_weights(W01);
                        make_gradient(1'b1);
                        case (group)
                            0: ConvBias1[0] = data_t'(bias_value);
                            1: ConvBias2[0] = data_t'(bias_value);
                            2: FCBias1[0]   = data_t'(bias_value);
                            3: FCBias2[0]   = data_t'(bias_value);
                            default: begin end
                        endcase
                        execute_image($sformatf("bias_group_%0d_value_%0d", group, bias_value));
                    end
            end
    endtask

    // IMG-17: A, B e C, em sequencia ISOLADA (sem sobreposicao)
    task automatic test_IMG_17();
        start_case("IMG-17");
        load_weights(W02);
        make_impulse(1, 2, 16);
        execute_image("image_A");
        make_gradient(1'b0);
        execute_image("image_B");
        make_chessboard(32, -32);
        execute_image("image_C");
    endtask

    // IMG-18: reset em voo, com tres deslocamentos diagnosticos.
    // Os offsets abaixo NAO sao uma caracterizacao formal dos estagios internos.
    task automatic test_IMG_18();
        start_case("IMG-18");
        for (int trial = 0; trial < 3; trial++)
            begin
                int delay_cycles;
                case (trial)
                    0: delay_cycles = 1;
                    1: delay_cycles = 4;
                    default: delay_cycles = 8;
                endcase
                apply_reset(4);
                load_weights(W02);
                make_chessboard(32, -32);
                launch_start($sformatf("reset_in_flight_after_%0d", delay_cycles));
                wait_cycles(delay_cycles);
                send_reset(4,0);
                wait_cycles(4);
                load_weights(W01);
                fill_image(16);
                execute_image($sformatf("recovery_after_reset_%0d", delay_cycles));
            end
    endtask

    // IMG-19: pulsos START com intervalos reduzidos, sem assumir ready/busy.
    // Teste de CARACTERIZACAO; dados podem se sobrepor intencionalmente.
    task automatic test_IMG_19();
        start_case("IMG-19");
        for (int gap_idx = 0; gap_idx < 4; gap_idx++)
            begin
                int gap_cycles;
                case (gap_idx)
                    0: gap_cycles = 2;
                    1: gap_cycles = 3;
                    2: gap_cycles = 4;
                    default: gap_cycles = 8;
                endcase
                apply_reset(4);
                load_weights(W02);
                prepare_inputs();
                wait_cycles(1);
                for (int n = 0; n < 3; n++)
                    begin
                        case (n)
                            0: make_impulse(1, 1, 16);
                            1: make_gradient(1'b0);
                            default: make_chessboard(32, -32);
                        endcase
                        send_start($sformatf("burst_gap_%0d_img_%0d",gap_cycles,n),0);
                        wait_cycles(gap_cycles-1);
                    end
                // Somente observacao, sem inferir se sobreposicao e suportada.
                wait_cycles(obs_cycles);
            end
        apply_reset(4);
    endtask

    // IMG-20: imagem-base mais 16 variantes com um pixel modificado
    task automatic test_IMG_20();
        start_case("IMG-20");
        load_weights(W02);
        make_gradient(1'b0);
        execute_image("base_gradient");
        for (int pos = 0; pos < N_PIXELS; pos++)
            begin
                make_gradient(1'b0);
                imagem[0][pos] = data_t'($signed(imagem[0][pos]) + 1);
                execute_image($sformatf("pixel_plus_one_%0d", pos));
            end
    endtask

    // IMG-21: estresse dirigido de quantizacao/arredondamento/saturacao.
    // Nao e afirmado que cada ponto de quantizacao sera saturado ate que
    // exista modelo de referencia e instrumentacao de cobertura.
    task automatic test_IMG_21();
        start_case("IMG-21");
        load_uniform_weights(127, 127, "WSAT_POS");
        fill_image(127);
        execute_image("positive_saturation_candidate");
        fill_image(-128);
        execute_image("negative_input_pos_weights");
        load_uniform_weights(-128, -128, "WSAT_NEG");
        fill_image(-128);
        execute_image("negative_x_negative");
        fill_image(127);
        execute_image("positive_x_negative");
        load_weights(W01);
        for (int value = -3; value <= 3; value++)
            begin
                fill_image(value);
                execute_image($sformatf("rounding_probe_%0d", value));
            end
    endtask


    task body();
        if (cfg==null) `uvm_fatal("CNN_SEQ","Configuracao nao fornecida")
        seed=cfg.seed; random_count=cfg.random_count; obs_cycles=cfg.obs_cycles;
        print_images=cfg.print_images;
        rng_state=(seed==0) ? 32'hA5A5_1234 : seed;
        active_case="INIT"; active_subcase="NONE"; active_weights="W00";
        transaction_count=0; exploratory_mode=0;
        fill_image(0); clear_weights();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-00") test_IMG_00();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-01") test_IMG_01();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-02") test_IMG_02();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-03") test_IMG_03();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-04") test_IMG_04();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-05") test_IMG_05();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-06") test_IMG_06();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-07") test_IMG_07();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-08") test_IMG_08();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-09") test_IMG_09();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-10") test_IMG_10();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-11") test_IMG_11();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-12") test_IMG_12();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-13") test_IMG_13();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-14") test_IMG_14();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-15") test_IMG_15();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-16") test_IMG_16();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-17") test_IMG_17();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-18") test_IMG_18();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-19") test_IMG_19();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-20") test_IMG_20();
        if (cfg.selected_test=="ALL" || cfg.selected_test=="IMG-21") test_IMG_21();
        wait_cycles(10);
    endtask
endclass
