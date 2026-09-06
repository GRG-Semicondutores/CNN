module random_check;
`include "UVM_random.sv"
int unsigned expected[100];
dot_random_stream rng;
int tmp,dummy;
int unsigned hi;
initial begin
    rng=new;
    for (int test_id=2;test_id<=6;test_id++) begin
        for (int r=0;r<4;r++) begin
            tmp=32'h5A17_2026 ^ (test_id*32'h0001_0101) ^ (r*32'h0100_0193);
            dummy=$urandom(tmp);
            for (int i=0;i<100;i++) begin
                case (i%5)
                    0: expected[i]=$urandom;
                    1: expected[i]=$urandom_range(3,0);
                    2: expected[i]=$urandom_range(15,0);
                    3: expected[i]=$urandom_range(31,0);
                    4: expected[i]=$urandom_range(99,0);
                endcase
            end
            rng.seed(tmp);
            for (int i=0;i<100;i++) begin
                if (i%5==0) begin
                    if (expected[i] != rng.word()) $fatal(1,"RNG word mismatch");
                end else begin
                    case (i%5)
                        1: hi=3;
                        2: hi=15;
                        3: hi=31;
                        4: hi=99;
                    endcase
                    if (expected[i] != rng.range_inclusive(hi,0)) $fatal(1,"RNG range mismatch");
                end
            end
        end
    end
    $display("RNG CHECK PASS: 2000 values");
    $finish;
end
endmodule
