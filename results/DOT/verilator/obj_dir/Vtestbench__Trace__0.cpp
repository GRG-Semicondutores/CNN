// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.testbench__DOT__input_vec[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.testbench__DOT__input_vec[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.testbench__DOT__input_vec[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.testbench__DOT__input_vec[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.testbench__DOT__input_vec[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.testbench__DOT__input_vec[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.testbench__DOT__input_vec[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.testbench__DOT__input_vec[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.testbench__DOT__input_vec[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.testbench__DOT__input_vec[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.testbench__DOT__input_vec[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.testbench__DOT__input_vec[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.testbench__DOT__input_vec[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.testbench__DOT__input_vec[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.testbench__DOT__input_vec[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.testbench__DOT__input_vec[15]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.testbench__DOT__input_vec[16]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.testbench__DOT__input_vec[17]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.testbench__DOT__input_vec[18]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.testbench__DOT__input_vec[19]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.testbench__DOT__input_vec[20]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.testbench__DOT__input_vec[21]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.testbench__DOT__input_vec[22]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.testbench__DOT__input_vec[23]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.testbench__DOT__input_vec[24]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.testbench__DOT__input_vec[25]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.testbench__DOT__input_vec[26]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.testbench__DOT__input_vec[27]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.testbench__DOT__input_vec[28]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.testbench__DOT__input_vec[29]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.testbench__DOT__input_vec[30]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.testbench__DOT__input_vec[31]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.testbench__DOT__weight[0]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.testbench__DOT__weight[1]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.testbench__DOT__weight[2]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.testbench__DOT__weight[3]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.testbench__DOT__weight[4]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.testbench__DOT__weight[5]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.testbench__DOT__weight[6]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.testbench__DOT__weight[7]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.testbench__DOT__weight[8]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.testbench__DOT__weight[9]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.testbench__DOT__weight[10]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.testbench__DOT__weight[11]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.testbench__DOT__weight[12]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.testbench__DOT__weight[13]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.testbench__DOT__weight[14]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.testbench__DOT__weight[15]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.testbench__DOT__weight[16]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.testbench__DOT__weight[17]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.testbench__DOT__weight[18]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.testbench__DOT__weight[19]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.testbench__DOT__weight[20]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.testbench__DOT__weight[21]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.testbench__DOT__weight[22]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.testbench__DOT__weight[23]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.testbench__DOT__weight[24]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.testbench__DOT__weight[25]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.testbench__DOT__weight[26]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.testbench__DOT__weight[27]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.testbench__DOT__weight[28]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.testbench__DOT__weight[29]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.testbench__DOT__weight[30]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.testbench__DOT__weight[31]),8);
        bufp->chgIData(oldp+64,(vlSelfRef.testbench__DOT__i),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+65,(vlSelfRef.testbench__DOT__expected_pipe[0]),21);
        bufp->chgIData(oldp+66,(vlSelfRef.testbench__DOT__expected_pipe[1]),21);
        bufp->chgIData(oldp+67,(vlSelfRef.testbench__DOT__expected_pipe[2]),21);
        bufp->chgIData(oldp+68,(vlSelfRef.testbench__DOT__expected_pipe[3]),21);
        bufp->chgIData(oldp+69,(vlSelfRef.testbench__DOT__expected_pipe[4]),21);
        bufp->chgIData(oldp+70,(vlSelfRef.testbench__DOT__expected_pipe[5]),21);
        bufp->chgBit(oldp+71,(vlSelfRef.testbench__DOT__valid_expected[0]));
        bufp->chgBit(oldp+72,(vlSelfRef.testbench__DOT__valid_expected[1]));
        bufp->chgBit(oldp+73,(vlSelfRef.testbench__DOT__valid_expected[2]));
        bufp->chgBit(oldp+74,(vlSelfRef.testbench__DOT__valid_expected[3]));
        bufp->chgBit(oldp+75,(vlSelfRef.testbench__DOT__valid_expected[4]));
        bufp->chgBit(oldp+76,(vlSelfRef.testbench__DOT__valid_expected[5]));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgCData(oldp+77,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[0]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[1]),8);
        bufp->chgCData(oldp+79,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[2]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[3]),8);
        bufp->chgCData(oldp+81,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[4]),8);
        bufp->chgCData(oldp+82,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[5]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[6]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[7]),8);
        bufp->chgCData(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[8]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[9]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[10]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[11]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[12]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[13]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[14]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[15]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[16]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[17]),8);
        bufp->chgCData(oldp+95,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[18]),8);
        bufp->chgCData(oldp+96,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[19]),8);
        bufp->chgCData(oldp+97,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[20]),8);
        bufp->chgCData(oldp+98,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[21]),8);
        bufp->chgCData(oldp+99,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[22]),8);
        bufp->chgCData(oldp+100,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[23]),8);
        bufp->chgCData(oldp+101,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[24]),8);
        bufp->chgCData(oldp+102,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[25]),8);
        bufp->chgCData(oldp+103,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[26]),8);
        bufp->chgCData(oldp+104,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[27]),8);
        bufp->chgCData(oldp+105,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[28]),8);
        bufp->chgCData(oldp+106,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[29]),8);
        bufp->chgCData(oldp+107,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[30]),8);
        bufp->chgCData(oldp+108,(vlSelfRef.testbench__DOT__dut__DOT__input_vec[31]),8);
        bufp->chgCData(oldp+109,(vlSelfRef.testbench__DOT__dut__DOT__weight[0]),8);
        bufp->chgCData(oldp+110,(vlSelfRef.testbench__DOT__dut__DOT__weight[1]),8);
        bufp->chgCData(oldp+111,(vlSelfRef.testbench__DOT__dut__DOT__weight[2]),8);
        bufp->chgCData(oldp+112,(vlSelfRef.testbench__DOT__dut__DOT__weight[3]),8);
        bufp->chgCData(oldp+113,(vlSelfRef.testbench__DOT__dut__DOT__weight[4]),8);
        bufp->chgCData(oldp+114,(vlSelfRef.testbench__DOT__dut__DOT__weight[5]),8);
        bufp->chgCData(oldp+115,(vlSelfRef.testbench__DOT__dut__DOT__weight[6]),8);
        bufp->chgCData(oldp+116,(vlSelfRef.testbench__DOT__dut__DOT__weight[7]),8);
        bufp->chgCData(oldp+117,(vlSelfRef.testbench__DOT__dut__DOT__weight[8]),8);
        bufp->chgCData(oldp+118,(vlSelfRef.testbench__DOT__dut__DOT__weight[9]),8);
        bufp->chgCData(oldp+119,(vlSelfRef.testbench__DOT__dut__DOT__weight[10]),8);
        bufp->chgCData(oldp+120,(vlSelfRef.testbench__DOT__dut__DOT__weight[11]),8);
        bufp->chgCData(oldp+121,(vlSelfRef.testbench__DOT__dut__DOT__weight[12]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.testbench__DOT__dut__DOT__weight[13]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.testbench__DOT__dut__DOT__weight[14]),8);
        bufp->chgCData(oldp+124,(vlSelfRef.testbench__DOT__dut__DOT__weight[15]),8);
        bufp->chgCData(oldp+125,(vlSelfRef.testbench__DOT__dut__DOT__weight[16]),8);
        bufp->chgCData(oldp+126,(vlSelfRef.testbench__DOT__dut__DOT__weight[17]),8);
        bufp->chgCData(oldp+127,(vlSelfRef.testbench__DOT__dut__DOT__weight[18]),8);
        bufp->chgCData(oldp+128,(vlSelfRef.testbench__DOT__dut__DOT__weight[19]),8);
        bufp->chgCData(oldp+129,(vlSelfRef.testbench__DOT__dut__DOT__weight[20]),8);
        bufp->chgCData(oldp+130,(vlSelfRef.testbench__DOT__dut__DOT__weight[21]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.testbench__DOT__dut__DOT__weight[22]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.testbench__DOT__dut__DOT__weight[23]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.testbench__DOT__dut__DOT__weight[24]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.testbench__DOT__dut__DOT__weight[25]),8);
        bufp->chgCData(oldp+135,(vlSelfRef.testbench__DOT__dut__DOT__weight[26]),8);
        bufp->chgCData(oldp+136,(vlSelfRef.testbench__DOT__dut__DOT__weight[27]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.testbench__DOT__dut__DOT__weight[28]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.testbench__DOT__dut__DOT__weight[29]),8);
        bufp->chgCData(oldp+139,(vlSelfRef.testbench__DOT__dut__DOT__weight[30]),8);
        bufp->chgCData(oldp+140,(vlSelfRef.testbench__DOT__dut__DOT__weight[31]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe) 
                                      >> 5U))));
        bufp->chgIData(oldp+142,(vlSelfRef.testbench__DOT__dut__DOT__soma[4U][0U]),21);
        bufp->chgIData(oldp+143,(vlSelfRef.testbench__DOT__dut__DOT__mult[0]),21);
        bufp->chgIData(oldp+144,(vlSelfRef.testbench__DOT__dut__DOT__mult[1]),21);
        bufp->chgIData(oldp+145,(vlSelfRef.testbench__DOT__dut__DOT__mult[2]),21);
        bufp->chgIData(oldp+146,(vlSelfRef.testbench__DOT__dut__DOT__mult[3]),21);
        bufp->chgIData(oldp+147,(vlSelfRef.testbench__DOT__dut__DOT__mult[4]),21);
        bufp->chgIData(oldp+148,(vlSelfRef.testbench__DOT__dut__DOT__mult[5]),21);
        bufp->chgIData(oldp+149,(vlSelfRef.testbench__DOT__dut__DOT__mult[6]),21);
        bufp->chgIData(oldp+150,(vlSelfRef.testbench__DOT__dut__DOT__mult[7]),21);
        bufp->chgIData(oldp+151,(vlSelfRef.testbench__DOT__dut__DOT__mult[8]),21);
        bufp->chgIData(oldp+152,(vlSelfRef.testbench__DOT__dut__DOT__mult[9]),21);
        bufp->chgIData(oldp+153,(vlSelfRef.testbench__DOT__dut__DOT__mult[10]),21);
        bufp->chgIData(oldp+154,(vlSelfRef.testbench__DOT__dut__DOT__mult[11]),21);
        bufp->chgIData(oldp+155,(vlSelfRef.testbench__DOT__dut__DOT__mult[12]),21);
        bufp->chgIData(oldp+156,(vlSelfRef.testbench__DOT__dut__DOT__mult[13]),21);
        bufp->chgIData(oldp+157,(vlSelfRef.testbench__DOT__dut__DOT__mult[14]),21);
        bufp->chgIData(oldp+158,(vlSelfRef.testbench__DOT__dut__DOT__mult[15]),21);
        bufp->chgIData(oldp+159,(vlSelfRef.testbench__DOT__dut__DOT__mult[16]),21);
        bufp->chgIData(oldp+160,(vlSelfRef.testbench__DOT__dut__DOT__mult[17]),21);
        bufp->chgIData(oldp+161,(vlSelfRef.testbench__DOT__dut__DOT__mult[18]),21);
        bufp->chgIData(oldp+162,(vlSelfRef.testbench__DOT__dut__DOT__mult[19]),21);
        bufp->chgIData(oldp+163,(vlSelfRef.testbench__DOT__dut__DOT__mult[20]),21);
        bufp->chgIData(oldp+164,(vlSelfRef.testbench__DOT__dut__DOT__mult[21]),21);
        bufp->chgIData(oldp+165,(vlSelfRef.testbench__DOT__dut__DOT__mult[22]),21);
        bufp->chgIData(oldp+166,(vlSelfRef.testbench__DOT__dut__DOT__mult[23]),21);
        bufp->chgIData(oldp+167,(vlSelfRef.testbench__DOT__dut__DOT__mult[24]),21);
        bufp->chgIData(oldp+168,(vlSelfRef.testbench__DOT__dut__DOT__mult[25]),21);
        bufp->chgIData(oldp+169,(vlSelfRef.testbench__DOT__dut__DOT__mult[26]),21);
        bufp->chgIData(oldp+170,(vlSelfRef.testbench__DOT__dut__DOT__mult[27]),21);
        bufp->chgIData(oldp+171,(vlSelfRef.testbench__DOT__dut__DOT__mult[28]),21);
        bufp->chgIData(oldp+172,(vlSelfRef.testbench__DOT__dut__DOT__mult[29]),21);
        bufp->chgIData(oldp+173,(vlSelfRef.testbench__DOT__dut__DOT__mult[30]),21);
        bufp->chgIData(oldp+174,(vlSelfRef.testbench__DOT__dut__DOT__mult[31]),21);
        bufp->chgCData(oldp+175,(vlSelfRef.testbench__DOT__dut__DOT__valid_pipe),6);
        bufp->chgIData(oldp+176,(vlSelfRef.testbench__DOT__dut__DOT__v),32);
        bufp->chgIData(oldp+177,(vlSelfRef.testbench__DOT__dut__DOT__m),32);
    }
    bufp->chgBit(oldp+178,(vlSelfRef.testbench__DOT__clk));
    bufp->chgBit(oldp+179,(vlSelfRef.testbench__DOT__rst));
    bufp->chgBit(oldp+180,(vlSelfRef.testbench__DOT__valid_in));
    bufp->chgIData(oldp+181,(vlSelfRef.testbench__DOT__pass_count),32);
    bufp->chgIData(oldp+182,(vlSelfRef.testbench__DOT__fail_count),32);
    bufp->chgIData(oldp+183,(vlSelfRef.testbench__DOT__sent_count),32);
    bufp->chgIData(oldp+184,(vlSelfRef.testbench__DOT__recv_count),32);
    bufp->chgIData(oldp+185,(vlSelfRef.testbench__DOT__cycle_count),32);
    bufp->chgIData(oldp+186,(vlSelfRef.testbench__DOT__p),32);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
