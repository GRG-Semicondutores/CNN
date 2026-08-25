// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"N_INPUTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"ENABLE_WAVEFORM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"ENABLE_MONITOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"N_TESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"valid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "input_vec", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+168+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "weight", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_PUSH_PREFIX(tracep, "exp_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 20,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "exp_valid", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "exp_test", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "exp_tx", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+18+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "test_sent", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 25);
    for (int i = 0; i < 26; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "test_pass", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 25);
    for (int i = 0; i < 26; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+50+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "test_fail", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 25);
    for (int i = 0; i < 26; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "test_skip", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 25);
    for (int i = 0; i < 26; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+138+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "test_flushed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 25);
    for (int i = 0; i < 26; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"total_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"total_recv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"total_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"total_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"total_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"latency_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"latency_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"valid_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"data_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"unknown_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"current_test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"tx_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"N_INPUTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "input_vec", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+235+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "weight", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+267+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "mult", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+301+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 20,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+339,(8U),32);
    bufp->fullIData(oldp+340,(0x00000020U),32);
    bufp->fullIData(oldp+341,(0U),32);
    bufp->fullIData(oldp+342,(0x00000015U),32);
    bufp->fullIData(oldp+343,(6U),32);
    bufp->fullIData(oldp+344,(0x0000000aU),32);
    bufp->fullIData(oldp+345,(0x0000001aU),32);
    bufp->fullIData(oldp+346,(5U),32);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.testbench__DOT__exp_pipe[0]),21);
    bufp->fullIData(oldp+1,(vlSelfRef.testbench__DOT__exp_pipe[1]),21);
    bufp->fullIData(oldp+2,(vlSelfRef.testbench__DOT__exp_pipe[2]),21);
    bufp->fullIData(oldp+3,(vlSelfRef.testbench__DOT__exp_pipe[3]),21);
    bufp->fullIData(oldp+4,(vlSelfRef.testbench__DOT__exp_pipe[4]),21);
    bufp->fullIData(oldp+5,(vlSelfRef.testbench__DOT__exp_pipe[5]),21);
    bufp->fullBit(oldp+6,(vlSelfRef.testbench__DOT__exp_valid[0]));
    bufp->fullBit(oldp+7,(vlSelfRef.testbench__DOT__exp_valid[1]));
    bufp->fullBit(oldp+8,(vlSelfRef.testbench__DOT__exp_valid[2]));
    bufp->fullBit(oldp+9,(vlSelfRef.testbench__DOT__exp_valid[3]));
    bufp->fullBit(oldp+10,(vlSelfRef.testbench__DOT__exp_valid[4]));
    bufp->fullBit(oldp+11,(vlSelfRef.testbench__DOT__exp_valid[5]));
    bufp->fullIData(oldp+12,(vlSelfRef.testbench__DOT__exp_test[0]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.testbench__DOT__exp_test[1]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.testbench__DOT__exp_test[2]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.testbench__DOT__exp_test[3]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.testbench__DOT__exp_test[4]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.testbench__DOT__exp_test[5]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.testbench__DOT__exp_tx[0]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.testbench__DOT__exp_tx[1]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.testbench__DOT__exp_tx[2]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.testbench__DOT__exp_tx[3]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.testbench__DOT__exp_tx[4]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.testbench__DOT__exp_tx[5]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.testbench__DOT__test_sent[0]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.testbench__DOT__test_sent[1]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.testbench__DOT__test_sent[2]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.testbench__DOT__test_sent[3]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.testbench__DOT__test_sent[4]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.testbench__DOT__test_sent[5]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.testbench__DOT__test_sent[6]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.testbench__DOT__test_sent[7]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.testbench__DOT__test_sent[8]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.testbench__DOT__test_sent[9]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.testbench__DOT__test_sent[10]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.testbench__DOT__test_sent[11]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.testbench__DOT__test_sent[12]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.testbench__DOT__test_sent[13]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.testbench__DOT__test_sent[14]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.testbench__DOT__test_sent[15]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.testbench__DOT__test_sent[16]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.testbench__DOT__test_sent[17]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.testbench__DOT__test_sent[18]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.testbench__DOT__test_sent[19]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.testbench__DOT__test_sent[20]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.testbench__DOT__test_sent[21]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.testbench__DOT__test_sent[22]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.testbench__DOT__test_sent[23]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.testbench__DOT__test_sent[24]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.testbench__DOT__test_sent[25]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.testbench__DOT__test_pass[0]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.testbench__DOT__test_pass[1]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.testbench__DOT__test_pass[2]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.testbench__DOT__test_pass[3]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.testbench__DOT__test_pass[4]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.testbench__DOT__test_pass[5]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.testbench__DOT__test_pass[6]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.testbench__DOT__test_pass[7]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.testbench__DOT__test_pass[8]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.testbench__DOT__test_pass[9]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.testbench__DOT__test_pass[10]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.testbench__DOT__test_pass[11]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.testbench__DOT__test_pass[12]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.testbench__DOT__test_pass[13]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.testbench__DOT__test_pass[14]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.testbench__DOT__test_pass[15]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.testbench__DOT__test_pass[16]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.testbench__DOT__test_pass[17]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.testbench__DOT__test_pass[18]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.testbench__DOT__test_pass[19]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.testbench__DOT__test_pass[20]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.testbench__DOT__test_pass[21]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.testbench__DOT__test_pass[22]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.testbench__DOT__test_pass[23]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.testbench__DOT__test_pass[24]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.testbench__DOT__test_pass[25]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.testbench__DOT__test_fail[0]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.testbench__DOT__test_fail[1]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.testbench__DOT__test_fail[2]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.testbench__DOT__test_fail[3]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.testbench__DOT__test_fail[4]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.testbench__DOT__test_fail[5]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.testbench__DOT__test_fail[6]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.testbench__DOT__test_fail[7]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.testbench__DOT__test_fail[8]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.testbench__DOT__test_fail[9]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.testbench__DOT__test_fail[10]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.testbench__DOT__test_fail[11]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.testbench__DOT__test_fail[12]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.testbench__DOT__test_fail[13]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.testbench__DOT__test_fail[14]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.testbench__DOT__test_fail[15]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.testbench__DOT__test_fail[16]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.testbench__DOT__test_fail[17]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.testbench__DOT__test_fail[18]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.testbench__DOT__test_fail[19]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.testbench__DOT__test_fail[20]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.testbench__DOT__test_fail[21]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.testbench__DOT__test_fail[22]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.testbench__DOT__test_fail[23]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.testbench__DOT__test_fail[24]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.testbench__DOT__test_fail[25]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.testbench__DOT__test_flushed[0]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.testbench__DOT__test_flushed[1]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.testbench__DOT__test_flushed[2]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.testbench__DOT__test_flushed[3]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.testbench__DOT__test_flushed[4]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.testbench__DOT__test_flushed[5]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.testbench__DOT__test_flushed[6]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.testbench__DOT__test_flushed[7]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.testbench__DOT__test_flushed[8]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.testbench__DOT__test_flushed[9]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.testbench__DOT__test_flushed[10]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.testbench__DOT__test_flushed[11]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.testbench__DOT__test_flushed[12]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.testbench__DOT__test_flushed[13]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.testbench__DOT__test_flushed[14]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.testbench__DOT__test_flushed[15]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.testbench__DOT__test_flushed[16]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.testbench__DOT__test_flushed[17]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.testbench__DOT__test_flushed[18]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.testbench__DOT__test_flushed[19]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.testbench__DOT__test_flushed[20]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.testbench__DOT__test_flushed[21]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.testbench__DOT__test_flushed[22]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.testbench__DOT__test_flushed[23]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.testbench__DOT__test_flushed[24]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.testbench__DOT__test_flushed[25]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.testbench__DOT__total_sent),32);
    bufp->fullIData(oldp+129,(vlSelfRef.testbench__DOT__total_recv),32);
    bufp->fullIData(oldp+130,(vlSelfRef.testbench__DOT__total_pass),32);
    bufp->fullIData(oldp+131,(vlSelfRef.testbench__DOT__total_fail),32);
    bufp->fullIData(oldp+132,(vlSelfRef.testbench__DOT__total_flushed),32);
    bufp->fullIData(oldp+133,(vlSelfRef.testbench__DOT__latency_pass),32);
    bufp->fullIData(oldp+134,(vlSelfRef.testbench__DOT__latency_fail),32);
    bufp->fullIData(oldp+135,(vlSelfRef.testbench__DOT__valid_fail),32);
    bufp->fullIData(oldp+136,(vlSelfRef.testbench__DOT__data_fail),32);
    bufp->fullIData(oldp+137,(vlSelfRef.testbench__DOT__cycle_count),32);
    bufp->fullIData(oldp+138,(vlSelfRef.testbench__DOT__test_skip[0]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.testbench__DOT__test_skip[1]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.testbench__DOT__test_skip[2]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.testbench__DOT__test_skip[3]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.testbench__DOT__test_skip[4]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.testbench__DOT__test_skip[5]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.testbench__DOT__test_skip[6]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.testbench__DOT__test_skip[7]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.testbench__DOT__test_skip[8]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.testbench__DOT__test_skip[9]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.testbench__DOT__test_skip[10]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.testbench__DOT__test_skip[11]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.testbench__DOT__test_skip[12]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.testbench__DOT__test_skip[13]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.testbench__DOT__test_skip[14]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.testbench__DOT__test_skip[15]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.testbench__DOT__test_skip[16]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.testbench__DOT__test_skip[17]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.testbench__DOT__test_skip[18]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.testbench__DOT__test_skip[19]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.testbench__DOT__test_skip[20]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.testbench__DOT__test_skip[21]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.testbench__DOT__test_skip[22]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.testbench__DOT__test_skip[23]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.testbench__DOT__test_skip[24]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.testbench__DOT__test_skip[25]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.testbench__DOT__unknown_fail),32);
    bufp->fullIData(oldp+165,(vlSelfRef.testbench__DOT__r),32);
    bufp->fullBit(oldp+166,(vlSelfRef.testbench__DOT__rst));
    bufp->fullBit(oldp+167,(vlSelfRef.testbench__DOT__valid_in));
    bufp->fullCData(oldp+168,(vlSelfRef.testbench__DOT__input_vec[0]),8);
    bufp->fullCData(oldp+169,(vlSelfRef.testbench__DOT__input_vec[1]),8);
    bufp->fullCData(oldp+170,(vlSelfRef.testbench__DOT__input_vec[2]),8);
    bufp->fullCData(oldp+171,(vlSelfRef.testbench__DOT__input_vec[3]),8);
    bufp->fullCData(oldp+172,(vlSelfRef.testbench__DOT__input_vec[4]),8);
    bufp->fullCData(oldp+173,(vlSelfRef.testbench__DOT__input_vec[5]),8);
    bufp->fullCData(oldp+174,(vlSelfRef.testbench__DOT__input_vec[6]),8);
    bufp->fullCData(oldp+175,(vlSelfRef.testbench__DOT__input_vec[7]),8);
    bufp->fullCData(oldp+176,(vlSelfRef.testbench__DOT__input_vec[8]),8);
    bufp->fullCData(oldp+177,(vlSelfRef.testbench__DOT__input_vec[9]),8);
    bufp->fullCData(oldp+178,(vlSelfRef.testbench__DOT__input_vec[10]),8);
    bufp->fullCData(oldp+179,(vlSelfRef.testbench__DOT__input_vec[11]),8);
    bufp->fullCData(oldp+180,(vlSelfRef.testbench__DOT__input_vec[12]),8);
    bufp->fullCData(oldp+181,(vlSelfRef.testbench__DOT__input_vec[13]),8);
    bufp->fullCData(oldp+182,(vlSelfRef.testbench__DOT__input_vec[14]),8);
    bufp->fullCData(oldp+183,(vlSelfRef.testbench__DOT__input_vec[15]),8);
    bufp->fullCData(oldp+184,(vlSelfRef.testbench__DOT__input_vec[16]),8);
    bufp->fullCData(oldp+185,(vlSelfRef.testbench__DOT__input_vec[17]),8);
    bufp->fullCData(oldp+186,(vlSelfRef.testbench__DOT__input_vec[18]),8);
    bufp->fullCData(oldp+187,(vlSelfRef.testbench__DOT__input_vec[19]),8);
    bufp->fullCData(oldp+188,(vlSelfRef.testbench__DOT__input_vec[20]),8);
    bufp->fullCData(oldp+189,(vlSelfRef.testbench__DOT__input_vec[21]),8);
    bufp->fullCData(oldp+190,(vlSelfRef.testbench__DOT__input_vec[22]),8);
    bufp->fullCData(oldp+191,(vlSelfRef.testbench__DOT__input_vec[23]),8);
    bufp->fullCData(oldp+192,(vlSelfRef.testbench__DOT__input_vec[24]),8);
    bufp->fullCData(oldp+193,(vlSelfRef.testbench__DOT__input_vec[25]),8);
    bufp->fullCData(oldp+194,(vlSelfRef.testbench__DOT__input_vec[26]),8);
    bufp->fullCData(oldp+195,(vlSelfRef.testbench__DOT__input_vec[27]),8);
    bufp->fullCData(oldp+196,(vlSelfRef.testbench__DOT__input_vec[28]),8);
    bufp->fullCData(oldp+197,(vlSelfRef.testbench__DOT__input_vec[29]),8);
    bufp->fullCData(oldp+198,(vlSelfRef.testbench__DOT__input_vec[30]),8);
    bufp->fullCData(oldp+199,(vlSelfRef.testbench__DOT__input_vec[31]),8);
    bufp->fullCData(oldp+200,(vlSelfRef.testbench__DOT__weight[0]),8);
    bufp->fullCData(oldp+201,(vlSelfRef.testbench__DOT__weight[1]),8);
    bufp->fullCData(oldp+202,(vlSelfRef.testbench__DOT__weight[2]),8);
    bufp->fullCData(oldp+203,(vlSelfRef.testbench__DOT__weight[3]),8);
    bufp->fullCData(oldp+204,(vlSelfRef.testbench__DOT__weight[4]),8);
    bufp->fullCData(oldp+205,(vlSelfRef.testbench__DOT__weight[5]),8);
    bufp->fullCData(oldp+206,(vlSelfRef.testbench__DOT__weight[6]),8);
    bufp->fullCData(oldp+207,(vlSelfRef.testbench__DOT__weight[7]),8);
    bufp->fullCData(oldp+208,(vlSelfRef.testbench__DOT__weight[8]),8);
    bufp->fullCData(oldp+209,(vlSelfRef.testbench__DOT__weight[9]),8);
    bufp->fullCData(oldp+210,(vlSelfRef.testbench__DOT__weight[10]),8);
    bufp->fullCData(oldp+211,(vlSelfRef.testbench__DOT__weight[11]),8);
    bufp->fullCData(oldp+212,(vlSelfRef.testbench__DOT__weight[12]),8);
    bufp->fullCData(oldp+213,(vlSelfRef.testbench__DOT__weight[13]),8);
    bufp->fullCData(oldp+214,(vlSelfRef.testbench__DOT__weight[14]),8);
    bufp->fullCData(oldp+215,(vlSelfRef.testbench__DOT__weight[15]),8);
    bufp->fullCData(oldp+216,(vlSelfRef.testbench__DOT__weight[16]),8);
    bufp->fullCData(oldp+217,(vlSelfRef.testbench__DOT__weight[17]),8);
    bufp->fullCData(oldp+218,(vlSelfRef.testbench__DOT__weight[18]),8);
    bufp->fullCData(oldp+219,(vlSelfRef.testbench__DOT__weight[19]),8);
    bufp->fullCData(oldp+220,(vlSelfRef.testbench__DOT__weight[20]),8);
    bufp->fullCData(oldp+221,(vlSelfRef.testbench__DOT__weight[21]),8);
    bufp->fullCData(oldp+222,(vlSelfRef.testbench__DOT__weight[22]),8);
    bufp->fullCData(oldp+223,(vlSelfRef.testbench__DOT__weight[23]),8);
    bufp->fullCData(oldp+224,(vlSelfRef.testbench__DOT__weight[24]),8);
    bufp->fullCData(oldp+225,(vlSelfRef.testbench__DOT__weight[25]),8);
    bufp->fullCData(oldp+226,(vlSelfRef.testbench__DOT__weight[26]),8);
    bufp->fullCData(oldp+227,(vlSelfRef.testbench__DOT__weight[27]),8);
    bufp->fullCData(oldp+228,(vlSelfRef.testbench__DOT__weight[28]),8);
    bufp->fullCData(oldp+229,(vlSelfRef.testbench__DOT__weight[29]),8);
    bufp->fullCData(oldp+230,(vlSelfRef.testbench__DOT__weight[30]),8);
    bufp->fullCData(oldp+231,(vlSelfRef.testbench__DOT__weight[31]),8);
    bufp->fullIData(oldp+232,(vlSelfRef.testbench__DOT__current_test),32);
    bufp->fullIData(oldp+233,(vlSelfRef.testbench__DOT__tx_count),32);
    bufp->fullIData(oldp+234,(vlSelfRef.testbench__DOT__c),32);
    bufp->fullCData(oldp+235,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[0]),8);
    bufp->fullCData(oldp+236,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[1]),8);
    bufp->fullCData(oldp+237,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[2]),8);
    bufp->fullCData(oldp+238,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[3]),8);
    bufp->fullCData(oldp+239,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[4]),8);
    bufp->fullCData(oldp+240,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[5]),8);
    bufp->fullCData(oldp+241,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[6]),8);
    bufp->fullCData(oldp+242,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[7]),8);
    bufp->fullCData(oldp+243,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[8]),8);
    bufp->fullCData(oldp+244,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[9]),8);
    bufp->fullCData(oldp+245,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[10]),8);
    bufp->fullCData(oldp+246,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[11]),8);
    bufp->fullCData(oldp+247,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[12]),8);
    bufp->fullCData(oldp+248,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[13]),8);
    bufp->fullCData(oldp+249,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[14]),8);
    bufp->fullCData(oldp+250,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[15]),8);
    bufp->fullCData(oldp+251,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[16]),8);
    bufp->fullCData(oldp+252,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[17]),8);
    bufp->fullCData(oldp+253,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[18]),8);
    bufp->fullCData(oldp+254,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[19]),8);
    bufp->fullCData(oldp+255,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[20]),8);
    bufp->fullCData(oldp+256,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[21]),8);
    bufp->fullCData(oldp+257,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[22]),8);
    bufp->fullCData(oldp+258,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[23]),8);
    bufp->fullCData(oldp+259,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[24]),8);
    bufp->fullCData(oldp+260,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[25]),8);
    bufp->fullCData(oldp+261,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[26]),8);
    bufp->fullCData(oldp+262,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[27]),8);
    bufp->fullCData(oldp+263,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[28]),8);
    bufp->fullCData(oldp+264,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[29]),8);
    bufp->fullCData(oldp+265,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[30]),8);
    bufp->fullCData(oldp+266,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[31]),8);
    bufp->fullCData(oldp+267,(vlSelfRef.testbench__DOT__dut__DOT__weight[0]),8);
    bufp->fullCData(oldp+268,(vlSelfRef.testbench__DOT__dut__DOT__weight[1]),8);
    bufp->fullCData(oldp+269,(vlSelfRef.testbench__DOT__dut__DOT__weight[2]),8);
    bufp->fullCData(oldp+270,(vlSelfRef.testbench__DOT__dut__DOT__weight[3]),8);
    bufp->fullCData(oldp+271,(vlSelfRef.testbench__DOT__dut__DOT__weight[4]),8);
    bufp->fullCData(oldp+272,(vlSelfRef.testbench__DOT__dut__DOT__weight[5]),8);
    bufp->fullCData(oldp+273,(vlSelfRef.testbench__DOT__dut__DOT__weight[6]),8);
    bufp->fullCData(oldp+274,(vlSelfRef.testbench__DOT__dut__DOT__weight[7]),8);
    bufp->fullCData(oldp+275,(vlSelfRef.testbench__DOT__dut__DOT__weight[8]),8);
    bufp->fullCData(oldp+276,(vlSelfRef.testbench__DOT__dut__DOT__weight[9]),8);
    bufp->fullCData(oldp+277,(vlSelfRef.testbench__DOT__dut__DOT__weight[10]),8);
    bufp->fullCData(oldp+278,(vlSelfRef.testbench__DOT__dut__DOT__weight[11]),8);
    bufp->fullCData(oldp+279,(vlSelfRef.testbench__DOT__dut__DOT__weight[12]),8);
    bufp->fullCData(oldp+280,(vlSelfRef.testbench__DOT__dut__DOT__weight[13]),8);
    bufp->fullCData(oldp+281,(vlSelfRef.testbench__DOT__dut__DOT__weight[14]),8);
    bufp->fullCData(oldp+282,(vlSelfRef.testbench__DOT__dut__DOT__weight[15]),8);
    bufp->fullCData(oldp+283,(vlSelfRef.testbench__DOT__dut__DOT__weight[16]),8);
    bufp->fullCData(oldp+284,(vlSelfRef.testbench__DOT__dut__DOT__weight[17]),8);
    bufp->fullCData(oldp+285,(vlSelfRef.testbench__DOT__dut__DOT__weight[18]),8);
    bufp->fullCData(oldp+286,(vlSelfRef.testbench__DOT__dut__DOT__weight[19]),8);
    bufp->fullCData(oldp+287,(vlSelfRef.testbench__DOT__dut__DOT__weight[20]),8);
    bufp->fullCData(oldp+288,(vlSelfRef.testbench__DOT__dut__DOT__weight[21]),8);
    bufp->fullCData(oldp+289,(vlSelfRef.testbench__DOT__dut__DOT__weight[22]),8);
    bufp->fullCData(oldp+290,(vlSelfRef.testbench__DOT__dut__DOT__weight[23]),8);
    bufp->fullCData(oldp+291,(vlSelfRef.testbench__DOT__dut__DOT__weight[24]),8);
    bufp->fullCData(oldp+292,(vlSelfRef.testbench__DOT__dut__DOT__weight[25]),8);
    bufp->fullCData(oldp+293,(vlSelfRef.testbench__DOT__dut__DOT__weight[26]),8);
    bufp->fullCData(oldp+294,(vlSelfRef.testbench__DOT__dut__DOT__weight[27]),8);
    bufp->fullCData(oldp+295,(vlSelfRef.testbench__DOT__dut__DOT__weight[28]),8);
    bufp->fullCData(oldp+296,(vlSelfRef.testbench__DOT__dut__DOT__weight[29]),8);
    bufp->fullCData(oldp+297,(vlSelfRef.testbench__DOT__dut__DOT__weight[30]),8);
    bufp->fullCData(oldp+298,(vlSelfRef.testbench__DOT__dut__DOT__weight[31]),8);
    bufp->fullBit(oldp+299,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                   >> 5U))));
    bufp->fullIData(oldp+300,(vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U]),21);
    bufp->fullIData(oldp+301,(vlSelfRef.testbench__DOT__dut__DOT__mult[0]),21);
    bufp->fullIData(oldp+302,(vlSelfRef.testbench__DOT__dut__DOT__mult[1]),21);
    bufp->fullIData(oldp+303,(vlSelfRef.testbench__DOT__dut__DOT__mult[2]),21);
    bufp->fullIData(oldp+304,(vlSelfRef.testbench__DOT__dut__DOT__mult[3]),21);
    bufp->fullIData(oldp+305,(vlSelfRef.testbench__DOT__dut__DOT__mult[4]),21);
    bufp->fullIData(oldp+306,(vlSelfRef.testbench__DOT__dut__DOT__mult[5]),21);
    bufp->fullIData(oldp+307,(vlSelfRef.testbench__DOT__dut__DOT__mult[6]),21);
    bufp->fullIData(oldp+308,(vlSelfRef.testbench__DOT__dut__DOT__mult[7]),21);
    bufp->fullIData(oldp+309,(vlSelfRef.testbench__DOT__dut__DOT__mult[8]),21);
    bufp->fullIData(oldp+310,(vlSelfRef.testbench__DOT__dut__DOT__mult[9]),21);
    bufp->fullIData(oldp+311,(vlSelfRef.testbench__DOT__dut__DOT__mult[10]),21);
    bufp->fullIData(oldp+312,(vlSelfRef.testbench__DOT__dut__DOT__mult[11]),21);
    bufp->fullIData(oldp+313,(vlSelfRef.testbench__DOT__dut__DOT__mult[12]),21);
    bufp->fullIData(oldp+314,(vlSelfRef.testbench__DOT__dut__DOT__mult[13]),21);
    bufp->fullIData(oldp+315,(vlSelfRef.testbench__DOT__dut__DOT__mult[14]),21);
    bufp->fullIData(oldp+316,(vlSelfRef.testbench__DOT__dut__DOT__mult[15]),21);
    bufp->fullIData(oldp+317,(vlSelfRef.testbench__DOT__dut__DOT__mult[16]),21);
    bufp->fullIData(oldp+318,(vlSelfRef.testbench__DOT__dut__DOT__mult[17]),21);
    bufp->fullIData(oldp+319,(vlSelfRef.testbench__DOT__dut__DOT__mult[18]),21);
    bufp->fullIData(oldp+320,(vlSelfRef.testbench__DOT__dut__DOT__mult[19]),21);
    bufp->fullIData(oldp+321,(vlSelfRef.testbench__DOT__dut__DOT__mult[20]),21);
    bufp->fullIData(oldp+322,(vlSelfRef.testbench__DOT__dut__DOT__mult[21]),21);
    bufp->fullIData(oldp+323,(vlSelfRef.testbench__DOT__dut__DOT__mult[22]),21);
    bufp->fullIData(oldp+324,(vlSelfRef.testbench__DOT__dut__DOT__mult[23]),21);
    bufp->fullIData(oldp+325,(vlSelfRef.testbench__DOT__dut__DOT__mult[24]),21);
    bufp->fullIData(oldp+326,(vlSelfRef.testbench__DOT__dut__DOT__mult[25]),21);
    bufp->fullIData(oldp+327,(vlSelfRef.testbench__DOT__dut__DOT__mult[26]),21);
    bufp->fullIData(oldp+328,(vlSelfRef.testbench__DOT__dut__DOT__mult[27]),21);
    bufp->fullIData(oldp+329,(vlSelfRef.testbench__DOT__dut__DOT__mult[28]),21);
    bufp->fullIData(oldp+330,(vlSelfRef.testbench__DOT__dut__DOT__mult[29]),21);
    bufp->fullIData(oldp+331,(vlSelfRef.testbench__DOT__dut__DOT__mult[30]),21);
    bufp->fullIData(oldp+332,(vlSelfRef.testbench__DOT__dut__DOT__mult[31]),21);
    bufp->fullCData(oldp+333,(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe),6);
    bufp->fullIData(oldp+334,(vlSelfRef.testbench__DOT__dut__DOT__v),32);
    bufp->fullIData(oldp+335,(vlSelfRef.testbench__DOT__dut__DOT__m),32);
    bufp->fullBit(oldp+336,(vlSelfRef.testbench__DOT__clk));
    bufp->fullIData(oldp+337,(vlSelfRef.testbench__DOT__i),32);
    bufp->fullIData(oldp+338,(vlSelfRef.testbench__DOT__j),32);
}
