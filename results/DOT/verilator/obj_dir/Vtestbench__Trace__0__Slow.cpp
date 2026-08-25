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
    VL_TRACE_DECL_BUS(tracep,c+187,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"N_INPUTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"ENABLE_WAVEFORM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"ENABLE_MONITOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "input_vec", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "weight", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"valid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_PUSH_PREFIX(tracep, "expected_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 20,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "valid_expected", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+71+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"sent_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"recv_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"N_INPUTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "input_vec", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+77+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "weight", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+109+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "mult", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 20,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
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
    bufp->fullIData(oldp+187,(8U),32);
    bufp->fullIData(oldp+188,(0x00000020U),32);
    bufp->fullIData(oldp+189,(0U),32);
    bufp->fullIData(oldp+190,(0x00000015U),32);
    bufp->fullIData(oldp+191,(5U),32);
    bufp->fullIData(oldp+192,(6U),32);
    bufp->fullIData(oldp+193,(0x0000000aU),32);
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
    bufp->fullCData(oldp+0,(vlSelfRef.testbench__DOT__input_vec[0]),8);
    bufp->fullCData(oldp+1,(vlSelfRef.testbench__DOT__input_vec[1]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.testbench__DOT__input_vec[2]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.testbench__DOT__input_vec[3]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.testbench__DOT__input_vec[4]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.testbench__DOT__input_vec[5]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.testbench__DOT__input_vec[6]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.testbench__DOT__input_vec[7]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.testbench__DOT__input_vec[8]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.testbench__DOT__input_vec[9]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.testbench__DOT__input_vec[10]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.testbench__DOT__input_vec[11]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.testbench__DOT__input_vec[12]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.testbench__DOT__input_vec[13]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.testbench__DOT__input_vec[14]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.testbench__DOT__input_vec[15]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.testbench__DOT__input_vec[16]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.testbench__DOT__input_vec[17]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.testbench__DOT__input_vec[18]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.testbench__DOT__input_vec[19]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.testbench__DOT__input_vec[20]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.testbench__DOT__input_vec[21]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.testbench__DOT__input_vec[22]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.testbench__DOT__input_vec[23]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.testbench__DOT__input_vec[24]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.testbench__DOT__input_vec[25]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.testbench__DOT__input_vec[26]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.testbench__DOT__input_vec[27]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.testbench__DOT__input_vec[28]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.testbench__DOT__input_vec[29]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.testbench__DOT__input_vec[30]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.testbench__DOT__input_vec[31]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.testbench__DOT__weight[0]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.testbench__DOT__weight[1]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.testbench__DOT__weight[2]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.testbench__DOT__weight[3]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.testbench__DOT__weight[4]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.testbench__DOT__weight[5]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.testbench__DOT__weight[6]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.testbench__DOT__weight[7]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.testbench__DOT__weight[8]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.testbench__DOT__weight[9]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.testbench__DOT__weight[10]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.testbench__DOT__weight[11]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.testbench__DOT__weight[12]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.testbench__DOT__weight[13]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.testbench__DOT__weight[14]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.testbench__DOT__weight[15]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.testbench__DOT__weight[16]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.testbench__DOT__weight[17]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.testbench__DOT__weight[18]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.testbench__DOT__weight[19]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.testbench__DOT__weight[20]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.testbench__DOT__weight[21]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.testbench__DOT__weight[22]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.testbench__DOT__weight[23]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.testbench__DOT__weight[24]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.testbench__DOT__weight[25]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.testbench__DOT__weight[26]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.testbench__DOT__weight[27]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.testbench__DOT__weight[28]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.testbench__DOT__weight[29]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.testbench__DOT__weight[30]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.testbench__DOT__weight[31]),8);
    bufp->fullIData(oldp+64,(vlSelfRef.testbench__DOT__i),32);
    bufp->fullIData(oldp+65,(vlSelfRef.testbench__DOT__expected_pipe[0]),21);
    bufp->fullIData(oldp+66,(vlSelfRef.testbench__DOT__expected_pipe[1]),21);
    bufp->fullIData(oldp+67,(vlSelfRef.testbench__DOT__expected_pipe[2]),21);
    bufp->fullIData(oldp+68,(vlSelfRef.testbench__DOT__expected_pipe[3]),21);
    bufp->fullIData(oldp+69,(vlSelfRef.testbench__DOT__expected_pipe[4]),21);
    bufp->fullIData(oldp+70,(vlSelfRef.testbench__DOT__expected_pipe[5]),21);
    bufp->fullBit(oldp+71,(vlSelfRef.testbench__DOT__valid_expected[0]));
    bufp->fullBit(oldp+72,(vlSelfRef.testbench__DOT__valid_expected[1]));
    bufp->fullBit(oldp+73,(vlSelfRef.testbench__DOT__valid_expected[2]));
    bufp->fullBit(oldp+74,(vlSelfRef.testbench__DOT__valid_expected[3]));
    bufp->fullBit(oldp+75,(vlSelfRef.testbench__DOT__valid_expected[4]));
    bufp->fullBit(oldp+76,(vlSelfRef.testbench__DOT__valid_expected[5]));
    bufp->fullCData(oldp+77,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[0]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[1]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[2]),8);
    bufp->fullCData(oldp+80,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[3]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[4]),8);
    bufp->fullCData(oldp+82,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[5]),8);
    bufp->fullCData(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[6]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[7]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[8]),8);
    bufp->fullCData(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[9]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[10]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[11]),8);
    bufp->fullCData(oldp+89,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[12]),8);
    bufp->fullCData(oldp+90,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[13]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[14]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[15]),8);
    bufp->fullCData(oldp+93,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[16]),8);
    bufp->fullCData(oldp+94,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[17]),8);
    bufp->fullCData(oldp+95,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[18]),8);
    bufp->fullCData(oldp+96,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[19]),8);
    bufp->fullCData(oldp+97,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[20]),8);
    bufp->fullCData(oldp+98,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[21]),8);
    bufp->fullCData(oldp+99,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[22]),8);
    bufp->fullCData(oldp+100,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[23]),8);
    bufp->fullCData(oldp+101,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[24]),8);
    bufp->fullCData(oldp+102,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[25]),8);
    bufp->fullCData(oldp+103,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[26]),8);
    bufp->fullCData(oldp+104,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[27]),8);
    bufp->fullCData(oldp+105,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[28]),8);
    bufp->fullCData(oldp+106,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[29]),8);
    bufp->fullCData(oldp+107,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[30]),8);
    bufp->fullCData(oldp+108,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[31]),8);
    bufp->fullCData(oldp+109,(vlSelfRef.testbench__DOT__dut__DOT__weight[0]),8);
    bufp->fullCData(oldp+110,(vlSelfRef.testbench__DOT__dut__DOT__weight[1]),8);
    bufp->fullCData(oldp+111,(vlSelfRef.testbench__DOT__dut__DOT__weight[2]),8);
    bufp->fullCData(oldp+112,(vlSelfRef.testbench__DOT__dut__DOT__weight[3]),8);
    bufp->fullCData(oldp+113,(vlSelfRef.testbench__DOT__dut__DOT__weight[4]),8);
    bufp->fullCData(oldp+114,(vlSelfRef.testbench__DOT__dut__DOT__weight[5]),8);
    bufp->fullCData(oldp+115,(vlSelfRef.testbench__DOT__dut__DOT__weight[6]),8);
    bufp->fullCData(oldp+116,(vlSelfRef.testbench__DOT__dut__DOT__weight[7]),8);
    bufp->fullCData(oldp+117,(vlSelfRef.testbench__DOT__dut__DOT__weight[8]),8);
    bufp->fullCData(oldp+118,(vlSelfRef.testbench__DOT__dut__DOT__weight[9]),8);
    bufp->fullCData(oldp+119,(vlSelfRef.testbench__DOT__dut__DOT__weight[10]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.testbench__DOT__dut__DOT__weight[11]),8);
    bufp->fullCData(oldp+121,(vlSelfRef.testbench__DOT__dut__DOT__weight[12]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.testbench__DOT__dut__DOT__weight[13]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.testbench__DOT__dut__DOT__weight[14]),8);
    bufp->fullCData(oldp+124,(vlSelfRef.testbench__DOT__dut__DOT__weight[15]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.testbench__DOT__dut__DOT__weight[16]),8);
    bufp->fullCData(oldp+126,(vlSelfRef.testbench__DOT__dut__DOT__weight[17]),8);
    bufp->fullCData(oldp+127,(vlSelfRef.testbench__DOT__dut__DOT__weight[18]),8);
    bufp->fullCData(oldp+128,(vlSelfRef.testbench__DOT__dut__DOT__weight[19]),8);
    bufp->fullCData(oldp+129,(vlSelfRef.testbench__DOT__dut__DOT__weight[20]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.testbench__DOT__dut__DOT__weight[21]),8);
    bufp->fullCData(oldp+131,(vlSelfRef.testbench__DOT__dut__DOT__weight[22]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.testbench__DOT__dut__DOT__weight[23]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.testbench__DOT__dut__DOT__weight[24]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.testbench__DOT__dut__DOT__weight[25]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.testbench__DOT__dut__DOT__weight[26]),8);
    bufp->fullCData(oldp+136,(vlSelfRef.testbench__DOT__dut__DOT__weight[27]),8);
    bufp->fullCData(oldp+137,(vlSelfRef.testbench__DOT__dut__DOT__weight[28]),8);
    bufp->fullCData(oldp+138,(vlSelfRef.testbench__DOT__dut__DOT__weight[29]),8);
    bufp->fullCData(oldp+139,(vlSelfRef.testbench__DOT__dut__DOT__weight[30]),8);
    bufp->fullCData(oldp+140,(vlSelfRef.testbench__DOT__dut__DOT__weight[31]),8);
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                   >> 5U))));
    bufp->fullIData(oldp+142,(vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U]),21);
    bufp->fullIData(oldp+143,(vlSelfRef.testbench__DOT__dut__DOT__mult[0]),21);
    bufp->fullIData(oldp+144,(vlSelfRef.testbench__DOT__dut__DOT__mult[1]),21);
    bufp->fullIData(oldp+145,(vlSelfRef.testbench__DOT__dut__DOT__mult[2]),21);
    bufp->fullIData(oldp+146,(vlSelfRef.testbench__DOT__dut__DOT__mult[3]),21);
    bufp->fullIData(oldp+147,(vlSelfRef.testbench__DOT__dut__DOT__mult[4]),21);
    bufp->fullIData(oldp+148,(vlSelfRef.testbench__DOT__dut__DOT__mult[5]),21);
    bufp->fullIData(oldp+149,(vlSelfRef.testbench__DOT__dut__DOT__mult[6]),21);
    bufp->fullIData(oldp+150,(vlSelfRef.testbench__DOT__dut__DOT__mult[7]),21);
    bufp->fullIData(oldp+151,(vlSelfRef.testbench__DOT__dut__DOT__mult[8]),21);
    bufp->fullIData(oldp+152,(vlSelfRef.testbench__DOT__dut__DOT__mult[9]),21);
    bufp->fullIData(oldp+153,(vlSelfRef.testbench__DOT__dut__DOT__mult[10]),21);
    bufp->fullIData(oldp+154,(vlSelfRef.testbench__DOT__dut__DOT__mult[11]),21);
    bufp->fullIData(oldp+155,(vlSelfRef.testbench__DOT__dut__DOT__mult[12]),21);
    bufp->fullIData(oldp+156,(vlSelfRef.testbench__DOT__dut__DOT__mult[13]),21);
    bufp->fullIData(oldp+157,(vlSelfRef.testbench__DOT__dut__DOT__mult[14]),21);
    bufp->fullIData(oldp+158,(vlSelfRef.testbench__DOT__dut__DOT__mult[15]),21);
    bufp->fullIData(oldp+159,(vlSelfRef.testbench__DOT__dut__DOT__mult[16]),21);
    bufp->fullIData(oldp+160,(vlSelfRef.testbench__DOT__dut__DOT__mult[17]),21);
    bufp->fullIData(oldp+161,(vlSelfRef.testbench__DOT__dut__DOT__mult[18]),21);
    bufp->fullIData(oldp+162,(vlSelfRef.testbench__DOT__dut__DOT__mult[19]),21);
    bufp->fullIData(oldp+163,(vlSelfRef.testbench__DOT__dut__DOT__mult[20]),21);
    bufp->fullIData(oldp+164,(vlSelfRef.testbench__DOT__dut__DOT__mult[21]),21);
    bufp->fullIData(oldp+165,(vlSelfRef.testbench__DOT__dut__DOT__mult[22]),21);
    bufp->fullIData(oldp+166,(vlSelfRef.testbench__DOT__dut__DOT__mult[23]),21);
    bufp->fullIData(oldp+167,(vlSelfRef.testbench__DOT__dut__DOT__mult[24]),21);
    bufp->fullIData(oldp+168,(vlSelfRef.testbench__DOT__dut__DOT__mult[25]),21);
    bufp->fullIData(oldp+169,(vlSelfRef.testbench__DOT__dut__DOT__mult[26]),21);
    bufp->fullIData(oldp+170,(vlSelfRef.testbench__DOT__dut__DOT__mult[27]),21);
    bufp->fullIData(oldp+171,(vlSelfRef.testbench__DOT__dut__DOT__mult[28]),21);
    bufp->fullIData(oldp+172,(vlSelfRef.testbench__DOT__dut__DOT__mult[29]),21);
    bufp->fullIData(oldp+173,(vlSelfRef.testbench__DOT__dut__DOT__mult[30]),21);
    bufp->fullIData(oldp+174,(vlSelfRef.testbench__DOT__dut__DOT__mult[31]),21);
    bufp->fullCData(oldp+175,(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe),6);
    bufp->fullIData(oldp+176,(vlSelfRef.testbench__DOT__dut__DOT__v),32);
    bufp->fullIData(oldp+177,(vlSelfRef.testbench__DOT__dut__DOT__m),32);
    bufp->fullBit(oldp+178,(vlSelfRef.testbench__DOT__clk));
    bufp->fullBit(oldp+179,(vlSelfRef.testbench__DOT__rst));
    bufp->fullBit(oldp+180,(vlSelfRef.testbench__DOT__valid_in));
    bufp->fullIData(oldp+181,(vlSelfRef.testbench__DOT__pass_count),32);
    bufp->fullIData(oldp+182,(vlSelfRef.testbench__DOT__fail_count),32);
    bufp->fullIData(oldp+183,(vlSelfRef.testbench__DOT__sent_count),32);
    bufp->fullIData(oldp+184,(vlSelfRef.testbench__DOT__recv_count),32);
    bufp->fullIData(oldp+185,(vlSelfRef.testbench__DOT__cycle_count),32);
    bufp->fullIData(oldp+186,(vlSelfRef.testbench__DOT__p),32);
}
