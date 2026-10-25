class relu_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(relu_scoreboard)

    uvm_analysis_imp #(relu_seq_item, relu_scoreboard) imp;

    int unsigned pass_count;
    int unsigned fail_count;
    int unsigned routine_pass[1:RELU_NUM_ROUTINES][0:1];
    int unsigned routine_fail[1:RELU_NUM_ROUTINES][0:1];

    // Casos de fronteira exigidos no plano de verificacao.
    bit hit_zero;
    bit hit_max_positive;
    bit hit_min_negative;
    bit hit_minus_one;

    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        pass_count       = 0;
        fail_count       = 0;
        hit_zero         = 1'b0;
        hit_max_positive = 1'b0;
        hit_min_negative = 1'b0;
        hit_minus_one    = 1'b0;

        foreach (routine_pass[r, s]) begin
            routine_pass[r][s] = 0;
            routine_fail[r][s] = 0;
        end
    endfunction

    virtual function void write(relu_seq_item tr);
        logic [RELU_DATA_WIDTH-1:0] expected;
        bit valid_msb;
        int unsigned sign_idx;

        valid_msb = 1'b1;

        if (tr.in[RELU_DATA_WIDTH-1] === 1'b0) begin
            expected = tr.in;
            sign_idx = 0;
        end
        else if (tr.in[RELU_DATA_WIDTH-1] === 1'b1) begin
            expected = '0;
            sign_idx = 1;
        end
        else begin
            expected = 'x;
            sign_idx = 0;
            valid_msb = 1'b0;
        end

        // Rastreamento explicito dos quatro casos de fronteira.
        if (tr.in === {RELU_DATA_WIDTH{1'b0}})
            hit_zero = 1'b1;

        if ((tr.in[RELU_DATA_WIDTH-1] === 1'b0) &&
            (tr.in[RELU_DATA_WIDTH-2:0] === {(RELU_DATA_WIDTH-1){1'b1}}))
            hit_max_positive = 1'b1;

        if ((tr.in[RELU_DATA_WIDTH-1] === 1'b1) &&
            (tr.in[RELU_DATA_WIDTH-2:0] === {(RELU_DATA_WIDTH-1){1'b0}}))
            hit_min_negative = 1'b1;

        if (tr.in === {RELU_DATA_WIDTH{1'b1}})
            hit_minus_one = 1'b1;

        if (valid_msb && (tr.out === expected)) begin
            pass_count++;
            if ((tr.test_case_number >= 1) &&
                (tr.test_case_number <= RELU_NUM_ROUTINES))
                routine_pass[tr.test_case_number][sign_idx]++;
        end
        else begin
            fail_count++;

            if ((tr.test_case_number >= 1) &&
                (tr.test_case_number <= RELU_NUM_ROUTINES))
                routine_fail[tr.test_case_number][sign_idx]++;

            if (!valid_msb) begin
                `uvm_error("RELU_SCB",
                    $sformatf(
                        "[FAIL] Matriz %0d | Rotina %0d | MSB invalido: %b",
                        tr.matrix_case_number, tr.test_case_number,
                        tr.in[RELU_DATA_WIDTH-1]))
            end
            else begin
                `uvm_error("RELU_SCB",
                    $sformatf(
                        "[FAIL] Matriz %0d | Rotina %0d | MSB=%0b | IN=%032b | OUT=%032b | Expected=%032b",
                        tr.matrix_case_number, tr.test_case_number,
                        sign_idx, tr.in, tr.out, expected))
            end
        end
    endfunction

    function void report_phase(uvm_phase phase);
        int unsigned matrix_case;
        int unsigned observed_samples;

        super.report_phase(phase);

        observed_samples = pass_count + fail_count;

        `uvm_info("RELU_SCB", "+---------------------- TEST SUMMARY ----------------------+", UVM_NONE)

        // Relatorio alinhado com os 14 casos da matriz de requisitos.
        for (int r = 1; r <= RELU_NUM_ROUTINES; r++) begin
            for (int s = 0; s < RELU_NUM_MSB_STATES; s++) begin
                matrix_case = ((r - 1) * 2) + s + 1;

                if (r <= RELU_EXECUTED_ROUTINES) begin
                    `uvm_info("RELU_SCB",
                        $sformatf(
                            "Matrix Case %0d | Routine=%0d | MSB=%0d | PASS=%0d | FAIL=%0d",
                            matrix_case, r, s,
                            routine_pass[r][s], routine_fail[r][s]), UVM_NONE)
                end
                else begin
                    `uvm_info("RELU_SCB",
                        $sformatf(
                            "Matrix Case %0d | Routine=%0d | MSB=%0d | SKIP: requer 4-state",
                            matrix_case, r, s), UVM_NONE)
                end
            end
        end

        `uvm_info("RELU_SCB",
            $sformatf(
                "TOTAL EXECUTADO | PASS=%0d | FAIL=%0d | OBSERVED=%0d | EXPECTED=%0d",
                pass_count, fail_count, observed_samples, RELU_EXPECTED_SAMPLES),
            UVM_NONE)

        `uvm_info("RELU_SCB",
            $sformatf(
                "FRONTEIRAS | zero=%0d | max_positive=%0d | min_negative=%0d | minus_one=%0d",
                hit_zero, hit_max_positive, hit_min_negative, hit_minus_one),
            UVM_NONE)

        if (observed_samples != RELU_EXPECTED_SAMPLES) begin
            $fatal(1,
                "[RELU_SCB] Quantidade incorreta de amostras: obtidas=%0d esperadas=%0d",
                observed_samples, RELU_EXPECTED_SAMPLES);
        end

        // O TB original usa 31'b1 na rotina 3, portanto nao gera o maior
        // positivo nem -1. Mantemos a visibilidade dos requisitos do plano,
        // mas eles nao podem reprovar uma regressao de equivalencia ao TB.
        if (!(hit_zero && hit_max_positive && hit_min_negative && hit_minus_one)) begin
            `uvm_warning("RELU_SCB",
                {"Cobertura de fronteiras do plano incompleta. A sequencia replica ",
                 "literalmente o TB original, inclusive o estimulo 31'b1 da rotina 3."})
        end

        if (fail_count != 0) begin
            $fatal(1, "[RELU_SCB] ReLU reprovada com %0d falhas", fail_count);
        end

        if (RELU_SUPPORTS_4STATE) begin
            if (observed_samples != RELU_FULL_EXPECTED_SAMPLES) begin
                $fatal(1,
                    "[RELU_SCB] Simulador 4-state nao executou o plano completo: %0d/%0d",
                    observed_samples, RELU_FULL_EXPECTED_SAMPLES);
            end
            `uvm_info("RELU_SCB",
                "PLANO COMPLETO APROVADO: 7 rotinas / 14 classes da matriz executadas.",
                UVM_NONE)
        end
        else begin
            `uvm_warning("RELU_SCB",
                {"REGRESSAO PARCIAL APROVADA (2-state). O resultado nao satisfaz sozinho ",
                 "o criterio integral do documento, pois X/Z nao foram verificaveis."})

            if ($test$plusargs("RELU_REQUIRE_FULL_PLAN")) begin
                $fatal(1,
                    "[RELU_SCB] +RELU_REQUIRE_FULL_PLAN exige simulador 4-state");
            end
        end
    endfunction
endclass
