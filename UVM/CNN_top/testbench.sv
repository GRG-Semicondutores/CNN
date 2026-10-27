`timescale 1ns/1ps
package cnn_tb_types;
    timeunit 1ns; timeprecision 1ps;
    `include "UVM_tb_params.svh"
endpackage
interface cnn_if(input logic clk);
    timeunit 1ns; timeprecision 1ps;
    import cnn_tb_types::*;
    // O xezim 0.11.3 escala #1ps incorretamente no monitor de classe.
    // O strobe da interface preserva o instante de amostragem da bancada.
    bit monitor_sample_tick=1'b0;
    always @(posedge clk) begin
        #1ps;
        monitor_sample_tick=~monitor_sample_tick;
    end
    logic rst=1'b1, start=1'b0;
    data_t imagem     [0:N_CHANNELS-1][0:N_PIXELS-1];
    data_t kernel1    [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1];
    data_t kernel2    [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1];
    data_t FCWeight1  [0:N_NEURONS_1-1][0:N_FLAT-1];
    data_t FCWeight2  [0:N_NEURONS_2-1][0:N_NEURONS_1-1];
    data_t ConvBias1  [0:N_FILTERS_LAYER_1-1];
    data_t ConvBias2  [0:N_FILTERS_LAYER_2-1];
    data_t FCBias1    [0:N_NEURONS_1-1];
    data_t FCBias2    [0:N_NEURONS_2-1];


    wire signed [DATA_WIDTH-1:0] result_FC2[0:N_NEURONS_2-1];
    wire valid_out4;
    int tb_case_id=-1, tb_tx_id=0;
    // Metadados packed para compatibilidade com virtual interfaces no Verilator.
    logic [8*128-1:0] tb_subcase="NONE";
    logic [8*32-1:0] tb_weights="W00";
    bit tb_exploratory=0;
    bit [21:0] tb_cases_started='0;
    function automatic cnn_payload_t snapshot();
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
    task automatic drive_payload(cnn_payload_t value);
        for (int a=0; a<N_CHANNELS; a++)
            for (int b=0; b<N_PIXELS; b++)
                imagem[a][b] = value.imagem[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            for (int b=0; b<N_CHANNELS; b++)
                for (int c=0; c<N_KERNEL; c++)
                    kernel1[a][b][c] = value.kernel1[a][b][c];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            for (int b=0; b<N_FILTERS_LAYER_1; b++)
                for (int c=0; c<N_KERNEL; c++)
                    kernel2[a][b][c] = value.kernel2[a][b][c];
        for (int a=0; a<N_NEURONS_1; a++)
            for (int b=0; b<N_FLAT; b++)
                FCWeight1[a][b] = value.FCWeight1[a][b];
        for (int a=0; a<N_NEURONS_2; a++)
            for (int b=0; b<N_NEURONS_1; b++)
                FCWeight2[a][b] = value.FCWeight2[a][b];
        for (int a=0; a<N_FILTERS_LAYER_1; a++)
            ConvBias1[a] = value.ConvBias1[a];
        for (int a=0; a<N_FILTERS_LAYER_2; a++)
            ConvBias2[a] = value.ConvBias2[a];
        for (int a=0; a<N_NEURONS_1; a++)
            FCBias1[a] = value.FCBias1[a];
        for (int a=0; a<N_NEURONS_2; a++)
            FCBias2[a] = value.FCBias2[a];
    endtask
endinterface

package cnn_uvm_pkg;
    timeunit 1ns; timeprecision 1ps;
    import uvm_pkg::*;
    import cnn_tb_types::*;
    `include "uvm_macros.svh"
    typedef virtual cnn_if cnn_vif_t;
`ifdef CNN_TOP_VERILATOR_COVERAGE
    import "DPI-C" function void cnn_top_write_coverage(input string filename);
`endif
    `include "UVM_config.sv"
    `include "UVM_seq_item.sv"
    `include "UVM_sequencer.sv"
    `include "UVM_sequence.sv"
    `include "UVM_driver.sv"
    `include "UVM_monitor.sv"
    `include "UVM_coverage.sv"
    `include "UVM_reference.sv"
    `include "UVM_scoreboard.sv"
    `include "UVM_agent.sv"
    `include "UVM_env.sv"
    `include "UVM_test.sv"
endpackage

module tb_cnn;
    timeunit 1ns; timeprecision 1ps;
    import uvm_pkg::*;
    import cnn_tb_types::*;
    import cnn_uvm_pkg::*;
    logic clk=1'b0;
    always #(CLK_PERIOD/2) clk=~clk;
    cnn_if cif(clk);

    // Espelhos somente de leitura das IOs publicas, visiveis no nivel 1.
    wire rst = cif.rst;
    wire start = cif.start;
    wire data_t imagem [0:N_CHANNELS-1][0:N_PIXELS-1];
    wire data_t kernel1 [0:N_FILTERS_LAYER_1-1][0:N_CHANNELS-1][0:N_KERNEL-1];
    wire data_t kernel2 [0:N_FILTERS_LAYER_2-1][0:N_FILTERS_LAYER_1-1][0:N_KERNEL-1];
    wire data_t FCWeight1 [0:N_NEURONS_1-1][0:N_FLAT-1];
    wire data_t FCWeight2 [0:N_NEURONS_2-1][0:N_NEURONS_1-1];
    wire data_t ConvBias1 [0:N_FILTERS_LAYER_1-1];
    wire data_t ConvBias2 [0:N_FILTERS_LAYER_2-1];
    wire data_t FCBias1 [0:N_NEURONS_1-1];
    wire data_t FCBias2 [0:N_NEURONS_2-1];
    wire data_t result_FC2 [0:N_NEURONS_2-1];
    wire valid_out4 = cif.valid_out4;
    assign imagem = cif.imagem;
    assign kernel1 = cif.kernel1;
    assign kernel2 = cif.kernel2;
    assign FCWeight1 = cif.FCWeight1;
    assign FCWeight2 = cif.FCWeight2;
    assign ConvBias1 = cif.ConvBias1;
    assign ConvBias2 = cif.ConvBias2;
    assign FCBias1 = cif.FCBias1;
    assign FCBias2 = cif.FCBias2;
    assign result_FC2 = cif.result_FC2;

`ifdef CNN_TOP_GATE_LEVEL
    `include "CNN_openroad_adapter.svh"
`else
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
        .clk(cif.clk),
        .rst(cif.rst),
        .start(cif.start),
        .imagem(cif.imagem),
        .kernel1(cif.kernel1),
        .kernel2(cif.kernel2),
        .FCWeight1(cif.FCWeight1),
        .FCWeight2(cif.FCWeight2),
        .ConvBias1(cif.ConvBias1),
        .ConvBias2(cif.ConvBias2),
        .FCBias1(cif.FCBias1),
        .FCBias2(cif.FCBias2),
        .result_FC2(cif.result_FC2),
        .valid_out4(cif.valid_out4)
    );
`endif


    initial begin
        string fst_path;
        cif.drive_payload('0);
        if ($test$plusargs("DUMP_FST") || $test$plusargs("waveform")) begin
            fst_path="CNN_top_UVM.fst";
            if ($value$plusargs("FST_PATH=%s",fst_path)) begin end
            $dumpfile(fst_path);
            $dumpvars(1,tb_cnn);
        end
        uvm_config_db#(cnn_vif_t)::set(null,"*","vif",cif);
        run_test();
    end
endmodule
