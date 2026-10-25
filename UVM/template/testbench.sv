interface rng_if #(parameter int WIDTH = 3) (input logic clk_i);
    // Mantem o reset disponivel na interface para que teste, driver e monitor
    // observem o mesmo estado global de inicializacao do DUT.
    logic rst_i;

    // Centraliza o sinal de solicitacao na interface para garantir que o driver
    // comande o pedido de numero pelo mesmo caminho observado pelos demais componentes.
    logic req_num_i;

    // Centraliza o sinal de escrita na interface para alinhar o handshake dirigido
    // pelo driver com o ponto de amostragem usado pelo monitor e pelo DUT.
    logic wr_i;

    // Expoe o dado de saida na interface para que a observacao do valor capturado
    // use exatamente a mesma largura parametrizada do DUT.
    logic [WIDTH-1:0] num_to_send_o;

    // Mantem o semi-periodo do clock configuravel na interface para permitir que
    // cada rodada altere a temporizacao sem recriar a infraestrutura da bancada.
    time clk_toggle_tu = 3;
endinterface

module tb_rng;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    `include "UVM_tb_params.svh"

    `include "UVM_seq_item.sv"
    `include "UVM_sequencer.sv"
    `include "UVM_sequence.sv"
    `include "UVM_driver.sv"
    `include "UVM_monitor.sv"
    `include "UVM_scoreboard.sv"
    `include "UVM_agent.sv"
    `include "UVM_env.sv"

    class rng_test extends uvm_test;
        `uvm_component_utils(rng_test)

        // Mantem a referencia do ambiente no teste para que a sequencia seja iniciada
        // a partir da hierarquia construida pelo proprio contexto de execucao.
        rng_env env;

        // Armazena a interface virtual no teste para que reset e configuracao inicial
        // sejam aplicados diretamente sobre os sinais compartilhados da bancada.
        virtual rng_if vif;

        function new(string name, uvm_component parent);
            // Preserva a construcao padrao da base UVM para registrar corretamente
            // nome e hierarquia do componente de teste.
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            // Mantem a sequencia padrao da fase para nao interromper o fluxo de criacao
            // herdado da infraestrutura UVM.
            super.build_phase(phase);

            // Cria o ambiente no build para que todos os componentes dependentes existam
            // antes do inicio das conexoes e da fase de execucao.
            env = rng_env::type_id::create("env", this);

            // Recupera a interface virtual do config_db para garantir que o teste atue
            // sobre a mesma instancia conectada ao DUT e aos componentes UVM.
            if (!uvm_config_db#(virtual rng_if)::get(this, "", "vif", vif)) begin
                `uvm_fatal("NOVIF", "vif nao encontrado no test")
            end
        endfunction

        task automatic apply_reset();
            // Forca o reset ativo em nivel baixo para levar o DUT a um estado conhecido
            // antes de qualquer transacao da sequencia.
            vif.rst_i = 1'b0;

            // Mantem a solicitacao desabilitada durante o reset para impedir que o DUT
            // interprete atividade funcional em condicao de inicializacao.
            vif.req_num_i = 1'b0;

            // Mantem a escrita desabilitada durante o reset para evitar amostragens ou
            // confirmacoes de dados enquanto o DUT ainda nao foi liberado.
            vif.wr_i = 1'b0;

            // Registra o instante de entrada em reset para facilitar a correlacao temporal
            // entre a inicializacao da bancada e os eventos posteriores.
            `uvm_info("RNG_TEST", $sformatf("Reset assert em t=%0t", $time), UVM_LOW)

            // Sustenta o reset por um intervalo finito para dar tempo de propagacao e
            // estabilizacao da logica sequencial do DUT.
            #25;

            // Libera o reset apenas apos a janela de estabilizacao para iniciar as rodadas
            // a partir de um ponto temporal deterministico.
            vif.rst_i = 1'b1;

            // Registra o instante de saida do reset para referenciar quando a operacao
            // funcional passou a ser valida na simulacao.
            `uvm_info("RNG_TEST", $sformatf("Reset deassert em t=%0t", $time), UVM_LOW)
        endtask

        task run_phase(uvm_phase phase);
            rng_sequence seq;

            // Preserva o comportamento base da fase para manter compatibilidade com o
            // mecanismo padrao de execucao do framework UVM.
            super.run_phase(phase);

            // Eleva a objection para impedir o encerramento da simulacao enquanto o teste
            // ainda esta conduzindo reset e sequencia principal.
            phase.raise_objection(this);

            // Define o semi-periodo inicial do clock antes do reset para que a bancada ja
            // esteja oscilando com uma referencia temporal conhecida desde o inicio.
            vif.clk_toggle_tu = 3;

            // Aplica a sequencia de inicializacao antes de qualquer estimulo funcional
            // para garantir previsibilidade do estado interno do DUT.
            apply_reset();

            // Instancia a sequencia somente apos o reset para que os itens reflitam a
            // fase funcional, e nao a fase de inicializacao do sistema.
            seq = rng_sequence::type_id::create("seq");

            // Inicia a sequencia no sequencer do agente para respeitar o fluxo UVM de
            // arbitragem e entrega de itens ao driver.
            seq.start(env.agent.sequencer);

            // Mantem uma janela adicional apos a sequencia para absorver atrasos de
            // monitoramento, propagacao e registro final dos resultados.
            #100;

            // Libera a objection apenas quando reset, sequencia e tempo de drenagem ja
            // foram concluidos, permitindo o fechamento controlado do teste.
            phase.drop_objection(this);
        endtask
    endclass

    // Mantem o clock local ao topo para conectar a interface e o DUT a uma mesma
    // fonte fisica de temporizacao dentro da bancada.
    logic clk;

    // Instancia a interface com a largura parametrizada para propagar a configuracao
    // de dados da bancada para todos os componentes consumidores.
    rng_if #(RNG_WIDTH) rif (.clk_i(clk));

    initial begin
        // Inicializa o clock em zero para estabelecer uma borda de referencia conhecida
        // antes do laco infinito de alternancia.
        clk = 1'b0;

        forever begin
            // Aguarda o semi-periodo configurado na interface para permitir alteracao
            // dinamica da frequencia entre rodadas sem reconstrucao do clock.
            #(rif.clk_toggle_tu) clk = ~clk;
        end
    end

    // Instancia o DUT com a mesma largura usada na interface para evitar divergencia
    // entre o caminho de estimulo e o caminho de observacao.
    rng_top #(.WIDTH(RNG_WIDTH)) dut (
        .clk_i         (rif.clk_i),
        .rst_i         (rif.rst_i),
        .req_num_i     (rif.req_num_i),
        .wr_i          (rif.wr_i),
        .num_to_send_o (rif.num_to_send_o)
    );

    initial begin
        // Define o arquivo de dump no inicio da simulacao para garantir rastreabilidade
        // completa dos sinais desde o primeiro evento relevante.
        $dumpfile("../waveforms/UVM.vcd");

        // Habilita o registro hierarquico do topo para permitir depuracao temporal
        // correlacionando DUT, interface e infraestrutura UVM.
        $dumpvars(0, tb_rng);

        // Mantem o reset inicialmente liberado ate que o teste assuma o controle explicito
        // da sequencia de inicializacao durante o run_phase.
        rif.rst_i = 1'b1;

        // Inicializa a solicitacao em zero para evitar uma requisicao espuria na partida
        // da simulacao antes do driver assumir o protocolo.
        rif.req_num_i = 1'b0;

        // Inicializa a escrita em zero para impedir confirmacao indevida de dados antes
        // do comeco efetivo das transacoes.
        rif.wr_i = 1'b0;

        // Define um semi-periodo inicial compativel com a primeira faixa de operacao da
        // sequencia, estabelecendo uma base temporal consistente na partida.
        rif.clk_toggle_tu = 3;

        // Registra a configuracao inicial do clock para facilitar a validacao de que a
        // bancada iniciou com a temporizacao esperada.
        $display("[%0t][TB] clk_toggle_tu inicial=%0t TU (periodo=%0t TU)",
                 $time, rif.clk_toggle_tu, 2*rif.clk_toggle_tu);

        // Publica a interface no config_db para que teste, driver e monitor recuperem a
        // mesma instancia compartilhada de sinais.
        uvm_config_db #(virtual rng_if)::set(null, "*", "vif", rif);

        // Inicia o teste UVM apos toda a infraestrutura fisica da bancada ja estar
        // configurada e acessivel aos componentes.
        run_test();
    end
endmodule