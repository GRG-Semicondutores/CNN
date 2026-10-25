// Somente a auditoria inclui estas classes; nao pertencem ao fluxo de producao.
class cnn_expected_error_catcher extends uvm_report_catcher;
    `uvm_object_utils(cnn_expected_error_catcher)
    function new(string name="cnn_expected_error_catcher"); super.new(name); endfunction
    virtual function action_e catch();
        if (get_id()=="CNN_SCB" && get_severity()==UVM_ERROR) begin
            set_severity(UVM_INFO);
            return CAUGHT;
        end
        return THROW;
    endfunction
endclass
class cnn_unit_scoreboard extends cnn_scoreboard;
    `uvm_component_utils(cnn_unit_scoreboard)
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void check_phase(uvm_phase phase); endfunction
    function void report_phase(uvm_phase phase);
        if (csv_fd) begin $fclose(csv_fd); csv_fd=0; end
    endfunction
endclass
class cnn_scoreboard_checks extends uvm_test;
    `uvm_component_utils(cnn_scoreboard_checks)
    cnn_unit_scoreboard boards[0:7];
    cnn_expected_error_catcher catcher;
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        catcher=new;
        for (int i=0;i<8;i++) begin
            cnn_config cfg=new($sformatf("cfg_%0d",i));
            string name=$sformatf("scb_%0d",i);
            cfg.csv_path=$sformatf("unit_scoreboard_%0d.csv",i);
            cfg.obs_cycles=4;
            if (i==6) cfg.expected_latency=2;
            uvm_config_db#(cnn_config)::set(this,name,"cfg",cfg);
            boards[i]=cnn_unit_scoreboard::type_id::create(name,this);
            uvm_report_cb::add(boards[i],catcher);
        end
    endfunction
    function cnn_seq_item sample(int cycle,bit start=0,bit valid=0,bit reset=0,int tx=1);
        cnn_seq_item tr=new;
        tr.cycle=cycle; tr.start=start; tr.pre_start=start;
        tr.rst=reset; tr.pre_rst=reset; tr.valid=valid;
        tr.tx_id=tx; tr.case_id=1; tr.cases_started[1]=1;
        tr.weights="W00"; tr.subcase="unit";
        return tr;
    endfunction
    task run_phase(uvm_phase phase);
        cnn_seq_item tr;
        phase.raise_objection(this);
        // 1. Operacao correta com resposta valida.
        boards[0].write(sample(1,1)); boards[0].write(sample(4,0,1));
        if (boards[0].pass_count!=1 || boards[0].error_count) `uvm_fatal("UNIT","Resposta correta reprovada")
        // 2. Dado incorreto.
        boards[1].write(sample(1,1)); tr=sample(4,0,1); tr.result[0]=1; boards[1].write(tr);
        if (boards[1].fail_transaction_count!=1 || boards[1].error_count!=1) `uvm_fatal("UNIT","Dado incorreto nao detectado")
        // 3. Timeout na janela configurada.
        boards[2].write(sample(1,1)); boards[2].write(sample(5));
        if (boards[2].fail_transaction_count!=1 || boards[2].error_count!=1) `uvm_fatal("UNIT","Timeout nao detectado")
        // 4. Saida sem transacao.
        boards[3].write(sample(1,0,1));
        if (boards[3].error_count!=1 || boards[3].outputs_checked) `uvm_fatal("UNIT","Saida inesperada nao detectada")
        // 5. Sobreposicao, com pulsos start separados.
        boards[4].write(sample(1,1)); boards[4].write(sample(2)); boards[4].write(sample(3,1,0,0,2));
        if (!boards[4].sb_pending || boards[4].error_count!=1) `uvm_fatal("UNIT","Sobreposicao nao detectada")
        boards[4].write(sample(4,0,1,0,2));
        // 6. Reset cancela a pendencia e a transacao seguinte e verificada.
        boards[5].write(sample(1,1)); boards[5].write(sample(2,0,0,1));
        boards[5].write(sample(4,1,0,0,2)); boards[5].write(sample(7,0,1,0,2));
        if (boards[5].abort_count!=1 || boards[5].pass_count!=1 || boards[5].error_count) `uvm_fatal("UNIT","Reset/recuperacao incorretos")
        // 7. Contrato publico de latencia.
        boards[6].write(sample(1,1)); boards[6].write(sample(4,0,1));
        if (boards[6].error_count!=1 || boards[6].fail_transaction_count!=1) `uvm_fatal("UNIT","Latencia incorreta nao detectada")
        // 8. Saida duplicada apos a conclusao.
        boards[7].write(sample(1,1)); boards[7].write(sample(4,0,1)); boards[7].write(sample(5,0,1));
        if (boards[7].error_count!=1 || boards[7].pass_count!=1) `uvm_fatal("UNIT","Duplicacao nao detectada")
        $display("CNN SCOREBOARD CHECKS PASS: 8/8");
        phase.drop_objection(this);
    endtask
    function void final_phase(uvm_phase phase);
        uvm_report_server server=uvm_report_server::get_server();
        if (server.get_severity_count(UVM_ERROR) || server.get_severity_count(UVM_FATAL))
            $fatal(1,"Erros UVM inesperados durante os testes do scoreboard");
    endfunction
endclass
