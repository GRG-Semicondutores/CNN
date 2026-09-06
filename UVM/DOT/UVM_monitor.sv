class dot_monitor extends uvm_monitor;
    `uvm_component_utils(dot_monitor)

    dot_vif_t vif;
    uvm_analysis_port #(dot_seq_item) ap;
    int cycle_count;

    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
        cycle_count = 0;
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(dot_vif_t)::get(this, "", "vif", vif))
            `uvm_fatal("DOT_MON", "virtual interface nao configurada")
    endfunction

    task run_phase(uvm_phase phase);
        dot_seq_item tr;
        int i;

        forever begin
            @(posedge vif.clk);
            cycle_count++;

            tr = dot_seq_item::type_id::create($sformatf("sample_%0d", cycle_count));
            tr.cycle      = cycle_count;
            tr.rst        = vif.rst;
            tr.valid_in   = vif.valid_in;
            tr.test_id    = vif.tb_test_id;
            tr.round_id   = vif.tb_round;
            tr.seed       = vif.tb_seed;
            tr.tx_id      = vif.tb_tx_id;
            tr.skipped_tests = vif.tb_skipped_tests;
            tr.input_flat = '0;
            tr.weight_flat = '0;

            for (i=0; i<N_INPUTS; i++) begin
                tr.input_flat[i*DATA_WIDTH +: DATA_WIDTH] = vif.input_vec[i];
                tr.weight_flat[i*DATA_WIDTH +: DATA_WIDTH] = vif.weight[i];
            end

            // Entradas capturadas na borda ativa; saidas apos as atribuicoes NBA.
            // Reproduz as duas etapas do always @(posedge clk) da bancada funcional.
            #1;
            tr.valid_out = vif.valid_out;
            tr.out       = vif.out;
            ap.write(tr);
        end
    endtask
endclass
