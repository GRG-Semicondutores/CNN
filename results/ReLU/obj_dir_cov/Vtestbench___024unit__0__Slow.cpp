// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VL_ATTR_COLD void Vtestbench___024unit___ctor_var_reset(Vtestbench___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench___024unit___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}

VL_ATTR_COLD void Vtestbench___024unit___configure_coverage(Vtestbench___024unit* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench___024unit___configure_coverage\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
