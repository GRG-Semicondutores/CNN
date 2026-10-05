`timescale 1ns/1ps
module tb_convolution;
  parameter int DATA_WIDTH=8, IMG_SIZE=4, KERNEL_SIZE=3, PADDING=1;
  localparam int NP=IMG_SIZE*IMG_SIZE, NK=KERNEL_SIZE*KERNEL_SIZE;
  localparam int OS=IMG_SIZE+2*PADDING-KERNEL_SIZE+1, NO=OS*OS;
  localparam int AW=2*DATA_WIDTH+$clog2(NK);
  localparam int EXPECTED_CYCLES=NO+$clog2(NK)+2;
  localparam int TIMEOUT_CYCLES=NO+$clog2(NK)+16;
  logic clk=0;
  logic rst=0, start=0;
  logic signed [DATA_WIDTH-1:0] imagem[0:NP-1], kernel[0:NK-1];
  wire signed [AW-1:0] result[0:NO-1];
  wire valid_out;
  logic signed [DATA_WIDTH-1:0] images[1:14][0:NP-1];
  logic signed [DATA_WIDTH-1:0] kernels[1:14][0:NK-1];
  logic signed [AW-1:0] expected[0:NO-1];
  int tests=0, passed=0, failed=0, timeouts=0, comparisons=0, mismatches=0;
  int reset_errors=0, pulse_errors=0, latency_errors=0;
  int visits[0:1][1:14][1:14];
  int approach_pass[0:1], approach_fail[0:1];
  int reset_pulses=0;
  bit evaluated_phase=0;
  int observed=0, observed_timeouts=0, observed_control_events=0;
  bit verbose;
  bit matrix_logs;
  int group_pass=0, group_fail=0;
  logic [31:0] rng=32'h19A42026;
  integer log_file, values_file, stimulus_file;
  always #5 clk=~clk;
  Convolution #(.DATA_WIDTH(DATA_WIDTH),.IMG_SIZE(IMG_SIZE),
    .KERNEL_SIZE(KERNEL_SIZE),.PADDING(PADDING)) dut
    (.clk(clk),.rst(rst),.imagem(imagem),.kernel(kernel),
     .start(start),.result(result),.valid_out(valid_out));

  function automatic string pattern_name(int id);
    case(id)
      1: return "ZEROS";
      2: return "UNS";
      3: return "ALTERNADOS";
      4: return "ALTA_IMPEDANCIA_Z";
      5: return "DESCONHECIDOS_X";
      6,7,8,9,10: return $sformatf("ALEATORIO_%0d",id-5);
      11: return "DIAG_PRINCIPAL_ZERO";
      12: return "DIAG_PRINCIPAL_UM";
      13: return "DIAG_SECUNDARIA_ZERO";
      14: return "DIAG_SECUNDARIA_UM";
      default: return "INVALIDO";
    endcase
  endfunction

  task automatic print_header();
    $display("\n======================================================================");
    $display("  CONVOLUTION | REGRESSAO FUNCIONAL");
    $display("======================================================================");
    $display("  Imagem: %0dx%0d | Kernel: %0dx%0d | Dados signed: %0d bits",IMG_SIZE,IMG_SIZE,KERNEL_SIZE,KERNEL_SIZE,DATA_WIDTH);
    $display("  Saida : %0dx%0d | Acumulador: %0d bits | Padding: %0d",OS,OS,AW,PADDING);
    $display("  Plano : 14 imagens x 14 kernels x 2 rodadas = 392 casos");
    $display("  Seed  : 0x%08h | Latencia: %0d ciclos | Timeout: %0d ciclos",rng,EXPECTED_CYCLES,TIMEOUT_CYCLES);
    $display("  Reset entre casos em ambas as rodadas. Primeira sem reset inicial.");
    $display("  Scoreboard: somente rodada 2; rodada 1 e observacional.");
    $display("  Scoreboard: %0d comparacoes por operacao avaliada, incluindo X/Z.",NO);
    if(matrix_logs) $display("  Modo: MATRIZES POR CASO | entradas em binario; saidas signed decimais");
    else $display("  Modo: %s",verbose ? "DETALHADO (+VERBOSE)" : "COMPACTO (+COMPACT)");
  endtask

  task automatic print_failure_context(int approach,int image_id,int kernel_id);
    $display("\n  [FAIL] Caso %03d/392 | Rodada %0d | tempo=%0t",tests,approach+1,$time);
    $display("         Imagem %02d: %s | Kernel %02d: %s",image_id,pattern_name(image_id),kernel_id,pattern_name(kernel_id));
  endtask

  // Mostra as portas efetivamente aplicadas, na mesma ordem de linhas do RTL.
  task automatic print_stimulus_matrices(int approach,int image_id,int kernel_id);
    $display("\n----------------------------------------------------------------------");
    $display("  CASO %03d/392 | RODADA %0d | IMAGEM %02d x KERNEL %02d",tests,approach+1,image_id,kernel_id);
    $display("  Padroes: %s x %s",pattern_name(image_id),pattern_name(kernel_id));
    $display("  Reset antes deste caso: %s | inicio: %0t",tests==1?"NAO":"SIM",$time);
    $display("----------------------------------------------------------------------");
    $display("  IMAGEM [%0dx%0d] | %0d bits signed por posicao",IMG_SIZE,IMG_SIZE,DATA_WIDTH);
    for(int r=0;r<IMG_SIZE;r++) begin
      $write("  | ");
      for(int c=0;c<IMG_SIZE;c++) $write("%b ",imagem[r*IMG_SIZE+c]);
      $display("|");
    end
    $display("\n  KERNEL [%0dx%0d] | %0d bits signed por posicao",KERNEL_SIZE,KERNEL_SIZE,DATA_WIDTH);
    for(int r=0;r<KERNEL_SIZE;r++) begin
      $write("  | ");
      for(int c=0;c<KERNEL_SIZE;c++) $write("%b ",kernel[r*KERNEL_SIZE+c]);
      $display("|");
    end
  endtask

  task automatic print_result_matrices(bit completed, bit scored);
    $display("\n  SAIDA ESPERADA [%0dx%0d] | decimal signed (%0d bits)",OS,OS,AW);
    for(int r=0;r<OS;r++) begin
      $write("  | ");
      for(int c=0;c<OS;c++) $write("%8d ",$signed(expected[r*OS+c]));
      $display("|");
    end
    if(completed) begin
      $display("\n  SAIDA OBTIDA [%0dx%0d] | decimal signed (%0d bits)",OS,OS,AW);
      for(int r=0;r<OS;r++) begin
        $write("  | ");
        for(int c=0;c<OS;c++) $write("%8d ",$signed(result[r*OS+c]));
        $display("|");
      end
      if(scored) begin
      $display("\n  SCOREBOARD POR POSICAO | comparacao exata de 0/1/X/Z");
      for(int r=0;r<OS;r++) begin
        $write("  | ");
        for(int c=0;c<OS;c++)
          $write("%4s ",(result[r*OS+c]===expected[r*OS+c])?"PASS":"FAIL");
        $display("|");
      end
      end else $display("\n  SCOREBOARD: EXCLUIDO - rodada sem reset inicial; apenas observacao.");
    end else begin
      $display("\n  SAIDA OBTIDA: sem conclusao; valores nao considerados validos.");
      if(scored) $display("  SCOREBOARD: %0d posicoes NAO VERIFICADAS devido ao timeout.",NO);
      else $display("  SCOREBOARD: EXCLUIDO - rodada sem reset inicial.");
    end
  endtask

  function automatic logic [DATA_WIDTH-1:0] random_word();
    logic [DATA_WIDTH-1:0] value;
    for(int b=0;b<DATA_WIDTH;b++) begin
      rng=rng^(rng<<13); rng=rng^(rng>>17); rng=rng^(rng<<5);
      value[b]=rng[0];
    end
    return value;
  endfunction

  function automatic logic [DATA_WIDTH-1:0] pattern(int id,int row,int col,int side);
    logic [DATA_WIDTH-1:0] value;
    case(id)
      1: value='0;
      2: value='1;
      3: for(int b=0;b<DATA_WIDTH;b++) value[b]=((b+row*side+col)%2)==0;
      4: value='z;
      5: value='x;
      default: begin
        value=random_word();
        if((id==11 || id==12) && row==col) value=(id==11)?'0:'1;
        if((id==13 || id==14) && row+col==side-1) value=(id==13)?'0:'1;
      end
    endcase
    return value;
  endfunction

  // Modelo independente: soma direta, sem reproduzir a árvore do DUT.
  // Multiplicações e acumulador são signed e têm AW bits.
  task automatic build_scoreboard();
    logic signed [DATA_WIDTH-1:0] pixel;
    logic signed [AW-1:0] product, accumulator;
    int row,col;
    for(int r=0;r<OS;r++) for(int c=0;c<OS;c++) begin
      accumulator='0;
      for(int i=0;i<KERNEL_SIZE;i++) for(int j=0;j<KERNEL_SIZE;j++) begin
        row=r+i-PADDING; col=c+j-PADDING;
        if(row<0 || row>=IMG_SIZE || col<0 || col>=IMG_SIZE) pixel='0;
        else pixel=imagem[row*IMG_SIZE+col];
        product=$signed(pixel)*$signed(kernel[i*KERNEL_SIZE+j]);
        accumulator=accumulator+product;
      end
      expected[r*OS+c]=accumulator;
    end
  endtask

  task automatic reset_block();
    reset_pulses++;
    @(negedge clk); start=0; rst=1;
    repeat(2) @(posedge clk);
    #1;
    if(evaluated_phase) begin
    assert(valid_out===1'b0) else begin
      reset_errors++;
      $display("\n  [ASSERT RESET] Antes do caso %0d: valid_out=%b; esperado=0",tests+1,valid_out);
    end
    end else if(valid_out!==1'b0) begin
      observed_control_events++;
      $display("  [OBS RESET] valid_out=%b; fora da avaliacao",valid_out);
    end
    @(negedge clk); rst=0;
  endtask

  task automatic run_case(int approach,int image_id,int kernel_id);
    bit done, case_ok;
    int cycles;
    string status;
    tests++;
    visits[approach][image_id][kernel_id]++;
    @(negedge clk);
    for(int p=0;p<NP;p++) imagem[p]=images[image_id][p];
    for(int p=0;p<NK;p++) kernel[p]=kernels[kernel_id][p];
    build_scoreboard();
    if(matrix_logs) print_stimulus_matrices(approach,image_id,kernel_id);
    start=1;
    @(negedge clk); start=0;
    done=0; cycles=0; case_ok=1;
    for(int t=0;t<TIMEOUT_CYCLES;t++) begin
      @(posedge clk); #1; cycles++;
      if(valid_out===1'b1) begin done=1; t=TIMEOUT_CYCLES; end
    end
    if(approach==1) begin
    assert(done) else begin
      timeouts++; case_ok=0;
      print_failure_context(approach,image_id,kernel_id);
      $display("         Motivo: TIMEOUT apos %0d ciclos; valid_out=%b",cycles,valid_out);
      $display("         Scoreboard: %0d posicoes NAO VERIFICADAS (sem conclusao).",NO);
      if(tests==1) $display("         Contexto: primeiro start aplicado sem reset inicial.");
    end
    end else if(!done) begin
      observed_timeouts++;
      $display("  [OBS TIMEOUT] Caso %03d: sem conclusao apos %0d ciclos; excluido da scoreboard.",tests,cycles);
    end
    if(done && approach==1) begin
      assert(cycles==EXPECTED_CYCLES) else begin
        latency_errors++; case_ok=0;
        print_failure_context(approach,image_id,kernel_id);
        $display("         ASSERT LATENCIA: esperado=%0d ciclos; obtido=%0d",EXPECTED_CYCLES,cycles);
      end
      for(int p=0;p<NO;p++) begin
        comparisons++;
        $fdisplay(values_file,"%0d,%0d,%0d,%0d,%b,%b,%s",tests,approach,p/OS,p%OS,expected[p],result[p],(result[p]===expected[p])?"PASS":"FAIL");
        // Case equality compara 0/1/X/Z sem transformar unknown em sucesso.
        assert(result[p]===expected[p]) else begin
          mismatches++; case_ok=0;
          print_failure_context(approach,image_id,kernel_id);
          $display("         ASSERT DADOS: saida[%0d][%0d]",p/OS,p%OS);
          $display("         Esperado: %b (signed=%0d)",expected[p],$signed(expected[p]));
          $display("         Obtido  : %b (signed=%0d)",result[p],$signed(result[p]));
        end
      end
      @(posedge clk); #1;
      assert(valid_out===1'b0) else begin
        pulse_errors++; case_ok=0;
        print_failure_context(approach,image_id,kernel_id);
        $display("         ASSERT VALID: esperado=0 no ciclo seguinte; obtido=%b",valid_out);
      end
    end
    if(done && approach==0) begin
      if(cycles!=EXPECTED_CYCLES) observed_control_events++;
      @(posedge clk); #1;
      if(valid_out!==1'b0) observed_control_events++;
    end
    if(!done && approach==1) for(int p=0;p<NO;p++)
      $fdisplay(values_file,"%0d,%0d,%0d,%0d,%b,%b,NOT_CHECKED_TIMEOUT",tests,approach,p/OS,p%OS,expected[p],result[p]);
    if(matrix_logs) print_result_matrices(done,approach==1);
    if(approach==1) begin
    if(case_ok) begin passed++; approach_pass[approach]++; end
    else begin failed++; approach_fail[approach]++; end
    if(case_ok) group_pass++; else group_fail++;
      status=case_ok?"PASS":"FAIL";
    end else begin
      observed++;
      status=done?"OBSERVADO":"OBS_TIMEOUT";
    end
    if(verbose || matrix_logs) $display("\n  [%s] %03d/392 | IMG %02d %-20s | KER %02d %-20s | %2d ciclos",status,tests,image_id,pattern_name(image_id),kernel_id,pattern_name(kernel_id),cycles);
    $fdisplay(log_file,"%0d,%0d,%0d,%0d,%s,%0d",tests,approach,image_id,kernel_id,status,cycles);
  endtask

  initial begin
    if(DATA_WIDTH<2 || IMG_SIZE<1 || KERNEL_SIZE<2 || OS<2)
      $fatal(1,"Parametros incompatíveis com este RTL/testbench");
    if($value$plusargs("SEED=%h",rng)) begin end
    if(rng==0) $fatal(1,"SEED deve ser diferente de zero");
    $timeformat(-9,0," ns",10);
    verbose=$test$plusargs("VERBOSE");
    matrix_logs=!$test$plusargs("COMPACT");
    print_header();
    if($test$plusargs("VCD")) begin
      $dumpfile("convolution.vcd"); $dumpvars(0,tb_convolution);
    end
    for(int ap=0;ap<2;ap++) begin
      approach_pass[ap]=0; approach_fail[ap]=0;
      for(int a=1;a<=14;a++) for(int b=1;b<=14;b++) visits[ap][a][b]=0;
    end
    values_file=$fopen("scoreboard.csv","w");
    stimulus_file=$fopen("stimuli.csv","w");
    if(!values_file || !stimulus_file) $fatal(1,"Erro abrindo CSVs");
    $fdisplay(values_file,"caso,abordagem,linha,coluna,esperado,obtido,status");
    $fdisplay(stimulus_file,"matriz,padrao,linha,coluna,bits");
    log_file=$fopen("convolution_results.csv","w");
    if(!log_file) $fatal(1,"Nao foi possivel abrir o CSV");
    $fdisplay(log_file,"caso,abordagem,imagem,kernel,status,ciclos");
    for(int id=1;id<=14;id++) begin
      for(int p=0;p<NP;p++) images[id][p]=pattern(id,p/IMG_SIZE,p%IMG_SIZE,IMG_SIZE);
      for(int p=0;p<NK;p++) kernels[id][p]=pattern(id,p/KERNEL_SIZE,p%KERNEL_SIZE,KERNEL_SIZE);
      for(int p=0;p<NP;p++) $fdisplay(stimulus_file,"imagem,%0d,%0d,%0d,%b",id,p/IMG_SIZE,p%IMG_SIZE,images[id][p]);
      for(int p=0;p<NK;p++) $fdisplay(stimulus_file,"kernel,%0d,%0d,%0d,%b",id,p/KERNEL_SIZE,p%KERNEL_SIZE,kernels[id][p]);
    end
    // Abordagem 0 primeiro: DUT sem reset inicial e sem inicialização hierárquica.
    // Reset ENTRE casos em ambas as abordagens, conforme solicitado.
    for(int approach=0;approach<2;approach++) begin
      $display("\n----------------------------------------------------------------------");
      $display("  RODADA %0d/2 | %s | 196 combinacoes",approach+1,approach==0?"SEM RESET INICIAL":"COM RESET INICIAL");
      $display("----------------------------------------------------------------------");
      if(!verbose && !matrix_logs && approach==1) $display("  CASOS     IMAGEM / PADRAO                    PASS  FAIL  TOTAL");
      evaluated_phase=(approach==1);
      if(approach==1) reset_block();
      for(int a=1;a<=14;a++) begin
        group_pass=0; group_fail=0;
        for(int b=1;b<=14;b++) begin
          if(a!=1 || b!=1) reset_block();
          run_case(approach,a,b);
        end
        if(!verbose && !matrix_logs && approach==0) $display("  %03d-%03d   %02d %-26s 14 EXCLUIDOS DA SCOREBOARD",tests-13,tests,a,pattern_name(a));
        if(!verbose && !matrix_logs && approach==1) $display("  %03d-%03d   %02d %-26s %4d  %4d  %5d",tests-13,tests,a,pattern_name(a),group_pass,group_fail,group_pass+group_fail);
      end
      if(approach==0) $display("  Rodada 1: %0d observados; %0d timeouts; excluidos da scoreboard.\n",observed,observed_timeouts);
      else $display("  Rodada %0d concluida: %0d PASS | %0d FAIL\n",approach+1,approach_pass[approach],approach_fail[approach]);
    end
    for(int ap=0;ap<2;ap++) begin
      for(int a=1;a<=14;a++) for(int b=1;b<=14;b++)
        assert(visits[ap][a][b]==1) else $fatal(1,"Cobertura incorreta");

    end
    assert(reset_pulses==391) else $fatal(1,"Quantidade incorreta de resets: %0d",reset_pulses);
    assert(observed==196 && passed+failed==196) else $fatal(1,"Contagem de avaliados/excluidos incorreta");
    assert(tests==392) else $fatal(1,"Contagem incorreta: %0d",tests);
    $display("\n======================================================================");
    $display("  RESUMO FINAL | %s",(failed || reset_errors || pulse_errors)?"REPROVADO":"APROVADO");
    $display("======================================================================");
    $display("  Rodada                         Casos    PASS    FAIL");
    $display("  1 - Sem reset inicial          %5d       -       -  (OBSERVACAO)",observed);
    $display("  2 - Com reset inicial          %5d   %5d   %5d",196,approach_pass[1],approach_fail[1]);
    $display("  TOTAL AVALIADO                 %5d   %5d   %5d",passed+failed,passed,failed);
    $display("  Total executado: %0d | Excluidos da scoreboard: %0d",tests,observed);
    $display("\n  Scoreboard");
    $display("    Posicoes comparadas          : %0d / %0d",comparisons,196*NO);
    $display("    Posicoes sem verificacao     : %0d",196*NO-comparisons);
    $display("    Divergencias de dados        : %0d",mismatches);
    $display("\n  Controle e cobertura");
    $display("    Timeouts avaliados           : %0d",timeouts);
    $display("    Timeouts observacionais      : %0d (nao reprovam)",observed_timeouts);
    $display("    Outros eventos observacionais: %0d (nao reprovam)",observed_control_events);
    $display("    Erros de latencia            : %0d",latency_errors);
    $display("    Erros de reset               : %0d",reset_errors);
    $display("    Erros no pulso valid_out     : %0d",pulse_errors);
    $display("    Pulsos de reset aplicados    : %0d / 391",reset_pulses);
    $display("    Combinacoes exercitadas      : %0d / 392",tests);
    $display("\n  Relatorios no diretorio de execucao:");
    $display("    convolution_results.csv  - resultado de cada caso");
    $display("    scoreboard.csv           - esperado e obtido por posicao");
    $display("    stimuli.csv              - matrizes de entrada utilizadas");
    if(failed || reset_errors || pulse_errors)
      $display("\n  Execucao concluida com falhas. Codigo de saida: 1.");
    else $display("\n  Todos os casos avaliados aprovados. Codigo de saida: 0.");
    $display("======================================================================\n");
    $fclose(log_file); $fclose(values_file); $fclose(stimulus_file);
    if(failed || reset_errors || pulse_errors) $fatal(1,"Regressao reprovada; consulte o resumo acima.");
    $finish;
  end
endmodule