// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer.h for the primary calling header

#ifndef VERILATED_VTIMER___024ROOT_H_
#define VERILATED_VTIMER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtimer__Syms;
class Vtimer_VerilatedVcd;


//----------

VL_MODULE(Vtimer___024root) {
  public:

    // PORTS
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(stop,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(bcd1,6,0);
    VL_OUT8(bcd2,6,0);

    // LOCAL SIGNALS
    CData/*0:0*/ timer__DOT__clk_1s;
    CData/*7:0*/ timer__DOT__x2;
    CData/*7:0*/ timer__DOT__x1;
    CData/*7:0*/ timer__DOT__count_clk;
    IData/*31:0*/ timer__DOT__f1__DOT__counter_clk;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__timer__DOT__clk_1s;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__timer__DOT__clk_1s;
    CData/*0:0*/ __Vchglast__TOP__timer__DOT__clk_1s;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtimer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtimer___024root);  ///< Copying not allowed
  public:
    Vtimer___024root(const char* name);
    ~Vtimer___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtimer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
