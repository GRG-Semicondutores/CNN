class cnn_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(cnn_scoreboard)
    uvm_analysis_imp #(cnn_seq_item,cnn_scoreboard) imp;
    cnn_config cfg;
    cnn_reference_model model;
    cnn_coverage coverage;
    cnn_seq_item current, pending;
    cnn_result_t expected;
    bit sb_pending=0;
    int sb_errs=0;
    longint unsigned cycle_count=0, sb_launch_cycle=0;
    int unsigned transaction_count=0, pass_count=0, fail_transaction_count=0;
    int unsigned incomplete_count=0, abort_count=0, error_count=0;
    int unsigned assertion_error_count=0, outputs_checked=0;
    int min_latency=-1, max_latency=-1;
    int unsigned launched_per_case[0:21], pass_per_case[0:21];
    int unsigned fail_per_case[0:21], incomplete_per_case[0:21];
    bit [21:0] case_executed='0;
    logic previous_start=0, previous_rst=0, previous_valid=0;
    int csv_fd=0;
    string result_status="INCOMPLETE";

    function new(string name,uvm_component parent);
        super.new(name,parent); imp=new("imp",this); model=new;
    endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(cnn_config)::get(this,"","cfg",cfg))
            `uvm_fatal("CNN_SCB","Configuracao nao fornecida")
        csv_fd=$fopen(cfg.csv_path,"w");
        if (!csv_fd) `uvm_fatal("CNN_CSV",{"Nao foi possivel abrir ",cfg.csv_path})
        $fdisplay(csv_fd,"tx_id,test_id,subcase,weights,start_cycle,end_cycle,latency_cycles,expected0,expected1,observed0,observed1,status,errors");
        if (!cfg.timing_check_enable) incomplete_count++;
        foreach(launched_per_case[i]) begin
            launched_per_case[i]=0; pass_per_case[i]=0;
            fail_per_case[i]=0; incomplete_per_case[i]=0;
        end
    endfunction
    function string case_name(int id);
        return id<0 ? "INIT" : $sformatf("IMG-%02d",id);
    endfunction
    virtual function void report_error(string category,string detail);
        cnn_seq_item context_item;
        error_count++;
        if (sb_pending) sb_errs++;
        context_item=sb_pending ? pending : current;
        `uvm_error("CNN_SCB",$sformatf("[FAIL][%s] tx=%0d case=%s subcase=%s launch=%0d now=%0d %s",
                   category,transaction_count,context_item==null ? "INIT" : case_name(context_item.case_id),
                   context_item==null ? "NONE" : context_item.subcase,sb_launch_cycle,cycle_count,detail))
    endfunction
    function void report_assertion(string detail);
        assertion_error_count++;
        report_error("ASSERT",detail);
    endfunction
    function void check_protocol(cnn_seq_item tr);
        // Equivalentes procedurais das propriedades publicas do TB funcional.
        if (!tr.pre_rst && previous_start===1'b1 && tr.pre_start!==1'b0)
            report_assertion("start deve durar exatamente um ciclo");
        if (previous_rst && tr.pre_valid!==1'b0)
            report_assertion("valid_out4 ativo apos reset");
        if (!tr.pre_rst && !tr.exploratory) begin
            if (previous_valid===1'b1 && tr.pre_valid!==1'b0)
                report_assertion("valid_out4 deve durar exatamente um ciclo");
            if (tr.pre_valid && ($isunknown(tr.pre_result[0]) || $isunknown(tr.pre_result[1])))
                report_assertion("X/Z no resultado valido");
        end
        previous_start=tr.pre_rst ? 1'b0 : tr.pre_start;
        previous_rst=tr.pre_rst;
        previous_valid=tr.pre_rst ? 1'b0 : tr.pre_valid;
    endfunction
    function void close_transaction(bit timed_out);
        int latency;
        string status;
        latency=-1;
        if (timed_out)
            report_error("TIMEOUT",$sformatf("valid_out4 ausente na janela de %0d ciclos",cfg.obs_cycles));
        else begin
            latency=int'(cycle_count-sb_launch_cycle);
            if (min_latency<0 || latency<min_latency) min_latency=latency;
            if (max_latency<0 || latency>max_latency) max_latency=latency;
        end
        if (sb_errs==0) begin
            status="PASS"; pass_count++;
            if (pending.case_id>=0) pass_per_case[pending.case_id]++;
            $display("[PASS] tx=%0d %s/%s expected=[%0d,%0d] observed=[%0d,%0d] latency=%0d",
                     transaction_count,case_name(pending.case_id),pending.subcase,
                     $signed(data_t'(expected[0])),$signed(data_t'(expected[1])),
                     $signed(data_t'(current.result[0])),$signed(data_t'(current.result[1])),latency);
        end else begin
            status="FAIL"; fail_transaction_count++;
            if (pending.case_id>=0) fail_per_case[pending.case_id]++;
            $display("[FAIL-TX] %s/%s errors=%0d latency=%0d",
                     case_name(pending.case_id),pending.subcase,sb_errs,latency);
        end
        if (csv_fd) begin
            if (timed_out)
                $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,%0d,-1,%0d,%0d,NA,NA,%s,%0d",
                          transaction_count,case_name(pending.case_id),pending.subcase,pending.weights,
                          sb_launch_cycle,cycle_count,$signed(data_t'(expected[0])),$signed(data_t'(expected[1])),status,sb_errs);
            else
                $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%s,%0d",
                          transaction_count,case_name(pending.case_id),pending.subcase,pending.weights,
                          sb_launch_cycle,cycle_count,latency,$signed(data_t'(expected[0])),$signed(data_t'(expected[1])),
                          $signed(data_t'(current.result[0])),$signed(data_t'(current.result[1])),status,sb_errs);
        end
        sb_pending=0;
    endfunction
    virtual function void write(cnn_seq_item tr);
        current=tr;
        cycle_count=tr.cycle;
        check_protocol(tr);
        transaction_count=tr.tx_id;
        case_executed|=tr.cases_started;
        if (tr.rst) begin
            if (sb_pending) begin
                abort_count++;
                $display("[ABORT] tx=%0d %s/%s cancelada por reset no ciclo=%0d",
                         transaction_count,case_name(pending.case_id),pending.subcase,cycle_count);
                sb_pending=0;
            end
            if (tr.valid===1'b1) report_error("RESET","valid_out4 ativo com rst=1");
            return;
        end
        if (tr.start===1'b1) begin
            if (tr.case_id>=0) launched_per_case[tr.case_id]++;
            if (tr.exploratory) begin
                incomplete_count++;
                if (tr.case_id>=0) incomplete_per_case[tr.case_id]++;
                if (csv_fd)
                    $fdisplay(csv_fd,"%0d,%s,%s,%s,%0d,-1,-1,NA,NA,NA,NA,INCOMPLETE,0",
                              transaction_count,case_name(tr.case_id),tr.subcase,tr.weights,cycle_count);
                $display("[INCOMPLETE] %s/%s: start sobreposto sem protocolo ready/busy",
                         case_name(tr.case_id),tr.subcase);
            end else if (sb_pending) begin
                report_error("OVERLAP","novo START antes de concluir transacao anterior");
            end else begin
                pending=tr; sb_launch_cycle=cycle_count; sb_errs=0;
                expected=model.predict(tr.pins);
                sb_pending=1;
                if (cfg.trace_expected)
                    $display("[EXP] cycle=%0d case=%s/%s expected=[%0d,%0d] watchdog=%0d",
                             cycle_count,case_name(tr.case_id),tr.subcase,
                             $signed(data_t'(expected[0])),$signed(data_t'(expected[1])),cfg.obs_cycles);
            end
        end
        if (tr.exploratory) return;
        if (sb_pending) begin
            if (tr.valid===1'b1) begin
                outputs_checked++;
                if (cfg.timing_check_enable && cfg.expected_latency>0 &&
                    cycle_count!=sb_launch_cycle+cfg.expected_latency)
                    report_error("LATENCY",$sformatf("latencia observada=%0d contrato=%0d",
                                 cycle_count-sb_launch_cycle,cfg.expected_latency));
                for (int n=0;n<N_NEURONS_2;n++)
                    if (tr.result[n]!==expected[n])
                        report_error("OUTPUT",$sformatf("indice=%0d exp=%0d got=%0d",
                                     n,$signed(data_t'(expected[n])),$signed(data_t'(tr.result[n]))));
                close_transaction(0);
            end else if (cycle_count>=sb_launch_cycle+cfg.obs_cycles) close_transaction(1);
        end else if (tr.valid===1'b1) report_error("UNEXPECTED_VALID","valid_out4 sem transacao pendente");
    endfunction
    function void check_phase(uvm_phase phase);
        int unsigned counts[0:21]='{3,3,3,5,5,9,1,1,1,2,2,1,1,3,0,3,8,3,6,12,17,11};
        super.check_phase(phase);
        if (sb_pending) begin report_error("PENDING","final da campanha com transacao pendente"); close_transaction(1); end
        if (!transaction_count) incomplete_count++;
        counts[14]=cfg.random_count;
        for (int i=0;i<22;i++) begin
            if ((cfg.selected_test=="ALL" || cfg.selected_test==case_name(i)) &&
                launched_per_case[i]!=counts[i])
                report_error("COUNT",$sformatf("%s starts=%0d esperado=%0d",
                             case_name(i),launched_per_case[i],counts[i]));
        end
        if (transaction_count!=pass_count+fail_transaction_count+abort_count+
            (incomplete_count-(!cfg.timing_check_enable)-(!transaction_count)))
            report_error("ACCOUNTING","Quantidade de transacoes sem classificacao consistente");
    endfunction
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        if (error_count || fail_transaction_count) result_status="FAIL";
        else if (incomplete_count) result_status="INCOMPLETE";
        else result_status="PASS";
        $display("\n============== RELATORIO FINAL ==============");
        $display("[SUMMARY] total_starts=%0d checked_PASS=%0d checked_FAIL=%0d aborted_by_reset=%0d incomplete=%0d",
                 transaction_count,pass_count,fail_transaction_count,abort_count,incomplete_count);
        $display("[SUMMARY] errors=%0d assertions=%0d sim_cycles=%0d seed=%0d",
                 error_count,assertion_error_count,cycle_count,cfg.seed);
        $display("[SUMMARY] outputs_checked=%0d latency_min=%0d latency_max=%0d",outputs_checked,min_latency,max_latency);
        for (int i=0;i<22;i++) if (case_executed[i])
            $display("[CASE] IMG-%02d starts=%0d pass=%0d fail=%0d incomplete=%0d",
                     i,launched_per_case[i],pass_per_case[i],fail_per_case[i],incomplete_per_case[i]);
        if (coverage!=null) coverage.print_summary();
        $display("[REPORT] CSV=%s",cfg.csv_path);
        $display("[RESULT] %s",result_status);
        if (csv_fd) begin $fclose(csv_fd); csv_fd=0; end
    endfunction
endclass
