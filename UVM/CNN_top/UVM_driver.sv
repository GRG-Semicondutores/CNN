class cnn_driver extends uvm_driver #(cnn_seq_item);
    `uvm_component_utils(cnn_driver)
    cnn_vif_t vif;
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(cnn_vif_t)::get(this,"","vif",vif))
            `uvm_fatal("CNN_DRV","Interface nao configurada")
    endfunction
    task run_phase(uvm_phase phase);
        cnn_seq_item item;
        wait(vif.rst===1'b0);
        forever begin
            seq_item_port.get_next_item(item);
            case(item.kind)
                cnn_seq_item::CNN_CASE: begin
                    vif.tb_case_id=item.case_id;
                    vif.tb_exploratory=item.exploratory;
                    if (item.case_id>=0 && item.case_id<22) vif.tb_cases_started[item.case_id]=1;
                end
                cnn_seq_item::CNN_START: begin
                    // Vetores antes do proximo negedge, como no TB funcional.
                    vif.drive_payload(item.pins);
                    vif.tb_weights=cnn_label_bits(item.weights);
                    repeat(item.lead_cycles) @(negedge vif.clk);
                    vif.tb_subcase=cnn_label_bits(item.subcase); vif.tb_tx_id=item.tx_id;
                    vif.start=1'b1;
                    @(negedge vif.clk);
                    vif.start=1'b0;
                end
                cnn_seq_item::CNN_PREPARE: begin
                    vif.drive_payload(item.pins);
                    vif.tb_weights=cnn_label_bits(item.weights);
                end
                cnn_seq_item::CNN_WAIT: repeat(item.cycles) @(negedge vif.clk);
                cnn_seq_item::CNN_RESET: begin
                    repeat(item.lead_cycles) @(negedge vif.clk);
                    vif.start=1'b0; vif.rst=1'b1;
                    repeat(item.cycles) @(negedge vif.clk);
                    vif.rst=1'b0;
                end
            endcase
            seq_item_port.item_done();
        end
    endtask
endclass
