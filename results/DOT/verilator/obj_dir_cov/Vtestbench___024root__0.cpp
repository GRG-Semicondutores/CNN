// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__1(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_initial__TOP__Vtiming__0__2(Vtestbench___024root* vlSelf);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtestbench___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtestbench___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
    co_return;
}

void Vtestbench___024root____VbeforeTrig_h6748eb2a__0(Vtestbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ testbench__DOT__unnamedblk1_3__DOT____Vrepeat2;
    testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__3__id;
    __Vfunc_testbench__DOT__test_name__3__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__8__id;
    __Vtask_testbench__DOT__start_test__8__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__9__id;
    __Vfunc_testbench__DOT__test_name__9__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__17__id;
    __Vtask_testbench__DOT__start_test__17__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__18__id;
    __Vfunc_testbench__DOT__test_name__18__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__23__id;
    __Vtask_testbench__DOT__start_test__23__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__24__id;
    __Vfunc_testbench__DOT__test_name__24__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__29__id;
    __Vtask_testbench__DOT__start_test__29__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__30__id;
    __Vfunc_testbench__DOT__test_name__30__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__35__id;
    __Vtask_testbench__DOT__start_test__35__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__36__id;
    __Vfunc_testbench__DOT__test_name__36__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__41__id;
    __Vtask_testbench__DOT__start_test__41__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__42__id;
    __Vfunc_testbench__DOT__test_name__42__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__49__id;
    __Vtask_testbench__DOT__start_test__49__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__50__id;
    __Vfunc_testbench__DOT__test_name__50__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__55__id;
    __Vtask_testbench__DOT__start_test__55__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__56__id;
    __Vfunc_testbench__DOT__test_name__56__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__61__id;
    __Vtask_testbench__DOT__start_test__61__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__62__id;
    __Vfunc_testbench__DOT__test_name__62__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__67__id;
    __Vtask_testbench__DOT__start_test__67__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__68__id;
    __Vfunc_testbench__DOT__test_name__68__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__73__id;
    __Vtask_testbench__DOT__start_test__73__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__74__id;
    __Vfunc_testbench__DOT__test_name__74__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__85__id;
    __Vtask_testbench__DOT__start_test__85__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__86__id;
    __Vfunc_testbench__DOT__test_name__86__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__91__id;
    __Vtask_testbench__DOT__start_test__91__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__92__id;
    __Vfunc_testbench__DOT__test_name__92__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__97__id;
    __Vtask_testbench__DOT__start_test__97__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__98__id;
    __Vfunc_testbench__DOT__test_name__98__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__105__id;
    __Vtask_testbench__DOT__start_test__105__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__106__id;
    __Vfunc_testbench__DOT__test_name__106__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__111__id;
    __Vtask_testbench__DOT__start_test__111__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__112__id;
    __Vfunc_testbench__DOT__test_name__112__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.testbench__DOT__clk = 0U;
    vlSelfRef.testbench__DOT__rst = 1U;
    vlSelfRef.testbench__DOT__valid_in = 0U;
    vlSelfRef.testbench__DOT__total_sent = 0U;
    vlSelfRef.testbench__DOT__total_recv = 0U;
    vlSelfRef.testbench__DOT__total_pass = 0U;
    vlSelfRef.testbench__DOT__total_fail = 0U;
    vlSelfRef.testbench__DOT__total_flushed = 0U;
    vlSelfRef.testbench__DOT__latency_pass = 0U;
    vlSelfRef.testbench__DOT__latency_fail = 0U;
    vlSelfRef.testbench__DOT__valid_fail = 0U;
    vlSelfRef.testbench__DOT__data_fail = 0U;
    vlSelfRef.testbench__DOT__unknown_fail = 0U;
    vlSelfRef.testbench__DOT__cycle_count = 0U;
    vlSelfRef.testbench__DOT__tx_count = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__exp_valid[0U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[0U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[0U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__exp_valid[1U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[1U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[1U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__exp_valid[2U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[2U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[2U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__exp_valid[3U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[3U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[3U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__exp_valid[4U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[4U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[4U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__exp_valid[5U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[5U] = 0U;
    vlSelfRef.testbench__DOT__exp_test[5U] = 0U;
    vlSelfRef.testbench__DOT__exp_tx[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1399]);
    vlSelfRef.testbench__DOT__test_sent[0U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[0U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[0U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[0U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[1U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[1U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[1U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[1U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[2U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[2U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[2U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[2U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[3U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[3U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[3U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[3U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[4U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[4U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[4U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[4U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[5U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[5U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[5U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[5U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[6U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[6U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[6U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[6U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[7U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[7U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[7U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[7U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[8U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[8U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[8U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[8U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[9U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[9U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[9U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[9U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[10U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[10U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[10U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[10U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[11U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[11U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[11U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[11U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[12U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[12U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[12U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[12U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[13U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[13U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[13U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[13U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[14U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[14U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[14U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[14U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[15U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[15U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[15U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[15U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[16U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[16U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[16U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[16U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[17U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[17U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[17U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[17U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[18U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[18U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[18U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[18U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[19U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[19U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[19U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[19U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[20U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[20U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[20U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[20U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[21U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[21U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[21U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[21U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[22U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[22U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[22U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[22U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[23U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[23U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[23U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[23U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[24U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[24U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[24U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[24U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1400]);
    vlSelfRef.testbench__DOT__test_sent[25U] = 0U;
    vlSelfRef.testbench__DOT__test_pass[25U] = 0U;
    vlSelfRef.testbench__DOT__test_fail[25U] = 0U;
    vlSelfRef.testbench__DOT__test_skip[25U] = 0U;
    vlSelfRef.testbench__DOT__test_flushed[25U] = 0U;
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1400]);
    ++(vlSymsp->__Vcoverage[1402]);
    vlSelfRef.testbench__DOT__current_test = 0U;
    __Vfunc_testbench__DOT__test_name__3__id = 0U;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = ""s;
    if ((0U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "Reset inicial"s;
        ++(vlSymsp->__Vcoverage[1343]);
    } else if ((1U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "Reset durante atividade"s;
        ++(vlSymsp->__Vcoverage[1344]);
    } else if ((2U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "1 elemento x 8 bits"s;
        ++(vlSymsp->__Vcoverage[1345]);
    } else if ((3U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "4 elementos x 4 bits"s;
        ++(vlSymsp->__Vcoverage[1346]);
    } else if ((4U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "8 elementos x 1 bit"s;
        ++(vlSymsp->__Vcoverage[1347]);
    } else if ((5U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "4 elementos x 8 bits"s;
        ++(vlSymsp->__Vcoverage[1348]);
    } else if ((6U == __Vfunc_testbench__DOT__test_name__3__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "12 elementos x 4 bits"s;
        ++(vlSymsp->__Vcoverage[1349]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout = "Entrada em X"s;
        ++(vlSymsp->__Vcoverage[1350]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__2____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__3__Vfuncout;
    VL_WRITEF_NX("[RUN ] T00  %@\n",0,-1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__2____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    while (VL_LTS_III(32, 0U, testbench__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             225);
        testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1403]);
    }
    vlSelfRef.testbench__DOT__rst = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 7U;
    vlSelfRef.testbench__DOT__weight[0U] = 3U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__6__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__8__id = 1U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__8__id;
    __Vfunc_testbench__DOT__test_name__9__id = __Vtask_testbench__DOT__start_test__8__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__9__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__9__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__9__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__9__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__9__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__9__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__9__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__9__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__9__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__9__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__9__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__9__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__9__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__9__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__9__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__9__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__9__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__9__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__9__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__9__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__9__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__9__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__9__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__9__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__9__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__9__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__9__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__8____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__9__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__8__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__8____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.testbench__DOT__c));
        vlSelfRef.testbench__DOT__weight[0U] = 2U;
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1404]);
    }
    __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         130);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    vlSelfRef.testbench__DOT__rst = 1U;
    __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             131);
        __Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_testbench__DOT__pulse_reset__12__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1378]);
    }
    vlSelfRef.testbench__DOT__rst = 0U;
    vlSelfRef.testbench__DOT__exp_valid[0U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    vlSelfRef.testbench__DOT__exp_valid[1U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    vlSelfRef.testbench__DOT__exp_valid[2U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    vlSelfRef.testbench__DOT__exp_valid[3U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    vlSelfRef.testbench__DOT__exp_valid[4U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    vlSelfRef.testbench__DOT__exp_valid[5U] = 0U;
    vlSelfRef.testbench__DOT__exp_pipe[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1379]);
    ++(vlSymsp->__Vcoverage[1380]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x0bU;
    vlSelfRef.testbench__DOT__weight[0U] = 3U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__15__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__17__id = 2U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__17__id;
    __Vfunc_testbench__DOT__test_name__18__id = __Vtask_testbench__DOT__start_test__17__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__18__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__18__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__18__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__18__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__18__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__18__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__18__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__18__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__18__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__18__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__18__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__18__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__18__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__18__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__18__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__18__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__18__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__18__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__18__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__18__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__18__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__18__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__18__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__18__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__18__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__18__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__18__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__17____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__18__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__17__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__17____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__r)) {
        vlSelfRef.testbench__DOT__c = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.testbench__DOT__c)) {
            vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
            vlSelfRef.testbench__DOT__weight[0U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
            vlSelfRef.testbench__DOT__weight[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
            vlSelfRef.testbench__DOT__weight[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
            vlSelfRef.testbench__DOT__weight[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
            vlSelfRef.testbench__DOT__weight[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
            vlSelfRef.testbench__DOT__weight[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
            vlSelfRef.testbench__DOT__weight[6U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
            vlSelfRef.testbench__DOT__weight[7U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
            vlSelfRef.testbench__DOT__weight[8U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
            vlSelfRef.testbench__DOT__weight[9U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
            vlSelfRef.testbench__DOT__weight[10U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
            vlSelfRef.testbench__DOT__weight[11U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
            vlSelfRef.testbench__DOT__weight[12U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
            vlSelfRef.testbench__DOT__weight[13U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
            vlSelfRef.testbench__DOT__weight[14U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
            vlSelfRef.testbench__DOT__weight[15U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
            vlSelfRef.testbench__DOT__weight[16U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
            vlSelfRef.testbench__DOT__weight[17U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
            vlSelfRef.testbench__DOT__weight[18U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
            vlSelfRef.testbench__DOT__weight[19U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
            vlSelfRef.testbench__DOT__weight[20U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
            vlSelfRef.testbench__DOT__weight[21U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
            vlSelfRef.testbench__DOT__weight[22U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
            vlSelfRef.testbench__DOT__weight[23U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
            vlSelfRef.testbench__DOT__weight[24U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
            vlSelfRef.testbench__DOT__weight[25U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
            vlSelfRef.testbench__DOT__weight[26U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
            vlSelfRef.testbench__DOT__weight[27U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
            vlSelfRef.testbench__DOT__weight[28U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
            vlSelfRef.testbench__DOT__weight[29U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
            vlSelfRef.testbench__DOT__weight[30U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
            vlSelfRef.testbench__DOT__weight[31U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            ++(vlSymsp->__Vcoverage[1372]);
            vlSelfRef.testbench__DOT__input_vec[0U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT__c);
            vlSelfRef.testbench__DOT____VlemExpr_1 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[0U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_1);
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__c);
            ++(vlSymsp->__Vcoverage[1405]);
        }
        vlSelfRef.testbench__DOT__r = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__r);
        ++(vlSymsp->__Vcoverage[1406]);
    }
    __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__21__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__23__id = 3U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__23__id;
    __Vfunc_testbench__DOT__test_name__24__id = __Vtask_testbench__DOT__start_test__23__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__24__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__24__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__24__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__24__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__24__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__24__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__24__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__24__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__24__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__24__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__24__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__24__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__24__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__24__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__24__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__24__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__24__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__24__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__24__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__24__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__24__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__24__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__24__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__24__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__24__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__24__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__24__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__23____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__24__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__23__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__23____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__r)) {
        vlSelfRef.testbench__DOT__c = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.testbench__DOT__c)) {
            vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
            vlSelfRef.testbench__DOT__weight[0U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
            vlSelfRef.testbench__DOT__weight[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
            vlSelfRef.testbench__DOT__weight[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
            vlSelfRef.testbench__DOT__weight[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
            vlSelfRef.testbench__DOT__weight[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
            vlSelfRef.testbench__DOT__weight[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
            vlSelfRef.testbench__DOT__weight[6U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
            vlSelfRef.testbench__DOT__weight[7U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
            vlSelfRef.testbench__DOT__weight[8U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
            vlSelfRef.testbench__DOT__weight[9U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
            vlSelfRef.testbench__DOT__weight[10U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
            vlSelfRef.testbench__DOT__weight[11U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
            vlSelfRef.testbench__DOT__weight[12U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
            vlSelfRef.testbench__DOT__weight[13U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
            vlSelfRef.testbench__DOT__weight[14U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
            vlSelfRef.testbench__DOT__weight[15U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
            vlSelfRef.testbench__DOT__weight[16U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
            vlSelfRef.testbench__DOT__weight[17U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
            vlSelfRef.testbench__DOT__weight[18U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
            vlSelfRef.testbench__DOT__weight[19U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
            vlSelfRef.testbench__DOT__weight[20U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
            vlSelfRef.testbench__DOT__weight[21U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
            vlSelfRef.testbench__DOT__weight[22U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
            vlSelfRef.testbench__DOT__weight[23U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
            vlSelfRef.testbench__DOT__weight[24U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
            vlSelfRef.testbench__DOT__weight[25U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
            vlSelfRef.testbench__DOT__weight[26U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
            vlSelfRef.testbench__DOT__weight[27U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
            vlSelfRef.testbench__DOT__weight[28U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
            vlSelfRef.testbench__DOT__weight[29U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
            vlSelfRef.testbench__DOT__weight[30U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
            vlSelfRef.testbench__DOT__weight[31U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            ++(vlSymsp->__Vcoverage[1372]);
            vlSelfRef.testbench__DOT__i = 0U;
            vlSelfRef.testbench__DOT__input_vec[0U] 
                = (0x0fU & vlSelfRef.testbench__DOT__c);
            vlSelfRef.testbench__DOT____VlemExpr_2 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__weight[0U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_2);
            vlSelfRef.testbench__DOT__i = 1U;
            ++(vlSymsp->__Vcoverage[1407]);
            vlSelfRef.testbench__DOT__input_vec[1U] 
                = (0x0fU & (vlSelfRef.testbench__DOT__c 
                            >> 2U));
            vlSelfRef.testbench__DOT____VlemExpr_2 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__weight[1U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_2);
            vlSelfRef.testbench__DOT__i = 2U;
            ++(vlSymsp->__Vcoverage[1407]);
            vlSelfRef.testbench__DOT__input_vec[2U] 
                = (0x0fU & (vlSelfRef.testbench__DOT__c 
                            >> 4U));
            vlSelfRef.testbench__DOT____VlemExpr_2 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__weight[2U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_2);
            vlSelfRef.testbench__DOT__i = 3U;
            ++(vlSymsp->__Vcoverage[1407]);
            vlSelfRef.testbench__DOT__input_vec[3U] 
                = (0x0fU & (vlSelfRef.testbench__DOT__c 
                            >> 6U));
            vlSelfRef.testbench__DOT____VlemExpr_2 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__weight[3U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_2);
            vlSelfRef.testbench__DOT__i = 4U;
            ++(vlSymsp->__Vcoverage[1407]);
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__c);
            ++(vlSymsp->__Vcoverage[1408]);
        }
        vlSelfRef.testbench__DOT__r = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__r);
        ++(vlSymsp->__Vcoverage[1409]);
    }
    __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__27__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__29__id = 4U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__29__id;
    __Vfunc_testbench__DOT__test_name__30__id = __Vtask_testbench__DOT__start_test__29__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__30__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__30__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__30__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__30__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__30__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__30__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__30__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__30__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__30__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__30__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__30__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__30__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__30__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__30__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__30__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__30__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__30__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__30__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__30__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__30__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__30__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__30__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__30__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__30__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__30__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__30__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__30__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__29____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__30__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__29__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__29____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__r)) {
        vlSelfRef.testbench__DOT__c = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.testbench__DOT__c)) {
            vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
            vlSelfRef.testbench__DOT__weight[0U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
            vlSelfRef.testbench__DOT__weight[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
            vlSelfRef.testbench__DOT__weight[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
            vlSelfRef.testbench__DOT__weight[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
            vlSelfRef.testbench__DOT__weight[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
            vlSelfRef.testbench__DOT__weight[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
            vlSelfRef.testbench__DOT__weight[6U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
            vlSelfRef.testbench__DOT__weight[7U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
            vlSelfRef.testbench__DOT__weight[8U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
            vlSelfRef.testbench__DOT__weight[9U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
            vlSelfRef.testbench__DOT__weight[10U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
            vlSelfRef.testbench__DOT__weight[11U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
            vlSelfRef.testbench__DOT__weight[12U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
            vlSelfRef.testbench__DOT__weight[13U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
            vlSelfRef.testbench__DOT__weight[14U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
            vlSelfRef.testbench__DOT__weight[15U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
            vlSelfRef.testbench__DOT__weight[16U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
            vlSelfRef.testbench__DOT__weight[17U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
            vlSelfRef.testbench__DOT__weight[18U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
            vlSelfRef.testbench__DOT__weight[19U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
            vlSelfRef.testbench__DOT__weight[20U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
            vlSelfRef.testbench__DOT__weight[21U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
            vlSelfRef.testbench__DOT__weight[22U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
            vlSelfRef.testbench__DOT__weight[23U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
            vlSelfRef.testbench__DOT__weight[24U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
            vlSelfRef.testbench__DOT__weight[25U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
            vlSelfRef.testbench__DOT__weight[26U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
            vlSelfRef.testbench__DOT__weight[27U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
            vlSelfRef.testbench__DOT__weight[28U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
            vlSelfRef.testbench__DOT__weight[29U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
            vlSelfRef.testbench__DOT__weight[30U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
            vlSelfRef.testbench__DOT__weight[31U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            ++(vlSymsp->__Vcoverage[1372]);
            vlSelfRef.testbench__DOT__i = 0U;
            vlSelfRef.testbench__DOT__input_vec[0U] 
                = (1U & vlSelfRef.testbench__DOT__c);
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[0U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 1U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[1U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 1U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[1U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 2U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[2U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 2U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[2U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 3U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[3U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 3U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[3U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 4U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[4U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 4U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[4U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 5U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[5U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 5U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[5U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 6U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[6U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 6U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[6U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 7U;
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.testbench__DOT__input_vec[7U] 
                = (1U & (vlSelfRef.testbench__DOT__c 
                         >> 7U));
            vlSelfRef.testbench__DOT____VlemExpr_3 
                = VL_URANDOM_RANGE_I(3U, 0U);
            vlSelfRef.testbench__DOT__weight[7U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_3);
            vlSelfRef.testbench__DOT__i = 8U;
            ++(vlSymsp->__Vcoverage[1410]);
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__c);
            ++(vlSymsp->__Vcoverage[1411]);
        }
        vlSelfRef.testbench__DOT__r = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__r);
        ++(vlSymsp->__Vcoverage[1412]);
    }
    __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__33__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__35__id = 5U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__35__id;
    __Vfunc_testbench__DOT__test_name__36__id = __Vtask_testbench__DOT__start_test__35__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__36__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__36__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__36__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__36__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__36__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__36__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__36__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__36__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__36__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__36__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__36__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__36__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__36__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__36__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__36__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__36__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__36__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__36__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__36__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__36__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__36__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__36__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__36__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__36__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__36__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__36__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__36__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__35____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__36__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__35__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__35____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__r)) {
        vlSelfRef.testbench__DOT__c = 0U;
        while (VL_GTS_III(32, 0x00001000U, vlSelfRef.testbench__DOT__c)) {
            vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
            vlSelfRef.testbench__DOT__weight[0U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
            vlSelfRef.testbench__DOT__weight[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
            vlSelfRef.testbench__DOT__weight[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
            vlSelfRef.testbench__DOT__weight[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
            vlSelfRef.testbench__DOT__weight[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
            vlSelfRef.testbench__DOT__weight[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
            vlSelfRef.testbench__DOT__weight[6U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
            vlSelfRef.testbench__DOT__weight[7U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
            vlSelfRef.testbench__DOT__weight[8U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
            vlSelfRef.testbench__DOT__weight[9U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
            vlSelfRef.testbench__DOT__weight[10U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
            vlSelfRef.testbench__DOT__weight[11U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
            vlSelfRef.testbench__DOT__weight[12U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
            vlSelfRef.testbench__DOT__weight[13U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
            vlSelfRef.testbench__DOT__weight[14U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
            vlSelfRef.testbench__DOT__weight[15U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
            vlSelfRef.testbench__DOT__weight[16U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
            vlSelfRef.testbench__DOT__weight[17U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
            vlSelfRef.testbench__DOT__weight[18U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
            vlSelfRef.testbench__DOT__weight[19U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
            vlSelfRef.testbench__DOT__weight[20U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
            vlSelfRef.testbench__DOT__weight[21U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
            vlSelfRef.testbench__DOT__weight[22U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
            vlSelfRef.testbench__DOT__weight[23U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
            vlSelfRef.testbench__DOT__weight[24U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
            vlSelfRef.testbench__DOT__weight[25U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
            vlSelfRef.testbench__DOT__weight[26U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
            vlSelfRef.testbench__DOT__weight[27U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
            vlSelfRef.testbench__DOT__weight[28U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
            vlSelfRef.testbench__DOT__weight[29U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
            vlSelfRef.testbench__DOT__weight[30U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
            vlSelfRef.testbench__DOT__weight[31U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            ++(vlSymsp->__Vcoverage[1372]);
            vlSelfRef.testbench__DOT__i = 0U;
            vlSelfRef.testbench__DOT__input_vec[0U] 
                = (0x000000ffU & VL_RANDOM_I());
            vlSelfRef.testbench__DOT____VlemExpr_4 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[0U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_4);
            vlSelfRef.testbench__DOT__i = 1U;
            ++(vlSymsp->__Vcoverage[1413]);
            vlSelfRef.testbench__DOT__input_vec[1U] 
                = (0x000000ffU & VL_RANDOM_I());
            vlSelfRef.testbench__DOT____VlemExpr_4 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[1U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_4);
            vlSelfRef.testbench__DOT__i = 2U;
            ++(vlSymsp->__Vcoverage[1413]);
            vlSelfRef.testbench__DOT__input_vec[2U] 
                = (0x000000ffU & VL_RANDOM_I());
            vlSelfRef.testbench__DOT____VlemExpr_4 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[2U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_4);
            vlSelfRef.testbench__DOT__i = 3U;
            ++(vlSymsp->__Vcoverage[1413]);
            vlSelfRef.testbench__DOT__input_vec[3U] 
                = (0x000000ffU & VL_RANDOM_I());
            vlSelfRef.testbench__DOT____VlemExpr_4 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[3U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_4);
            vlSelfRef.testbench__DOT__i = 4U;
            ++(vlSymsp->__Vcoverage[1413]);
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__c);
            ++(vlSymsp->__Vcoverage[1414]);
        }
        vlSelfRef.testbench__DOT__r = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__r);
        ++(vlSymsp->__Vcoverage[1415]);
    }
    __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__39__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__41__id = 6U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__41__id;
    __Vfunc_testbench__DOT__test_name__42__id = __Vtask_testbench__DOT__start_test__41__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__42__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__42__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__42__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__42__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__42__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__42__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__42__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__42__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__42__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__42__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__42__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__42__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__42__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__42__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__42__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__42__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__42__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__42__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__42__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__42__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__42__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__42__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__42__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__42__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__42__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__42__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__42__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__41____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__42__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__41__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__41____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.testbench__DOT__r)) {
        vlSelfRef.testbench__DOT__c = 0U;
        while (VL_GTS_III(32, 0x00010000U, vlSelfRef.testbench__DOT__c)) {
            vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
            vlSelfRef.testbench__DOT__weight[0U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
            vlSelfRef.testbench__DOT__weight[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
            vlSelfRef.testbench__DOT__weight[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
            vlSelfRef.testbench__DOT__weight[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
            vlSelfRef.testbench__DOT__weight[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
            vlSelfRef.testbench__DOT__weight[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
            vlSelfRef.testbench__DOT__weight[6U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
            vlSelfRef.testbench__DOT__weight[7U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
            vlSelfRef.testbench__DOT__weight[8U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
            vlSelfRef.testbench__DOT__weight[9U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
            vlSelfRef.testbench__DOT__weight[10U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
            vlSelfRef.testbench__DOT__weight[11U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
            vlSelfRef.testbench__DOT__weight[12U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
            vlSelfRef.testbench__DOT__weight[13U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
            vlSelfRef.testbench__DOT__weight[14U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
            vlSelfRef.testbench__DOT__weight[15U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
            vlSelfRef.testbench__DOT__weight[16U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
            vlSelfRef.testbench__DOT__weight[17U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
            vlSelfRef.testbench__DOT__weight[18U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
            vlSelfRef.testbench__DOT__weight[19U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
            vlSelfRef.testbench__DOT__weight[20U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
            vlSelfRef.testbench__DOT__weight[21U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
            vlSelfRef.testbench__DOT__weight[22U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
            vlSelfRef.testbench__DOT__weight[23U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
            vlSelfRef.testbench__DOT__weight[24U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
            vlSelfRef.testbench__DOT__weight[25U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
            vlSelfRef.testbench__DOT__weight[26U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
            vlSelfRef.testbench__DOT__weight[27U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
            vlSelfRef.testbench__DOT__weight[28U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
            vlSelfRef.testbench__DOT__weight[29U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
            vlSelfRef.testbench__DOT__weight[30U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
            vlSelfRef.testbench__DOT__weight[31U] = 0U;
            ++(vlSymsp->__Vcoverage[1371]);
            ++(vlSymsp->__Vcoverage[1372]);
            vlSelfRef.testbench__DOT__i = 0U;
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[0U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[0U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 1U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[1U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[1U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 2U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[2U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[2U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 3U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[3U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[3U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 4U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[4U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[4U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 5U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[5U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[5U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 6U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[6U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[6U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 7U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[7U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[7U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 8U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[8U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[8U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 9U;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[9U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[9U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 0x0000000aU;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[10U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[10U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 0x0000000bU;
            ++(vlSymsp->__Vcoverage[1416]);
            vlSelfRef.testbench__DOT____VlemExpr_5 
                = VL_URANDOM_RANGE_I(0x0000000fU, 0U);
            vlSelfRef.testbench__DOT__input_vec[11U] 
                = (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_5);
            vlSelfRef.testbench__DOT____VlemExpr_6 
                = VL_URANDOM_RANGE_I(0x0000001fU, 0U);
            vlSelfRef.testbench__DOT__weight[11U] = 
                (0x000000ffU & vlSelfRef.testbench__DOT____VlemExpr_6);
            vlSelfRef.testbench__DOT__i = 0x0000000cU;
            ++(vlSymsp->__Vcoverage[1416]);
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__c);
            ++(vlSymsp->__Vcoverage[1417]);
        }
        vlSelfRef.testbench__DOT__r = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__r);
        ++(vlSymsp->__Vcoverage[1418]);
    }
    __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__45__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    vlSelfRef.testbench__DOT__i = 7U;
    vlSelfRef.testbench__DOT__current_test = 7U;
    ++(vlSymsp->__Vcoverage[1350]);
    ++(vlSymsp->__Vcoverage[1370]);
    VL_WRITEF_NX("[RUN ] T07  Entrada em X\n",0);
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__test_skip[7U] = 1U;
    VL_WRITEF_NX("[SKIP] T07  Verilator utiliza simulacao de dois estados\n",0);
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1419]);
    vlSelfRef.testbench__DOT__current_test = 8U;
    ++(vlSymsp->__Vcoverage[1351]);
    ++(vlSymsp->__Vcoverage[1370]);
    VL_WRITEF_NX("[RUN ] T08  Entrada em Z\n",0);
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__test_skip[8U] = 1U;
    VL_WRITEF_NX("[SKIP] T08  Verilator utiliza simulacao de dois estados\n",0);
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1419]);
    vlSelfRef.testbench__DOT__current_test = 9U;
    ++(vlSymsp->__Vcoverage[1352]);
    ++(vlSymsp->__Vcoverage[1370]);
    VL_WRITEF_NX("[RUN ] T09  Z alternado\n",0);
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__test_skip[9U] = 1U;
    VL_WRITEF_NX("[SKIP] T09  Verilator utiliza simulacao de dois estados\n",0);
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1419]);
    vlSelfRef.testbench__DOT__current_test = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1353]);
    ++(vlSymsp->__Vcoverage[1370]);
    VL_WRITEF_NX("[RUN ] T10  Z com pesos X/Z\n",0);
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__test_skip[10U] = 1U;
    VL_WRITEF_NX("[SKIP] T10  Verilator utiliza simulacao de dois estados\n",0);
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1419]);
    vlSelfRef.testbench__DOT__current_test = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1354]);
    ++(vlSymsp->__Vcoverage[1370]);
    VL_WRITEF_NX("[RUN ] T11  Z alternado com pesos X/Z\n",0);
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__test_skip[11U] = 1U;
    VL_WRITEF_NX("[SKIP] T11  Verilator utiliza simulacao de dois estados\n",0);
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1419]);
    __Vtask_testbench__DOT__start_test__49__id = 0x0000000cU;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__49__id;
    __Vfunc_testbench__DOT__test_name__50__id = __Vtask_testbench__DOT__start_test__49__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__50__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__50__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__50__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__50__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__50__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__50__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__50__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__50__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__50__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__50__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__50__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__50__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__50__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__50__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__50__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__50__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__50__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__50__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__50__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__50__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__50__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__50__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__50__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__50__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__50__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__50__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__50__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__49____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__50__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__49__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__49____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
        vlSelfRef.testbench__DOT__weight[1U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
        vlSelfRef.testbench__DOT__weight[2U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
        vlSelfRef.testbench__DOT__weight[3U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
        vlSelfRef.testbench__DOT__weight[4U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
        vlSelfRef.testbench__DOT__weight[5U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
        vlSelfRef.testbench__DOT__weight[6U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
        vlSelfRef.testbench__DOT__weight[7U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
        vlSelfRef.testbench__DOT__weight[8U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
        vlSelfRef.testbench__DOT__weight[9U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
        vlSelfRef.testbench__DOT__weight[10U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
        vlSelfRef.testbench__DOT__weight[11U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
        vlSelfRef.testbench__DOT__weight[12U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
        vlSelfRef.testbench__DOT__weight[13U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
        vlSelfRef.testbench__DOT__weight[14U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
        vlSelfRef.testbench__DOT__weight[15U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
        vlSelfRef.testbench__DOT__weight[16U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
        vlSelfRef.testbench__DOT__weight[17U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
        vlSelfRef.testbench__DOT__weight[18U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
        vlSelfRef.testbench__DOT__weight[19U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
        vlSelfRef.testbench__DOT__weight[20U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
        vlSelfRef.testbench__DOT__weight[21U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
        vlSelfRef.testbench__DOT__weight[22U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
        vlSelfRef.testbench__DOT__weight[23U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
        vlSelfRef.testbench__DOT__weight[24U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
        vlSelfRef.testbench__DOT__weight[25U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
        vlSelfRef.testbench__DOT__weight[26U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
        vlSelfRef.testbench__DOT__weight[27U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
        vlSelfRef.testbench__DOT__weight[28U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
        vlSelfRef.testbench__DOT__weight[29U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
        vlSelfRef.testbench__DOT__weight[30U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
        vlSelfRef.testbench__DOT__weight[31U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.testbench__DOT__i = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 1U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 2U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 3U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 4U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 5U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 6U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 7U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 8U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 9U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000aU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000bU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000cU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000dU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000eU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000fU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000010U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000011U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000012U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000013U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000014U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000015U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000016U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000017U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000018U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000019U;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001aU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001bU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001cU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001dU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001eU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001fU;
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000020U;
        ++(vlSymsp->__Vcoverage[1420]);
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1421]);
    }
    __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__53__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__55__id = 0x0000000dU;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__55__id;
    __Vfunc_testbench__DOT__test_name__56__id = __Vtask_testbench__DOT__start_test__55__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__56__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__56__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__56__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__56__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__56__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__56__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__56__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__56__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__56__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__56__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__56__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__56__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__56__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__56__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__56__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__56__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__56__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__56__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__56__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__56__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__56__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__56__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__56__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__56__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__56__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__56__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__56__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__55____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__56__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__55__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__55____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
        vlSelfRef.testbench__DOT__weight[1U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
        vlSelfRef.testbench__DOT__weight[2U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
        vlSelfRef.testbench__DOT__weight[3U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
        vlSelfRef.testbench__DOT__weight[4U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
        vlSelfRef.testbench__DOT__weight[5U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
        vlSelfRef.testbench__DOT__weight[6U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
        vlSelfRef.testbench__DOT__weight[7U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
        vlSelfRef.testbench__DOT__weight[8U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
        vlSelfRef.testbench__DOT__weight[9U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
        vlSelfRef.testbench__DOT__weight[10U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
        vlSelfRef.testbench__DOT__weight[11U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
        vlSelfRef.testbench__DOT__weight[12U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
        vlSelfRef.testbench__DOT__weight[13U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
        vlSelfRef.testbench__DOT__weight[14U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
        vlSelfRef.testbench__DOT__weight[15U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
        vlSelfRef.testbench__DOT__weight[16U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
        vlSelfRef.testbench__DOT__weight[17U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
        vlSelfRef.testbench__DOT__weight[18U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
        vlSelfRef.testbench__DOT__weight[19U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
        vlSelfRef.testbench__DOT__weight[20U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
        vlSelfRef.testbench__DOT__weight[21U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
        vlSelfRef.testbench__DOT__weight[22U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
        vlSelfRef.testbench__DOT__weight[23U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
        vlSelfRef.testbench__DOT__weight[24U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
        vlSelfRef.testbench__DOT__weight[25U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
        vlSelfRef.testbench__DOT__weight[26U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
        vlSelfRef.testbench__DOT__weight[27U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
        vlSelfRef.testbench__DOT__weight[28U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
        vlSelfRef.testbench__DOT__weight[29U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
        vlSelfRef.testbench__DOT__weight[30U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
        vlSelfRef.testbench__DOT__weight[31U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.testbench__DOT__i = 0U;
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 1U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 2U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 3U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 4U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 5U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 6U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 7U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 8U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 9U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000aU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000bU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000cU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000dU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000eU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000fU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000010U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000011U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000012U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000013U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000014U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000015U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000016U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000017U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000018U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000019U;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001aU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001bU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001cU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001dU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001eU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001fU;
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000020U;
        ++(vlSymsp->__Vcoverage[1422]);
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1423]);
    }
    __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__59__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__61__id = 0x0000000eU;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__61__id;
    __Vfunc_testbench__DOT__test_name__62__id = __Vtask_testbench__DOT__start_test__61__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__62__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__62__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__62__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__62__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__62__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__62__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__62__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__62__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__62__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__62__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__62__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__62__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__62__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__62__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__62__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__62__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__62__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__62__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__62__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__62__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__62__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__62__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__62__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__62__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__62__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__62__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__62__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__61____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__62__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__61__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__61____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0xffffff80U;
    while (VL_GTS_III(32, 0x00000080U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
        vlSelfRef.testbench__DOT__weight[1U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
        vlSelfRef.testbench__DOT__weight[2U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
        vlSelfRef.testbench__DOT__weight[3U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
        vlSelfRef.testbench__DOT__weight[4U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
        vlSelfRef.testbench__DOT__weight[5U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
        vlSelfRef.testbench__DOT__weight[6U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
        vlSelfRef.testbench__DOT__weight[7U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
        vlSelfRef.testbench__DOT__weight[8U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
        vlSelfRef.testbench__DOT__weight[9U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
        vlSelfRef.testbench__DOT__weight[10U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
        vlSelfRef.testbench__DOT__weight[11U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
        vlSelfRef.testbench__DOT__weight[12U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
        vlSelfRef.testbench__DOT__weight[13U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
        vlSelfRef.testbench__DOT__weight[14U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
        vlSelfRef.testbench__DOT__weight[15U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
        vlSelfRef.testbench__DOT__weight[16U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
        vlSelfRef.testbench__DOT__weight[17U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
        vlSelfRef.testbench__DOT__weight[18U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
        vlSelfRef.testbench__DOT__weight[19U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
        vlSelfRef.testbench__DOT__weight[20U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
        vlSelfRef.testbench__DOT__weight[21U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
        vlSelfRef.testbench__DOT__weight[22U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
        vlSelfRef.testbench__DOT__weight[23U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
        vlSelfRef.testbench__DOT__weight[24U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
        vlSelfRef.testbench__DOT__weight[25U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
        vlSelfRef.testbench__DOT__weight[26U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
        vlSelfRef.testbench__DOT__weight[27U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
        vlSelfRef.testbench__DOT__weight[28U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
        vlSelfRef.testbench__DOT__weight[29U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
        vlSelfRef.testbench__DOT__weight[30U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
        vlSelfRef.testbench__DOT__weight[31U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                                   & vlSelfRef.testbench__DOT__c);
        vlSelfRef.testbench__DOT__weight[7U] = 1U;
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1424]);
    }
    __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__65__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__67__id = 0x0000000fU;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__67__id;
    __Vfunc_testbench__DOT__test_name__68__id = __Vtask_testbench__DOT__start_test__67__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__68__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__68__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__68__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__68__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__68__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__68__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__68__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__68__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__68__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__68__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__68__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__68__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__68__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__68__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__68__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__68__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__68__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__68__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__68__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__68__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__68__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__68__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__68__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__68__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__68__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__68__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__68__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__67____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__68__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__67__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__67____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
        vlSelfRef.testbench__DOT__weight[1U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
        vlSelfRef.testbench__DOT__weight[2U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
        vlSelfRef.testbench__DOT__weight[3U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
        vlSelfRef.testbench__DOT__weight[4U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
        vlSelfRef.testbench__DOT__weight[5U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
        vlSelfRef.testbench__DOT__weight[6U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
        vlSelfRef.testbench__DOT__weight[7U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
        vlSelfRef.testbench__DOT__weight[8U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
        vlSelfRef.testbench__DOT__weight[9U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
        vlSelfRef.testbench__DOT__weight[10U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
        vlSelfRef.testbench__DOT__weight[11U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
        vlSelfRef.testbench__DOT__weight[12U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
        vlSelfRef.testbench__DOT__weight[13U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
        vlSelfRef.testbench__DOT__weight[14U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
        vlSelfRef.testbench__DOT__weight[15U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
        vlSelfRef.testbench__DOT__weight[16U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
        vlSelfRef.testbench__DOT__weight[17U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
        vlSelfRef.testbench__DOT__weight[18U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
        vlSelfRef.testbench__DOT__weight[19U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
        vlSelfRef.testbench__DOT__weight[20U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
        vlSelfRef.testbench__DOT__weight[21U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
        vlSelfRef.testbench__DOT__weight[22U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
        vlSelfRef.testbench__DOT__weight[23U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
        vlSelfRef.testbench__DOT__weight[24U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
        vlSelfRef.testbench__DOT__weight[25U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
        vlSelfRef.testbench__DOT__weight[26U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
        vlSelfRef.testbench__DOT__weight[27U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
        vlSelfRef.testbench__DOT__weight[28U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
        vlSelfRef.testbench__DOT__weight[29U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
        vlSelfRef.testbench__DOT__weight[30U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
        vlSelfRef.testbench__DOT__weight[31U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.testbench__DOT__input_vec[(0x0000001fU 
                                             & vlSelfRef.testbench__DOT__c)] = 0x25U;
        vlSelfRef.testbench__DOT__weight[(0x0000001fU 
                                          & vlSelfRef.testbench__DOT__c)] = 1U;
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1425]);
    }
    __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__71__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__73__id = 0x00000010U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__73__id;
    __Vfunc_testbench__DOT__test_name__74__id = __Vtask_testbench__DOT__start_test__73__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__74__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__74__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__74__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__74__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__74__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__74__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__74__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__74__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__74__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__74__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__74__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__74__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__74__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__74__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__74__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__74__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__74__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__74__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__74__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__74__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__74__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__74__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__74__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__74__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__74__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__74__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__74__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__73____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__74__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__73__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__73____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[0U] = 0x7fU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[0U] = 0x80U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[0U] = 0x7fU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[0U] = 0x80U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__83__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__85__id = 0x00000011U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__85__id;
    __Vfunc_testbench__DOT__test_name__86__id = __Vtask_testbench__DOT__start_test__85__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__86__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__86__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__86__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__86__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__86__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__86__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__86__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__86__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__86__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__86__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__86__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__86__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__86__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__86__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__86__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__86__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__86__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__86__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__86__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__86__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__86__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__86__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__86__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__86__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__86__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__86__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__86__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__85____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__86__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__85__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__85____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__i = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[0U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[1U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[2U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[3U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[4U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 5U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[5U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 6U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[6U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 7U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[7U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[8U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[9U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[10U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[11U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[12U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000dU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[13U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000eU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[14U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000000fU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[15U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[16U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000011U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[17U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000012U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[18U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000013U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[19U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000014U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[20U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000015U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[21U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000016U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[22U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000017U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[23U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000018U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[24U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000019U;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[25U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[26U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001bU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[27U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001cU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[28U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001dU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[29U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001eU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[30U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x0000001fU;
    ++(vlSymsp->__Vcoverage[1426]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[31U] = 0x7fU;
    vlSelfRef.testbench__DOT__i = 0x00000020U;
    ++(vlSymsp->__Vcoverage[1426]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__89__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__91__id = 0x00000012U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__91__id;
    __Vfunc_testbench__DOT__test_name__92__id = __Vtask_testbench__DOT__start_test__91__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__92__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__92__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__92__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__92__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__92__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__92__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__92__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__92__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__92__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__92__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__92__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__92__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__92__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__92__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__92__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__92__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__92__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__92__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__92__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__92__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__92__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__92__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__92__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__92__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__92__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__92__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__92__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__91____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__92__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__91__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__91____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__i = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[0U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[1U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[2U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[3U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[4U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 5U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[5U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 6U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[6U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 7U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[7U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[8U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[9U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[10U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[11U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[12U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000dU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[13U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000eU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[14U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000000fU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[15U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[16U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000011U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[17U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000012U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[18U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000013U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[19U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000014U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[20U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000015U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[21U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000016U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[22U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000017U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[23U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000018U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[24U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000019U;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[25U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[26U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001bU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[27U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001cU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[28U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001dU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[29U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001eU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[30U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x0000001fU;
    ++(vlSymsp->__Vcoverage[1427]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[31U] = 0x80U;
    vlSelfRef.testbench__DOT__i = 0x00000020U;
    ++(vlSymsp->__Vcoverage[1427]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__95__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__97__id = 0x00000013U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__97__id;
    __Vfunc_testbench__DOT__test_name__98__id = __Vtask_testbench__DOT__start_test__97__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__98__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__98__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__98__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__98__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__98__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__98__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__98__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__98__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__98__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__98__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__98__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__98__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__98__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__98__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__98__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__98__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__98__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__98__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__98__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__98__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__98__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__98__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__98__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__98__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__98__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__98__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__98__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__97____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__98__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__97__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__97____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__i = 0U;
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[0U] = 1U;
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[1U] = 1U;
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[2U] = 1U;
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[3U] = 1U;
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[4U] = 1U;
    vlSelfRef.testbench__DOT__i = 5U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[5U] = 1U;
    vlSelfRef.testbench__DOT__i = 6U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[6U] = 1U;
    vlSelfRef.testbench__DOT__i = 7U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[7U] = 1U;
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[8U] = 1U;
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[9U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[10U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[11U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[12U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000dU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[13U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000eU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[14U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000fU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[15U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[16U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000011U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[17U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000012U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[18U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000013U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[19U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000014U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[20U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000015U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[21U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000016U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[22U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000017U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[23U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000018U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[24U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000019U;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[25U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[26U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001bU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[27U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001cU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[28U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001dU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[29U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001eU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1429]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0x7fU;
    vlSelfRef.testbench__DOT__weight[30U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001fU;
    ++(vlSymsp->__Vcoverage[1430]);
    ++(vlSymsp->__Vcoverage[1428]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0x80U;
    vlSelfRef.testbench__DOT__weight[31U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000020U;
    ++(vlSymsp->__Vcoverage[1430]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__i = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[0U] = 1U;
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[1U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[2U] = 1U;
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[3U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[4U] = 1U;
    vlSelfRef.testbench__DOT__i = 5U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[5U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 6U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[6U] = 1U;
    vlSelfRef.testbench__DOT__i = 7U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[7U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[8U] = 1U;
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[9U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[10U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[11U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[12U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000dU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[13U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000000eU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[14U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000000fU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[15U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[16U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000011U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[17U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000012U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[18U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000013U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[19U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000014U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[20U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000015U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[21U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000016U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[22U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000017U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[23U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000018U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[24U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x00000019U;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[25U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[26U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001bU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[27U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000001cU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[28U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001dU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[29U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x0000001eU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1432]);
    vlSelfRef.testbench__DOT__weight[30U] = 1U;
    vlSelfRef.testbench__DOT__i = 0x0000001fU;
    ++(vlSymsp->__Vcoverage[1433]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0x7fU;
    ++(vlSymsp->__Vcoverage[1431]);
    vlSelfRef.testbench__DOT__weight[31U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 0x00000020U;
    ++(vlSymsp->__Vcoverage[1433]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__103__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__105__id = 0x00000014U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__105__id;
    __Vfunc_testbench__DOT__test_name__106__id = __Vtask_testbench__DOT__start_test__105__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__106__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__106__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__106__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__106__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__106__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__106__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__106__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__106__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__106__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__106__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__106__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__106__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__106__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__106__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__106__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__106__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__106__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__106__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__106__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__106__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__106__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__106__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__106__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__106__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__106__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__106__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__106__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__105____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__106__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__105__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__105____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    ++(vlSymsp->__Vcoverage[1371]);
    ++(vlSymsp->__Vcoverage[1372]);
    vlSelfRef.testbench__DOT__i = 0U;
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x0aU;
    ++(vlSymsp->__Vcoverage[1435]);
    vlSelfRef.testbench__DOT__weight[0U] = 1U;
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1436]);
    vlSelfRef.testbench__DOT__input_vec[1U] = 0x0aU;
    ++(vlSymsp->__Vcoverage[1434]);
    vlSelfRef.testbench__DOT__weight[1U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1436]);
    vlSelfRef.testbench__DOT__input_vec[2U] = 0x0aU;
    ++(vlSymsp->__Vcoverage[1435]);
    vlSelfRef.testbench__DOT__weight[2U] = 1U;
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1436]);
    vlSelfRef.testbench__DOT__input_vec[3U] = 0x0aU;
    ++(vlSymsp->__Vcoverage[1434]);
    vlSelfRef.testbench__DOT__weight[3U] = 0xffU;
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1436]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__109__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__111__id = 0x00000015U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__111__id;
    __Vfunc_testbench__DOT__test_name__112__id = __Vtask_testbench__DOT__start_test__111__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__112__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__112__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__112__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__112__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__112__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__112__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__112__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__112__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__112__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__112__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__112__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__112__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__112__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__112__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__112__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__112__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__112__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__112__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__112__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__112__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__112__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__112__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__112__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__112__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__112__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__112__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__112__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__111____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__112__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__111__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__111____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.testbench__DOT__c)) {
        vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
        vlSelfRef.testbench__DOT__weight[0U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
        vlSelfRef.testbench__DOT__weight[1U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
        vlSelfRef.testbench__DOT__weight[2U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
        vlSelfRef.testbench__DOT__weight[3U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
        vlSelfRef.testbench__DOT__weight[4U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
        vlSelfRef.testbench__DOT__weight[5U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
        vlSelfRef.testbench__DOT__weight[6U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
        vlSelfRef.testbench__DOT__weight[7U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
        vlSelfRef.testbench__DOT__weight[8U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
        vlSelfRef.testbench__DOT__weight[9U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
        vlSelfRef.testbench__DOT__weight[10U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
        vlSelfRef.testbench__DOT__weight[11U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
        vlSelfRef.testbench__DOT__weight[12U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
        vlSelfRef.testbench__DOT__weight[13U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
        vlSelfRef.testbench__DOT__weight[14U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
        vlSelfRef.testbench__DOT__weight[15U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
        vlSelfRef.testbench__DOT__weight[16U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
        vlSelfRef.testbench__DOT__weight[17U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
        vlSelfRef.testbench__DOT__weight[18U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
        vlSelfRef.testbench__DOT__weight[19U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
        vlSelfRef.testbench__DOT__weight[20U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
        vlSelfRef.testbench__DOT__weight[21U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
        vlSelfRef.testbench__DOT__weight[22U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
        vlSelfRef.testbench__DOT__weight[23U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
        vlSelfRef.testbench__DOT__weight[24U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
        vlSelfRef.testbench__DOT__weight[25U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
        vlSelfRef.testbench__DOT__weight[26U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
        vlSelfRef.testbench__DOT__weight[27U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
        vlSelfRef.testbench__DOT__weight[28U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
        vlSelfRef.testbench__DOT__weight[29U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
        vlSelfRef.testbench__DOT__weight[30U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
        vlSelfRef.testbench__DOT__weight[31U] = 0U;
        ++(vlSymsp->__Vcoverage[1371]);
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.testbench__DOT__i = 0U;
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 1U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 2U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 3U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 4U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 5U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 6U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 7U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 8U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 9U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000aU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[10U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000bU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[11U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000cU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[12U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000dU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[13U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000eU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[14U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000000fU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[15U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000010U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[16U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000011U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[17U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000012U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[18U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000013U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[19U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000014U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[20U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000015U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[21U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000016U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[22U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000017U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[23U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000018U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[24U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000019U;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[25U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001aU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[26U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001bU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[27U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001cU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[28U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001dU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[29U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001eU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[30U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x0000001fU;
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.testbench__DOT__input_vec[31U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__i = 0x00000020U;
        ++(vlSymsp->__Vcoverage[1437]);
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             106);
        vlSelfRef.testbench__DOT__valid_in = 1U;
        vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                              + vlSelfRef.testbench__DOT__tx_count);
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1438]);
    }
    __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__115__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__117__id = 0x00000016U;
    vlSelfRef.testbench__DOT__current_test = vlSelfRef.__Vtask_testbench__DOT__start_test__117__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id 
        = vlSelfRef.__Vtask_testbench__DOT__start_test__117__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = ""s;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}
