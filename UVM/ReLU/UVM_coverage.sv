class relu_coverage extends uvm_subscriber #(relu_seq_item);
    `uvm_component_utils(relu_coverage)

    // Cobertura funcional manual, mantida em todos os simuladores para que o
    // relatorio seja portavel e nao dependa do suporte a covergroup.
    int unsigned hits[1:RELU_NUM_ROUTINES][0:1];
    int unsigned variant_hits[1:RELU_NUM_ROUTINES][0:1];

`ifndef VERILATOR
    // Em simuladores 4-state, tambem produz cobertura SystemVerilog formal.
    int sampled_routine;
    int sampled_msb;

    covergroup relu_cg;
        option.per_instance = 1;

        cp_msb: coverpoint sampled_msb {
            bins msb_0 = {0};
            bins msb_1 = {1};
        }

        cp_pattern: coverpoint sampled_routine {
            bins random_values = {1};
            bins all_zero      = {2};
            bins all_one       = {3};
            bins alternating   = {4};
            bins all_z         = {5};
            bins all_x         = {6};
            bins alternating_xz = {7};
        }

        pattern_x_msb: cross cp_pattern, cp_msb;
    endgroup
`endif

    function new(string name, uvm_component parent);
        super.new(name, parent);
`ifndef VERILATOR
        relu_cg = new();
`endif
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        foreach (hits[r, s]) begin
            hits[r][s] = 0;
            variant_hits[r][s] = 0;
        end
    endfunction

    virtual function void write(relu_seq_item tr);
        int sign_idx;

        if (tr.in[RELU_DATA_WIDTH-1] === 1'b0)
            sign_idx = 0;
        else if (tr.in[RELU_DATA_WIDTH-1] === 1'b1)
            sign_idx = 1;
        else
            return;

        if ((tr.test_case_number >= 1) &&
            (tr.test_case_number <= RELU_NUM_ROUTINES)) begin
            hits[tr.test_case_number][sign_idx]++;

            if (tr.pattern_variant)
                variant_hits[tr.test_case_number][sign_idx]++;
        end

`ifndef VERILATOR
        sampled_routine = tr.test_case_number;
        sampled_msb     = sign_idx;
        relu_cg.sample();
`endif
    endfunction

    function void report_phase(uvm_phase phase);
        bit full_manual_coverage;
        super.report_phase(phase);

        full_manual_coverage = 1'b1;

        `uvm_info("RELU_COV", "+---------------- FUNCTIONAL COVERAGE ----------------+", UVM_NONE)

        for (int r = 1; r <= RELU_NUM_ROUTINES; r++) begin
            for (int s = 0; s < RELU_NUM_MSB_STATES; s++) begin
                if (r <= RELU_EXECUTED_ROUTINES) begin
                    `uvm_info("RELU_COV",
                        $sformatf("Routine=%0d x MSB=%0d | hits=%0d",
                                  r, s, hits[r][s]), UVM_NONE)
                    if (hits[r][s] == 0)
                        full_manual_coverage = 1'b0;
                end
                else begin
                    `uvm_info("RELU_COV",
                        $sformatf("Routine=%0d x MSB=%0d | unavailable in 2-state",
                                  r, s), UVM_NONE)
                    full_manual_coverage = 1'b0;
                end
            end
        end

        `uvm_info("RELU_COV",
            "Padrao alternado 0/1: polaridade fixa do TB original exercitada para MSB=0 e MSB=1.",
            UVM_NONE)

        if (RELU_SUPPORTS_4STATE) begin
            if (!full_manual_coverage) begin
                `uvm_error("RELU_COV",
                    "Cobertura funcional completa 7 padroes x 2 estados do MSB nao atingida")
            end
            else begin
                `uvm_info("RELU_COV",
                    "Cobertura funcional completa: 14/14 classes da matriz atingidas.",
                    UVM_NONE)
            end
`ifndef VERILATOR
            `uvm_info("RELU_COV",
                $sformatf("Covergroup pattern_x_msb = %0.2f%%", relu_cg.get_inst_coverage()),
                UVM_NONE)
`endif
        end
        else begin
            `uvm_warning("RELU_COV",
                "Cobertura funcional parcial: classes dependentes de X/Z requerem simulador 4-state.")
        end
    endfunction
endclass
