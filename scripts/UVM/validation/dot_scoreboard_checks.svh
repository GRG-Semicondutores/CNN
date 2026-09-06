// Included only in the instrumented audit bench, never in the production test.
class dot_checked_scoreboard extends dot_scoreboard;
    `uvm_component_utils(dot_checked_scoreboard)
    function new(string name, uvm_component parent);
        super.new(name,parent);
    endfunction
    // Synthetic samples do not constitute the complete T00-T28 regression.
    function void check_phase(uvm_phase phase); endfunction
    function void report_phase(uvm_phase phase); endfunction
    function void final_phase(uvm_phase phase); endfunction
    function void check_contract(); super.check_phase(null); endfunction
endclass

class dot_scoreboard_checks extends uvm_test;
    `uvm_component_utils(dot_scoreboard_checks)
    dot_checked_scoreboard scb;
    int checks;
    function new(string name, uvm_component parent);
        super.new(name,parent);
    endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        scb=dot_checked_scoreboard::type_id::create("scb",this);
    endfunction
    function void reset_checker();
        scb.exp_q.delete();
        scb.build_phase(null);
        // Injected errors are expected; validate their counters below.
        scb.set_report_severity_action(UVM_ERROR,UVM_NO_ACTION);
    endfunction
    function void require_true(bit condition, string description);
        if (!condition) `uvm_fatal("CHECKER_TEST",description)
        checks++;
    endfunction
    function void sample(int cycle, int id, bit input_valid=0,
                         bit output_valid=0, int value=0, bit reset=0);
        dot_seq_item tr=new("sample");
        tr.cycle=cycle; tr.test_id=id; tr.tx_id=cycle;
        tr.rst=reset; tr.valid_in=input_valid; tr.valid_out=output_valid;
        tr.set_input_elem(0,7); tr.set_weight_elem(0,3); tr.out=value;
        scb.write(tr);
    endfunction
    task run_phase(uvm_phase phase);
        dot_seq_item tr;
        phase.raise_objection(this);
        reset_checker();
        sample(1,23,1);
        for (int c=2;c<6;c++) sample(c,23);
        sample(6,23,0,1,21); sample(7,24);
        require_true(scb.normal_data_latency==5 && scb.normal_valid_latency==5 &&
                     scb.test_fail[23]==0 && scb.total_pass==1,"nominal isolated transaction");
        require_true(scb.data_lat_min==5 && scb.data_lat_max==5 &&
                     scb.data_lat_samples==1,"independent data latency statistics");
        sample(10,25,0,0,0,1); sample(11,25,1);
        for (int c=12;c<16;c++) sample(c,25);
        sample(16,25,0,1,21); sample(17,26);
        require_true(scb.test_fail[25]==0 && scb.postreset_data_latency==5,
                     "post-reset latency matches T23");

        reset_checker();
        sample(1,23,1);
        for (int c=2;c<5;c++) sample(c,23);
        sample(5,23,0,0,21); sample(6,23,0,1,21); sample(7,24);
        require_true(scb.normal_data_latency==4 && scb.normal_valid_latency==5 &&
                     scb.test_fail[23]==1 && scb.latency_early==1,
                     "early first appearance must fail T23");
        sample(10,25,0,0,0,1); sample(11,25,1);
        for (int c=12;c<15;c++) sample(c,25);
        sample(15,25,0,0,21); sample(16,25,0,1,21); sample(17,26);
        require_true(scb.test_fail[25]==0,"unchanged offset must not be counted again as reset failure");

        reset_checker();
        sample(1,23,1); sample(6,23,0,0,21); sample(7,24);
        require_true(scb.valid_fail==1 && scb.loss_fail==1 && scb.latency_fail>=2 &&
                     scb.normal_valid_latency==-1,"missing valid cannot hide a missing measurement");
        require_true(scb.data_latency_pass==1 && scb.total_pass==0,
                     "data is checked independently when valid is absent");

        reset_checker();
        sample(1,23,1); sample(6,23,0,1,0); sample(7,24);
        require_true(scb.data_fail==1 && scb.normal_data_latency==-1 &&
                     scb.latency_fail==1,"missing data must fail characterization");

        reset_checker();
        sample(1,0,1); sample(6,0,0,0,0);
        require_true(scb.data_fail==1 && scb.valid_fail==1,
                     "simultaneous data and valid failures are both reported");
        sample(7,0,0,1,21);
        require_true(scb.loss_fail==0 && scb.latency_late==2,
                     "late valid resolves pending loss but remains a latency error");

        reset_checker();
        sample(1,1,1); sample(2,1,0,0,0,1); sample(6,1);
        require_true(scb.total_flushed==1 && scb.test_flushed[1]==1 &&
                     scb.exp_q.size()==0 && scb.valid_fail==0,"reset flushes in-flight transactions");
        sample(7,1,0,1,0,1);
        require_true(scb.valid_fail==1 && scb.assertions_fail==1,
                     "valid output during reset fails");

        reset_checker();
        sample(1,0,0,1,0);
        require_true(scb.duplicate_fail==1,"unexpected valid is detected as duplicate");
        reset_checker();
        sample(1,21,0,1,1);
        require_true(scb.order_fail==1,"T21 ordering is independent of expected arrival time");

        reset_checker();
        tr=new("skip_sample"); tr.test_id=12;
        for (int id=7;id<=11;id++) tr.skipped_tests[id]=1;
        tr.cycle=1; scb.write(tr); tr.cycle=2; scb.write(tr);
        require_true(scb.skipped_required==5 && scb.xz_skipped,
                     "persistent skip mask is counted only once");
        reset_checker();
        scb.check_contract();
        require_true(scb.completeness_fail>0 && scb.regression_fail &&
                     scb.test_fail[23]>0 && scb.test_fail[25]>0,
                     "empty regression cannot pass any required measurement/count checks");
        `uvm_info("CHECKER_TEST",$sformatf("SCOREBOARD CHECKS PASS: %0d",checks),UVM_NONE)
        phase.drop_objection(this);
    endtask
endclass
