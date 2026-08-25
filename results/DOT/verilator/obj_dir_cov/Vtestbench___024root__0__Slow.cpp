// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

void Vtestbench___024root___timing_ready(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    Vtestbench___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
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
            VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[0U] 
        = vlSelfRef.testbench__DOT__input_vec[0U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[1U] 
        = vlSelfRef.testbench__DOT__input_vec[1U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[2U] 
        = vlSelfRef.testbench__DOT__input_vec[2U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[3U] 
        = vlSelfRef.testbench__DOT__input_vec[3U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[4U] 
        = vlSelfRef.testbench__DOT__input_vec[4U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[5U] 
        = vlSelfRef.testbench__DOT__input_vec[5U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[6U] 
        = vlSelfRef.testbench__DOT__input_vec[6U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[7U] 
        = vlSelfRef.testbench__DOT__input_vec[7U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[8U] 
        = vlSelfRef.testbench__DOT__input_vec[8U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[9U] 
        = vlSelfRef.testbench__DOT__input_vec[9U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[10U] 
        = vlSelfRef.testbench__DOT__input_vec[10U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[11U] 
        = vlSelfRef.testbench__DOT__input_vec[11U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[12U] 
        = vlSelfRef.testbench__DOT__input_vec[12U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[13U] 
        = vlSelfRef.testbench__DOT__input_vec[13U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[14U] 
        = vlSelfRef.testbench__DOT__input_vec[14U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[15U] 
        = vlSelfRef.testbench__DOT__input_vec[15U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[16U] 
        = vlSelfRef.testbench__DOT__input_vec[16U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[17U] 
        = vlSelfRef.testbench__DOT__input_vec[17U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[18U] 
        = vlSelfRef.testbench__DOT__input_vec[18U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[19U] 
        = vlSelfRef.testbench__DOT__input_vec[19U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[20U] 
        = vlSelfRef.testbench__DOT__input_vec[20U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[21U] 
        = vlSelfRef.testbench__DOT__input_vec[21U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[22U] 
        = vlSelfRef.testbench__DOT__input_vec[22U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[23U] 
        = vlSelfRef.testbench__DOT__input_vec[23U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[24U] 
        = vlSelfRef.testbench__DOT__input_vec[24U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[25U] 
        = vlSelfRef.testbench__DOT__input_vec[25U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[26U] 
        = vlSelfRef.testbench__DOT__input_vec[26U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[27U] 
        = vlSelfRef.testbench__DOT__input_vec[27U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[28U] 
        = vlSelfRef.testbench__DOT__input_vec[28U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[29U] 
        = vlSelfRef.testbench__DOT__input_vec[29U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[30U] 
        = vlSelfRef.testbench__DOT__input_vec[30U];
    vlSelfRef.testbench__DOT__dut__DOT__input_vec[31U] 
        = vlSelfRef.testbench__DOT__input_vec[31U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[0U] 
        = vlSelfRef.testbench__DOT__weight[0U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[1U] 
        = vlSelfRef.testbench__DOT__weight[1U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[2U] 
        = vlSelfRef.testbench__DOT__weight[2U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[3U] 
        = vlSelfRef.testbench__DOT__weight[3U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[4U] 
        = vlSelfRef.testbench__DOT__weight[4U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[5U] 
        = vlSelfRef.testbench__DOT__weight[5U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[6U] 
        = vlSelfRef.testbench__DOT__weight[6U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[7U] 
        = vlSelfRef.testbench__DOT__weight[7U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[8U] 
        = vlSelfRef.testbench__DOT__weight[8U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[9U] 
        = vlSelfRef.testbench__DOT__weight[9U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[10U] 
        = vlSelfRef.testbench__DOT__weight[10U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[11U] 
        = vlSelfRef.testbench__DOT__weight[11U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[12U] 
        = vlSelfRef.testbench__DOT__weight[12U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[13U] 
        = vlSelfRef.testbench__DOT__weight[13U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[14U] 
        = vlSelfRef.testbench__DOT__weight[14U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[15U] 
        = vlSelfRef.testbench__DOT__weight[15U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[16U] 
        = vlSelfRef.testbench__DOT__weight[16U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[17U] 
        = vlSelfRef.testbench__DOT__weight[17U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[18U] 
        = vlSelfRef.testbench__DOT__weight[18U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[19U] 
        = vlSelfRef.testbench__DOT__weight[19U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[20U] 
        = vlSelfRef.testbench__DOT__weight[20U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[21U] 
        = vlSelfRef.testbench__DOT__weight[21U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[22U] 
        = vlSelfRef.testbench__DOT__weight[22U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[23U] 
        = vlSelfRef.testbench__DOT__weight[23U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[24U] 
        = vlSelfRef.testbench__DOT__weight[24U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[25U] 
        = vlSelfRef.testbench__DOT__weight[25U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[26U] 
        = vlSelfRef.testbench__DOT__weight[26U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[27U] 
        = vlSelfRef.testbench__DOT__weight[27U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[28U] 
        = vlSelfRef.testbench__DOT__weight[28U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[29U] 
        = vlSelfRef.testbench__DOT__weight[29U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[30U] 
        = vlSelfRef.testbench__DOT__weight[30U];
    vlSelfRef.testbench__DOT__dut__DOT__weight[31U] 
        = vlSelfRef.testbench__DOT__weight[31U];
    if (((IData)(vlSelfRef.testbench__DOT__clk) ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.testbench__DOT__clk, vlSelfRef.testbench__DOT____Vtogcov__clk);
        vlSelfRef.testbench__DOT____Vtogcov__clk = vlSelfRef.testbench__DOT__clk;
    }
    if (((IData)(vlSelfRef.testbench__DOT__rst) ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSelfRef.testbench__DOT__rst, vlSelfRef.testbench__DOT____Vtogcov__rst);
        vlSelfRef.testbench__DOT____Vtogcov__rst = vlSelfRef.testbench__DOT__rst;
    }
    if (((IData)(vlSelfRef.testbench__DOT__valid_in) 
         ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__valid_in))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4, vlSelfRef.testbench__DOT__valid_in, vlSelfRef.testbench__DOT____Vtogcov__valid_in);
        vlSelfRef.testbench__DOT____Vtogcov__valid_in 
            = vlSelfRef.testbench__DOT__valid_in;
    }
    if ((IData)((((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                  >> 5U) ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__valid_out)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6, 
                               ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                >> 5U), vlSelfRef.testbench__DOT____Vtogcov__valid_out);
        vlSelfRef.testbench__DOT____Vtogcov__valid_out 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 5U));
    }
    if ((vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U] 
         ^ vlSelfRef.testbench__DOT____Vtogcov__out)) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1032, vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U], vlSelfRef.testbench__DOT____Vtogcov__out);
        vlSelfRef.testbench__DOT____Vtogcov__out = vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U];
    }
    if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSymsp->__Vcoverage + 1460, vlSelfRef.testbench__DOT__dut__DOT__valid_pipe, vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe);
        vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe 
            = vlSelfRef.testbench__DOT__dut__DOT__valid_pipe;
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[0U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1074, vlSelfRef.testbench__DOT__exp_pipe[0U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[0U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[0U] 
            = vlSelfRef.testbench__DOT__exp_pipe[0U];
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[1U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1116, vlSelfRef.testbench__DOT__exp_pipe[1U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[1U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[1U] 
            = vlSelfRef.testbench__DOT__exp_pipe[1U];
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[2U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1158, vlSelfRef.testbench__DOT__exp_pipe[2U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[2U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[2U] 
            = vlSelfRef.testbench__DOT__exp_pipe[2U];
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[3U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1200, vlSelfRef.testbench__DOT__exp_pipe[3U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[3U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[3U] 
            = vlSelfRef.testbench__DOT__exp_pipe[3U];
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[4U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[4U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1242, vlSelfRef.testbench__DOT__exp_pipe[4U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[4U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[4U] 
            = vlSelfRef.testbench__DOT__exp_pipe[4U];
    }
    if ((vlSelfRef.testbench__DOT__exp_pipe[5U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[5U])) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1284, vlSelfRef.testbench__DOT__exp_pipe[5U], vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[5U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_pipe[5U] 
            = vlSelfRef.testbench__DOT__exp_pipe[5U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[0U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1326, vlSelfRef.testbench__DOT__exp_valid[0U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[0U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[0U] 
            = vlSelfRef.testbench__DOT__exp_valid[0U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[1U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1328, vlSelfRef.testbench__DOT__exp_valid[1U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[1U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[1U] 
            = vlSelfRef.testbench__DOT__exp_valid[1U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[2U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1330, vlSelfRef.testbench__DOT__exp_valid[2U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[2U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[2U] 
            = vlSelfRef.testbench__DOT__exp_valid[2U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[3U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1332, vlSelfRef.testbench__DOT__exp_valid[3U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[3U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[3U] 
            = vlSelfRef.testbench__DOT__exp_valid[3U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[4U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[4U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1334, vlSelfRef.testbench__DOT__exp_valid[4U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[4U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[4U] 
            = vlSelfRef.testbench__DOT__exp_valid[4U];
    }
    if ((vlSelfRef.testbench__DOT__exp_valid[5U] ^ vlSelfRef.testbench__DOT____Vtogcov__exp_valid[5U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1336, vlSelfRef.testbench__DOT__exp_valid[5U], vlSelfRef.testbench__DOT____Vtogcov__exp_valid[5U]);
        vlSelfRef.testbench__DOT____Vtogcov__exp_valid[5U] 
            = vlSelfRef.testbench__DOT__exp_valid[5U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[0U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8, vlSelfRef.testbench__DOT__input_vec[0U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[0U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[0U] 
            = vlSelfRef.testbench__DOT__input_vec[0U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[1U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 24, vlSelfRef.testbench__DOT__input_vec[1U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[1U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[1U] 
            = vlSelfRef.testbench__DOT__input_vec[1U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[2U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 40, vlSelfRef.testbench__DOT__input_vec[2U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[2U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[2U] 
            = vlSelfRef.testbench__DOT__input_vec[2U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[3U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 56, vlSelfRef.testbench__DOT__input_vec[3U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[3U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[3U] 
            = vlSelfRef.testbench__DOT__input_vec[3U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[4U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[4U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 72, vlSelfRef.testbench__DOT__input_vec[4U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[4U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[4U] 
            = vlSelfRef.testbench__DOT__input_vec[4U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[5U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[5U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 88, vlSelfRef.testbench__DOT__input_vec[5U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[5U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[5U] 
            = vlSelfRef.testbench__DOT__input_vec[5U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[6U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[6U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 104, vlSelfRef.testbench__DOT__input_vec[6U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[6U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[6U] 
            = vlSelfRef.testbench__DOT__input_vec[6U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[7U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[7U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 120, vlSelfRef.testbench__DOT__input_vec[7U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[7U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[7U] 
            = vlSelfRef.testbench__DOT__input_vec[7U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[8U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[8U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 136, vlSelfRef.testbench__DOT__input_vec[8U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[8U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[8U] 
            = vlSelfRef.testbench__DOT__input_vec[8U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[9U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[9U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 152, vlSelfRef.testbench__DOT__input_vec[9U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[9U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[9U] 
            = vlSelfRef.testbench__DOT__input_vec[9U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[10U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[10U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 168, vlSelfRef.testbench__DOT__input_vec[10U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[10U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[10U] 
            = vlSelfRef.testbench__DOT__input_vec[10U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[11U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[11U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 184, vlSelfRef.testbench__DOT__input_vec[11U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[11U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[11U] 
            = vlSelfRef.testbench__DOT__input_vec[11U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[12U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[12U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 200, vlSelfRef.testbench__DOT__input_vec[12U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[12U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[12U] 
            = vlSelfRef.testbench__DOT__input_vec[12U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[13U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[13U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 216, vlSelfRef.testbench__DOT__input_vec[13U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[13U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[13U] 
            = vlSelfRef.testbench__DOT__input_vec[13U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[14U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[14U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 232, vlSelfRef.testbench__DOT__input_vec[14U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[14U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[14U] 
            = vlSelfRef.testbench__DOT__input_vec[14U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[15U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[15U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 248, vlSelfRef.testbench__DOT__input_vec[15U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[15U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[15U] 
            = vlSelfRef.testbench__DOT__input_vec[15U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[16U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[16U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 264, vlSelfRef.testbench__DOT__input_vec[16U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[16U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[16U] 
            = vlSelfRef.testbench__DOT__input_vec[16U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[17U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[17U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 280, vlSelfRef.testbench__DOT__input_vec[17U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[17U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[17U] 
            = vlSelfRef.testbench__DOT__input_vec[17U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[18U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[18U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 296, vlSelfRef.testbench__DOT__input_vec[18U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[18U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[18U] 
            = vlSelfRef.testbench__DOT__input_vec[18U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[19U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[19U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 312, vlSelfRef.testbench__DOT__input_vec[19U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[19U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[19U] 
            = vlSelfRef.testbench__DOT__input_vec[19U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[20U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[20U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 328, vlSelfRef.testbench__DOT__input_vec[20U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[20U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[20U] 
            = vlSelfRef.testbench__DOT__input_vec[20U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[21U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[21U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 344, vlSelfRef.testbench__DOT__input_vec[21U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[21U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[21U] 
            = vlSelfRef.testbench__DOT__input_vec[21U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[22U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[22U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 360, vlSelfRef.testbench__DOT__input_vec[22U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[22U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[22U] 
            = vlSelfRef.testbench__DOT__input_vec[22U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[23U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[23U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 376, vlSelfRef.testbench__DOT__input_vec[23U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[23U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[23U] 
            = vlSelfRef.testbench__DOT__input_vec[23U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[24U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[24U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 392, vlSelfRef.testbench__DOT__input_vec[24U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[24U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[24U] 
            = vlSelfRef.testbench__DOT__input_vec[24U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[25U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[25U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 408, vlSelfRef.testbench__DOT__input_vec[25U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[25U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[25U] 
            = vlSelfRef.testbench__DOT__input_vec[25U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[26U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[26U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 424, vlSelfRef.testbench__DOT__input_vec[26U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[26U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[26U] 
            = vlSelfRef.testbench__DOT__input_vec[26U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[27U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[27U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 440, vlSelfRef.testbench__DOT__input_vec[27U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[27U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[27U] 
            = vlSelfRef.testbench__DOT__input_vec[27U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[28U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[28U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 456, vlSelfRef.testbench__DOT__input_vec[28U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[28U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[28U] 
            = vlSelfRef.testbench__DOT__input_vec[28U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[29U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[29U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 472, vlSelfRef.testbench__DOT__input_vec[29U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[29U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[29U] 
            = vlSelfRef.testbench__DOT__input_vec[29U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[30U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[30U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 488, vlSelfRef.testbench__DOT__input_vec[30U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[30U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[30U] 
            = vlSelfRef.testbench__DOT__input_vec[30U];
    }
    if ((vlSelfRef.testbench__DOT__input_vec[31U] ^ vlSelfRef.testbench__DOT____Vtogcov__input_vec[31U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 504, vlSelfRef.testbench__DOT__input_vec[31U], vlSelfRef.testbench__DOT____Vtogcov__input_vec[31U]);
        vlSelfRef.testbench__DOT____Vtogcov__input_vec[31U] 
            = vlSelfRef.testbench__DOT__input_vec[31U];
    }
    if ((vlSelfRef.testbench__DOT__weight[0U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 520, vlSelfRef.testbench__DOT__weight[0U], vlSelfRef.testbench__DOT____Vtogcov__weight[0U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[0U] 
            = vlSelfRef.testbench__DOT__weight[0U];
    }
    if ((vlSelfRef.testbench__DOT__weight[1U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 536, vlSelfRef.testbench__DOT__weight[1U], vlSelfRef.testbench__DOT____Vtogcov__weight[1U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[1U] 
            = vlSelfRef.testbench__DOT__weight[1U];
    }
    if ((vlSelfRef.testbench__DOT__weight[2U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 552, vlSelfRef.testbench__DOT__weight[2U], vlSelfRef.testbench__DOT____Vtogcov__weight[2U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[2U] 
            = vlSelfRef.testbench__DOT__weight[2U];
    }
    if ((vlSelfRef.testbench__DOT__weight[3U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 568, vlSelfRef.testbench__DOT__weight[3U], vlSelfRef.testbench__DOT____Vtogcov__weight[3U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[3U] 
            = vlSelfRef.testbench__DOT__weight[3U];
    }
    if ((vlSelfRef.testbench__DOT__weight[4U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[4U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 584, vlSelfRef.testbench__DOT__weight[4U], vlSelfRef.testbench__DOT____Vtogcov__weight[4U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[4U] 
            = vlSelfRef.testbench__DOT__weight[4U];
    }
    if ((vlSelfRef.testbench__DOT__weight[5U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[5U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 600, vlSelfRef.testbench__DOT__weight[5U], vlSelfRef.testbench__DOT____Vtogcov__weight[5U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[5U] 
            = vlSelfRef.testbench__DOT__weight[5U];
    }
    if ((vlSelfRef.testbench__DOT__weight[6U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[6U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 616, vlSelfRef.testbench__DOT__weight[6U], vlSelfRef.testbench__DOT____Vtogcov__weight[6U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[6U] 
            = vlSelfRef.testbench__DOT__weight[6U];
    }
    if ((vlSelfRef.testbench__DOT__weight[7U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[7U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 632, vlSelfRef.testbench__DOT__weight[7U], vlSelfRef.testbench__DOT____Vtogcov__weight[7U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[7U] 
            = vlSelfRef.testbench__DOT__weight[7U];
    }
    if ((vlSelfRef.testbench__DOT__weight[8U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[8U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 648, vlSelfRef.testbench__DOT__weight[8U], vlSelfRef.testbench__DOT____Vtogcov__weight[8U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[8U] 
            = vlSelfRef.testbench__DOT__weight[8U];
    }
    if ((vlSelfRef.testbench__DOT__weight[9U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[9U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 664, vlSelfRef.testbench__DOT__weight[9U], vlSelfRef.testbench__DOT____Vtogcov__weight[9U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[9U] 
            = vlSelfRef.testbench__DOT__weight[9U];
    }
    if ((vlSelfRef.testbench__DOT__weight[10U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[10U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 680, vlSelfRef.testbench__DOT__weight[10U], vlSelfRef.testbench__DOT____Vtogcov__weight[10U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[10U] 
            = vlSelfRef.testbench__DOT__weight[10U];
    }
    if ((vlSelfRef.testbench__DOT__weight[11U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[11U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 696, vlSelfRef.testbench__DOT__weight[11U], vlSelfRef.testbench__DOT____Vtogcov__weight[11U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[11U] 
            = vlSelfRef.testbench__DOT__weight[11U];
    }
    if ((vlSelfRef.testbench__DOT__weight[12U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[12U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 712, vlSelfRef.testbench__DOT__weight[12U], vlSelfRef.testbench__DOT____Vtogcov__weight[12U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[12U] 
            = vlSelfRef.testbench__DOT__weight[12U];
    }
    if ((vlSelfRef.testbench__DOT__weight[13U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[13U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 728, vlSelfRef.testbench__DOT__weight[13U], vlSelfRef.testbench__DOT____Vtogcov__weight[13U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[13U] 
            = vlSelfRef.testbench__DOT__weight[13U];
    }
    if ((vlSelfRef.testbench__DOT__weight[14U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[14U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 744, vlSelfRef.testbench__DOT__weight[14U], vlSelfRef.testbench__DOT____Vtogcov__weight[14U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[14U] 
            = vlSelfRef.testbench__DOT__weight[14U];
    }
    if ((vlSelfRef.testbench__DOT__weight[15U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[15U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 760, vlSelfRef.testbench__DOT__weight[15U], vlSelfRef.testbench__DOT____Vtogcov__weight[15U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[15U] 
            = vlSelfRef.testbench__DOT__weight[15U];
    }
    if ((vlSelfRef.testbench__DOT__weight[16U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[16U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 776, vlSelfRef.testbench__DOT__weight[16U], vlSelfRef.testbench__DOT____Vtogcov__weight[16U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[16U] 
            = vlSelfRef.testbench__DOT__weight[16U];
    }
    if ((vlSelfRef.testbench__DOT__weight[17U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[17U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 792, vlSelfRef.testbench__DOT__weight[17U], vlSelfRef.testbench__DOT____Vtogcov__weight[17U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[17U] 
            = vlSelfRef.testbench__DOT__weight[17U];
    }
    if ((vlSelfRef.testbench__DOT__weight[18U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[18U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 808, vlSelfRef.testbench__DOT__weight[18U], vlSelfRef.testbench__DOT____Vtogcov__weight[18U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[18U] 
            = vlSelfRef.testbench__DOT__weight[18U];
    }
    if ((vlSelfRef.testbench__DOT__weight[19U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[19U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 824, vlSelfRef.testbench__DOT__weight[19U], vlSelfRef.testbench__DOT____Vtogcov__weight[19U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[19U] 
            = vlSelfRef.testbench__DOT__weight[19U];
    }
    if ((vlSelfRef.testbench__DOT__weight[20U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[20U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 840, vlSelfRef.testbench__DOT__weight[20U], vlSelfRef.testbench__DOT____Vtogcov__weight[20U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[20U] 
            = vlSelfRef.testbench__DOT__weight[20U];
    }
    if ((vlSelfRef.testbench__DOT__weight[21U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[21U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 856, vlSelfRef.testbench__DOT__weight[21U], vlSelfRef.testbench__DOT____Vtogcov__weight[21U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[21U] 
            = vlSelfRef.testbench__DOT__weight[21U];
    }
    if ((vlSelfRef.testbench__DOT__weight[22U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[22U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 872, vlSelfRef.testbench__DOT__weight[22U], vlSelfRef.testbench__DOT____Vtogcov__weight[22U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[22U] 
            = vlSelfRef.testbench__DOT__weight[22U];
    }
    if ((vlSelfRef.testbench__DOT__weight[23U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[23U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 888, vlSelfRef.testbench__DOT__weight[23U], vlSelfRef.testbench__DOT____Vtogcov__weight[23U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[23U] 
            = vlSelfRef.testbench__DOT__weight[23U];
    }
    if ((vlSelfRef.testbench__DOT__weight[24U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[24U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 904, vlSelfRef.testbench__DOT__weight[24U], vlSelfRef.testbench__DOT____Vtogcov__weight[24U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[24U] 
            = vlSelfRef.testbench__DOT__weight[24U];
    }
    if ((vlSelfRef.testbench__DOT__weight[25U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[25U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 920, vlSelfRef.testbench__DOT__weight[25U], vlSelfRef.testbench__DOT____Vtogcov__weight[25U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[25U] 
            = vlSelfRef.testbench__DOT__weight[25U];
    }
    if ((vlSelfRef.testbench__DOT__weight[26U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[26U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 936, vlSelfRef.testbench__DOT__weight[26U], vlSelfRef.testbench__DOT____Vtogcov__weight[26U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[26U] 
            = vlSelfRef.testbench__DOT__weight[26U];
    }
    if ((vlSelfRef.testbench__DOT__weight[27U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[27U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 952, vlSelfRef.testbench__DOT__weight[27U], vlSelfRef.testbench__DOT____Vtogcov__weight[27U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[27U] 
            = vlSelfRef.testbench__DOT__weight[27U];
    }
    if ((vlSelfRef.testbench__DOT__weight[28U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[28U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 968, vlSelfRef.testbench__DOT__weight[28U], vlSelfRef.testbench__DOT____Vtogcov__weight[28U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[28U] 
            = vlSelfRef.testbench__DOT__weight[28U];
    }
    if ((vlSelfRef.testbench__DOT__weight[29U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[29U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 984, vlSelfRef.testbench__DOT__weight[29U], vlSelfRef.testbench__DOT____Vtogcov__weight[29U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[29U] 
            = vlSelfRef.testbench__DOT__weight[29U];
    }
    if ((vlSelfRef.testbench__DOT__weight[30U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[30U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 1000, vlSelfRef.testbench__DOT__weight[30U], vlSelfRef.testbench__DOT____Vtogcov__weight[30U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[30U] 
            = vlSelfRef.testbench__DOT__weight[30U];
    }
    if ((vlSelfRef.testbench__DOT__weight[31U] ^ vlSelfRef.testbench__DOT____Vtogcov__weight[31U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 1016, vlSelfRef.testbench__DOT__weight[31U], vlSelfRef.testbench__DOT____Vtogcov__weight[31U]);
        vlSelfRef.testbench__DOT____Vtogcov__weight[31U] 
            = vlSelfRef.testbench__DOT__weight[31U];
    }
}

VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge testbench.clk)\n");
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->testbench__DOT____Vlvbound_h4e2f4d72__1 = 0;
    vlSelf->testbench__DOT____Vlvbound_h08608d3b__0 = 0;
    vlSelf->testbench__DOT____Vlvbound_h4e2f4d72__0 = 0;
    vlSelf->testbench__DOT____Vlvbound_he1da9667__0 = 0;
    vlSelf->testbench__DOT____Vlvbound_h1d504a5a__1 = 0;
    vlSelf->testbench__DOT____Vlvbound_hcd9c4027__1 = 0;
    vlSelf->testbench__DOT____Vlvbound_hb4d3257f__1 = 0;
    vlSelf->testbench__DOT____Vlvbound_h7b6b6da2__1 = 0;
    vlSelf->testbench__DOT____Vlvbound_h250f6824__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->testbench__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6000971430642848038ull);
    vlSelf->testbench__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152128412707093527ull);
    vlSelf->testbench__DOT__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11877729664352438048ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__input_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10544634676410490893ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__weight[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5028126048766508274ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT__exp_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 901238647918418135ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT__exp_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6364907046536013532ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT__exp_test[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15915666527893421312ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT__exp_tx[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3113288489256287117ull);
    }
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->testbench__DOT__test_sent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 640848633920707044ull);
    }
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->testbench__DOT__test_pass[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4861834628165183811ull);
    }
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->testbench__DOT__test_fail[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2120116415325259675ull);
    }
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->testbench__DOT__test_skip[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9904046121755960993ull);
    }
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->testbench__DOT__test_flushed[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14890610257562842672ull);
    }
    vlSelf->testbench__DOT__total_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13051797295986974609ull);
    vlSelf->testbench__DOT__total_recv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16655212518747362828ull);
    vlSelf->testbench__DOT__total_pass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17956643905114865451ull);
    vlSelf->testbench__DOT__total_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7507471116946297185ull);
    vlSelf->testbench__DOT__total_flushed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2620218440191793313ull);
    vlSelf->testbench__DOT__latency_pass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6275905654501832789ull);
    vlSelf->testbench__DOT__latency_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16036700193864853438ull);
    vlSelf->testbench__DOT__valid_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10624841142713933442ull);
    vlSelf->testbench__DOT__data_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7498585245359750369ull);
    vlSelf->testbench__DOT__unknown_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3574850067576745854ull);
    vlSelf->testbench__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7947707318579503760ull);
    vlSelf->testbench__DOT__current_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9587986859648424941ull);
    vlSelf->testbench__DOT__tx_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4424631549801665256ull);
    vlSelf->testbench__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510753550856601044ull);
    vlSelf->testbench__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2966297729101865026ull);
    vlSelf->testbench__DOT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11667136515053651890ull);
    vlSelf->testbench__DOT__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15974745148147129158ull);
    vlSelf->testbench__DOT____Vtogcov__clk = 0;
    vlSelf->testbench__DOT____Vtogcov__rst = 0;
    vlSelf->testbench__DOT____Vtogcov__valid_in = 0;
    vlSelf->testbench__DOT____Vtogcov__valid_out = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT____Vtogcov__input_vec[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT____Vtogcov__weight[__Vi0] = 0;
    }
    vlSelf->testbench__DOT____Vtogcov__out = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT____Vtogcov__exp_pipe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->testbench__DOT____Vtogcov__exp_valid[__Vi0] = 0;
    }
    vlSelf->testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__input_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15502079029220584658ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__weight[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15409941825431755559ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->testbench__DOT__dut__DOT__soma[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 10657333496137675889ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__mult[__Vi0] = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 874210677327293575ull);
    }
    vlSelf->testbench__DOT__dut__DOT__valid_pipe = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13930220741986143876ull);
    vlSelf->testbench__DOT__dut__DOT__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6918923655087753177ull);
    vlSelf->testbench__DOT__dut__DOT__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13089220649960802458ull);
    vlSelf->testbench__DOT__dut__DOT____Vtogcov__valid_pipe = 0;
    vlSelf->__Vtask_testbench__DOT__start_test__117__id = 0;
    vlSelf->__Vfunc_testbench__DOT__test_name__118__id = 0;
    vlSelf->__Vfunc_testbench__DOT__test_name__145__id = 0;
    vlSelf->__Vfunc_testbench__DOT__test_name__146__id = 0;
    vlSelf->__Vfunc_testbench__DOT__test_name__147__id = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtestbench___024root___configure_coverage(Vtestbench___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___configure_coverage\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 14, 11, ".testbench", "v_toggle/testbench", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 14, 16, ".testbench", "v_toggle/testbench", "rst");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[4]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 14, 21, ".testbench", "v_toggle/testbench", "valid_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[6]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 14, 31, ".testbench", "v_toggle/testbench", "valid_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[8]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[24]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[1]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[40]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[2]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[56]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[3]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[72]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[4]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[88]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[5]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[104]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[6]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[120]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[7]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[136]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[8]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[152]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[9]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[168]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[10]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[184]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[11]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[200]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[12]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[216]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[13]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[232]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[14]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[248]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[15]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[264]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[16]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[280]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[17]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[296]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[18]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[312]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[19]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[328]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[20]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[344]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[21]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[360]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[22]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[376]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[23]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[392]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[24]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[408]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[25]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[424]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[26]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[440]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[27]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[456]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[28]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[472]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[29]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[488]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[30]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[504]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 15, 35, ".testbench", "v_toggle/testbench", "input_vec[31]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[520]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[536]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[1]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[552]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[2]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[568]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[3]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[584]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[4]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[600]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[5]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[616]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[6]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[632]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[7]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[648]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[8]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[664]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[9]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[680]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[10]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[696]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[11]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[712]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[12]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[728]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[13]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[744]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[14]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[760]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[15]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[776]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[16]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[792]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[17]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[808]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[18]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[824]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[19]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[840]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[20]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[856]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[21]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[872]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[22]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[888]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[23]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[904]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[24]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[920]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[25]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[936]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[26]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[952]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[27]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[968]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[28]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[984]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[29]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[1000]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[30]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[1016]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 16, 35, ".testbench", "v_toggle/testbench", "weight[31]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1032]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 17, 34, ".testbench", "v_toggle/testbench", "out");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1074]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1116]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1158]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[2]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1200]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[3]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1242]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[4]");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1284]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 19, 34, ".testbench", "v_toggle/testbench", "exp_pipe[5]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1326]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[0]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1328]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1330]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[2]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1332]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[3]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1334]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[4]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1336]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 20, 11, ".testbench", "v_toggle/testbench", "exp_valid[5]");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 35, 34, ".testbench", "v_expr/testbench", "(clk==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 35, 34, ".testbench", "v_expr/testbench", "(clk==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 35, 5, ".testbench", "v_line/testbench", "block", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 43, 13, ".testbench", "v_line/testbench", "block", "43-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 37, 47, ".testbench", "v_line/testbench", "block", "37-43,47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 55, 19, ".testbench", "v_line/testbench", "case", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 56, 19, ".testbench", "v_line/testbench", "case", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 57, 19, ".testbench", "v_line/testbench", "case", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 58, 19, ".testbench", "v_line/testbench", "case", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 59, 19, ".testbench", "v_line/testbench", "case", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 60, 19, ".testbench", "v_line/testbench", "case", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 61, 19, ".testbench", "v_line/testbench", "case", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 62, 19, ".testbench", "v_line/testbench", "case", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 63, 19, ".testbench", "v_line/testbench", "case", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 64, 19, ".testbench", "v_line/testbench", "case", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 65, 19, ".testbench", "v_line/testbench", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 66, 19, ".testbench", "v_line/testbench", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 67, 19, ".testbench", "v_line/testbench", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 68, 19, ".testbench", "v_line/testbench", "case", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 69, 19, ".testbench", "v_line/testbench", "case", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 70, 19, ".testbench", "v_line/testbench", "case", "70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 71, 19, ".testbench", "v_line/testbench", "case", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 72, 19, ".testbench", "v_line/testbench", "case", "72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 73, 19, ".testbench", "v_line/testbench", "case", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 74, 19, ".testbench", "v_line/testbench", "case", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 75, 19, ".testbench", "v_line/testbench", "case", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 76, 19, ".testbench", "v_line/testbench", "case", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 77, 19, ".testbench", "v_line/testbench", "case", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 78, 19, ".testbench", "v_line/testbench", "case", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 79, 19, ".testbench", "v_line/testbench", "case", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 80, 19, ".testbench", "v_line/testbench", "case", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 81, 17, ".testbench", "v_line/testbench", "case", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 51, 31, ".testbench", "v_line/testbench", "block", "51,53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 89, 13, ".testbench", "v_line/testbench", "block", "89-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 86, 20, ".testbench", "v_line/testbench", "block", "86-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 96, 20, ".testbench", "v_line/testbench", "block", "96,98-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 104, 20, ".testbench", "v_line/testbench", "block", "104-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 112, 20, ".testbench", "v_line/testbench", "block", "112-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 123, 13, ".testbench", "v_line/testbench", "block", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 119, 20, ".testbench", "v_line/testbench", "block", "119,121-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 131, 13, ".testbench", "v_line/testbench", "block", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 133, 13, ".testbench", "v_line/testbench", "block", "133-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 127, 20, ".testbench", "v_line/testbench", "block", "127-133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 148, 17, ".testbench", "v_branch/testbench", "if", "148-150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 148, 18, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 147, 13, ".testbench", "v_line/testbench", "block", "147,152-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 158, 13, ".testbench", "v_line/testbench", "block", "158-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 165, 13, ".testbench", "v_branch/testbench", "if", "165-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 165, 14, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 146, 9, ".testbench", "v_branch/testbench", "if", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 146, 10, ".testbench", "v_branch/testbench", "else", "157-158,164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 179, 13, ".testbench", "v_branch/testbench", "if", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 179, 14, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 189, 17, ".testbench", "v_branch/testbench", "if", "189-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 189, 18, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 196, 17, ".testbench", "v_branch/testbench", "if", "196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 196, 18, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 186, 13, ".testbench", "v_line/testbench", "if", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 183, 18, ".testbench", "v_branch/testbench", "if", "183-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 183, 19, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 144, 5, ".testbench", "v_line/testbench", "block", "144-145,174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 211, 9, ".testbench", "v_line/testbench", "block", "211-212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 214, 9, ".testbench", "v_line/testbench", "block", "214-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 218, 9, ".testbench", "v_branch/testbench", "if", "218-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 218, 10, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 225, 9, ".testbench", "v_line/testbench", "block", "225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 231, 9, ".testbench", "v_line/testbench", "block", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 237, 31, ".testbench", "v_line/testbench", "block", "237-238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 237, 9, ".testbench", "v_line/testbench", "block", "237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 246, 13, ".testbench", "v_line/testbench", "block", "246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 244, 31, ".testbench", "v_line/testbench", "block", "244-247");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 244, 9, ".testbench", "v_line/testbench", "block", "244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 255, 13, ".testbench", "v_line/testbench", "block", "255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 253, 31, ".testbench", "v_line/testbench", "block", "253-256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 253, 9, ".testbench", "v_line/testbench", "block", "253");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 264, 13, ".testbench", "v_line/testbench", "block", "264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 262, 31, ".testbench", "v_line/testbench", "block", "262-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1415]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 262, 9, ".testbench", "v_line/testbench", "block", "262");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1416]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 273, 13, ".testbench", "v_line/testbench", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1417]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 271, 31, ".testbench", "v_line/testbench", "block", "271-274");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1418]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 271, 9, ".testbench", "v_line/testbench", "block", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1419]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 294, 9, ".testbench", "v_line/testbench", "block", "294-296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1420]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 302, 55, ".testbench", "v_line/testbench", "block", "302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1421]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 302, 9, ".testbench", "v_line/testbench", "block", "302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1422]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 305, 55, ".testbench", "v_line/testbench", "block", "305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1423]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 305, 9, ".testbench", "v_line/testbench", "block", "305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1424]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 310, 9, ".testbench", "v_line/testbench", "block", "310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1425]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 315, 9, ".testbench", "v_line/testbench", "block", "315");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1426]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 324, 42, ".testbench", "v_line/testbench", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1427]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 325, 42, ".testbench", "v_line/testbench", "block", "325");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1428]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 329, 77, ".testbench", "v_branch/testbench", "cond_then", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1429]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 329, 78, ".testbench", "v_branch/testbench", "cond_else", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1430]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 329, 26, ".testbench", "v_line/testbench", "block", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1431]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 330, 92, ".testbench", "v_branch/testbench", "cond_then", "330");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1432]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 330, 93, ".testbench", "v_branch/testbench", "cond_else", "330");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1433]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 330, 26, ".testbench", "v_line/testbench", "block", "330");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1434]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 331, 100, ".testbench", "v_branch/testbench", "cond_then", "331");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1435]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 331, 101, ".testbench", "v_branch/testbench", "cond_else", "331");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1436]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 331, 42, ".testbench", "v_line/testbench", "block", "331");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1437]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 335, 53, ".testbench", "v_line/testbench", "block", "335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1438]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 335, 9, ".testbench", "v_line/testbench", "block", "335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1439]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 342, 13, ".testbench", "v_branch/testbench", "if", "342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1440]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 342, 14, ".testbench", "v_branch/testbench", "else", "342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1441]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 340, 9, ".testbench", "v_line/testbench", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1442]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 13, ".testbench", "v_branch/testbench", "if", "353");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1443]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 14, ".testbench", "v_branch/testbench", "else", "353");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1444]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh8)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1445]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh6)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1446]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh3)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1447]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1448]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1449]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 353, 47, ".testbench", "v_expr/testbench", "((c == 32'sh0)==0 && (c == 32'sh2)==0 && (c == 32'sh3)==0 && (c == 32'sh6)==0 && (c == 32'sh8)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1450]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 351, 9, ".testbench", "v_line/testbench", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1451]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 370, 18, ".testbench", "v_line/testbench", "if", "370-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1452]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 370, 19, ".testbench", "v_line/testbench", "else", "374-375");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1453]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 367, 13, ".testbench", "v_line/testbench", "elsif", "367-369");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1454]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 366, 9, ".testbench", "v_line/testbench", "block", "366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1455]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 385, 10, ".testbench", "v_line/testbench", "else", "388-391");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1456]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 385, 29, ".testbench", "v_expr/testbench", "((total_sent != (total_recv + total_flushed))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1457]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 385, 29, ".testbench", "v_expr/testbench", "((total_fail != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 385, 29, ".testbench", "v_expr/testbench", "((total_fail != 32'sh0)==0 && (total_sent != (total_recv + total_flushed))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 205, 5, ".testbench", "v_line/testbench", "block", "205-211,214,224-227,230-233,236-237,240,243-244,249,252-253,258,261-262,267,270-271,276,294,301-306,309-311,314-316,319-325,328-331,334-336,339-340,344,347,350-351,355,358,360-366,377-384");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 9, 17, ".testbench.dut", "v_toggle/DotProduct", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 10, 17, ".testbench.dut", "v_toggle/DotProduct", "rst");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[8]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[24]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[1]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[40]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[2]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[56]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[3]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[72]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[4]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[88]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[5]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[104]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[6]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[120]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[7]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[136]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[8]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[152]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[9]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[168]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[10]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[184]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[11]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[200]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[12]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[216]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[13]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[232]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[14]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[248]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[15]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[264]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[16]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[280]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[17]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[296]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[18]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[312]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[19]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[328]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[20]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[344]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[21]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[360]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[22]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[376]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[23]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[392]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[24]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[408]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[25]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[424]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[26]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[440]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[27]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[456]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[28]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[472]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[29]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[488]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[30]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[504]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 11, 41, ".testbench.dut", "v_toggle/DotProduct", "input_vec[31]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[520]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[536]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[1]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[552]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[2]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[568]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[3]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[584]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[4]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[600]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[5]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[616]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[6]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[632]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[7]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[648]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[8]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[664]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[9]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[680]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[10]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[696]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[11]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[712]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[12]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[728]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[13]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[744]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[14]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[760]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[15]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[776]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[16]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[792]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[17]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[808]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[18]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[824]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[19]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[840]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[20]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[856]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[21]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[872]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[22]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[888]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[23]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[904]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[24]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[920]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[25]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[936]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[26]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[952]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[27]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[968]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[28]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[984]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[29]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[1000]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[30]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[1016]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 12, 41, ".testbench.dut", "v_toggle/DotProduct", "weight[31]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[4]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 13, 17, ".testbench.dut", "v_toggle/DotProduct", "valid_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[6]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 14, 18, ".testbench.dut", "v_toggle/DotProduct", "valid_out");
    vlSelf->__vlCoverToggleInsert(0, 20, 1, &(vlSymsp->__Vcoverage[1032]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 15, 41, ".testbench.dut", "v_toggle/DotProduct", "out");
    vlSelf->__vlCoverToggleInsert(0, 5, 1, &(vlSymsp->__Vcoverage[1460]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 24, 21, ".testbench.dut", "v_toggle/DotProduct", "valid_pipe");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 33, 5, ".testbench.dut", "v_line/DotProduct", "block", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 32, 1, ".testbench.dut", "v_line/DotProduct", "block", "32-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1490]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1491]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1492]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1493]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1494]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1495]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1496]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1497]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1498]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1499]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1500]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1501]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1502]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1503]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1504]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1505]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1506]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1507]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1508]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1509]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1510]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1511]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1512]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1513]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1514]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1515]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1516]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1517]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1518]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1519]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1520]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1521]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1522]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 57, 17, ".testbench.dut", "v_branch/DotProduct", "if", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1523]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 57, 18, ".testbench.dut", "v_branch/DotProduct", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1524]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 55, 13, ".testbench.dut", "v_line/DotProduct", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1525]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1526]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1528]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1529]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1531]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1532]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1533]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1534]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1535]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1536]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1537]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1538]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1539]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1540]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1541]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1542]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1543]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1544]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1545]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1546]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1547]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1548]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1549]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 17, ".testbench.dut", "v_branch/DotProduct", "if", "39,62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1550]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 18, ".testbench.dut", "v_branch/DotProduct", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1551]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 60, 13, ".testbench.dut", "v_line/DotProduct", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1552]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1553]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1554]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1555]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1556]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1557]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1558]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1559]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1560]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1561]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1562]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1563]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1564]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 17, ".testbench.dut", "v_branch/DotProduct", "if", "39,62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1565]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 18, ".testbench.dut", "v_branch/DotProduct", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1566]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 60, 13, ".testbench.dut", "v_line/DotProduct", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1567]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1568]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1569]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1570]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1571]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1572]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1573]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 17, ".testbench.dut", "v_branch/DotProduct", "if", "39,62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1574]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 18, ".testbench.dut", "v_branch/DotProduct", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1575]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 60, 13, ".testbench.dut", "v_line/DotProduct", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1576]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 17, ".testbench.dut", "v_branch/DotProduct", "if", "42,45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1577]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 45, 18, ".testbench.dut", "v_branch/DotProduct", "else", "39,42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1578]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 43, 13, ".testbench.dut", "v_line/DotProduct", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1579]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 17, ".testbench.dut", "v_branch/DotProduct", "if", "39,62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1580]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 62, 18, ".testbench.dut", "v_branch/DotProduct", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1581]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 60, 13, ".testbench.dut", "v_line/DotProduct", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1582]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 77, 9, ".testbench.dut", "v_line/DotProduct", "block", "77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1583]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 73, 5, ".testbench.dut", "v_branch/DotProduct", "if", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1584]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 73, 6, ".testbench.dut", "v_branch/DotProduct", "else", "75-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1585]), first, "/home/matheus/Documentos/CNN/CNN/src/DotProduct/DotProduct.sv", 72, 1, ".testbench.dut", "v_line/DotProduct", "block", "72");
}
