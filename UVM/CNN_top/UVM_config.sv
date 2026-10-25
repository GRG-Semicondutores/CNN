class cnn_config extends uvm_object;
    `uvm_object_utils(cnn_config)
    string selected_test="ALL";
    int unsigned seed=20261025, random_count=1000, obs_cycles=64;
    int expected_latency=0;
    bit timing_check_enable=1, trace_expected=0, print_images=0;
    string csv_path="cnn_verif_results.csv";
    string coverage_path="cnn_uvm_coverage.dat";
    function new(string name="cnn_config"); super.new(name); endfunction
    function void read_plusargs();
        int value;
        void'($value$plusargs("TEST=%s",selected_test));
        void'($value$plusargs("SEED=%d",seed));
        if ($value$plusargs("RANDOM_COUNT=%d",value) && value>=0) random_count=value;
        if ($value$plusargs("OBS_CYCLES=%d",value) && value>0) obs_cycles=value;
        if ($value$plusargs("EXPECTED_LATENCY=%d",value)) begin
            if (value<0 || value>obs_cycles) `uvm_fatal("CNN_CFG","EXPECTED_LATENCY fora da janela OBS_CYCLES")
            expected_latency=value;
        end
        timing_check_enable=!$test$plusargs("NO_TIMING_CHECK");
        trace_expected=$test$plusargs("TRACE_EXPECTED");
        print_images=$test$plusargs("PRINT_IMAGES");
        void'($value$plusargs("CSV_PATH=%s",csv_path));
        void'($value$plusargs("COVERAGE_PATH=%s",coverage_path));
    endfunction
endclass
