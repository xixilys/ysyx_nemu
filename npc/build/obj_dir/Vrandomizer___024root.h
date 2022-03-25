// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrandomizer.h for the primary calling header

#ifndef VERILATED_VRANDOMIZER___024ROOT_H_
#define VERILATED_VRANDOMIZER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrandomizer__Syms;
class Vrandomizer_VerilatedVcd;


//----------

VL_MODULE(Vrandomizer___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(bcd_num0,6,0);
    VL_OUT8(bcd_num1,6,0);
    VL_OUT8(bcd_num2,6,0);

    // LOCAL SIGNALS
    CData/*7:0*/ randomizer__DOT__reg_lfsr;
    CData/*7:0*/ randomizer__DOT__last_reg;
    CData/*0:0*/ randomizer__DOT__bitsevern;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VlUnpacked<CData/*31:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vrandomizer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrandomizer___024root);  ///< Copying not allowed
  public:
    Vrandomizer___024root(const char* name);
    ~Vrandomizer___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrandomizer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
