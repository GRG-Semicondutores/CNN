// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf);
VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_static__TOP(vlSelf);
    Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__in__0 
        = vlSelfRef.testbench__DOT__in;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__out__0 
        = vlSelfRef.testbench__DOT__out;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__quantity_of_tests = 0x000003e8U;
    ++(vlSymsp->__Vcoverage[128]);
    vlSelfRef.testbench__DOT__pass_count = 0U;
    ++(vlSymsp->__Vcoverage[130]);
    vlSelfRef.testbench__DOT__fail_count = 0U;
    ++(vlSymsp->__Vcoverage[131]);
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("ReLU_tb.vcd"s);
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[173]);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtestbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers_vec__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers_vec__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtestbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtestbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtestbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( testbench.in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( testbench.out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root____Vm_traceActivitySetAll\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->testbench__DOT__in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15811953225661715487ull);
    vlSelf->testbench__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15016017192654730058ull);
    vlSelf->testbench__DOT__test_case_number = 0;
    vlSelf->testbench__DOT____Vtogcov__in = 0;
    vlSelf->testbench__DOT____Vtogcov__out = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__out__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtestbench___024root___configure_coverage(Vtestbench___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___configure_coverage\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[0]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 5, 26, ".testbench", "v_toggle/testbench", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[64]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 6, 26, ".testbench", "v_toggle/testbench", "out");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 10, 25, ".testbench", "v_line/testbench", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 14, 6, ".testbench", "v_line/testbench", "block", "14,16-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 23, 18, ".testbench", "v_line/testbench", "block", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 24, 18, ".testbench", "v_line/testbench", "block", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 26, 6, ".testbench", "v_line/testbench", "block", "26,29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 88, 6, ".testbench", "v_line/testbench", "block", "88-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 95, 6, ".testbench", "v_line/testbench", "block", "95-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 102, 6, ".testbench", "v_line/testbench", "block", "102-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 109, 6, ".testbench", "v_line/testbench", "block", "109-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 116, 6, ".testbench", "v_line/testbench", "block", "116-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 123, 6, ".testbench", "v_line/testbench", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 130, 6, ".testbench", "v_line/testbench", "block", "130-133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 137, 6, ".testbench", "v_line/testbench", "block", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 144, 6, ".testbench", "v_line/testbench", "block", "144-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 151, 6, ".testbench", "v_line/testbench", "block", "151-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 158, 6, ".testbench", "v_line/testbench", "block", "158-161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 165, 6, ".testbench", "v_line/testbench", "block", "165-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 172, 6, ".testbench", "v_line/testbench", "block", "172-175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 179, 6, ".testbench", "v_line/testbench", "block", "179-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 186, 6, ".testbench", "v_line/testbench", "block", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 188, 6, ".testbench", "v_line/testbench", "block", "188-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 196, 6, ".testbench", "v_line/testbench", "block", "196-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 206, 9, ".testbench", "v_line/testbench", "block", "206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 207, 9, ".testbench", "v_line/testbench", "block", "207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 203, 6, ".testbench", "v_line/testbench", "block", "203-207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 214, 9, ".testbench", "v_line/testbench", "block", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 215, 9, ".testbench", "v_line/testbench", "block", "215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 211, 6, ".testbench", "v_line/testbench", "block", "211-215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 222, 9, ".testbench", "v_line/testbench", "block", "222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 223, 9, ".testbench", "v_line/testbench", "block", "223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 219, 6, ".testbench", "v_line/testbench", "block", "219-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 230, 9, ".testbench", "v_line/testbench", "block", "230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 231, 9, ".testbench", "v_line/testbench", "block", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 227, 6, ".testbench", "v_line/testbench", "block", "227-231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 238, 9, ".testbench", "v_line/testbench", "block", "238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 239, 9, ".testbench", "v_line/testbench", "block", "239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 235, 6, ".testbench", "v_line/testbench", "block", "235-239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 246, 9, ".testbench", "v_line/testbench", "block", "246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 247, 9, ".testbench", "v_line/testbench", "block", "247");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 243, 6, ".testbench", "v_line/testbench", "block", "243-247");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 254, 9, ".testbench", "v_line/testbench", "block", "254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 255, 9, ".testbench", "v_line/testbench", "block", "255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 251, 6, ".testbench", "v_line/testbench", "block", "251-255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 259, 6, ".testbench", "v_line/testbench", "block", "259-267");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 271, 6, ".testbench", "v_line/testbench", "block", "271-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 286, 1, ".testbench", "v_line/testbench", "block", "286-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 292, 1, ".testbench", "v_line/testbench", "block", "292-296");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[0]), first, "/home/matheus/Documentos/CNN/CNN/src/ReLU/ReLU.sv", 4, 41, ".testbench.ReLU", "v_toggle/ReLU", "in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[64]), first, "/home/matheus/Documentos/CNN/CNN/src/ReLU/ReLU.sv", 5, 42, ".testbench.ReLU", "v_toggle/ReLU", "out");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/matheus/Documentos/CNN/CNN/src/ReLU/ReLU.sv", 12, 24, ".testbench.ReLU", "v_branch/ReLU", "cond_then", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/matheus/Documentos/CNN/CNN/src/ReLU/ReLU.sv", 12, 25, ".testbench.ReLU", "v_branch/ReLU", "cond_else", "12");
}
