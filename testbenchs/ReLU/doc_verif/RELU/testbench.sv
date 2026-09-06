module testbench;

localparam DATA_WIDTH = 32;

logic [(DATA_WIDTH-1):0] in;
logic [(DATA_WIDTH-1):0] out;

int test_case_number;

int quantity_of_tests = 1000;

ReLU ReLU (.*);

task test_case_header;
    input int test_case_number;
    begin
        div();
        $display("|                               Test Case n* %01d                                  |", test_case_number);
        div();
    end
endtask

int pass_count = 0;
int fail_count = 0;

task check_relu;
    input int test_case_number;

    begin

        if (in[31] === 1'b0) begin

            assert (out === in)
                begin
                    pass_count++;
                end
            else
                begin
                    fail_count++;

                    $error(
                        "[FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b",
                        test_case_number,
                        in,
                        out,
                        in
                    );
                end

        end

        else if (in[31] === 1'b1) begin

            assert (out === 32'b0)
                begin
                    pass_count++;
                end
            else
                begin
                    fail_count++;

                    $error(
                        "[FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = %032b",
                        test_case_number,
                        in,
                        out,
                        32'b0
                    );
                end

        end

        else begin

            fail_count++;

            $error(
                "[FAIL] Test Case %0d | MSB invalido: %b",
                test_case_number,
                in[31]
            );

        end

    end
endtask

task routine_1_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = $urandom_range(0, 2147483647);
    end
endtask

task routine_1_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = $urandom_range(0, 2147483647);
    end
endtask

task routine_2_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'b0;
    end
endtask

task routine_2_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'b0;
    end
endtask

task routine_3_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'b1;
    end
endtask

task routine_3_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'b1;
    end
endtask

task routine_4_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'b101_0101_0101_0101_0101_0101_0101_0101;
    end
endtask

task routine_4_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'b101_0101_0101_0101_0101_0101_0101_0101;
    end
endtask

task routine_5_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'bZ;
    end
endtask

task routine_5_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'bZ;
    end
endtask

task routine_6_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'bX;
    end
endtask

task routine_6_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'bX;
    end
endtask

task routine_7_case1;
    begin
        in[31]   = 1'b0;
        in[30:0] = 31'bZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ;
    end
endtask

task routine_7_case2;
    begin
        in[31]   = 1'b1;
        in[30:0] = 31'bZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ;
    end
endtask

task div; $display("+-------------------------------------------------------------------------------+"); endtask

task header;
    begin
        div();
        $display("|  TIME  |                IN                ||                OUT               |");
        div();
    end
endtask

task monitor;
    begin
        $monitor("| %06t | %031b || %031b |", 
        $time, in, out);
    end
endtask

task r1;
    begin
        test_case_header(1);
        repeat (quantity_of_tests) begin routine_1_case1(); #10; check_relu(1); end
        repeat (quantity_of_tests) begin routine_1_case2(); #10; check_relu(1); end
    end
endtask

task r2;
    begin
        test_case_header(2);
        repeat (quantity_of_tests) begin routine_2_case1(); #10; check_relu(2); end
        repeat (quantity_of_tests) begin routine_2_case2(); #10; check_relu(2); end
    end
endtask

task r3;
    begin
        test_case_header(3);
        repeat (quantity_of_tests) begin routine_3_case1(); #10; check_relu(3); end
        repeat (quantity_of_tests) begin routine_3_case2(); #10; check_relu(3); end
    end
endtask

task r4;
    begin
        test_case_header(4);
        repeat (quantity_of_tests) begin routine_4_case1(); #10; check_relu(4); end
        repeat (quantity_of_tests) begin routine_4_case2(); #10; check_relu(4); end
    end
endtask

task r5;
    begin
        test_case_header(5);
        repeat (quantity_of_tests) begin routine_5_case1(); #10; check_relu(5); end
        repeat (quantity_of_tests) begin routine_5_case2(); #10; check_relu(5); end
    end
endtask

task r6;
    begin
        test_case_header(6);
        repeat (quantity_of_tests) begin routine_6_case1(); #10; check_relu(6); end
        repeat (quantity_of_tests) begin routine_6_case2(); #10; check_relu(6); end
    end
endtask

task r7;
    begin
        test_case_header(7);
        repeat (quantity_of_tests) begin routine_7_case1(); #10; check_relu(7); end
        repeat (quantity_of_tests) begin routine_7_case2(); #10; check_relu(7); end
    end
endtask

task scoreboard;
    begin
        $display("");
        $display("+-------------------------------------------------------------------------------+");
        $display("|                              TEST SUMMARY                                     |");
        $display("+-------------------------------------------------------------------------------+");
        $display("| PASS: %0d", pass_count);
        $display("| FAIL: %0d", fail_count);
        $display("+-------------------------------------------------------------------------------+");
    end
endtask

task test;
    begin
        header();
        monitor();
        r1();
        r2();
        r3();
        r4();
        r5();   
        r6();
        r7();
        scoreboard();
    end
endtask

initial 
begin
    $dumpfile("ReLU_tb.vcd");
    $dumpvars(0, testbench);
end

initial 
    begin
        test();
        #10; 
        $finish;
    end

endmodule: testbench