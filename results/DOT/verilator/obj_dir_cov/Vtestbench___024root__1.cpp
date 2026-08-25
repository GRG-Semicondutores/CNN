// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

void Vtestbench___024root____VbeforeTrig_h6748eb2a__0(Vtestbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__124__id;
    __Vtask_testbench__DOT__start_test__124__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__125__id;
    __Vfunc_testbench__DOT__test_name__125__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__131__id;
    __Vtask_testbench__DOT__start_test__131__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__132__id;
    __Vfunc_testbench__DOT__test_name__132__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__start_test__138__id;
    __Vtask_testbench__DOT__start_test__138__id = 0;
    IData/*31:0*/ __Vfunc_testbench__DOT__test_name__139__id;
    __Vfunc_testbench__DOT__test_name__139__id = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id) 
               | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
              | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
             | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
            | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
           | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
          | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
         | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id))) {
        if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id) 
                      | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                     | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                    | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                   | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                  | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                 | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id))) {
        if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id) 
                      | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                     | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                    | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                   | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                  | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                 | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) 
                | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id))) {
        if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__118__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__117____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__118__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,vlSelfRef.__Vtask_testbench__DOT__start_test__117__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__117____VlefCall_0__test_name));
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
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & vlSelfRef.testbench__DOT__c);
        vlSelfRef.testbench__DOT__weight[0U] = (0x000000ffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.testbench__DOT__c));
        if ((1U != VL_MODDIVS_III(32, vlSelfRef.testbench__DOT__c, (IData)(3U)))) {
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            ++(vlSymsp->__Vcoverage[1439]);
        } else {
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 114);
            vlSelfRef.testbench__DOT__valid_in = 0U;
            ++(vlSymsp->__Vcoverage[1375]);
            ++(vlSymsp->__Vcoverage[1440]);
        }
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1441]);
    }
    __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__122__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__124__id = 0x00000017U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__124__id;
    __Vfunc_testbench__DOT__test_name__125__id = __Vtask_testbench__DOT__start_test__124__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__125__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__125__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__125__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__125__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__125__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__125__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__125__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__125__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__125__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__125__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__125__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__125__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__125__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__125__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__125__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__125__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__125__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__125__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__125__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__125__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__125__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__125__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__125__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__125__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__125__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__125__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__125__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__124____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__125__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__124__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__124____VlefCall_0__test_name));
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
    vlSelfRef.testbench__DOT__input_vec[0U] = 7U;
    vlSelfRef.testbench__DOT__weight[0U] = 3U;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__129__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__131__id = 0x00000018U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__131__id;
    __Vfunc_testbench__DOT__test_name__132__id = __Vtask_testbench__DOT__start_test__131__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__132__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__132__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__132__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__132__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__132__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__132__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__132__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__132__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__132__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__132__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__132__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__132__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__132__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__132__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__132__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__132__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__132__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__132__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__132__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__132__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__132__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__132__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__132__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__132__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__132__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__132__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__132__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__131____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__132__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__131__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__131____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    vlSelfRef.testbench__DOT__c = 0U;
    while (VL_GTS_III(32, 9U, vlSelfRef.testbench__DOT__c)) {
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
        vlSelfRef.testbench__DOT__input_vec[0U] = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.testbench__DOT__c));
        vlSelfRef.testbench__DOT__weight[0U] = 2U;
        if ((((((0U == vlSelfRef.testbench__DOT__c) 
                | (2U == vlSelfRef.testbench__DOT__c)) 
               | (3U == vlSelfRef.testbench__DOT__c)) 
              | (6U == vlSelfRef.testbench__DOT__c)) 
             | (8U == vlSelfRef.testbench__DOT__c))) {
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 106);
            vlSelfRef.testbench__DOT__valid_in = 1U;
            vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__tx_count);
            ++(vlSymsp->__Vcoverage[1374]);
            ++(vlSymsp->__Vcoverage[1442]);
        } else {
            Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                             "@(negedge testbench.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge testbench.clk)", 
                                                                 "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                                 114);
            vlSelfRef.testbench__DOT__valid_in = 0U;
            ++(vlSymsp->__Vcoverage[1375]);
            ++(vlSymsp->__Vcoverage[1443]);
        }
        vlSelfRef.testbench__DOT__c = ((IData)(1U) 
                                       + vlSelfRef.testbench__DOT__c);
        ++(vlSymsp->__Vcoverage[1450]);
    }
    __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__136__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    __Vtask_testbench__DOT__start_test__138__id = 0x00000019U;
    vlSelfRef.testbench__DOT__current_test = __Vtask_testbench__DOT__start_test__138__id;
    __Vfunc_testbench__DOT__test_name__139__id = __Vtask_testbench__DOT__start_test__138__id;
    vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = ""s;
    if (((((((((0U == __Vfunc_testbench__DOT__test_name__139__id) 
               | (1U == __Vfunc_testbench__DOT__test_name__139__id)) 
              | (2U == __Vfunc_testbench__DOT__test_name__139__id)) 
             | (3U == __Vfunc_testbench__DOT__test_name__139__id)) 
            | (4U == __Vfunc_testbench__DOT__test_name__139__id)) 
           | (5U == __Vfunc_testbench__DOT__test_name__139__id)) 
          | (6U == __Vfunc_testbench__DOT__test_name__139__id)) 
         | (7U == __Vfunc_testbench__DOT__test_name__139__id))) {
        if ((0U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Reset inicial"s;
            ++(vlSymsp->__Vcoverage[1343]);
        } else if ((1U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Reset durante atividade"s;
            ++(vlSymsp->__Vcoverage[1344]);
        } else if ((2U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "1 elemento x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1345]);
        } else if ((3U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "4 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1346]);
        } else if ((4U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "8 elementos x 1 bit"s;
            ++(vlSymsp->__Vcoverage[1347]);
        } else if ((5U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "4 elementos x 8 bits"s;
            ++(vlSymsp->__Vcoverage[1348]);
        } else if ((6U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "12 elementos x 4 bits"s;
            ++(vlSymsp->__Vcoverage[1349]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Entrada em X"s;
            ++(vlSymsp->__Vcoverage[1350]);
        }
    } else if (((((((((8U == __Vfunc_testbench__DOT__test_name__139__id) 
                      | (9U == __Vfunc_testbench__DOT__test_name__139__id)) 
                     | (0x0000000aU == __Vfunc_testbench__DOT__test_name__139__id)) 
                    | (0x0000000bU == __Vfunc_testbench__DOT__test_name__139__id)) 
                   | (0x0000000cU == __Vfunc_testbench__DOT__test_name__139__id)) 
                  | (0x0000000dU == __Vfunc_testbench__DOT__test_name__139__id)) 
                 | (0x0000000eU == __Vfunc_testbench__DOT__test_name__139__id)) 
                | (0x0000000fU == __Vfunc_testbench__DOT__test_name__139__id))) {
        if ((8U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Entrada em Z"s;
            ++(vlSymsp->__Vcoverage[1351]);
        } else if ((9U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Z alternado"s;
            ++(vlSymsp->__Vcoverage[1352]);
        } else if ((0x0000000aU == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Z com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1353]);
        } else if ((0x0000000bU == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Z alternado com pesos X/Z"s;
            ++(vlSymsp->__Vcoverage[1354]);
        } else if ((0x0000000cU == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Entradas iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1355]);
        } else if ((0x0000000dU == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Pesos iguais a zero"s;
            ++(vlSymsp->__Vcoverage[1356]);
        } else if ((0x0000000eU == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Elemento unitario"s;
            ++(vlSymsp->__Vcoverage[1357]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Walking element"s;
            ++(vlSymsp->__Vcoverage[1358]);
        }
    } else if (((((((((0x00000010U == __Vfunc_testbench__DOT__test_name__139__id) 
                      | (0x00000011U == __Vfunc_testbench__DOT__test_name__139__id)) 
                     | (0x00000012U == __Vfunc_testbench__DOT__test_name__139__id)) 
                    | (0x00000013U == __Vfunc_testbench__DOT__test_name__139__id)) 
                   | (0x00000014U == __Vfunc_testbench__DOT__test_name__139__id)) 
                  | (0x00000015U == __Vfunc_testbench__DOT__test_name__139__id)) 
                 | (0x00000016U == __Vfunc_testbench__DOT__test_name__139__id)) 
                | (0x00000017U == __Vfunc_testbench__DOT__test_name__139__id))) {
        if ((0x00000010U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Extremos signed"s;
            ++(vlSymsp->__Vcoverage[1359]);
        } else if ((0x00000011U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Maximo positivo"s;
            ++(vlSymsp->__Vcoverage[1360]);
        } else if ((0x00000012U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Minimo negativo"s;
            ++(vlSymsp->__Vcoverage[1361]);
        } else if ((0x00000013U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Sinais alternados"s;
            ++(vlSymsp->__Vcoverage[1362]);
        } else if ((0x00000014U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Cancelamento perfeito"s;
            ++(vlSymsp->__Vcoverage[1363]);
        } else if ((0x00000015U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Operacoes back-to-back"s;
            ++(vlSymsp->__Vcoverage[1364]);
        } else if ((0x00000016U == __Vfunc_testbench__DOT__test_name__139__id)) {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Gaps em valid_in"s;
            ++(vlSymsp->__Vcoverage[1365]);
        } else {
            vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Impulso unico"s;
            ++(vlSymsp->__Vcoverage[1366]);
        }
    } else if ((0x00000018U == __Vfunc_testbench__DOT__test_name__139__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Padrao conhecido de valid"s;
        ++(vlSymsp->__Vcoverage[1367]);
    } else if ((0x00000019U == __Vfunc_testbench__DOT__test_name__139__id)) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Latencia apos reset"s;
        ++(vlSymsp->__Vcoverage[1368]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout = "Caso desconhecido"s;
        ++(vlSymsp->__Vcoverage[1369]);
    }
    ++(vlSymsp->__Vcoverage[1370]);
    vlSelfRef.__Vtask_testbench__DOT__start_test__138____VlefCall_0__test_name 
        = vlSelfRef.__Vfunc_testbench__DOT__test_name__139__Vfuncout;
    VL_WRITEF_NX("[RUN ] T%02d  %@\n",0,32,__Vtask_testbench__DOT__start_test__138__id,
                 -1,&(vlSelfRef.__Vtask_testbench__DOT__start_test__138____VlefCall_0__test_name));
    ++(vlSymsp->__Vcoverage[1373]);
    __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         130);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    vlSelfRef.testbench__DOT__rst = 1U;
    __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             131);
        __Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_testbench__DOT__pulse_reset__140__testbench__DOT__unnamedblk1_2__DOT____Vrepeat1 
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
    vlSelfRef.testbench__DOT__input_vec[0U] = 0x0dU;
    vlSelfRef.testbench__DOT__weight[0U] = 0xfbU;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         106);
    vlSelfRef.testbench__DOT__valid_in = 1U;
    vlSelfRef.testbench__DOT__tx_count = ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__tx_count);
    ++(vlSymsp->__Vcoverage[1374]);
    __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                     "@(negedge testbench.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                         114);
    vlSelfRef.testbench__DOT__valid_in = 0U;
    ++(vlSymsp->__Vcoverage[1375]);
    __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 6U;
    while (VL_LTS_III(32, 0U, __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtestbench___024root____VbeforeTrig_h6748eb2a__0(vlSelf, 
                                                         "@(negedge testbench.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h6748eb2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge testbench.clk)", 
                                                             "/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 
                                                             123);
        __Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_testbench__DOT__drain_and_report__143__testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[1376]);
    }
    ++(vlSymsp->__Vcoverage[1377]);
    VL_WRITEF_NX("\n=========================================================================================\n                              DOTPRODUCT - RESULTADOS\n=========================================================================================\n ID   CASO                              APLICADAS  CHECADAS  DESCART.  RESULTADO\n-----------------------------------------------------------------------------------------\n",0);
    vlSelfRef.testbench__DOT__i = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[0U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T00  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[0U],
                     32,vlSelfRef.testbench__DOT__test_pass[0U],
                     32,vlSelfRef.testbench__DOT__test_flushed[0U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[0U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T00  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[0U],
                     32,vlSelfRef.testbench__DOT__test_pass[0U],
                     32,vlSelfRef.testbench__DOT__test_flushed[0U],
                     32,vlSelfRef.testbench__DOT__test_fail[0U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T00  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[0U],
                     32,vlSelfRef.testbench__DOT__test_pass[0U],
                     32,vlSelfRef.testbench__DOT__test_flushed[0U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 1U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[1U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 1U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T01  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[1U],
                     32,vlSelfRef.testbench__DOT__test_pass[1U],
                     32,vlSelfRef.testbench__DOT__test_flushed[1U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[1U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 1U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T01  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[1U],
                     32,vlSelfRef.testbench__DOT__test_pass[1U],
                     32,vlSelfRef.testbench__DOT__test_flushed[1U],
                     32,vlSelfRef.testbench__DOT__test_fail[1U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 1U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T01  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[1U],
                     32,vlSelfRef.testbench__DOT__test_pass[1U],
                     32,vlSelfRef.testbench__DOT__test_flushed[1U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 2U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[2U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 2U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T02  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[2U],
                     32,vlSelfRef.testbench__DOT__test_pass[2U],
                     32,vlSelfRef.testbench__DOT__test_flushed[2U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[2U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 2U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T02  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[2U],
                     32,vlSelfRef.testbench__DOT__test_pass[2U],
                     32,vlSelfRef.testbench__DOT__test_flushed[2U],
                     32,vlSelfRef.testbench__DOT__test_fail[2U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 2U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T02  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[2U],
                     32,vlSelfRef.testbench__DOT__test_pass[2U],
                     32,vlSelfRef.testbench__DOT__test_flushed[2U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 3U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[3U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 3U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T03  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[3U],
                     32,vlSelfRef.testbench__DOT__test_pass[3U],
                     32,vlSelfRef.testbench__DOT__test_flushed[3U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[3U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 3U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T03  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[3U],
                     32,vlSelfRef.testbench__DOT__test_pass[3U],
                     32,vlSelfRef.testbench__DOT__test_flushed[3U],
                     32,vlSelfRef.testbench__DOT__test_fail[3U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 3U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T03  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[3U],
                     32,vlSelfRef.testbench__DOT__test_pass[3U],
                     32,vlSelfRef.testbench__DOT__test_flushed[3U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 4U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[4U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 4U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T04  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[4U],
                     32,vlSelfRef.testbench__DOT__test_pass[4U],
                     32,vlSelfRef.testbench__DOT__test_flushed[4U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[4U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 4U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T04  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[4U],
                     32,vlSelfRef.testbench__DOT__test_pass[4U],
                     32,vlSelfRef.testbench__DOT__test_flushed[4U],
                     32,vlSelfRef.testbench__DOT__test_fail[4U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 4U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T04  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[4U],
                     32,vlSelfRef.testbench__DOT__test_pass[4U],
                     32,vlSelfRef.testbench__DOT__test_flushed[4U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 5U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[5U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 5U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T05  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[5U],
                     32,vlSelfRef.testbench__DOT__test_pass[5U],
                     32,vlSelfRef.testbench__DOT__test_flushed[5U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[5U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 5U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T05  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[5U],
                     32,vlSelfRef.testbench__DOT__test_pass[5U],
                     32,vlSelfRef.testbench__DOT__test_flushed[5U],
                     32,vlSelfRef.testbench__DOT__test_fail[5U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 5U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T05  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[5U],
                     32,vlSelfRef.testbench__DOT__test_pass[5U],
                     32,vlSelfRef.testbench__DOT__test_flushed[5U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 6U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[6U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 6U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T06  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[6U],
                     32,vlSelfRef.testbench__DOT__test_pass[6U],
                     32,vlSelfRef.testbench__DOT__test_flushed[6U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[6U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 6U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T06  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[6U],
                     32,vlSelfRef.testbench__DOT__test_pass[6U],
                     32,vlSelfRef.testbench__DOT__test_flushed[6U],
                     32,vlSelfRef.testbench__DOT__test_fail[6U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 6U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T06  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[6U],
                     32,vlSelfRef.testbench__DOT__test_pass[6U],
                     32,vlSelfRef.testbench__DOT__test_flushed[6U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 7U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[7U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 7U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T07  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[7U],
                     32,vlSelfRef.testbench__DOT__test_pass[7U],
                     32,vlSelfRef.testbench__DOT__test_flushed[7U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[7U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 7U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T07  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[7U],
                     32,vlSelfRef.testbench__DOT__test_pass[7U],
                     32,vlSelfRef.testbench__DOT__test_flushed[7U],
                     32,vlSelfRef.testbench__DOT__test_fail[7U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 7U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T07  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[7U],
                     32,vlSelfRef.testbench__DOT__test_pass[7U],
                     32,vlSelfRef.testbench__DOT__test_flushed[7U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 8U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[8U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 8U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T08  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[8U],
                     32,vlSelfRef.testbench__DOT__test_pass[8U],
                     32,vlSelfRef.testbench__DOT__test_flushed[8U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[8U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 8U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T08  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[8U],
                     32,vlSelfRef.testbench__DOT__test_pass[8U],
                     32,vlSelfRef.testbench__DOT__test_flushed[8U],
                     32,vlSelfRef.testbench__DOT__test_fail[8U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 8U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T08  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[8U],
                     32,vlSelfRef.testbench__DOT__test_pass[8U],
                     32,vlSelfRef.testbench__DOT__test_flushed[8U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 9U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[9U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 9U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T09  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[9U],
                     32,vlSelfRef.testbench__DOT__test_pass[9U],
                     32,vlSelfRef.testbench__DOT__test_flushed[9U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[9U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 9U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T09  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[9U],
                     32,vlSelfRef.testbench__DOT__test_pass[9U],
                     32,vlSelfRef.testbench__DOT__test_flushed[9U],
                     32,vlSelfRef.testbench__DOT__test_fail[9U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 9U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T09  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[9U],
                     32,vlSelfRef.testbench__DOT__test_pass[9U],
                     32,vlSelfRef.testbench__DOT__test_flushed[9U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[10U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000aU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T10  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[10U],
                     32,vlSelfRef.testbench__DOT__test_pass[10U],
                     32,vlSelfRef.testbench__DOT__test_flushed[10U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[10U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000aU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T10  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[10U],
                     32,vlSelfRef.testbench__DOT__test_pass[10U],
                     32,vlSelfRef.testbench__DOT__test_flushed[10U],
                     32,vlSelfRef.testbench__DOT__test_fail[10U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000aU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T10  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[10U],
                     32,vlSelfRef.testbench__DOT__test_pass[10U],
                     32,vlSelfRef.testbench__DOT__test_flushed[10U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000bU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[11U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000bU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T11  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[11U],
                     32,vlSelfRef.testbench__DOT__test_pass[11U],
                     32,vlSelfRef.testbench__DOT__test_flushed[11U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[11U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000bU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T11  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[11U],
                     32,vlSelfRef.testbench__DOT__test_pass[11U],
                     32,vlSelfRef.testbench__DOT__test_flushed[11U],
                     32,vlSelfRef.testbench__DOT__test_fail[11U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000bU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T11  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[11U],
                     32,vlSelfRef.testbench__DOT__test_pass[11U],
                     32,vlSelfRef.testbench__DOT__test_flushed[11U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000cU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[12U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000cU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T12  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[12U],
                     32,vlSelfRef.testbench__DOT__test_pass[12U],
                     32,vlSelfRef.testbench__DOT__test_flushed[12U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[12U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000cU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T12  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[12U],
                     32,vlSelfRef.testbench__DOT__test_pass[12U],
                     32,vlSelfRef.testbench__DOT__test_flushed[12U],
                     32,vlSelfRef.testbench__DOT__test_fail[12U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000cU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T12  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[12U],
                     32,vlSelfRef.testbench__DOT__test_pass[12U],
                     32,vlSelfRef.testbench__DOT__test_flushed[12U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000dU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[13U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000dU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T13  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[13U],
                     32,vlSelfRef.testbench__DOT__test_pass[13U],
                     32,vlSelfRef.testbench__DOT__test_flushed[13U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[13U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000dU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T13  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[13U],
                     32,vlSelfRef.testbench__DOT__test_pass[13U],
                     32,vlSelfRef.testbench__DOT__test_flushed[13U],
                     32,vlSelfRef.testbench__DOT__test_fail[13U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000dU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T13  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[13U],
                     32,vlSelfRef.testbench__DOT__test_pass[13U],
                     32,vlSelfRef.testbench__DOT__test_flushed[13U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000eU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[14U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000eU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T14  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[14U],
                     32,vlSelfRef.testbench__DOT__test_pass[14U],
                     32,vlSelfRef.testbench__DOT__test_flushed[14U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[14U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000eU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T14  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[14U],
                     32,vlSelfRef.testbench__DOT__test_pass[14U],
                     32,vlSelfRef.testbench__DOT__test_flushed[14U],
                     32,vlSelfRef.testbench__DOT__test_fail[14U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000eU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T14  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[14U],
                     32,vlSelfRef.testbench__DOT__test_pass[14U],
                     32,vlSelfRef.testbench__DOT__test_flushed[14U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000000fU;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[15U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x0000000fU;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T15  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[15U],
                     32,vlSelfRef.testbench__DOT__test_pass[15U],
                     32,vlSelfRef.testbench__DOT__test_flushed[15U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[15U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x0000000fU;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T15  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[15U],
                     32,vlSelfRef.testbench__DOT__test_pass[15U],
                     32,vlSelfRef.testbench__DOT__test_flushed[15U],
                     32,vlSelfRef.testbench__DOT__test_fail[15U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x0000000fU;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T15  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[15U],
                     32,vlSelfRef.testbench__DOT__test_pass[15U],
                     32,vlSelfRef.testbench__DOT__test_flushed[15U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000010U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[16U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000010U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T16  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[16U],
                     32,vlSelfRef.testbench__DOT__test_pass[16U],
                     32,vlSelfRef.testbench__DOT__test_flushed[16U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[16U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000010U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T16  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[16U],
                     32,vlSelfRef.testbench__DOT__test_pass[16U],
                     32,vlSelfRef.testbench__DOT__test_flushed[16U],
                     32,vlSelfRef.testbench__DOT__test_fail[16U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000010U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T16  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[16U],
                     32,vlSelfRef.testbench__DOT__test_pass[16U],
                     32,vlSelfRef.testbench__DOT__test_flushed[16U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000011U;
    ++(vlSymsp->__Vcoverage[1454]);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtestbench___024root___eval_initial__TOP__Vtiming__0__2(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[17U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000011U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T17  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[17U],
                     32,vlSelfRef.testbench__DOT__test_pass[17U],
                     32,vlSelfRef.testbench__DOT__test_flushed[17U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[17U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000011U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T17  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[17U],
                     32,vlSelfRef.testbench__DOT__test_pass[17U],
                     32,vlSelfRef.testbench__DOT__test_flushed[17U],
                     32,vlSelfRef.testbench__DOT__test_fail[17U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000011U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T17  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[17U],
                     32,vlSelfRef.testbench__DOT__test_pass[17U],
                     32,vlSelfRef.testbench__DOT__test_flushed[17U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000012U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[18U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000012U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T18  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[18U],
                     32,vlSelfRef.testbench__DOT__test_pass[18U],
                     32,vlSelfRef.testbench__DOT__test_flushed[18U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[18U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000012U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T18  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[18U],
                     32,vlSelfRef.testbench__DOT__test_pass[18U],
                     32,vlSelfRef.testbench__DOT__test_flushed[18U],
                     32,vlSelfRef.testbench__DOT__test_fail[18U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000012U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T18  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[18U],
                     32,vlSelfRef.testbench__DOT__test_pass[18U],
                     32,vlSelfRef.testbench__DOT__test_flushed[18U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000013U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[19U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000013U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T19  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[19U],
                     32,vlSelfRef.testbench__DOT__test_pass[19U],
                     32,vlSelfRef.testbench__DOT__test_flushed[19U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[19U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000013U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T19  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[19U],
                     32,vlSelfRef.testbench__DOT__test_pass[19U],
                     32,vlSelfRef.testbench__DOT__test_flushed[19U],
                     32,vlSelfRef.testbench__DOT__test_fail[19U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000013U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T19  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[19U],
                     32,vlSelfRef.testbench__DOT__test_pass[19U],
                     32,vlSelfRef.testbench__DOT__test_flushed[19U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000014U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[20U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000014U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T20  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[20U],
                     32,vlSelfRef.testbench__DOT__test_pass[20U],
                     32,vlSelfRef.testbench__DOT__test_flushed[20U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[20U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000014U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T20  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[20U],
                     32,vlSelfRef.testbench__DOT__test_pass[20U],
                     32,vlSelfRef.testbench__DOT__test_flushed[20U],
                     32,vlSelfRef.testbench__DOT__test_fail[20U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000014U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T20  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[20U],
                     32,vlSelfRef.testbench__DOT__test_pass[20U],
                     32,vlSelfRef.testbench__DOT__test_flushed[20U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000015U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[21U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000015U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T21  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[21U],
                     32,vlSelfRef.testbench__DOT__test_pass[21U],
                     32,vlSelfRef.testbench__DOT__test_flushed[21U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[21U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000015U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T21  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[21U],
                     32,vlSelfRef.testbench__DOT__test_pass[21U],
                     32,vlSelfRef.testbench__DOT__test_flushed[21U],
                     32,vlSelfRef.testbench__DOT__test_fail[21U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000015U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T21  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[21U],
                     32,vlSelfRef.testbench__DOT__test_pass[21U],
                     32,vlSelfRef.testbench__DOT__test_flushed[21U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000016U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[22U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000016U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T22  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[22U],
                     32,vlSelfRef.testbench__DOT__test_pass[22U],
                     32,vlSelfRef.testbench__DOT__test_flushed[22U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[22U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000016U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T22  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[22U],
                     32,vlSelfRef.testbench__DOT__test_pass[22U],
                     32,vlSelfRef.testbench__DOT__test_flushed[22U],
                     32,vlSelfRef.testbench__DOT__test_fail[22U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000016U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T22  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[22U],
                     32,vlSelfRef.testbench__DOT__test_pass[22U],
                     32,vlSelfRef.testbench__DOT__test_flushed[22U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000017U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[23U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000017U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T23  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[23U],
                     32,vlSelfRef.testbench__DOT__test_pass[23U],
                     32,vlSelfRef.testbench__DOT__test_flushed[23U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[23U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000017U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T23  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[23U],
                     32,vlSelfRef.testbench__DOT__test_pass[23U],
                     32,vlSelfRef.testbench__DOT__test_flushed[23U],
                     32,vlSelfRef.testbench__DOT__test_fail[23U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000017U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T23  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[23U],
                     32,vlSelfRef.testbench__DOT__test_pass[23U],
                     32,vlSelfRef.testbench__DOT__test_flushed[23U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000018U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[24U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000018U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T24  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[24U],
                     32,vlSelfRef.testbench__DOT__test_pass[24U],
                     32,vlSelfRef.testbench__DOT__test_flushed[24U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[24U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000018U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T24  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[24U],
                     32,vlSelfRef.testbench__DOT__test_pass[24U],
                     32,vlSelfRef.testbench__DOT__test_flushed[24U],
                     32,vlSelfRef.testbench__DOT__test_fail[24U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000018U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T24  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[24U],
                     32,vlSelfRef.testbench__DOT__test_pass[24U],
                     32,vlSelfRef.testbench__DOT__test_flushed[24U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x00000019U;
    ++(vlSymsp->__Vcoverage[1454]);
    if (VL_UNLIKELY(((0U != vlSelfRef.testbench__DOT__test_skip[25U])))) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id = 0x00000019U;
        vlSelfRef.testbench__DOT____VlemCall_10__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__145__id)) {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_10__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T25  %-32@ %9d %9d %9d  SKIP\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_10__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[25U],
                     32,vlSelfRef.testbench__DOT__test_pass[25U],
                     32,vlSelfRef.testbench__DOT__test_flushed[25U]);
        ++(vlSymsp->__Vcoverage[1453]);
    } else if ((0U != vlSelfRef.testbench__DOT__test_fail[25U])) {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id = 0x00000019U;
        vlSelfRef.testbench__DOT____VlemCall_11__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__146__id)) {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_11__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T25  %-32@ %9d %9d %9d  FAIL (%0d)\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_11__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[25U],
                     32,vlSelfRef.testbench__DOT__test_pass[25U],
                     32,vlSelfRef.testbench__DOT__test_flushed[25U],
                     32,vlSelfRef.testbench__DOT__test_fail[25U]);
        ++(vlSymsp->__Vcoverage[1451]);
    } else {
        vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id = 0x00000019U;
        vlSelfRef.testbench__DOT____VlemCall_12__test_name = ""s;
        if (((((((((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                   | (1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                  | (2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                 | (3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                | (4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
               | (5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
              | (6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
             | (7U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset inicial"s;
                ++(vlSymsp->__Vcoverage[1343]);
            } else if ((1U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Reset durante atividade"s;
                ++(vlSymsp->__Vcoverage[1344]);
            } else if ((2U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "1 elemento x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1345]);
            } else if ((3U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1346]);
            } else if ((4U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "8 elementos x 1 bit"s;
                ++(vlSymsp->__Vcoverage[1347]);
            } else if ((5U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "4 elementos x 8 bits"s;
                ++(vlSymsp->__Vcoverage[1348]);
            } else if ((6U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "12 elementos x 4 bits"s;
                ++(vlSymsp->__Vcoverage[1349]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em X"s;
                ++(vlSymsp->__Vcoverage[1350]);
            }
        } else if (((((((((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x0000000fU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((8U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entrada em Z"s;
                ++(vlSymsp->__Vcoverage[1351]);
            } else if ((9U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado"s;
                ++(vlSymsp->__Vcoverage[1352]);
            } else if ((0x0000000aU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1353]);
            } else if ((0x0000000bU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Z alternado com pesos X/Z"s;
                ++(vlSymsp->__Vcoverage[1354]);
            } else if ((0x0000000cU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Entradas iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1355]);
            } else if ((0x0000000dU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Pesos iguais a zero"s;
                ++(vlSymsp->__Vcoverage[1356]);
            } else if ((0x0000000eU == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Elemento unitario"s;
                ++(vlSymsp->__Vcoverage[1357]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Walking element"s;
                ++(vlSymsp->__Vcoverage[1358]);
            }
        } else if (((((((((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id) 
                          | (0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                         | (0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                        | (0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                       | (0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                      | (0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                     | (0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) 
                    | (0x00000017U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id))) {
            if ((0x00000010U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Extremos signed"s;
                ++(vlSymsp->__Vcoverage[1359]);
            } else if ((0x00000011U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Maximo positivo"s;
                ++(vlSymsp->__Vcoverage[1360]);
            } else if ((0x00000012U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Minimo negativo"s;
                ++(vlSymsp->__Vcoverage[1361]);
            } else if ((0x00000013U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Sinais alternados"s;
                ++(vlSymsp->__Vcoverage[1362]);
            } else if ((0x00000014U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Cancelamento perfeito"s;
                ++(vlSymsp->__Vcoverage[1363]);
            } else if ((0x00000015U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Operacoes back-to-back"s;
                ++(vlSymsp->__Vcoverage[1364]);
            } else if ((0x00000016U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Gaps em valid_in"s;
                ++(vlSymsp->__Vcoverage[1365]);
            } else {
                vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Impulso unico"s;
                ++(vlSymsp->__Vcoverage[1366]);
            }
        } else if ((0x00000018U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Padrao conhecido de valid"s;
            ++(vlSymsp->__Vcoverage[1367]);
        } else if ((0x00000019U == vlSelfRef.__Vfunc_testbench__DOT__test_name__147__id)) {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Latencia apos reset"s;
            ++(vlSymsp->__Vcoverage[1368]);
        } else {
            vlSelfRef.testbench__DOT____VlemCall_12__test_name = "Caso desconhecido"s;
            ++(vlSymsp->__Vcoverage[1369]);
        }
        ++(vlSymsp->__Vcoverage[1370]);
        VL_WRITEF_NX(" T25  %-32@ %9d %9d %9d  PASS\n",0,
                     -1,&(vlSelfRef.testbench__DOT____VlemCall_12__test_name),
                     32,vlSelfRef.testbench__DOT__test_sent[25U],
                     32,vlSelfRef.testbench__DOT__test_pass[25U],
                     32,vlSelfRef.testbench__DOT__test_flushed[25U]);
        ++(vlSymsp->__Vcoverage[1452]);
    }
    vlSelfRef.testbench__DOT__i = 0x0000001aU;
    ++(vlSymsp->__Vcoverage[1454]);
    VL_WRITEF_NX("=========================================================================================\n Varreduras T02-T06 : %0d / 281600\n Total aplicado      : %0d\n Total checado       : %0d\n Descartado por reset: %0d\n Latencia            : 6 ciclos (%0d PASS / %0d FAIL)\n Erros               : dados=%0d valid=%0d desconhecidos=%0d\n-----------------------------------------------------------------------------------------\n",0,
                 32,((((vlSelfRef.testbench__DOT__test_sent[2U] 
                        + vlSelfRef.testbench__DOT__test_sent[3U]) 
                       + vlSelfRef.testbench__DOT__test_sent[4U]) 
                      + vlSelfRef.testbench__DOT__test_sent[5U]) 
                     + vlSelfRef.testbench__DOT__test_sent[6U]),
                 32,vlSelfRef.testbench__DOT__total_sent,
                 32,vlSelfRef.testbench__DOT__total_recv,
                 32,vlSelfRef.testbench__DOT__total_flushed,
                 32,vlSelfRef.testbench__DOT__latency_pass,
                 32,vlSelfRef.testbench__DOT__latency_fail,
                 32,vlSelfRef.testbench__DOT__data_fail,
                 32,vlSelfRef.testbench__DOT__valid_fail,
                 32,vlSelfRef.testbench__DOT__unknown_fail);
    if (((0U != vlSelfRef.testbench__DOT__total_fail) 
         | (vlSelfRef.testbench__DOT__total_sent != 
            (vlSelfRef.testbench__DOT__total_recv + vlSelfRef.testbench__DOT__total_flushed)))) {
        VL_WRITEF_NX(" RESULTADO FINAL      : FAIL\n[%0t] %%Fatal: testbench.sv:387: Assertion failed in %Ntestbench: REGRESSAO DOTPRODUCT FALHOU\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 387, "", false);
    } else {
        VL_WRITEF_NX(" RESULTADO FINAL      : PASS\n=========================================================================================\n",0);
        VL_FINISH_MT("/home/matheus/Documentos/CNN/CNN/testbenchs/DOT/testbench.sv", 391, "");
        ++(vlSymsp->__Vcoverage[1455]);
    }
    if ((8U == vlSelfRef.testbench__DOT__c)) {
        ++(vlSymsp->__Vcoverage[1444]);
    }
    if ((6U == vlSelfRef.testbench__DOT__c)) {
        ++(vlSymsp->__Vcoverage[1445]);
    }
    if ((3U == vlSelfRef.testbench__DOT__c)) {
        ++(vlSymsp->__Vcoverage[1446]);
    }
    if ((2U == vlSelfRef.testbench__DOT__c)) {
        ++(vlSymsp->__Vcoverage[1447]);
    }
    if ((0U == vlSelfRef.testbench__DOT__c)) {
        ++(vlSymsp->__Vcoverage[1448]);
    }
    if ((((((0U != vlSelfRef.testbench__DOT__c) & (2U 
                                                   != vlSelfRef.testbench__DOT__c)) 
           & (3U != vlSelfRef.testbench__DOT__c)) & 
          (6U != vlSelfRef.testbench__DOT__c)) & (8U 
                                                  != vlSelfRef.testbench__DOT__c))) {
        ++(vlSymsp->__Vcoverage[1449]);
    }
    if ((vlSelfRef.testbench__DOT__total_sent != (vlSelfRef.testbench__DOT__total_recv 
                                                  + vlSelfRef.testbench__DOT__total_flushed))) {
        ++(vlSymsp->__Vcoverage[1456]);
    }
    if ((0U != vlSelfRef.testbench__DOT__total_fail)) {
        ++(vlSymsp->__Vcoverage[1457]);
    }
    if (((0U == vlSelfRef.testbench__DOT__total_fail) 
         & (vlSelfRef.testbench__DOT__total_sent == 
            (vlSelfRef.testbench__DOT__total_recv + vlSelfRef.testbench__DOT__total_flushed)))) {
        ++(vlSymsp->__Vcoverage[1458]);
    }
    ++(vlSymsp->__Vcoverage[1459]);
}
