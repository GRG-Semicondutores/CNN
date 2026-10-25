#include "verilated.h"
#include "verilated_cov.h"

// Grava o banco completo de contadores instrumentados pelo Verilator.
// Chamado pelo testbench antes do status final, inclusive antes de $fatal.
extern "C" void cnn_top_write_coverage(const char* filename) {
    Verilated::threadContextp()->coveragep()->write(filename);
}
