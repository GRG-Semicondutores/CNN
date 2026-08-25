// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                             35);
        vlSelfRef.testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.testbench__DOT__clk)));
        if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__clk)))) {
            ++(vlSymsp->__Vcoverage[1338]);
        }
        if (vlSelfRef.testbench__DOT__clk) {
            ++(vlSymsp->__Vcoverage[1339]);
        }
        ++(vlSymsp->__Vcoverage[1340]);
    }
    co_return;
}

void Vtestbench___024root____VbeforeTrig_h6748ea00__0(Vtestbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_testbench__DOT__reference_dot__0__product;
    __Vfunc_testbench__DOT__reference_dot__0__product = 0;
    IData/*20:0*/ __Vfunc_testbench__DOT__reference_dot__0__sum;
    __Vfunc_testbench__DOT__reference_dot__0__sum = 0;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtestbench___024root____VbeforeTrig_h6748ea00__0(vlSelf, 
                                                         "@(posedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748ea00__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             144);
        vlSelfRef.testbench__DOT__cycle_count = ((IData)(1U) 
                                                 + vlSelfRef.testbench__DOT__cycle_count);
        if (vlSelfRef.testbench__DOT__rst) {
            if (vlSelfRef.testbench__DOT__exp_valid[0U]) {
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[0U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[0U])]
                                       : 0U));
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[0U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[0U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_pipe[0U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[0U] = 0U;
            vlSelfRef.testbench__DOT__j = 6U;
            vlSelfRef.testbench__DOT__exp_pipe[1U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[1U] = 0U;
            vlSelfRef.testbench__DOT__exp_valid[0U] = 0U;
            vlSelfRef.testbench__DOT__exp_pipe[2U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[2U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[0U] = 0U;
            vlSelfRef.testbench__DOT__exp_pipe[3U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            vlSelfRef.testbench__DOT__exp_pipe[4U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[4U] = 0U;
            if (vlSelfRef.testbench__DOT__exp_valid[1U]) {
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[1U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[1U])]
                                       : 0U));
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[1U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[1U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_pipe[5U] = 0U;
            vlSelfRef.testbench__DOT__exp_tx[5U] = 0U;
            vlSelfRef.testbench__DOT__exp_valid[1U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[1U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            if (vlSelfRef.testbench__DOT__exp_valid[2U]) {
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[2U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[2U])]
                                       : 0U));
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[2U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[2U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_valid[2U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[2U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            if (vlSelfRef.testbench__DOT__exp_valid[3U]) {
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[3U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[3U])]
                                       : 0U));
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[3U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[3U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_valid[3U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[3U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            if (vlSelfRef.testbench__DOT__exp_valid[4U]) {
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[4U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[4U])]
                                       : 0U));
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[4U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[4U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_valid[4U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[4U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            if (vlSelfRef.testbench__DOT__exp_valid[5U]) {
                vlSelfRef.testbench__DOT__total_flushed 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_flushed);
                vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[5U]))
                                       ? vlSelfRef.testbench__DOT__test_flushed
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[5U])]
                                       : 0U));
                ++(vlSymsp->__Vcoverage[1381]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[5U]))))) {
                    vlSelfRef.testbench__DOT__test_flushed[(0x0000001fU 
                                                            & vlSelfRef.testbench__DOT__exp_test[5U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h250f6824__0;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1382]);
            }
            vlSelfRef.testbench__DOT__exp_valid[5U] = 0U;
            vlSelfRef.testbench__DOT__exp_test[5U] = 0U;
            ++(vlSymsp->__Vcoverage[1383]);
            ++(vlSymsp->__Vcoverage[1387]);
        } else {
            vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1 
                = vlSelfRef.testbench__DOT__exp_valid[4U];
            vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1 
                = vlSelfRef.testbench__DOT__exp_pipe[4U];
            vlSelfRef.testbench__DOT__j = 0U;
            vlSelfRef.testbench__DOT__exp_valid[5U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1;
            vlSelfRef.testbench__DOT__exp_pipe[5U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1;
            vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1 
                = vlSelfRef.testbench__DOT__exp_test[4U];
            vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1 
                = vlSelfRef.testbench__DOT__exp_valid[3U];
            vlSelfRef.testbench__DOT__exp_valid[4U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1;
            vlSelfRef.testbench__DOT__exp_test[5U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1;
            vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1 
                = vlSelfRef.testbench__DOT__exp_valid[2U];
            vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1 
                = vlSelfRef.testbench__DOT__exp_tx[4U];
            vlSelfRef.testbench__DOT__exp_valid[3U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1;
            vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1 
                = vlSelfRef.testbench__DOT__exp_valid[1U];
            vlSelfRef.testbench__DOT__exp_tx[5U] = vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1;
            vlSelfRef.testbench__DOT__exp_valid[2U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1;
            ++(vlSymsp->__Vcoverage[1384]);
            vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1 
                = vlSelfRef.testbench__DOT__exp_valid[0U];
            vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1 
                = vlSelfRef.testbench__DOT__exp_pipe[3U];
            vlSelfRef.testbench__DOT__exp_valid[1U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h7b6b6da2__1;
            vlSelfRef.testbench__DOT__exp_pipe[4U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1;
            vlSelfRef.testbench__DOT__exp_valid[0U] 
                = vlSelfRef.testbench__DOT__valid_in;
            vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1 
                = vlSelfRef.testbench__DOT__exp_test[3U];
            vlSelfRef.testbench__DOT__exp_test[4U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1;
            vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1 
                = vlSelfRef.testbench__DOT__exp_tx[3U];
            vlSelfRef.testbench__DOT__exp_tx[4U] = vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1;
            ++(vlSymsp->__Vcoverage[1384]);
            vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1 
                = vlSelfRef.testbench__DOT__exp_pipe[2U];
            vlSelfRef.testbench__DOT__exp_pipe[3U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1;
            vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1 
                = vlSelfRef.testbench__DOT__exp_test[2U];
            vlSelfRef.testbench__DOT__exp_test[3U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1;
            vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1 
                = vlSelfRef.testbench__DOT__exp_tx[2U];
            vlSelfRef.testbench__DOT__exp_tx[3U] = vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1;
            ++(vlSymsp->__Vcoverage[1384]);
            vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1 
                = vlSelfRef.testbench__DOT__exp_pipe[1U];
            vlSelfRef.testbench__DOT__exp_pipe[2U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1;
            vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1 
                = vlSelfRef.testbench__DOT__exp_test[1U];
            vlSelfRef.testbench__DOT__exp_test[2U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1;
            vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1 
                = vlSelfRef.testbench__DOT__exp_tx[1U];
            vlSelfRef.testbench__DOT__exp_tx[2U] = vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1;
            ++(vlSymsp->__Vcoverage[1384]);
            vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1 
                = vlSelfRef.testbench__DOT__exp_pipe[0U];
            vlSelfRef.testbench__DOT__exp_pipe[1U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hb4d3257f__1;
            vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1 
                = vlSelfRef.testbench__DOT__exp_test[0U];
            vlSelfRef.testbench__DOT__exp_test[1U] 
                = vlSelfRef.testbench__DOT____Vlvbound_hcd9c4027__1;
            vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1 
                = vlSelfRef.testbench__DOT__exp_tx[0U];
            vlSelfRef.testbench__DOT__exp_tx[1U] = vlSelfRef.testbench__DOT____Vlvbound_h1d504a5a__1;
            ++(vlSymsp->__Vcoverage[1384]);
            if (vlSelfRef.testbench__DOT__valid_in) {
                vlSelfRef.testbench__DOT____Vlvbound_he1da9667__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__current_test))
                                       ? vlSelfRef.testbench__DOT__test_sent
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__current_test)]
                                       : 0U));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[0U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[0U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                vlSelfRef.testbench__DOT__exp_test[0U] 
                    = vlSelfRef.testbench__DOT__current_test;
                vlSelfRef.testbench__DOT__exp_tx[0U] 
                    = vlSelfRef.testbench__DOT__tx_count;
                vlSelfRef.testbench__DOT__total_sent 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_sent);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product)));
                ++(vlSymsp->__Vcoverage[1341]);
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__current_test))))) {
                    vlSelfRef.testbench__DOT__test_sent[(0x0000001fU 
                                                         & vlSelfRef.testbench__DOT__current_test)] 
                        = vlSelfRef.testbench__DOT____Vlvbound_he1da9667__0;
                }
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[1U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[1U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[2U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[2U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[3U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[3U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[4U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[4U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[5U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[5U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[6U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[6U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[7U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[7U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[8U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[8U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[9U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[9U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[10U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[10U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[11U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[11U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[12U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[12U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[13U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[13U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[14U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[14U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[15U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[15U]))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1341]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[16U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[16U]))));
                ++(vlSymsp->__Vcoverage[1342]);
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                ++(vlSymsp->__Vcoverage[1385]);
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[17U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[17U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[18U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[18U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[19U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[19U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[20U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[20U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[21U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[21U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[22U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[22U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[23U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[23U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[24U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[24U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[25U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[25U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[26U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[26U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[27U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[27U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[28U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[28U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[29U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[29U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[30U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[30U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                __Vfunc_testbench__DOT__reference_dot__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[31U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[31U]))));
                __Vfunc_testbench__DOT__reference_dot__0__sum 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__reference_dot__0__sum 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__reference_dot__0__product))));
                vlSelfRef.testbench__DOT____VlemCall_0__reference_dot 
                    = __Vfunc_testbench__DOT__reference_dot__0__sum;
                vlSelfRef.testbench__DOT__exp_pipe[0U] 
                    = vlSelfRef.testbench__DOT____VlemCall_0__reference_dot;
            } else {
                ++(vlSymsp->__Vcoverage[1386]);
            }
            ++(vlSymsp->__Vcoverage[1388]);
        }
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                             174);
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                 >> 5U)) != vlSelfRef.testbench__DOT__exp_valid[5U])))) {
            vlSelfRef.testbench__DOT__total_fail = 
                ((IData)(1U) + vlSelfRef.testbench__DOT__total_fail);
            vlSelfRef.testbench__DOT__valid_fail = 
                ((IData)(1U) + vlSelfRef.testbench__DOT__valid_fail);
            vlSelfRef.testbench__DOT__latency_fail 
                = ((IData)(1U) + vlSelfRef.testbench__DOT__latency_fail);
            if (vlSelfRef.testbench__DOT__exp_valid[5U]) {
                vlSelfRef.testbench__DOT____Vlvbound_h4e2f4d72__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[5U]))
                                       ? vlSelfRef.testbench__DOT__test_fail
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[5U])]
                                       : 0U));
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[5U]))))) {
                    vlSelfRef.testbench__DOT__test_fail[(0x0000001fU 
                                                         & vlSelfRef.testbench__DOT__exp_test[5U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h4e2f4d72__0;
                }
                ++(vlSymsp->__Vcoverage[1389]);
            } else {
                ++(vlSymsp->__Vcoverage[1390]);
            }
            VL_WRITEF_NX("[%0t] %%Error: testbench.sv:181: Assertion failed in %Ntestbench: [VALID_ERROR] ciclo=%0d esperado=%b obtido=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.testbench__DOT__cycle_count,
                         1,vlSelfRef.testbench__DOT__exp_valid[5U],
                         1,(1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                  >> 5U)));
            VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 181, "");
        } else if (vlSelfRef.testbench__DOT__exp_valid[5U]) {
            vlSelfRef.testbench__DOT__total_recv = 
                ((IData)(1U) + vlSelfRef.testbench__DOT__total_recv);
            vlSelfRef.testbench__DOT__latency_pass 
                = ((IData)(1U) + vlSelfRef.testbench__DOT__latency_pass);
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U] 
                            == vlSelfRef.testbench__DOT__exp_pipe[5U])))) {
                vlSelfRef.testbench__DOT__total_pass 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_pass);
                vlSelfRef.testbench__DOT____Vlvbound_h08608d3b__0 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[5U]))
                                       ? vlSelfRef.testbench__DOT__test_pass
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[5U])]
                                       : 0U));
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[5U]))))) {
                    vlSelfRef.testbench__DOT__test_pass[(0x0000001fU 
                                                         & vlSelfRef.testbench__DOT__exp_test[5U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h08608d3b__0;
                }
                ++(vlSymsp->__Vcoverage[1392]);
                ++(vlSymsp->__Vcoverage[1395]);
            } else {
                vlSelfRef.testbench__DOT__total_fail 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__total_fail);
                vlSelfRef.testbench__DOT__data_fail 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__data_fail);
                vlSelfRef.testbench__DOT____Vlvbound_h4e2f4d72__1 
                    = ((IData)(1U) + ((0x19U >= (0x0000001fU 
                                                 & vlSelfRef.testbench__DOT__exp_test[5U]))
                                       ? vlSelfRef.testbench__DOT__test_fail
                                      [(0x0000001fU 
                                        & vlSelfRef.testbench__DOT__exp_test[5U])]
                                       : 0U));
                if (VL_LIKELY(((0x19U >= (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__exp_test[5U]))))) {
                    vlSelfRef.testbench__DOT__test_fail[(0x0000001fU 
                                                         & vlSelfRef.testbench__DOT__exp_test[5U])] 
                        = vlSelfRef.testbench__DOT____Vlvbound_h4e2f4d72__1;
                }
                ++(vlSymsp->__Vcoverage[1394]);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:197: Assertion failed in %Ntestbench: [DATA_ERROR][T%02d][TX%0d] ciclo=%0d esperado=%b obtido=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.testbench__DOT__exp_test[5U],
                             32,vlSelfRef.testbench__DOT__exp_tx[5U],
                             32,vlSelfRef.testbench__DOT__cycle_count,
                             21,vlSelfRef.testbench__DOT__exp_pipe[5U],
                             21,vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U]);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 197, "");
            }
            ++(vlSymsp->__Vcoverage[1396]);
        } else {
            ++(vlSymsp->__Vcoverage[1397]);
        }
        ++(vlSymsp->__Vcoverage[1398]);
    }
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    co_return;
}

void Vtestbench___024root___eval_triggers_vec__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers_vec__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.testbench__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
}

bool Vtestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_anySet__act\n"); );
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

void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
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

void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.testbench__DOT__clk) ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.testbench__DOT__clk, vlSelfRef.testbench__DOT____Vtogcov__clk);
        vlSelfRef.testbench__DOT____Vtogcov__clk = vlSelfRef.testbench__DOT__clk;
    }
}

void Vtestbench___024root___act_comb__TOP__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtestbench___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__testbench__DOT__dut__DOT__valid_pipe;
    __Vdly__testbench__DOT__dut__DOT__valid_pipe = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v0;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v0 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v1;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v1 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v2;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v2 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v3;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v3 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v4;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v4 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v5;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v5 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v6;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v6 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v7;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v7 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v8;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v8 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v9;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v9 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v10;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v10 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v11;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v11 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v12;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v12 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v13;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v13 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v14;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v14 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v15;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v15 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v16;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v16 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v17;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v17 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v18;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v18 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v19;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v19 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v20;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v20 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v21;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v21 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v22;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v22 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v23;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v23 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v24;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v24 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v25;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v25 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v26;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v26 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v27;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v27 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v28;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v28 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v29;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v29 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v30;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v30 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__mult__v31;
    __VdlyVal__testbench__DOT__dut__DOT__mult__v31 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v0;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v0 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v1;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v1 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v2;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v2 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v3;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v3 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v4;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v4 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v5;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v5 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v6;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v6 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v7;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v7 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v8;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v8 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v9;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v9 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v10;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v10 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v11;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v11 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v12;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v12 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v13;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v13 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v14;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v14 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v15;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v15 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v16;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v16 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v17;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v17 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v18;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v18 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v19;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v19 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v20;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v20 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v21;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v21 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v22;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v22 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v23;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v23 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v24;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v24 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v25;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v25 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v26;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v26 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v27;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v27 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v28;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v28 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v29;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v29 = 0;
    IData/*20:0*/ __VdlyVal__testbench__DOT__dut__DOT__soma__v30;
    __VdlyVal__testbench__DOT__dut__DOT__soma__v30 = 0;
    // Body
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1472]);
    ++(vlSymsp->__Vcoverage[1473]);
    ++(vlSymsp->__Vcoverage[1474]);
    ++(vlSymsp->__Vcoverage[1476]);
    ++(vlSymsp->__Vcoverage[1477]);
    ++(vlSymsp->__Vcoverage[1479]);
    ++(vlSymsp->__Vcoverage[1480]);
    ++(vlSymsp->__Vcoverage[1482]);
    ++(vlSymsp->__Vcoverage[1483]);
    ++(vlSymsp->__Vcoverage[1485]);
    ++(vlSymsp->__Vcoverage[1486]);
    ++(vlSymsp->__Vcoverage[1488]);
    ++(vlSymsp->__Vcoverage[1489]);
    ++(vlSymsp->__Vcoverage[1491]);
    ++(vlSymsp->__Vcoverage[1492]);
    ++(vlSymsp->__Vcoverage[1494]);
    ++(vlSymsp->__Vcoverage[1495]);
    ++(vlSymsp->__Vcoverage[1497]);
    ++(vlSymsp->__Vcoverage[1498]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1501]);
    ++(vlSymsp->__Vcoverage[1503]);
    ++(vlSymsp->__Vcoverage[1504]);
    ++(vlSymsp->__Vcoverage[1506]);
    ++(vlSymsp->__Vcoverage[1507]);
    ++(vlSymsp->__Vcoverage[1509]);
    ++(vlSymsp->__Vcoverage[1510]);
    ++(vlSymsp->__Vcoverage[1512]);
    ++(vlSymsp->__Vcoverage[1513]);
    ++(vlSymsp->__Vcoverage[1515]);
    ++(vlSymsp->__Vcoverage[1516]);
    ++(vlSymsp->__Vcoverage[1518]);
    ++(vlSymsp->__Vcoverage[1519]);
    ++(vlSymsp->__Vcoverage[1521]);
    ++(vlSymsp->__Vcoverage[1523]);
    ++(vlSymsp->__Vcoverage[1524]);
    ++(vlSymsp->__Vcoverage[1526]);
    ++(vlSymsp->__Vcoverage[1527]);
    ++(vlSymsp->__Vcoverage[1529]);
    ++(vlSymsp->__Vcoverage[1530]);
    ++(vlSymsp->__Vcoverage[1532]);
    ++(vlSymsp->__Vcoverage[1533]);
    ++(vlSymsp->__Vcoverage[1535]);
    ++(vlSymsp->__Vcoverage[1536]);
    ++(vlSymsp->__Vcoverage[1538]);
    ++(vlSymsp->__Vcoverage[1539]);
    ++(vlSymsp->__Vcoverage[1541]);
    ++(vlSymsp->__Vcoverage[1542]);
    ++(vlSymsp->__Vcoverage[1544]);
    ++(vlSymsp->__Vcoverage[1545]);
    ++(vlSymsp->__Vcoverage[1547]);
    ++(vlSymsp->__Vcoverage[1548]);
    ++(vlSymsp->__Vcoverage[1550]);
    ++(vlSymsp->__Vcoverage[1551]);
    ++(vlSymsp->__Vcoverage[1553]);
    ++(vlSymsp->__Vcoverage[1554]);
    ++(vlSymsp->__Vcoverage[1556]);
    ++(vlSymsp->__Vcoverage[1557]);
    ++(vlSymsp->__Vcoverage[1559]);
    ++(vlSymsp->__Vcoverage[1560]);
    ++(vlSymsp->__Vcoverage[1562]);
    ++(vlSymsp->__Vcoverage[1563]);
    ++(vlSymsp->__Vcoverage[1565]);
    ++(vlSymsp->__Vcoverage[1566]);
    ++(vlSymsp->__Vcoverage[1568]);
    ++(vlSymsp->__Vcoverage[1569]);
    ++(vlSymsp->__Vcoverage[1571]);
    ++(vlSymsp->__Vcoverage[1572]);
    ++(vlSymsp->__Vcoverage[1574]);
    ++(vlSymsp->__Vcoverage[1575]);
    ++(vlSymsp->__Vcoverage[1577]);
    ++(vlSymsp->__Vcoverage[1578]);
    ++(vlSymsp->__Vcoverage[1580]);
    ++(vlSymsp->__Vcoverage[1581]);
    __Vdly__testbench__DOT__dut__DOT__valid_pipe = vlSelfRef.testbench__DOT__dut__DOT__valid_pipe;
    vlSelfRef.testbench__DOT__dut__DOT__m = 0x00000020U;
    if (vlSelfRef.testbench__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1583]);
        __Vdly__testbench__DOT__dut__DOT__valid_pipe = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.testbench__DOT__dut__DOT__v = 6U;
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3eU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | (IData)(vlSelfRef.testbench__DOT__valid_in));
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe));
        ++(vlSymsp->__Vcoverage[1582]);
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3dU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 1U));
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 1U));
        ++(vlSymsp->__Vcoverage[1582]);
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3bU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 2U));
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 2U));
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x37U & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 3U));
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 3U));
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x2fU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 4U));
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 4U));
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x1fU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 5U));
    }
    ++(vlSymsp->__Vcoverage[1585]);
    __VdlyVal__testbench__DOT__dut__DOT__soma__v0 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[0U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[1U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v1 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[2U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[3U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v2 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[4U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[5U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v3 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[6U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[7U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v4 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[8U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[9U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v5 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[10U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[11U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v6 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[12U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[13U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v7 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[14U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[15U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v8 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[16U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[17U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v9 = 
        (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[18U] 
                        + vlSelfRef.testbench__DOT__dut__DOT__mult[19U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v10 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[20U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[21U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v11 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[22U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[23U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v12 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[24U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[25U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v13 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[26U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[27U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v14 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[28U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[29U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v15 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__mult[30U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__mult[31U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v16 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][0U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][1U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v17 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][2U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][3U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v18 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][4U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][5U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v19 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][6U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][7U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v20 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][8U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][9U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v21 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][10U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][11U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v22 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][12U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][13U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v23 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[0U][14U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[0U][15U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v24 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[1U][0U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[1U][1U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v25 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[1U][2U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[1U][3U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v26 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[1U][4U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[1U][5U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v27 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[1U][6U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[1U][7U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v28 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[2U][0U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[2U][1U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v29 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[2U][2U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[2U][3U]));
    __VdlyVal__testbench__DOT__dut__DOT__soma__v30 
        = (0x001fffffU & (vlSelfRef.testbench__DOT__dut__DOT__soma[3U][0U] 
                          + vlSelfRef.testbench__DOT__dut__DOT__soma[3U][1U]));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v0 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[0U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[0U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v1 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[1U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[1U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v2 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[2U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[2U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v3 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[3U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[3U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v4 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[4U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[4U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v5 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[5U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[5U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v6 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[6U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[6U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v7 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[7U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[7U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v8 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[8U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[8U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v9 = 
        (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                        & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[9U])), 
                                   (0x001fffffU & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[9U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v10 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[10U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[10U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v11 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[11U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[11U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v12 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[12U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[12U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v13 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[13U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[13U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v14 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[14U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[14U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v15 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[15U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[15U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v16 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[16U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[16U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v17 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[17U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[17U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v18 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[18U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[18U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v19 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[19U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[19U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v20 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[20U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[20U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v21 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[21U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[21U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v22 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[22U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[22U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v23 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[23U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[23U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v24 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[24U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[24U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v25 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[25U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[25U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v26 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[26U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[26U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v27 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[27U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[27U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v28 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[28U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[28U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v29 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[29U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[29U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v30 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[30U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[30U]))));
    __VdlyVal__testbench__DOT__dut__DOT__mult__v31 
        = (0x001fffffU & VL_MULS_III(21, (0x001fffffU 
                                          & VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__input_vec[31U])), 
                                     (0x001fffffU & 
                                      VL_EXTENDS_II(21,8, vlSelfRef.testbench__DOT__weight[31U]))));
    vlSelfRef.testbench__DOT__dut__DOT__valid_pipe 
        = __Vdly__testbench__DOT__dut__DOT__valid_pipe;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][0U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v0;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][1U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v1;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][2U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v2;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][3U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v3;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][4U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v4;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][5U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v5;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][6U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v6;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][7U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v7;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][8U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v8;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][9U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v9;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][10U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v10;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][11U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v11;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][12U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v12;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][13U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v13;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][14U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v14;
    vlSelfRef.testbench__DOT__dut__DOT__soma[0U][15U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v15;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][0U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v16;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][1U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v17;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][2U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v18;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][3U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v19;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][4U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v20;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][5U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v21;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][6U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v22;
    vlSelfRef.testbench__DOT__dut__DOT__soma[1U][7U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v23;
    vlSelfRef.testbench__DOT__dut__DOT__soma[2U][0U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v24;
    vlSelfRef.testbench__DOT__dut__DOT__soma[2U][1U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v25;
    vlSelfRef.testbench__DOT__dut__DOT__soma[2U][2U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v26;
    vlSelfRef.testbench__DOT__dut__DOT__soma[2U][3U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v27;
    vlSelfRef.testbench__DOT__dut__DOT__soma[3U][0U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v28;
    vlSelfRef.testbench__DOT__dut__DOT__soma[3U][1U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v29;
    vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U] 
        = __VdlyVal__testbench__DOT__dut__DOT__soma__v30;
    vlSelfRef.testbench__DOT__dut__DOT__mult[0U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v0;
    vlSelfRef.testbench__DOT__dut__DOT__mult[1U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v1;
    vlSelfRef.testbench__DOT__dut__DOT__mult[2U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v2;
    vlSelfRef.testbench__DOT__dut__DOT__mult[3U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v3;
    vlSelfRef.testbench__DOT__dut__DOT__mult[4U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v4;
    vlSelfRef.testbench__DOT__dut__DOT__mult[5U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v5;
    vlSelfRef.testbench__DOT__dut__DOT__mult[6U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v6;
    vlSelfRef.testbench__DOT__dut__DOT__mult[7U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v7;
    vlSelfRef.testbench__DOT__dut__DOT__mult[8U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v8;
    vlSelfRef.testbench__DOT__dut__DOT__mult[9U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v9;
    vlSelfRef.testbench__DOT__dut__DOT__mult[10U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v10;
    vlSelfRef.testbench__DOT__dut__DOT__mult[11U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v11;
    vlSelfRef.testbench__DOT__dut__DOT__mult[12U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v12;
    vlSelfRef.testbench__DOT__dut__DOT__mult[13U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v13;
    vlSelfRef.testbench__DOT__dut__DOT__mult[14U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v14;
    vlSelfRef.testbench__DOT__dut__DOT__mult[15U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v15;
    vlSelfRef.testbench__DOT__dut__DOT__mult[16U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v16;
    vlSelfRef.testbench__DOT__dut__DOT__mult[17U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v17;
    vlSelfRef.testbench__DOT__dut__DOT__mult[18U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v18;
    vlSelfRef.testbench__DOT__dut__DOT__mult[19U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v19;
    vlSelfRef.testbench__DOT__dut__DOT__mult[20U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v20;
    vlSelfRef.testbench__DOT__dut__DOT__mult[21U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v21;
    vlSelfRef.testbench__DOT__dut__DOT__mult[22U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v22;
    vlSelfRef.testbench__DOT__dut__DOT__mult[23U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v23;
    vlSelfRef.testbench__DOT__dut__DOT__mult[24U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v24;
    vlSelfRef.testbench__DOT__dut__DOT__mult[25U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v25;
    vlSelfRef.testbench__DOT__dut__DOT__mult[26U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v26;
    vlSelfRef.testbench__DOT__dut__DOT__mult[27U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v27;
    vlSelfRef.testbench__DOT__dut__DOT__mult[28U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v28;
    vlSelfRef.testbench__DOT__dut__DOT__mult[29U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v29;
    vlSelfRef.testbench__DOT__dut__DOT__mult[30U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v30;
    vlSelfRef.testbench__DOT__dut__DOT__mult[31U] = __VdlyVal__testbench__DOT__dut__DOT__mult__v31;
    if ((IData)((((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                  >> 5U) ^ (IData)(vlSelfRef.testbench__DOT____Vtogcov__valid_out)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6, 
                               ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                >> 5U), vlSelfRef.testbench__DOT____Vtogcov__valid_out);
        vlSelfRef.testbench__DOT____Vtogcov__valid_out 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 5U));
    }
    if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
         ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSymsp->__Vcoverage + 1460, vlSelfRef.testbench__DOT__dut__DOT__valid_pipe, vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe);
        vlSelfRef.testbench__DOT__dut__DOT____Vtogcov__valid_pipe 
            = vlSelfRef.testbench__DOT__dut__DOT__valid_pipe;
    }
    if ((vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U] 
         ^ vlSelfRef.testbench__DOT____Vtogcov__out)) {
        VL_COV_TOGGLE_CHG_ST_I(21, vlSymsp->__Vcoverage + 1032, vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U], vlSelfRef.testbench__DOT____Vtogcov__out);
        vlSelfRef.testbench__DOT____Vtogcov__out = vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U];
    }
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vtestbench___024root___timing_ready(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_ready\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready("@(negedge testbench.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6748ea00__0.ready("@(posedge testbench.clk)");
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h6748eb2a__0.moveToResumeQueue(
                                                          "@(negedge testbench.clk)");
    vlSelfRef.__VtrigSched_h6748ea00__0.moveToResumeQueue(
                                                          "@(posedge testbench.clk)");
    vlSelfRef.__VtrigSched_h6748eb2a__0.resume("@(negedge testbench.clk)");
    vlSelfRef.__VtrigSched_h6748ea00__0.resume("@(posedge testbench.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers_vec__act(vlSelf);
    Vtestbench___024root___timing_ready(vlSelf);
    Vtestbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtestbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtestbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__inact(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__inact\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtestbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtestbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        Vtestbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtestbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtestbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtestbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtestbench___024root____VbeforeTrig_h6748eb2a__0(Vtestbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root____VbeforeTrig_h6748eb2a__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.testbench__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6748ea00__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtestbench___024root____VbeforeTrig_h6748ea00__0(Vtestbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root____VbeforeTrig_h6748ea00__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.testbench__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6748ea00__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6748eb2a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
