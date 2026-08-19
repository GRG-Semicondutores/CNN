// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__routine_1_case1__9____VlefExpr_0;
    __Vtask_testbench__DOT__routine_1_case1__9____VlefExpr_0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__10__test_case_number;
    __Vtask_testbench__DOT__check_relu__10__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__routine_1_case2__11____VlefExpr_0;
    __Vtask_testbench__DOT__routine_1_case2__11____VlefExpr_0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__12__test_case_number;
    __Vtask_testbench__DOT__check_relu__12__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__14__test_case_number;
    __Vtask_testbench__DOT__test_case_header__14__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__18__test_case_number;
    __Vtask_testbench__DOT__check_relu__18__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__20__test_case_number;
    __Vtask_testbench__DOT__check_relu__20__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__22__test_case_number;
    __Vtask_testbench__DOT__test_case_header__22__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__26__test_case_number;
    __Vtask_testbench__DOT__check_relu__26__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__28__test_case_number;
    __Vtask_testbench__DOT__check_relu__28__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7;
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__30__test_case_number;
    __Vtask_testbench__DOT__test_case_header__30__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__34__test_case_number;
    __Vtask_testbench__DOT__check_relu__34__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__36__test_case_number;
    __Vtask_testbench__DOT__check_relu__36__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8;
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9;
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__38__test_case_number;
    __Vtask_testbench__DOT__test_case_header__38__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__42__test_case_number;
    __Vtask_testbench__DOT__check_relu__42__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__44__test_case_number;
    __Vtask_testbench__DOT__check_relu__44__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10;
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11;
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__46__test_case_number;
    __Vtask_testbench__DOT__test_case_header__46__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__50__test_case_number;
    __Vtask_testbench__DOT__check_relu__50__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__52__test_case_number;
    __Vtask_testbench__DOT__check_relu__52__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12;
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13;
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__test_case_header__54__test_case_number;
    __Vtask_testbench__DOT__test_case_header__54__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__58__test_case_number;
    __Vtask_testbench__DOT__check_relu__58__test_case_number = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__check_relu__60__test_case_number;
    __Vtask_testbench__DOT__check_relu__60__test_case_number = 0;
    // Body
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|  TIME  |                IN                ||                OUT               |\n",0);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[148]);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    ++(vlSymsp->__Vcoverage[149]);
    __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* 1                                  |\n",0);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        vlSelfRef.testbench__DOT__in = (0x7fffffffU 
                                        & vlSelfRef.testbench__DOT__in);
        __Vtask_testbench__DOT__routine_1_case1__9____VlefExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x7fffffffU);
        vlSelfRef.testbench__DOT__in = ((0x80000000U 
                                         & vlSelfRef.testbench__DOT__in) 
                                        | (0x7fffffffU 
                                           & __Vtask_testbench__DOT__routine_1_case1__9____VlefExpr_0));
        ++(vlSymsp->__Vcoverage[133]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             206);
        __Vtask_testbench__DOT__check_relu__10__test_case_number = 1U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__10__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__10__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__10__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[150]);
    }
    __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        vlSelfRef.testbench__DOT__in = (0x80000000U 
                                        | vlSelfRef.testbench__DOT__in);
        __Vtask_testbench__DOT__routine_1_case2__11____VlefExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x7fffffffU);
        vlSelfRef.testbench__DOT__in = ((0x80000000U 
                                         & vlSelfRef.testbench__DOT__in) 
                                        | (0x7fffffffU 
                                           & __Vtask_testbench__DOT__routine_1_case2__11____VlefExpr_0));
        ++(vlSymsp->__Vcoverage[134]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             207);
        __Vtask_testbench__DOT__check_relu__12__test_case_number = 1U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__12__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__12__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__12__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_testbench__DOT__r1__5__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[151]);
    }
    ++(vlSymsp->__Vcoverage[152]);
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    __Vtask_testbench__DOT__test_case_header__14__test_case_number = 2U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__14__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        vlSelfRef.testbench__DOT__in = 0U;
        ++(vlSymsp->__Vcoverage[135]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             214);
        __Vtask_testbench__DOT__check_relu__18__test_case_number = 2U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__18__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__18__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__18__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[153]);
    }
    __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        vlSelfRef.testbench__DOT__in = 0x80000000U;
        ++(vlSymsp->__Vcoverage[136]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             215);
        __Vtask_testbench__DOT__check_relu__20__test_case_number = 2U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__20__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__20__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__20__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_testbench__DOT__r2__13__testbench__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[154]);
    }
    ++(vlSymsp->__Vcoverage[155]);
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    __Vtask_testbench__DOT__test_case_header__22__test_case_number = 3U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__22__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        vlSelfRef.testbench__DOT__in = 1U;
        ++(vlSymsp->__Vcoverage[137]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             222);
        __Vtask_testbench__DOT__check_relu__26__test_case_number = 3U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__26__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__26__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__26__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[156]);
    }
    __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        vlSelfRef.testbench__DOT__in = 0x80000001U;
        ++(vlSymsp->__Vcoverage[138]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             223);
        __Vtask_testbench__DOT__check_relu__28__test_case_number = 3U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__28__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__28__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__28__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_testbench__DOT__r3__21__testbench__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[157]);
    }
    ++(vlSymsp->__Vcoverage[158]);
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    __Vtask_testbench__DOT__test_case_header__30__test_case_number = 4U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__30__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        vlSelfRef.testbench__DOT__in = 0x55555555U;
        ++(vlSymsp->__Vcoverage[139]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             230);
        __Vtask_testbench__DOT__check_relu__34__test_case_number = 4U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__34__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__34__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__34__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (__Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[159]);
    }
    __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        vlSelfRef.testbench__DOT__in = 0xd5555555U;
        ++(vlSymsp->__Vcoverage[140]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             231);
        __Vtask_testbench__DOT__check_relu__36__test_case_number = 4U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__36__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__36__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__36__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (__Vtask_testbench__DOT__r4__29__testbench__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[160]);
    }
    ++(vlSymsp->__Vcoverage[161]);
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    __Vtask_testbench__DOT__test_case_header__38__test_case_number = 5U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__38__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        vlSelfRef.testbench__DOT__in = 0U;
        ++(vlSymsp->__Vcoverage[141]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             238);
        __Vtask_testbench__DOT__check_relu__42__test_case_number = 5U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__42__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__42__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__42__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (__Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[162]);
    }
    __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9)) {
        vlSelfRef.testbench__DOT__in = 0x80000000U;
        ++(vlSymsp->__Vcoverage[142]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             239);
        __Vtask_testbench__DOT__check_relu__44__test_case_number = 5U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__44__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__44__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__44__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9 
            = (__Vtask_testbench__DOT__r5__37__testbench__DOT__unnamedblk1_10__DOT____Vrepeat9 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[163]);
    }
    ++(vlSymsp->__Vcoverage[164]);
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10 = 0;
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11 = 0;
    __Vtask_testbench__DOT__test_case_header__46__test_case_number = 6U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__46__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10)) {
        vlSelfRef.testbench__DOT__in = 0U;
        ++(vlSymsp->__Vcoverage[143]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             246);
        __Vtask_testbench__DOT__check_relu__50__test_case_number = 6U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__50__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__50__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__50__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10 
            = (__Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_11__DOT____Vrepeat10 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[165]);
    }
    __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11)) {
        vlSelfRef.testbench__DOT__in = 0x80000000U;
        ++(vlSymsp->__Vcoverage[144]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             247);
        __Vtask_testbench__DOT__check_relu__52__test_case_number = 6U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__52__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__52__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__52__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11 
            = (__Vtask_testbench__DOT__r6__45__testbench__DOT__unnamedblk1_12__DOT____Vrepeat11 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[166]);
    }
    ++(vlSymsp->__Vcoverage[167]);
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12 = 0;
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13 = 0;
    __Vtask_testbench__DOT__test_case_header__54__test_case_number = 7U;
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    VL_WRITEF_NX("|                               Test Case n* %01d                                  |\n",0,
                 32,__Vtask_testbench__DOT__test_case_header__54__test_case_number);
    VL_WRITEF_NX("+-------------------------------------------------------------------------------+\n",0);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[129]);
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12)) {
        vlSelfRef.testbench__DOT__in = 0U;
        ++(vlSymsp->__Vcoverage[145]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             254);
        __Vtask_testbench__DOT__check_relu__58__test_case_number = 7U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__58__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__58__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__58__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12 
            = (__Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_13__DOT____Vrepeat12 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[168]);
    }
    __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13 
        = vlSelfRef.testbench__DOT__quantity_of_tests;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13)) {
        vlSelfRef.testbench__DOT__in = 0x80000000U;
        ++(vlSymsp->__Vcoverage[146]);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                             255);
        __Vtask_testbench__DOT__check_relu__60__test_case_number = 7U;
        if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__in 
                            >> 0x1fU)))) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_LIKELY(((0U == vlSelfRef.testbench__DOT__out)))) {
                        vlSelfRef.testbench__DOT__pass_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
                    } else {
                        vlSelfRef.testbench__DOT__fail_count 
                            = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                        VL_WRITEF_NX("[%0t] %%Error: testbench.sv:62: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 1 | IN = %032b | OUT = %032b | Expected = 00000000000000000000000000000000\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,__Vtask_testbench__DOT__check_relu__60__test_case_number,
                                     32,vlSelfRef.testbench__DOT__in,
                                     32,vlSelfRef.testbench__DOT__out);
                        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 62, "");
                    }
                }
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:77: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB invalido: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__60__test_case_number,
                             1,(vlSelfRef.testbench__DOT__in 
                                >> 0x1fU));
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 77, "");
            }
        } else if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.testbench__DOT__out 
                            == vlSelfRef.testbench__DOT__in)))) {
                vlSelfRef.testbench__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__pass_count);
            } else {
                vlSelfRef.testbench__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.testbench__DOT__fail_count);
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:41: Assertion failed in %Ntestbench.check_relu: [FAIL] Test Case %0d | MSB = 0 | IN = %032b | OUT = %032b | Expected = %032b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             __Vtask_testbench__DOT__check_relu__60__test_case_number,
                             32,vlSelfRef.testbench__DOT__in,
                             32,vlSelfRef.testbench__DOT__out,
                             32,vlSelfRef.testbench__DOT__in);
                VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 41, "");
            }
        }
        ++(vlSymsp->__Vcoverage[132]);
        __Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13 
            = (__Vtask_testbench__DOT__r7__53__testbench__DOT__unnamedblk1_14__DOT____Vrepeat13 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[169]);
    }
    ++(vlSymsp->__Vcoverage[170]);
    VL_WRITEF_NX("\n+-------------------------------------------------------------------------------+\n|                              TEST SUMMARY                                     |\n+-------------------------------------------------------------------------------+\n| PASS: %0d\n| FAIL: %0d\n+-------------------------------------------------------------------------------+\n",0,
                 32,vlSelfRef.testbench__DOT__pass_count,
                 32,vlSelfRef.testbench__DOT__fail_count);
    ++(vlSymsp->__Vcoverage[171]);
    ++(vlSymsp->__Vcoverage[172]);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 
                                         295);
    VL_FINISH_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 296, "");
    ++(vlSymsp->__Vcoverage[174]);
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
                                                     | (((vlSelfRef.testbench__DOT__out 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__out__0) 
                                                         << 1U) 
                                                        | (vlSelfRef.testbench__DOT__in 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__in__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__in__0 
        = vlSelfRef.testbench__DOT__in;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__out__0 
        = vlSelfRef.testbench__DOT__out;
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
    if ((vlSelfRef.testbench__DOT__in ^ vlSelfRef.testbench__DOT____Vtogcov__in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.testbench__DOT__in, vlSelfRef.testbench__DOT____Vtogcov__in);
        vlSelfRef.testbench__DOT____Vtogcov__in = vlSelfRef.testbench__DOT__in;
    }
    if ((vlSelfRef.testbench__DOT__in >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.testbench__DOT__ReLU__DOT____VlemCond_0 = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.testbench__DOT__ReLU__DOT____VlemCond_0 
            = vlSelfRef.testbench__DOT__in;
    }
    vlSelfRef.testbench__DOT__out = vlSelfRef.testbench__DOT__ReLU__DOT____VlemCond_0;
    if ((vlSelfRef.testbench__DOT__out ^ vlSelfRef.testbench__DOT____Vtogcov__out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 64, vlSelfRef.testbench__DOT__out, vlSelfRef.testbench__DOT____Vtogcov__out);
        vlSelfRef.testbench__DOT____Vtogcov__out = vlSelfRef.testbench__DOT__out;
    }
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("| %06t | %031b || %031b |\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     vlSelfRef.testbench__DOT__in,32,
                     vlSelfRef.testbench__DOT__out);
    }
}

void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((vlSelfRef.testbench__DOT__in ^ vlSelfRef.testbench__DOT____Vtogcov__in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.testbench__DOT__in, vlSelfRef.testbench__DOT____Vtogcov__in);
        vlSelfRef.testbench__DOT____Vtogcov__in = vlSelfRef.testbench__DOT__in;
    }
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
        VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/ReLU/testbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
