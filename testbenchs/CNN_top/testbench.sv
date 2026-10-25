`timescale 1ns/1ps

// ============================================================================
// GRG-Semicondutores / CNN
// Testbench de verificacao End-to-End para CNN reduzida (sintese)
//
// Implementado:
//   - 22 tarefas de estimulos IMG-00 ... IMG-21; pinout e pesos.
//   - Modelo aritmetico independente SV (convolucao, padding, quant,
//     ReLU, maxpool, flatten, FC) com comparacao exata.
//   - Scoreboard por transacao isolada com amostragem pos-NBA.
//   - Caixa preta: somente portas publicas, resultado final e latencia observada.
//   - Modelo aritmetico de referencia preservado, sem leitura da implementacao.
//   - Assertions SVA (procedurais no Icarus), cobertura funcional nos
//     simuladores com covergroup e status PASS/FAIL/INCOMPLETE.
//   - IMG-19 permanece exploratorio: top nao possui ready/busy, nao ha
//     contrato para sobreposicao de imagens; classificado INCOMPLETE.
//
// Plusargs: +TEST=ALL/IMG-XX +RANDOM_COUNT=1000 +SEED=20261025
//           +OBS_CYCLES=64 +TRACE_EXPECTED +PRINT_IMAGES +DUMP_VCD
//           +NO_TIMING_CHECK (diagnostico; campanha INCOMPLETE)
// ============================================================================

module testbench;

    timeunit 1ns;
    timeprecision 1ps;

`ifdef CNN_TOP_VERILATOR_COVERAGE
    import "DPI-C" function void cnn_top_write_coverage(input string filename);
    string coverage_path;
`endif

    // ------------------------------------------------------------------------
    // Configuracao da interface publica da campanha reduzida
    // ------------------------------------------------------------------------
    localparam int DATA_WIDTH        = 8;
    localparam int IMG_SIZE_1        = 4;
    localparam int KERNEL_SIZE       = 3;
    localparam int N_CHANNELS        = 1;
    localparam int N_FILTERS_LAYER_1 = 2;
    localparam int N_FILTERS_LAYER_2 = 2;
    localparam int PADDING_1         = 1;
    localparam int PADDING_2         = 1;
    localparam int N_NEURONS_1       = 2;
    localparam int N_NEURONS_2       = 2;
    localparam int SHIFT_1           = 1;
    localparam int SHIFT_2           = 1;
    localparam int SHIFT_3           = 1;
    localparam int SHIFT_4           = 1;

    localparam int N_PIXELS          = IMG_SIZE_1 * IMG_SIZE_1;
    localparam int N_KERNEL          = KERNEL_SIZE * KERNEL_SIZE;
    localparam int OUT_SIZE_1        = IMG_SIZE_1 + 2*PADDING_1 - KERNEL_SIZE + 1;
    localparam int N_OUT_1           = OUT_SIZE_1 * OUT_SIZE_1;
    localparam int IMG_SIZE_2        = OUT_SIZE_1 / 2;
    localparam int OUT_SIZE_2        = IMG_SIZE_2 + 2*PADDING_2 - KERNEL_SIZE + 1;
    localparam int N_OUT_2           = OUT_SIZE_2 * OUT_SIZE_2;
    localparam int N_OUT_POOLED_2    = N_OUT_2 / 4;
    localparam int N_FLAT            = N_OUT_POOLED_2 * N_FILTERS_LAYER_2;
    localparam int KERNEL_CENTER     = N_KERNEL / 2;
    localparam time CLK_PERIOD       = 10ns;

    typedef logic signed [DATA_WIDTH-1:0] data_t;
    typedef enum int {W00, W01, W02, W03} weight_id_t;

    // ------------------------------------------------------------------------
    // Pinout do DUT
    // ------------------------------------------------------------------------
    logic clk;
    logic rst;
    logic start;

    data_t imagem     [0:N_CHANNELS-1][0:N_PIXELS-1];
    data_t kernel1    [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1];
    data_t kernel2    [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1];
    data_t FCWeight1  [0:N_NEURONS_1-1][0:N_FLAT-1];
    data_t FCWeight2  [0:N_NEURONS_2-1][0:N_NEURONS_1-1];
    data_t ConvBias1  [0:N_FILTERS_LAYER_1-1];
    data_t ConvBias2  [0:N_FILTERS_LAYER_2-1];
    data_t FCBias1    [0:N_NEURONS_1-1];
    data_t FCBias2    [0:N_NEURONS_2-1];

    wire signed [DATA_WIDTH-1:0] result_FC2 [0:N_NEURONS_2-1];
    wire valid_out4;

    CNN #(
        .DATA_WIDTH(DATA_WIDTH),
        .IMG_SIZE_1(IMG_SIZE_1),
        .KERNEL_SIZE(KERNEL_SIZE),
        .N_CHANNELS(N_CHANNELS),
        .N_FILTERS_LAYER_1(N_FILTERS_LAYER_1),
        .N_FILTERS_LAYER_2(N_FILTERS_LAYER_2),
        .PADDING_1(PADDING_1),
        .PADDING_2(PADDING_2),
        .N_NEURONS_1(N_NEURONS_1),
        .N_NEURONS_2(N_NEURONS_2),
        .SHIFT_1(SHIFT_1),
        .SHIFT_2(SHIFT_2),
        .SHIFT_3(SHIFT_3),
        .SHIFT_4(SHIFT_4)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .imagem(imagem),
        .kernel1(kernel1),
        .kernel2(kernel2),
        .FCWeight1(FCWeight1),
        .FCWeight2(FCWeight2),
        .ConvBias1(ConvBias1),
        .ConvBias2(ConvBias2),
        .FCBias1(FCBias1),
        .FCBias2(FCBias2),
        .result_FC2(result_FC2),
        .valid_out4(valid_out4)
    );

    // ------------------------------------------------------------------------
    // Estado da campanha e do scoreboard
    // ------------------------------------------------------------------------
    int unsigned rng_state;
    int unsigned seed;
    int unsigned random_count;
    int unsigned obs_cycles;
    longint unsigned cycle_count;
    int unsigned transaction_count;
    string selected_test;
    string active_case;
    string active_subcase;
    string active_weights;
    bit trace_expected;
    bit print_images;
    bit exploratory_mode;
    bit timing_check_enable;

    // Zero caracteriza a latencia; um valor positivo deve vir do contrato publico.
    int expected_latency;
    int min_latency, max_latency;
    int unsigned outputs_checked;

    bit sb_pending;
    int sb_id;
    int sb_launch_cycle;
    int sb_errs;
    string sb_case, sb_subcase, sb_weights;
    data_t ex_q1 [0:N_FILTERS_LAYER_1-1][0:N_OUT_1-1];
    data_t ex_pool1 [0:N_FILTERS_LAYER_1-1][0:(N_OUT_1/4)-1];
    data_t ex_q2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
    data_t ex_pool2 [0:N_FILTERS_LAYER_2-1][0:N_OUT_POOLED_2-1];
    data_t ex_flat [0:N_FLAT-1];
    data_t ex_fc1 [0:N_NEURONS_1-1];
    data_t ex_fc2 [0:N_NEURONS_2-1];

    int csv_fd;
    string csv_path;
    int unsigned pass_count, fail_transaction_count, incomplete_count;
    int unsigned abort_count, error_count, assertion_error_count;
    int unsigned launched_per_case[0:21];
    int unsigned pass_per_case[0:21];
    int unsigned fail_per_case[0:21];
    int unsigned incomplete_per_case[0:21];
    bit case_executed[0:21];

    function automatic int case_index(input string label);
        int number;
        if ($sscanf(label,"IMG-%d",number) == 1 && number >= 0 && number <= 21)
            begin
                return number;
            end
        return -1;
    endfunction

    function automatic int weight_index(input string label);
        // Comparacoes de strings tambem sao aceitas pelo backend VVP do Icarus.
        if (label == "W00") return 0;
        if (label == "W01") return 1;
        if (label == "W02") return 2;
        if (label == "W03") return 3;
        if (label == "WSAT_POS") return 4;
        if (label == "WSAT_NEG") return 5;
        return 6;
    endfunction

    // Icarus executa o mesmo scoreboard, mas nao suporta cobertura por covergroup.
`ifndef __ICARUS__
    // Cobertura separada da pontuacao funcional: hit nao significa PASS.
    covergroup cg_scenario with function sample(int test_id, int weight_id);
        option.per_instance = 1;
        cp_test: coverpoint test_id { bins cases[] = {[0:21]}; }
        cp_weight: coverpoint weight_id {
            bins w00={0}; bins w01={1}; bins w02={2}; bins w03={3};
            bins wsat_plus={4}; bins wsat_minus={5}; bins modified={6};
        }
        cross_test_weight: cross cp_test, cp_weight;
    endgroup

    covergroup cg_pixel with function sample(int signed pixel);
        option.per_instance = 1;
        cp_pixel: coverpoint pixel {
            bins min_val={-128}; bins negative={[-127:-1]}; bins zero={0};
            bins positive={[1:126]}; bins max_val={127};
        }
    endgroup

    covergroup cg_spatial with function sample(int row, int col);
        option.per_instance = 1;
        cp_row: coverpoint row { bins rows[] = {[0:3]}; }
        cp_col: coverpoint col { bins cols[] = {[0:3]}; }
        cross_location: cross cp_row, cp_col;
    endgroup

    covergroup cg_bias with function sample(int value);
        option.per_instance = 1;
        cp_bias: coverpoint value {
            bins negative={[-128:-1]}; bins zero={0};
            bins positive={[1:127]};
        }
    endgroup

    covergroup cg_quant with function sample(int stage, int saturation);
        option.per_instance = 1;
        cp_stage: coverpoint stage { bins conv1={0}; bins conv2={1};
                                      bins fc1={2}; bins fc2={3}; }
        cp_sat: coverpoint saturation { bins none={0}; bins positive={1};
                                        bins negative={2}; }
        cross_stage_sat: cross cp_stage, cp_sat;
    endgroup

    cg_scenario cov_scenario = new();
    cg_pixel cov_pixel = new();
    cg_spatial cov_spatial = new();
    cg_bias cov_bias = new();
    cg_quant cov_quant = new();
`endif

    // O modelo reproduz arredondamento ao mais proximo com empate para +inf,
    // seguido de saturacao para 8 bits. Para os acumuladores reduzidos, longint
    // nao transborda para as dimensoes e operandos definidos nesta campanha.
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
`ifndef __ICARUS__
        cov_quant.sample(stage, kind);
`endif
        return data_t'(rounded);
    endfunction

    function automatic data_t reference_relu(input data_t value);
        return ($signed(value) < 0) ? data_t'(0) : value;
    endfunction

    function automatic longint signed reference_relu_acc(input longint signed value);
        return (value < 0) ? 64'sd0 : value;
    endfunction

    // Golden Model completo com indices row-major e canais ordenados por filtro.
    // Executado APENAS ao detectar start na borda ativa, antes de ocorrer
    // qualquer troca dos dados de entrada em um ciclo futuro.
    task automatic build_expected();
        data_t relu1[0:N_FILTERS_LAYER_1-1][0:N_OUT_1-1];
        data_t relu2[0:N_FILTERS_LAYER_2-1][0:N_OUT_2-1];
        int input_r, input_c, kernel_r, kernel_c;
        int out_r, out_c, pos, idx;
        longint signed acc;

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
    endtask

    task automatic report_error(input string error_class, input string detail);
        error_count++;
        if (sb_pending)
            begin
                sb_errs++;
            end
`ifdef VERILATOR
        // Acumular as falhas para concluir a campanha e salvar a cobertura.
        // Os contadores acima e o $fatal final preservam o status de erro.
        $display("[FAIL][%s] tx=%0d case=%s subcase=%s launch=%0d now=%0d %s",
`else
        $error("[FAIL][%s] tx=%0d case=%s subcase=%s launch=%0d now=%0d %s",
`endif
               error_class,transaction_count,sb_case,sb_subcase,
               sb_launch_cycle,cycle_count,detail);
    endtask

    task automatic report_assertion(input string detail);
        assertion_error_count++;
        report_error("ASSERT",detail);
    endtask

    task automatic close_transaction(input bit timed_out);
        int latency;
        string status;
        latency = -1;
        if (timed_out)
            begin
                report_error("TIMEOUT",$sformatf("valid_out4 ausente na janela de %0d ciclos",obs_cycles));
            end
        else
            begin
                latency = cycle_count - sb_launch_cycle;
                if (min_latency < 0 || latency < min_latency) min_latency = latency;
                if (max_latency < 0 || latency > max_latency) max_latency = latency;
            end
        if (sb_errs == 0)
            begin
                status = "PASS";
                pass_count++;
                if (sb_id >= 0) pass_per_case[sb_id]++;
                $display("[PASS] tx=%0d %s/%s expected=[%0d,%0d] observed=[%0d,%0d] latency=%0d",
                         transaction_count,sb_case,sb_subcase,
                         $signed(ex_fc2[0]),$signed(ex_fc2[1]),
                         $signed(result_FC2[0]),$signed(result_FC2[1]),latency);
            end
        else
            begin
                status = "FAIL";
                fail_transaction_count++;
                if (sb_id >= 0) fail_per_case[sb_id]++;
                $display("[FAIL-TX] %s/%s errors=%0d latency=%0d",sb_case,sb_subcase,sb_errs,latency);
            end
        if (csv_fd != 0)
            begin
                if (timed_out)
                    $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,%0d,-1,%0d,%0d,NA,NA,%s,%0d",
                              transaction_count,sb_case,sb_subcase,sb_weights,
                              sb_launch_cycle,cycle_count,$signed(ex_fc2[0]),$signed(ex_fc2[1]),status,sb_errs);
                else
                    $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%s,%0d",
                              transaction_count,sb_case,sb_subcase,sb_weights,
                              sb_launch_cycle,cycle_count,latency,$signed(ex_fc2[0]),$signed(ex_fc2[1]),
                              $signed(result_FC2[0]),$signed(result_FC2[1]),status,sb_errs);
            end
        sb_pending=0;
    endtask

    task automatic check_output();
        outputs_checked++;
        if (timing_check_enable && expected_latency > 0 &&
            cycle_count != sb_launch_cycle + expected_latency)
            report_error("LATENCY",$sformatf("latencia observada=%0d contrato=%0d",
                         cycle_count-sb_launch_cycle,expected_latency));
        for (int n=0; n<N_NEURONS_2; n++)
            begin
                if (result_FC2[n] !== ex_fc2[n])
                    report_error("OUTPUT",$sformatf("indice=%0d exp=%0d got=%0d",
                                 n,$signed(ex_fc2[n]),$signed(result_FC2[n])));
            end
        close_transaction(1'b0);
    endtask

    initial clk = 1'b0;
    always #(CLK_PERIOD/2) clk = ~clk;

`ifdef __ICARUS__
    // Assertions apenas das portas publicas, amostradas antes do NBA.
    logic previous_start = 1'b0;
    logic previous_rst = 1'b0;
    logic previous_valid = 1'b0;
    always @(posedge clk) begin : icarus_assertions
        if (!rst && previous_start === 1'b1 && start !== 1'b0)
            report_assertion("start deve durar exatamente um ciclo");
        if (previous_rst && valid_out4 !== 1'b0)
            report_assertion("valid_out4 ativo apos reset");
        if (!rst && !exploratory_mode) begin
            if (previous_valid === 1'b1 && valid_out4 !== 1'b0)
                report_assertion("valid_out4 deve durar exatamente um ciclo");
            if (valid_out4 && ($isunknown(result_FC2[0]) || $isunknown(result_FC2[1])))
                report_assertion("X/Z no resultado valido");
        end
        previous_start <= rst ? 1'b0 : start;
        previous_rst <= rst;
        previous_valid <= rst ? 1'b0 : valid_out4;
    end
`else
    a_start_single_cycle: assert property (@(posedge clk) disable iff (rst)
                                      start |=> !start)
        else report_assertion("start deve durar exatamente um ciclo");
    a_reset_clears_valid: assert property (@(posedge clk) rst |=> !valid_out4)
        else report_assertion("valid_out4 ativo apos reset");
    a_valid4_known: assert property (@(posedge clk) disable iff (rst || exploratory_mode)
         valid_out4 |-> (!$isunknown(result_FC2[0]) && !$isunknown(result_FC2[1])))
        else report_assertion("X/Z no resultado valido");
    a_valid_single_cycle: assert property (@(posedge clk) disable iff (rst || exploratory_mode)
         valid_out4 |=> !valid_out4)
        else report_assertion("valid_out4 deve durar exatamente um ciclo");
`endif

    // Sem sobreposicao suportada, uma unica transacao pode estar pendente.
    always @(posedge clk)
        begin : monitor_and_scoreboard
            #1ps;
            cycle_count++;
            if (rst)
                begin
                    if (sb_pending)
                        begin
                            abort_count++;
                            $display("[ABORT] tx=%0d %s/%s cancelada por reset no ciclo=%0d",
                                     transaction_count,sb_case,sb_subcase,cycle_count);
                            sb_pending=0;
                        end
                    if (valid_out4 === 1'b1)
                        begin
                            report_error("RESET","valid_out4 ativo com rst=1");
                        end
                end
            else
                begin
                    if (start === 1'b1)
                        begin
                            int id;
                            id=case_index(active_case);
                            if (id>=0)
                                begin
                                    launched_per_case[id]++;
                                end
`ifndef __ICARUS__
                            cov_scenario.sample(id,weight_index(active_weights));
                            for (int p=0; p<N_PIXELS; p++)
                                begin
                                    cov_pixel.sample($signed(imagem[0][p]));
                                end
                            for (int p=0; p<N_FILTERS_LAYER_1; p++)
                                begin
                                    cov_bias.sample($signed(ConvBias1[p]));
                                end
                            for (int p=0; p<N_FILTERS_LAYER_2; p++)
                                begin
                                    cov_bias.sample($signed(ConvBias2[p]));
                                end
                            for (int p=0; p<N_NEURONS_1; p++)
                                begin
                                    cov_bias.sample($signed(FCBias1[p]));
                                end
                            for (int p=0; p<N_NEURONS_2; p++)
                                begin
                                    cov_bias.sample($signed(FCBias2[p]));
                                end
                            if ((id >= 3) && (id <= 5))
                                begin
                                    int num_active;
                                    int active_pos;
                                    num_active=0;
                                    active_pos=-1;
                                    for (int p=0; p<N_PIXELS; p++)
                                        begin
                                            if (imagem[0][p] != 0)
                                                begin
                                                    num_active++;
                                                    active_pos=p;
                                                end
                                        end
                                    if (num_active==1)
                                        begin
                                            cov_spatial.sample(active_pos/IMG_SIZE_1,active_pos%IMG_SIZE_1);
                                        end
                                end
`endif
                            if (exploratory_mode)
                                begin
                                    incomplete_count++;
                                    if (id>=0)
                                        begin
                                            incomplete_per_case[id]++;
                                        end
                                    if (csv_fd != 0)
                                        begin
                                            $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,-1,-1,NA,NA,NA,NA,INCOMPLETE,0",
                                                      transaction_count,active_case,active_subcase,
                                                      active_weights,cycle_count);
                                        end
                                    $display("[INCOMPLETE] %s/%s: start sobreposto sem protocolo ready/busy",
                                             active_case,active_subcase);
                                end
                            else if (sb_pending)
                                begin
                                    report_error("OVERLAP","novo START antes de concluir transacao anterior");
                                end
                            else
                                begin
                                    sb_id=id;
                                    sb_case=active_case;
                                    sb_subcase=active_subcase;
                                    sb_weights=active_weights;
                                    sb_launch_cycle=cycle_count;
                                    sb_errs=0;
                                    build_expected();
                                    sb_pending=1;
                                    if (trace_expected)
                                        begin
                                            $display("[EXP] cycle=%0d case=%s/%s expected=[%0d,%0d] watchdog=%0d",
                                                     cycle_count,sb_case,sb_subcase,
                                                     $signed(ex_fc2[0]),$signed(ex_fc2[1]),obs_cycles);
                                        end
                                end
                        end
                    if (!exploratory_mode)
                        begin
                            if (sb_pending)
                                begin
                                    if (valid_out4 === 1'b1)
                                        check_output();
                                    else if (cycle_count >= sb_launch_cycle + obs_cycles)
                                        close_transaction(1'b1);
                                end
                            else if (valid_out4 === 1'b1)
                                begin
                                    report_error("UNEXPECTED_VALID","valid_out4 sem transacao pendente");
                                end
                        end
                end
        end

    // ------------------------------------------------------------------------
    // Utilitarios: PRNG, imagem, pesos e sequenciamento
    // ------------------------------------------------------------------------
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

    task automatic launch_start(input string subcase);
        @(negedge clk);
        active_subcase = subcase;
        transaction_count = transaction_count + 1;
        $display("[STIM] tx=%0d cycle=%0d case=%s subcase=%s weights=%s",
                 transaction_count, cycle_count, active_case, subcase, active_weights);
        if (print_images)
            begin
                print_current_image();
            end
        start = 1'b1;
        @(negedge clk);
        start = 1'b0;
    endtask

    task automatic execute_image(input string subcase);
        launch_start(subcase);
        // A janela e fixa: nao utiliza valid_out4 como criterio de conclusao.
        repeat (obs_cycles) @(negedge clk);
    endtask

    task automatic apply_reset(input int cycles);
        @(negedge clk);
        start = 1'b0;
        rst = 1'b1;
        repeat (cycles) @(negedge clk);
        rst = 1'b0;
        $display("[CTRL] cycle=%0d reset liberado", cycle_count);
    endtask

    task automatic start_case(input string id);
        active_case = id;
        exploratory_mode = (id == "IMG-19");
        if (case_index(id) >= 0)
            begin
                case_executed[case_index(id)] = 1;
            end
        $display("\n========== %s ==========", id);
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
                repeat (delay_cycles) @(negedge clk);
                rst = 1'b1;
                start = 1'b0;
                $display("[CTRL] cycle=%0d reset durante operacao; offset=%0d",
                         cycle_count, delay_cycles);
                repeat (4) @(negedge clk);
                rst = 1'b0;
                repeat (4) @(negedge clk);
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
                @(negedge clk);
                for (int n = 0; n < 3; n++)
                    begin
                        case (n)
                            0: make_impulse(1, 1, 16);
                            1: make_gradient(1'b0);
                            default: make_chessboard(32, -32);
                        endcase
                        active_subcase = $sformatf("burst_gap_%0d_img_%0d", gap_cycles, n);
                        transaction_count = transaction_count + 1;
                        $display("[STIM] tx=%0d cycle=%0d case=%s subcase=%s weights=%s",
                                 transaction_count, cycle_count, active_case,
                                 active_subcase, active_weights);
                        if (print_images)
                            begin
                                print_current_image();
                            end
                        start = 1'b1;
                        @(negedge clk);
                        start = 1'b0;
                        // Intervalo entre inicios = gap_cycles clocks.
                        repeat (gap_cycles-1) @(negedge clk);
                    end
                // Somente observacao, sem inferir se sobreposicao e suportada.
                repeat (obs_cycles) @(negedge clk);
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

    // ------------------------------------------------------------------------
    // Sequencia oficial: tarefas em ordem IMG-00 ... IMG-21
    // ------------------------------------------------------------------------
    initial
        begin : main_sequence
            int temp_int;
            rst = 1'b1;
            start = 1'b0;
            cycle_count = 0;
            transaction_count = 0;
            seed = 20261025;
            csv_fd=0;
            csv_path="cnn_verif_results.csv";
`ifdef CNN_TOP_VERILATOR_COVERAGE
            coverage_path="cnn_top_coverage.dat";
            if ($value$plusargs("COVERAGE_PATH=%s", coverage_path)) begin end
`endif
            random_count = 1000;
            obs_cycles = 64;
            sb_pending = 0;
            pass_count=0;
            fail_transaction_count=0;
            incomplete_count=0;
            abort_count=0;
            error_count=0;
            assertion_error_count=0;
            exploratory_mode=0;
            timing_check_enable=!$test$plusargs("NO_TIMING_CHECK");
            expected_latency=0;
            outputs_checked=0;
            min_latency=-1;
            max_latency=-1;
            for (int p=0; p<22; p++)
                begin
                    case_executed[p]=0;
                    launched_per_case[p]=0;
                    pass_per_case[p]=0;
                    fail_per_case[p]=0;
                    incomplete_per_case[p]=0;
                end
            trace_expected = $test$plusargs("TRACE_EXPECTED");
            print_images = $test$plusargs("PRINT_IMAGES");
            selected_test = "ALL";
            active_case = "INIT";
            active_subcase = "NONE";
            active_weights = "W00";

            if ($value$plusargs("TEST=%s", selected_test))
                begin
                    // Valor de TEST informado na linha de comando.
                end
            if ($value$plusargs("RANDOM_COUNT=%d", temp_int))
                begin
                    if (temp_int >= 0)
                        begin
                            random_count = temp_int;
                        end
                end
            if ($value$plusargs("OBS_CYCLES=%d", temp_int))
                begin
                    if (temp_int > 0)
                        begin
                            obs_cycles = temp_int;
                        end
                end
            if ($value$plusargs("SEED=%d", temp_int))
                begin
                    seed = temp_int;
                end
            if ($value$plusargs("EXPECTED_LATENCY=%d", temp_int))
                begin
                    if (temp_int < 0 || temp_int > obs_cycles)
                        $fatal(1,"EXPECTED_LATENCY deve estar entre 0 e OBS_CYCLES");
                    expected_latency = temp_int;
                end
            rng_state = (seed == 0) ? 32'hA5A5_1234 : seed;
            if ($value$plusargs("CSV_PATH=%s", csv_path))
                begin
                    // Caminho de relatorio passado no simulador.
                end
            csv_fd = $fopen(csv_path,"w");
            if (csv_fd == 0)
                begin
                    $fatal(1,"Falha ao abrir CSV_PATH=%s",csv_path);
                end
            $fdisplay(csv_fd,"tx_id,test_id,subcase,weights,start_cycle,end_cycle,latency_cycles,expected0,expected1,observed0,observed1,status,errors");

            fill_image(0);
            clear_weights();

            if ($test$plusargs("DUMP_VCD"))
                begin
                    $dumpfile("tb_cnn_top_images.vcd");
                    $dumpvars(1, testbench); // Apenas este escopo; nao inclui a instancia do DUT.
                end

            $display("[CFG] TB CNN reduzida DW=%0d IMG=%0dx%0d CH=%0d F1=%0d F2=%0d FC=%0d/%0d",
                     DATA_WIDTH, IMG_SIZE_1, IMG_SIZE_1, N_CHANNELS,
                     N_FILTERS_LAYER_1, N_FILTERS_LAYER_2, N_NEURONS_1, N_NEURONS_2);
            $display("[CFG] TEST=%s OBS_CYCLES=%0d RANDOM_COUNT=%0d SEED=%0d",
                     selected_test, obs_cycles, random_count, seed);
`ifdef __ICARUS__
            $display("[CFG] Icarus: scoreboard bit-exato e assertions procedurais; cobertura por covergroup indisponivel");
`else
            $display("[CFG] Verificacao: scoreboard bit-exato, SVA e cobertura");
`endif
            $display("[CFG] CAIXA_PRETA: somente portas publicas; latencia esperada=%0d (0=caracterizacao)",expected_latency);
            if (!timing_check_enable)
                begin
                    $display("[INCOMPLETE] Verificacao temporal desabilitada via NO_TIMING_CHECK");
                    incomplete_count++;
                end

            // Reset inicial: rst ativo alto durante quatro bordas de clock.
            repeat (4) @(negedge clk);
            rst = 1'b0;
            repeat (2) @(negedge clk);

            if ((selected_test == "ALL") || (selected_test == "IMG-00"))
                begin
                    test_IMG_00();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-01"))
                begin
                    test_IMG_01();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-02"))
                begin
                    test_IMG_02();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-03"))
                begin
                    test_IMG_03();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-04"))
                begin
                    test_IMG_04();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-05"))
                begin
                    test_IMG_05();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-06"))
                begin
                    test_IMG_06();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-07"))
                begin
                    test_IMG_07();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-08"))
                begin
                    test_IMG_08();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-09"))
                begin
                    test_IMG_09();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-10"))
                begin
                    test_IMG_10();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-11"))
                begin
                    test_IMG_11();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-12"))
                begin
                    test_IMG_12();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-13"))
                begin
                    test_IMG_13();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-14"))
                begin
                    test_IMG_14();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-15"))
                begin
                    test_IMG_15();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-16"))
                begin
                    test_IMG_16();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-17"))
                begin
                    test_IMG_17();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-18"))
                begin
                    test_IMG_18();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-19"))
                begin
                    test_IMG_19();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-20"))
                begin
                    test_IMG_20();
                end
            if ((selected_test == "ALL") || (selected_test == "IMG-21"))
                begin
                    test_IMG_21();
                end

            repeat (10) @(negedge clk);
            if (sb_pending)
                begin
                    report_error("PENDING","final da campanha com transacao pendente");
                    close_transaction(1'b1);
                end
            $display("\n============== RELATORIO FINAL ==============");
            $display("[SUMMARY] total_starts=%0d checked_PASS=%0d checked_FAIL=%0d aborted_by_reset=%0d incomplete=%0d",
                     transaction_count,pass_count,fail_transaction_count,abort_count,incomplete_count);
            $display("[SUMMARY] errors=%0d assertions=%0d sim_cycles=%0d seed=%0d",error_count,assertion_error_count,cycle_count,seed);
            $display("[SUMMARY] outputs_checked=%0d latency_min=%0d latency_max=%0d",
                     outputs_checked,min_latency,max_latency);
            for (int i=0; i<22; i++)
                begin
                    if (case_executed[i])
                        begin
                            $display("[CASE] IMG-%02d starts=%0d pass=%0d fail=%0d incomplete=%0d",
                                 i,launched_per_case[i],pass_per_case[i],fail_per_case[i],incomplete_per_case[i]);
                        end
                end
`ifdef __ICARUS__
            $display("[COVERAGE] N/A: Icarus nao suporta covergroup; consulte os contadores [CASE] e [SUMMARY]");
`else
            $display("[COVERAGE] scenarios=%0.2f%% pixels=%0.2f%% impulses=%0.2f%% bias=%0.2f%% quantization=%0.2f%%",
                     cov_scenario.get_inst_coverage(),cov_pixel.get_inst_coverage(),
                     cov_spatial.get_inst_coverage(),cov_bias.get_inst_coverage(),
                     cov_quant.get_inst_coverage());
`endif
            $display("[REPORT] CSV=%s",csv_path);
            if (csv_fd != 0)
                begin
                    $fclose(csv_fd);
                end
            if (transaction_count == 0)
                begin
                    incomplete_count++;
                    $display("[INCOMPLETE] Nenhum TEST selecionado foi executado");
                end
`ifdef CNN_TOP_VERILATOR_COVERAGE
            // Salvar antes de $fatal para preservar a evidencia de campanhas FAIL.
            cnn_top_write_coverage(coverage_path);
            $display("[REPORT] Banco de cobertura=%s",coverage_path);
`endif
            if ((error_count!=0) || (fail_transaction_count!=0))
                begin
                    $display("[RESULT] FAIL");
                    $fatal(1,"CNN TOP FAIL: erros de verificacao detectados");
                end
            else if (incomplete_count!=0)
                begin
                    $display("[RESULT] INCOMPLETE");
                    $finish; // Sem erro funcional provado, mas campanha NAO aprovada.
                end
            else
                begin
                    $display("[RESULT] PASS");
                    $finish;
                end
        end

endmodule
