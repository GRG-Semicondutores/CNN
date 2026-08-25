// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT____Vlvbound_h7b6b6da2__1;
        CData/*0:0*/ testbench__DOT__clk;
        CData/*0:0*/ testbench__DOT__rst;
        CData/*0:0*/ testbench__DOT__valid_in;
        CData/*0:0*/ testbench__DOT____Vtogcov__clk;
        CData/*0:0*/ testbench__DOT____Vtogcov__rst;
        CData/*0:0*/ testbench__DOT____Vtogcov__valid_in;
        CData/*0:0*/ testbench__DOT____Vtogcov__valid_out;
        CData/*0:0*/ testbench__DOT__dut__DOT____Vlvbound_h25c63994__0;
        CData/*5:0*/ testbench__DOT__dut__DOT__valid_pipe;
        CData/*5:0*/ testbench__DOT__dut__DOT____Vtogcov__valid_pipe;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ testbench__DOT____Vlvbound_h4e2f4d72__1;
        IData/*31:0*/ testbench__DOT____Vlvbound_h08608d3b__0;
        IData/*31:0*/ testbench__DOT____Vlvbound_h4e2f4d72__0;
        IData/*31:0*/ testbench__DOT____Vlvbound_he1da9667__0;
        IData/*31:0*/ testbench__DOT____Vlvbound_h1d504a5a__1;
        IData/*31:0*/ testbench__DOT____Vlvbound_hcd9c4027__1;
        IData/*20:0*/ testbench__DOT____Vlvbound_hb4d3257f__1;
        IData/*31:0*/ testbench__DOT____Vlvbound_h250f6824__0;
        IData/*31:0*/ testbench__DOT____VlemExpr_6;
        IData/*31:0*/ testbench__DOT____VlemExpr_5;
        IData/*31:0*/ testbench__DOT____VlemExpr_4;
        IData/*31:0*/ testbench__DOT____VlemExpr_3;
        IData/*31:0*/ testbench__DOT____VlemExpr_2;
        IData/*31:0*/ testbench__DOT____VlemExpr_1;
        IData/*20:0*/ testbench__DOT____VlemCall_0__reference_dot;
        IData/*31:0*/ testbench__DOT__total_sent;
        IData/*31:0*/ testbench__DOT__total_recv;
        IData/*31:0*/ testbench__DOT__total_pass;
        IData/*31:0*/ testbench__DOT__total_fail;
        IData/*31:0*/ testbench__DOT__total_flushed;
        IData/*31:0*/ testbench__DOT__latency_pass;
        IData/*31:0*/ testbench__DOT__latency_fail;
        IData/*31:0*/ testbench__DOT__valid_fail;
        IData/*31:0*/ testbench__DOT__data_fail;
        IData/*31:0*/ testbench__DOT__unknown_fail;
        IData/*31:0*/ testbench__DOT__cycle_count;
        IData/*31:0*/ testbench__DOT__current_test;
        IData/*31:0*/ testbench__DOT__tx_count;
        IData/*31:0*/ testbench__DOT__i;
        IData/*31:0*/ testbench__DOT__j;
        IData/*31:0*/ testbench__DOT__r;
        IData/*31:0*/ testbench__DOT__c;
        IData/*20:0*/ testbench__DOT____Vtogcov__out;
        IData/*31:0*/ testbench__DOT__dut__DOT__v;
        IData/*31:0*/ testbench__DOT__dut__DOT__m;
        IData/*31:0*/ __Vtask_testbench__DOT__start_test__117__id;
        IData/*31:0*/ __Vfunc_testbench__DOT__test_name__118__id;
        IData/*31:0*/ __Vfunc_testbench__DOT__test_name__145__id;
        IData/*31:0*/ __Vfunc_testbench__DOT__test_name__146__id;
        IData/*31:0*/ __Vfunc_testbench__DOT__test_name__147__id;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT__input_vec;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT__weight;
        VlUnpacked<IData/*20:0*/, 6> testbench__DOT__exp_pipe;
        VlUnpacked<CData/*0:0*/, 6> testbench__DOT__exp_valid;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 6> testbench__DOT__exp_test;
        VlUnpacked<IData/*31:0*/, 6> testbench__DOT__exp_tx;
        VlUnpacked<IData/*31:0*/, 26> testbench__DOT__test_sent;
        VlUnpacked<IData/*31:0*/, 26> testbench__DOT__test_pass;
        VlUnpacked<IData/*31:0*/, 26> testbench__DOT__test_fail;
        VlUnpacked<IData/*31:0*/, 26> testbench__DOT__test_skip;
        VlUnpacked<IData/*31:0*/, 26> testbench__DOT__test_flushed;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT____Vtogcov__input_vec;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT____Vtogcov__weight;
        VlUnpacked<IData/*20:0*/, 6> testbench__DOT____Vtogcov__exp_pipe;
        VlUnpacked<CData/*0:0*/, 6> testbench__DOT____Vtogcov__exp_valid;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT__dut__DOT__input_vec;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT__dut__DOT__weight;
        VlUnpacked<VlUnpacked<IData/*20:0*/, 32>, 6> testbench__DOT__dut__DOT__soma;
        VlUnpacked<IData/*20:0*/, 32> testbench__DOT__dut__DOT__mult;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    std::string testbench__DOT____VlemCall_12__test_name;
    std::string testbench__DOT____VlemCall_11__test_name;
    std::string testbench__DOT____VlemCall_10__test_name;
    std::string __Vtask_testbench__DOT__start_test__2____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__3__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__8____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__9__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__17____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__18__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__23____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__24__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__29____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__30__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__35____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__36__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__41____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__42__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__49____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__50__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__55____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__56__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__61____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__62__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__67____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__68__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__73____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__74__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__85____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__86__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__91____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__92__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__97____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__98__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__105____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__106__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__111____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__112__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__117____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__118__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__124____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__125__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__131____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__132__Vfuncout;
    std::string __Vtask_testbench__DOT__start_test__138____VlefCall_0__test_name;
    std::string __Vfunc_testbench__DOT__test_name__139__Vfuncout;
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
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
