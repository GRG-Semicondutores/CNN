// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT____Vlvbound_h94151d73__1;
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__rst;
    CData/*0:0*/ testbench__DOT__valid_in;
    CData/*0:0*/ testbench__DOT__dut__DOT____Vlvbound_h25c63994__0;
    CData/*5:0*/ testbench__DOT__dut__DOT__valid_pipe;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*20:0*/ testbench__DOT____Vlvbound_h03fef9ee__1;
    IData/*20:0*/ testbench__DOT____VlemCall_0__dot_reference;
    IData/*31:0*/ testbench__DOT__pass_count;
    IData/*31:0*/ testbench__DOT__fail_count;
    IData/*31:0*/ testbench__DOT__sent_count;
    IData/*31:0*/ testbench__DOT__recv_count;
    IData/*31:0*/ testbench__DOT__cycle_count;
    IData/*31:0*/ testbench__DOT__i;
    IData/*31:0*/ testbench__DOT__p;
    IData/*31:0*/ testbench__DOT__dut__DOT__v;
    IData/*31:0*/ testbench__DOT__dut__DOT__m;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 32> testbench__DOT__input_vec;
    VlUnpacked<CData/*7:0*/, 32> testbench__DOT__weight;
    VlUnpacked<IData/*20:0*/, 6> testbench__DOT__expected_pipe;
    VlUnpacked<CData/*0:0*/, 6> testbench__DOT__valid_expected;
    VlUnpacked<CData/*7:0*/, 32> testbench__DOT__dut__DOT__input_vec;
    VlUnpacked<CData/*7:0*/, 32> testbench__DOT__dut__DOT__weight;
    VlUnpacked<VlUnpacked<IData/*20:0*/, 32>, 6> testbench__DOT__dut__DOT__soma;
    VlUnpacked<IData/*20:0*/, 32> testbench__DOT__dut__DOT__mult;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6748eb2a__0;
    VlTriggerScheduler __VtrigSched_h6748ea00__0;

    // INTERNAL VARIABLES
    Vtestbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* namep);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
