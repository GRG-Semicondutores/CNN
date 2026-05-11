module Multiplier_WTM_tb;

    // ─────────────────────────────────────────────
    // Parâmetro — mude aqui para testar outros tamanhos
    // ─────────────────────────────────────────────

    localparam int LENGTH =11;

    // ─────────────────────────────────────────────
    // Sinais
    // ─────────────────────────────────────────────

    logic [LENGTH-1:0]   multiplicand;
    logic [LENGTH-1:0]   multiplier;
    logic [LENGTH*2-1:0] result;
    logic [LENGTH*2-1:0] expected;

    int total;
    int passed;
    int failed;

    // ─────────────────────────────────────────────
    // DUT
    // ─────────────────────────────────────────────

    Multiplier_WTM #(
        .LENGTH(LENGTH)
    ) dut (
        .multiplicand(multiplicand),
        .multiplier  (multiplier),
        .result      (result)
    );

    // ─────────────────────────────────────────────
    // Tasks
    // ─────────────────────────────────────────────

    task automatic check(
        input logic [LENGTH-1:0] a,
        input logic [LENGTH-1:0] b
    );
        multiplicand = a;
        multiplier   = b;
        expected     = a * b;
        #10;

        total++;
        if (result === expected) begin
            passed++;
        end else begin
            failed++;
            $display("FAIL | %0d x %0d | esperado: %0d | obtido: %0d",
                      a, b, expected, result);
        end
    endtask

    // ─────────────────────────────────────────────
    // Estímulos
    // ─────────────────────────────────────────────

    initial begin
        total  = 0;
        passed = 0;
        failed = 0;

        $display("==============================");
        $display(" Multiplier_WTM_tb  LENGTH=%0d", LENGTH);
        $display("==============================");

        // Casos de borda
        check('0,          '0);
        check('0,          '1);
        check('1,          '0);
        check('1,          '1);
        check({LENGTH{1'b1}}, {LENGTH{1'b1}});   // max x max
        check({LENGTH{1'b1}}, 'b1);              // max x 1
        check('b1,          {LENGTH{1'b1}});     // 1 x max

        // Varredura completa (só viável para LENGTH pequeno)
        if (LENGTH <= 6) begin
            for (int a = 0; a < 2**LENGTH; a++) begin
                for (int b = 0; b < 2**LENGTH; b++) begin
                    check(a[LENGTH-1:0], b[LENGTH-1:0]);
                end
            end
        end else begin
            // Para LENGTH grande: 200 pares aleatórios
            repeat (200) begin
                check(
                    $urandom_range(0, 2**LENGTH - 1),
                    $urandom_range(0, 2**LENGTH - 1)
                );
            end
        end

        // ─────────────────────────────────────────────
        // Relatório
        // ─────────────────────────────────────────────

        $display("------------------------------");
        $display(" Total : %0d", total);
        $display(" Passed: %0d", passed);
        $display(" Failed: %0d", failed);
        if (failed == 0)
            $display(" TODOS OS TESTES PASSARAM");
        else
            $display(" ATENCAO: %0d falha(s) detectada(s)", failed);
        $display("==============================");

        $finish;
    end

endmodule