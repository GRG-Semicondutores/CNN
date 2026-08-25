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

void Vtestbench___024root____VbeforeTrig_h6748eb2a__0(Vtestbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ testbench__DOT__unnamedblk1_2__DOT____Vrepeat1;
    testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ testbench__DOT__unnamedblk1_3__DOT____Vrepeat2;
    testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__1__input_value;
    __Vtask_testbench__DOT__drive_constant__1__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__1__weight_value;
    __Vtask_testbench__DOT__drive_constant__1__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__1__enable;
    __Vtask_testbench__DOT__drive_constant__1__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__2__input_value;
    __Vtask_testbench__DOT__drive_constant__2__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__2__weight_value;
    __Vtask_testbench__DOT__drive_constant__2__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__2__enable;
    __Vtask_testbench__DOT__drive_constant__2__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__3__input_value;
    __Vtask_testbench__DOT__drive_constant__3__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__3__weight_value;
    __Vtask_testbench__DOT__drive_constant__3__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__3__enable;
    __Vtask_testbench__DOT__drive_constant__3__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__4__input_value;
    __Vtask_testbench__DOT__drive_constant__4__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__4__weight_value;
    __Vtask_testbench__DOT__drive_constant__4__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__4__enable;
    __Vtask_testbench__DOT__drive_constant__4__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__5__input_value;
    __Vtask_testbench__DOT__drive_constant__5__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__5__weight_value;
    __Vtask_testbench__DOT__drive_constant__5__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__5__enable;
    __Vtask_testbench__DOT__drive_constant__5__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__6__position;
    __Vtask_testbench__DOT__drive_impulse__6__position = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__6__input_value;
    __Vtask_testbench__DOT__drive_impulse__6__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__6__weight_value;
    __Vtask_testbench__DOT__drive_impulse__6__weight_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__7__position;
    __Vtask_testbench__DOT__drive_impulse__7__position = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__7__input_value;
    __Vtask_testbench__DOT__drive_impulse__7__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_impulse__7__weight_value;
    __Vtask_testbench__DOT__drive_impulse__7__weight_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__8__input_value;
    __Vtask_testbench__DOT__drive_constant__8__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__8__weight_value;
    __Vtask_testbench__DOT__drive_constant__8__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__8__enable;
    __Vtask_testbench__DOT__drive_constant__8__enable = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__9__input_value;
    __Vtask_testbench__DOT__drive_constant__9__input_value = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drive_constant__9__weight_value;
    __Vtask_testbench__DOT__drive_constant__9__weight_value = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__drive_constant__9__enable;
    __Vtask_testbench__DOT__drive_constant__9__enable = 0;
    // Body
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[0U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[0U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[1U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[1U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[2U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[2U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[3U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[3U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[4U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[4U] = 0U;
    vlSelfRef.testbench__DOT__valid_expected[5U] = 0U;
    vlSelfRef.testbench__DOT__expected_pipe[5U] = 0U;
    vlSelfRef.testbench__DOT__i = 6U;
    testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             149);
        testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.testbench__DOT__rst = 0U;
    __Vtask_testbench__DOT__drive_constant__1__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__1__weight_value = 0U;
    __Vtask_testbench__DOT__drive_constant__1__input_value = 0U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__1__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__1__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__1__enable;
    __Vtask_testbench__DOT__drive_constant__2__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__2__weight_value = 1U;
    __Vtask_testbench__DOT__drive_constant__2__input_value = 1U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__2__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__2__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__2__enable;
    __Vtask_testbench__DOT__drive_constant__3__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__3__weight_value = 1U;
    __Vtask_testbench__DOT__drive_constant__3__input_value = 0xffffffffU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__3__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__3__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__3__enable;
    __Vtask_testbench__DOT__drive_constant__4__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__4__weight_value = 0x0000007fU;
    __Vtask_testbench__DOT__drive_constant__4__input_value = 0x0000007fU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__4__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__4__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__4__enable;
    __Vtask_testbench__DOT__drive_constant__5__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__5__weight_value = 0xffffff80U;
    __Vtask_testbench__DOT__drive_constant__5__input_value = 0xffffff80U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__5__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__5__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__5__enable;
    __Vtask_testbench__DOT__drive_impulse__6__weight_value = 0x0000007fU;
    __Vtask_testbench__DOT__drive_impulse__6__input_value = 0xffffff80U;
    __Vtask_testbench__DOT__drive_impulse__6__position = 0U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         112);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[(0x0000001fU 
                                         & __Vtask_testbench__DOT__drive_impulse__6__position)] 
        = (0x000000ffU & __Vtask_testbench__DOT__drive_impulse__6__input_value);
    vlSelfRef.testbench__DOT__weight[(0x0000001fU & __Vtask_testbench__DOT__drive_impulse__6__position)] 
        = (0x000000ffU & __Vtask_testbench__DOT__drive_impulse__6__weight_value);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    __Vtask_testbench__DOT__drive_impulse__7__weight_value = 0xffffff80U;
    __Vtask_testbench__DOT__drive_impulse__7__input_value = 0x0000007fU;
    __Vtask_testbench__DOT__drive_impulse__7__position = 0x0000001fU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         112);
    vlSelfRef.testbench__DOT__input_vec[0U] = 0U;
    vlSelfRef.testbench__DOT__weight[0U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[1U] = 0U;
    vlSelfRef.testbench__DOT__weight[1U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[2U] = 0U;
    vlSelfRef.testbench__DOT__weight[2U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[3U] = 0U;
    vlSelfRef.testbench__DOT__weight[3U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[4U] = 0U;
    vlSelfRef.testbench__DOT__weight[4U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[5U] = 0U;
    vlSelfRef.testbench__DOT__weight[5U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[6U] = 0U;
    vlSelfRef.testbench__DOT__weight[6U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[7U] = 0U;
    vlSelfRef.testbench__DOT__weight[7U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[8U] = 0U;
    vlSelfRef.testbench__DOT__weight[8U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[9U] = 0U;
    vlSelfRef.testbench__DOT__weight[9U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[10U] = 0U;
    vlSelfRef.testbench__DOT__weight[10U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[11U] = 0U;
    vlSelfRef.testbench__DOT__weight[11U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[12U] = 0U;
    vlSelfRef.testbench__DOT__weight[12U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[13U] = 0U;
    vlSelfRef.testbench__DOT__weight[13U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[14U] = 0U;
    vlSelfRef.testbench__DOT__weight[14U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[15U] = 0U;
    vlSelfRef.testbench__DOT__weight[15U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[16U] = 0U;
    vlSelfRef.testbench__DOT__weight[16U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[17U] = 0U;
    vlSelfRef.testbench__DOT__weight[17U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[18U] = 0U;
    vlSelfRef.testbench__DOT__weight[18U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[19U] = 0U;
    vlSelfRef.testbench__DOT__weight[19U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[20U] = 0U;
    vlSelfRef.testbench__DOT__weight[20U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[21U] = 0U;
    vlSelfRef.testbench__DOT__weight[21U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[22U] = 0U;
    vlSelfRef.testbench__DOT__weight[22U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[23U] = 0U;
    vlSelfRef.testbench__DOT__weight[23U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[24U] = 0U;
    vlSelfRef.testbench__DOT__weight[24U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[25U] = 0U;
    vlSelfRef.testbench__DOT__weight[25U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[26U] = 0U;
    vlSelfRef.testbench__DOT__weight[26U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[27U] = 0U;
    vlSelfRef.testbench__DOT__weight[27U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[28U] = 0U;
    vlSelfRef.testbench__DOT__weight[28U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[29U] = 0U;
    vlSelfRef.testbench__DOT__weight[29U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[30U] = 0U;
    vlSelfRef.testbench__DOT__weight[30U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[31U] = 0U;
    vlSelfRef.testbench__DOT__weight[31U] = 0U;
    vlSelfRef.testbench__DOT__input_vec[(0x0000001fU 
                                         & __Vtask_testbench__DOT__drive_impulse__7__position)] 
        = (0x000000ffU & __Vtask_testbench__DOT__drive_impulse__7__input_value);
    vlSelfRef.testbench__DOT__weight[(0x0000001fU & __Vtask_testbench__DOT__drive_impulse__7__position)] 
        = (0x000000ffU & __Vtask_testbench__DOT__drive_impulse__7__weight_value);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    __Vtask_testbench__DOT__drive_constant__8__enable = 0U;
    __Vtask_testbench__DOT__drive_constant__8__weight_value = 0U;
    __Vtask_testbench__DOT__drive_constant__8__input_value = 0U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__8__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__8__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__8__enable;
    __Vtask_testbench__DOT__drive_constant__9__enable = 1U;
    __Vtask_testbench__DOT__drive_constant__9__weight_value = 0xfffffff9U;
    __Vtask_testbench__DOT__drive_constant__9__input_value = 3U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         97);
    vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                               & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                            & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[10U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[11U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[12U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[13U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[14U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[15U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[16U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[17U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[18U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[19U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[20U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[21U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[22U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[23U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[24U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[25U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[26U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[27U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[28U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[29U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[30U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__input_vec[31U] = (0x000000ffU 
                                                & __Vtask_testbench__DOT__drive_constant__9__input_value);
    vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                             & __Vtask_testbench__DOT__drive_constant__9__weight_value);
    vlSelfRef.testbench__DOT__valid_in = __Vtask_testbench__DOT__drive_constant__9__enable;
    testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000064U;
    while (VL_LTS_III(32, 0U, testbench__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             126);
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[1U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[1U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[2U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[2U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[3U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[3U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[4U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[4U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[5U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[5U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[6U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[6U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[7U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[7U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[8U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[8U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[9U] = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[9U] = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[10U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[10U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[11U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[11U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[12U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[12U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[13U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[13U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[14U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[14U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[15U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[15U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[16U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[16U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[17U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[17U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[18U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[18U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[19U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[19U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[20U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[20U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[21U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[21U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[22U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[22U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[23U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[23U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[24U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[24U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[25U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[25U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[26U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[26U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[27U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[27U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[28U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[28U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[29U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[29U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[30U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[30U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__input_vec[31U] = 
            (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__weight[31U] = (0x000000ffU 
                                                 & VL_RANDOM_I());
        vlSelfRef.testbench__DOT__valid_in = 1U;
        testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         162);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 8U;
    while (VL_LTS_III(32, 0U, testbench__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             164);
        testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("------------------------------------------------------------\nDotProduct: enviados=%0d recebidos=%0d PASS=%0d FAIL=%0d\nLatencia nominal verificada: 6 ciclos\n------------------------------------------------------------\n",0,
                 32,vlSelfRef.testbench__DOT__sent_count,
                 32,vlSelfRef.testbench__DOT__recv_count,
                 32,vlSelfRef.testbench__DOT__pass_count,
                 32,vlSelfRef.testbench__DOT__fail_count);
    if (VL_UNLIKELY((((0U != vlSelfRef.testbench__DOT__fail_count) 
                      | (vlSelfRef.testbench__DOT__sent_count 
                         != vlSelfRef.testbench__DOT__recv_count))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: testbench.sv:171: Assertion failed in %Ntestbench: TESTBENCH FALHOU\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 171, "", false);
    } else {
        VL_WRITEF_NX("TESTBENCH APROVADO\n",0);
    }
    VL_FINISH_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 174, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                             34);
        vlSelfRef.testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.testbench__DOT__clk)));
    }
    co_return;
}

void Vtestbench___024root____VbeforeTrig_h6748ea00__0(Vtestbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_testbench__DOT__dot_reference__0__product;
    __Vfunc_testbench__DOT__dot_reference__0__product = 0;
    IData/*20:0*/ __Vfunc_testbench__DOT__dot_reference__0__accumulator;
    __Vfunc_testbench__DOT__dot_reference__0__accumulator = 0;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtestbench___024root____VbeforeTrig_h6748ea00__0(vlSelf, 
                                                         "@(posedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748ea00__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             51);
        vlSelfRef.testbench__DOT__cycle_count = ((IData)(1U) 
                                                 + vlSelfRef.testbench__DOT__cycle_count);
        if (vlSelfRef.testbench__DOT__rst) {
            vlSelfRef.testbench__DOT__valid_expected[0U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[0U] = 0U;
            vlSelfRef.testbench__DOT__p = 6U;
            vlSelfRef.testbench__DOT__valid_expected[1U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[1U] = 0U;
            vlSelfRef.testbench__DOT__valid_expected[2U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[2U] = 0U;
            vlSelfRef.testbench__DOT__valid_expected[3U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[3U] = 0U;
            vlSelfRef.testbench__DOT__valid_expected[4U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[4U] = 0U;
            vlSelfRef.testbench__DOT__valid_expected[5U] = 0U;
            vlSelfRef.testbench__DOT__expected_pipe[5U] = 0U;
        } else {
            vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1 
                = vlSelfRef.testbench__DOT__valid_expected[4U];
            vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1 
                = vlSelfRef.testbench__DOT__expected_pipe[4U];
            vlSelfRef.testbench__DOT__p = 0U;
            vlSelfRef.testbench__DOT__valid_expected[5U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1;
            vlSelfRef.testbench__DOT__expected_pipe[5U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1;
            vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1 
                = vlSelfRef.testbench__DOT__valid_expected[3U];
            vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1 
                = vlSelfRef.testbench__DOT__expected_pipe[3U];
            vlSelfRef.testbench__DOT__valid_expected[4U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1;
            vlSelfRef.testbench__DOT__expected_pipe[4U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1;
            vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1 
                = vlSelfRef.testbench__DOT__valid_expected[2U];
            vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1 
                = vlSelfRef.testbench__DOT__expected_pipe[2U];
            vlSelfRef.testbench__DOT__valid_expected[3U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1;
            vlSelfRef.testbench__DOT__expected_pipe[3U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1;
            vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1 
                = vlSelfRef.testbench__DOT__valid_expected[1U];
            vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1 
                = vlSelfRef.testbench__DOT__expected_pipe[1U];
            vlSelfRef.testbench__DOT__valid_expected[2U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1;
            vlSelfRef.testbench__DOT__expected_pipe[2U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1;
            vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1 
                = vlSelfRef.testbench__DOT__valid_expected[0U];
            vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1 
                = vlSelfRef.testbench__DOT__expected_pipe[0U];
            vlSelfRef.testbench__DOT__valid_expected[1U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h94151d73__1;
            vlSelfRef.testbench__DOT__expected_pipe[1U] 
                = vlSelfRef.testbench__DOT____Vlvbound_h03fef9ee__1;
            if (vlSelfRef.testbench__DOT__valid_in) {
                vlSelfRef.testbench__DOT__valid_expected[0U] = 1U;
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[0U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[0U]))));
                vlSelfRef.testbench__DOT__sent_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__sent_count);
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product)));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[1U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[1U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[2U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[2U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[3U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[3U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[4U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[4U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[5U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[5U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[6U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[6U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[7U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[7U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[8U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[8U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[9U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[9U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[10U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[10U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[11U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[11U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[12U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[12U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[13U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[13U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[14U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[14U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[15U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[15U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[16U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[16U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[17U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[17U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[18U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[18U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[19U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[19U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[20U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[20U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[21U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[21U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[22U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[22U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[23U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[23U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[24U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[24U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[25U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[25U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[26U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[26U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[27U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[27U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[28U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[28U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[29U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[29U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[30U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[30U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                __Vfunc_testbench__DOT__dot_reference__0__product 
                    = (0x0000ffffU & VL_MULS_III(16, 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__input_vec[31U])), 
                                                 (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,8, vlSelfRef.testbench__DOT__weight[31U]))));
                __Vfunc_testbench__DOT__dot_reference__0__accumulator 
                    = (0x001fffffU & (__Vfunc_testbench__DOT__dot_reference__0__accumulator 
                                      + VL_EXTENDS_II(21,16, (IData)(__Vfunc_testbench__DOT__dot_reference__0__product))));
                vlSelfRef.testbench__DOT____VlemCall_0__dot_reference 
                    = __Vfunc_testbench__DOT__dot_reference__0__accumulator;
                vlSelfRef.testbench__DOT__expected_pipe[0U] 
                    = vlSelfRef.testbench__DOT____VlemCall_0__dot_reference;
            } else {
                vlSelfRef.testbench__DOT__valid_expected[0U] = 0U;
            }
        }
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                             70);
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                 >> 5U)) != vlSelfRef.testbench__DOT__valid_expected[5U])))) {
            vlSelfRef.testbench__DOT__fail_count = 
                ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
            VL_WRITEF_NX("[%0t] %%Error: testbench.sv:73: Assertion failed in %Ntestbench: [VALID] ciclo=%0d esperado=%b obtido=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.testbench__DOT__cycle_count,
                         1,vlSelfRef.testbench__DOT__valid_expected[5U],
                         1,(1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                  >> 5U)));
            VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 73, "");
        }
        if (vlSelfRef.testbench__DOT__valid_expected[5U]) {
            vlSelfRef.testbench__DOT__recv_count = 
                ((IData)(1U) + vlSelfRef.testbench__DOT__recv_count);
            if (VL_LIKELY(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                             >> 5U) & (vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U] 
                                       == vlSelfRef.testbench__DOT__expected_pipe[5U]))))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:85: Assertion failed in %Ntestbench: [DATA] ciclo=%0d esperado=%0d obtido=%0d valid_out=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.testbench__DOT__cycle_count,
                             21,vlSelfRef.testbench__DOT__expected_pipe[5U],
                             21,vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U],
                             1,(1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                      >> 5U)));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 85, "");
            }
        }
    }
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
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
    __Vdly__testbench__DOT__dut__DOT__valid_pipe = vlSelfRef.testbench__DOT__dut__DOT__valid_pipe;
    vlSelfRef.testbench__DOT__dut__DOT__m = 0x00000020U;
    if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__rst)))) {
        vlSelfRef.testbench__DOT__dut__DOT__v = 6U;
    }
    if (vlSelfRef.testbench__DOT__rst) {
        __Vdly__testbench__DOT__dut__DOT__valid_pipe = 0U;
    } else {
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3eU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | (IData)(vlSelfRef.testbench__DOT__valid_in));
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe));
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3dU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 1U));
        vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                     >> 1U));
        __Vdly__testbench__DOT__dut__DOT__valid_pipe 
            = ((0x3bU & (IData)(__Vdly__testbench__DOT__dut__DOT__valid_pipe)) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT____Vlvbound_h25c63994__0) 
                  << 2U));
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
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
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
