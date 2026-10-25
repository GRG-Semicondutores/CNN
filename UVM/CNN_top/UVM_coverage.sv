class cnn_coverage extends uvm_subscriber #(cnn_seq_item);
    `uvm_component_utils(cnn_coverage)
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


    function new(string name,uvm_component parent);
        super.new(name,parent);
        cg_scenario=new();
        cg_pixel=new();
        cg_spatial=new();
        cg_bias=new();
        cg_quant=new();

    endfunction
    function void sample_quant(int stage,int kind); cg_quant.sample(stage,kind); endfunction
    virtual function void write(cnn_seq_item tr);
        if (tr.rst!==1'b0 || tr.start!==1'b1) return;
                            cg_scenario.sample(tr.case_id,weight_index(tr.weights));
                            for (int p=0; p<N_PIXELS; p++)
                                begin
                                    cg_pixel.sample($signed(data_t'(tr.pins.imagem[0][p])));
                                end
                            for (int p=0; p<N_FILTERS_LAYER_1; p++)
                                begin
                                    cg_bias.sample($signed(data_t'(tr.pins.ConvBias1[p])));
                                end
                            for (int p=0; p<N_FILTERS_LAYER_2; p++)
                                begin
                                    cg_bias.sample($signed(data_t'(tr.pins.ConvBias2[p])));
                                end
                            for (int p=0; p<N_NEURONS_1; p++)
                                begin
                                    cg_bias.sample($signed(data_t'(tr.pins.FCBias1[p])));
                                end
                            for (int p=0; p<N_NEURONS_2; p++)
                                begin
                                    cg_bias.sample($signed(data_t'(tr.pins.FCBias2[p])));
                                end
                            if ((tr.case_id >= 3) && (tr.case_id <= 5))
                                begin
                                    int num_active;
                                    int active_pos;
                                    num_active=0;
                                    active_pos=-1;
                                    for (int p=0; p<N_PIXELS; p++)
                                        begin
                                            if (tr.pins.imagem[0][p] != 0)
                                                begin
                                                    num_active++;
                                                    active_pos=p;
                                                end
                                        end
                                    if (num_active==1)
                                        begin
                                            cg_spatial.sample(active_pos/IMG_SIZE_1,active_pos%IMG_SIZE_1);
                                        end
                                end

    endfunction
    function void print_summary();
        $display("[COVERAGE] scenarios=%0.2f%% pixels=%0.2f%% impulses=%0.2f%% bias=%0.2f%% quantization=%0.2f%%",
                 cg_scenario.get_inst_coverage(),cg_pixel.get_inst_coverage(),cg_spatial.get_inst_coverage(),
                 cg_bias.get_inst_coverage(),cg_quant.get_inst_coverage());
    endfunction
endclass
