class relu_monitor extends uvm_monitor;
    `uvm_component_utils(relu_monitor)

    virtual relu_if vif;
    uvm_analysis_port #(relu_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db #(virtual relu_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NOVIF", "vif nao encontrado no monitor ReLU")
        end
    endfunction

    task run_phase(uvm_phase phase);
        relu_seq_item observed;

        super.run_phase(phase);

        forever begin
            @(vif.sample_toggle);

            observed = relu_seq_item::type_id::create("observed");
            observed.in                 = vif.sampled_in;
            observed.out                = vif.sampled_out;
            observed.test_case_number   = vif.sampled_test_case_number;
            observed.matrix_case_number = vif.sampled_matrix_case_number;
            observed.iteration          = vif.sampled_iteration;
            observed.msb_value          = vif.sampled_msb_value;
            observed.pattern_variant    = vif.sampled_pattern_variant;

            // Equivalente UVM ao monitor textual do TB original, mantido em
            // UVM_HIGH para nao gerar 14 mil linhas por padrao.
            `uvm_info("RELU_MON", observed.convert2string(), UVM_HIGH)

            ap.write(observed);
        end
    endtask
endclass
