class dot_driver extends uvm_driver #(dot_seq_item);
    `uvm_component_utils(dot_driver)

    dot_vif_t vif;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(dot_vif_t)::get(this, "", "vif", vif))
            `uvm_fatal("DOT_DRV", "virtual interface nao configurada")
    endfunction

    task drive_flat_vectors(dot_seq_item req);
        int i;
        for (i=0; i<N_INPUTS; i++) begin
            vif.input_vec[i] = req.input_flat[i*DATA_WIDTH +: DATA_WIDTH];
            vif.weight[i]    = req.weight_flat[i*DATA_WIDTH +: DATA_WIDTH];
        end
    endtask

    task run_phase(uvm_phase phase);
        dot_seq_item req;

        // O reset inicial e controlado exclusivamente pelo dot_test.
        // O driver apenas aguarda a liberacao antes de aceitar o primeiro item.
        if (vif.rst === 1'b1)
            wait (vif.rst === 1'b0);

        forever begin
            seq_item_port.get_next_item(req);

            case (req.kind)
                dot_seq_item::DOT_DATA: begin
                    // Na bancada funcional os vetores sao preparados ANTES da task
                    // apply_transaction aguardar o proximo negedge. Reproduzimos
                    // exatamente isso para preservar inclusive a atividade do datapath
                    // enquanto valid_in ainda esta baixo.
                    vif.tb_test_id = req.test_id;
                    vif.tb_round   = req.round_id;
                    vif.tb_seed    = req.seed;
                    vif.tb_tx_id   = req.tx_id;
                    drive_flat_vectors(req);

                    @(negedge vif.clk);
                    vif.rst      = 1'b0;
                    vif.valid_in = 1'b1;

                    // Mantem o estimulo estavel atraves da borda de captura, como
                    // apply_transaction() na bancada funcional.
                    @(posedge vif.clk);
                    #2;
                end

                dot_seq_item::DOT_GAP: begin
                    vif.tb_test_id = req.test_id;
                    vif.tb_round   = req.round_id;
                    vif.tb_seed    = req.seed;

                    // T22/T24 alteram os vetores mesmo nos ciclos invalidos.
                    // drain() preserva os vetores anteriores, como apply_gap().
                    if (req.drive_vectors)
                        drive_flat_vectors(req);

                    @(negedge vif.clk);
                    vif.rst      = 1'b0;
                    vif.valid_in = 1'b0;

                    // apply_gap() retorna no proprio negedge; nao aguardamos posedge.
                end

                dot_seq_item::DOT_RESET: begin
                    vif.tb_test_id = req.test_id;
                    vif.tb_round   = req.round_id;
                    vif.tb_seed    = req.seed;

                    // pulse_reset() nao altera input_vec/weight. O datapath do DUT
                    // nao e resetado, apenas o pipeline de validacao.
                    @(negedge vif.clk);
                    vif.valid_in = 1'b0;
                    vif.rst      = 1'b1;

                    repeat (req.reset_cycles) @(negedge vif.clk);
                    vif.rst = 1'b0;
                end

                dot_seq_item::DOT_SKIP: begin
                    // Mascara persistente: um pulso sem tempo seria invisivel ao monitor.
                    // Marcar SKIP nao consome ciclos, como no testbench funcional.
                    vif.tb_test_id = req.test_id;
                    vif.tb_round   = -1;
                    vif.tb_seed    = 0;
                    vif.tb_skipped_tests[req.test_id] = 1'b1;
                end
            endcase

            seq_item_port.item_done();
        end
    endtask
endclass
