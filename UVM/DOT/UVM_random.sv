// Fonte aleatoria da sequence. Nenhum componente UVM deve consumir este estado.
class dot_random_stream;
`ifdef VERILATOR
    // No Verilator 5.050, $urandom(seed) reinicializa o RNG global, mas
    // $urandom em processos UVM consulta o RNG do processo. Alem disso,
    // construtores podem consumir seu estado. Um VlRNG privado reproduz o
    // fluxo do testbench funcional, sem depender da hierarquia de processos.
    // A expansao de seed e a reducao de range seguem verilated.cpp/funcs.h.
    string state;

    function void seed(int unsigned value);
        $c("{ VlRNG rng{(uint64_t(", value, ") << 32) | uint32_t(", value, ")}; rng.rand64(); ",
           state, " = rng.get_randstate(); }");
    endfunction

    function longint unsigned next_bits();
        longint unsigned value;
        value = 64'($c("0"));
        $c("{ VlRNG rng{0}; rng.set_randstate(", state, "); ", value,
           " = rng.rand64(); ", state, " = rng.get_randstate(); }");
        return value;
    endfunction

    function int unsigned word();
        return 32'(next_bits());
    endfunction

    function int unsigned range_inclusive(int unsigned hi, int unsigned lo=0);
        return 32'(next_bits() % (64'(hi)-lo+1) + lo);
    endfunction
`else
    // Mantem as chamadas SystemVerilog originais em simuladores de quatro estados.
    function void seed(int unsigned value);
        int dummy, seed_copy;
        seed_copy=value;
        dummy=$urandom(seed_copy);
    endfunction
    function int unsigned word();
        return $urandom;
    endfunction
    function int unsigned range_inclusive(int unsigned hi, int unsigned lo=0);
        return $urandom_range(hi,lo);
    endfunction
`endif
endclass
