// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard_bottom.h for the primary calling header

#ifndef VERILATED_VKEYBOARD_BOTTOM___024ROOT_H_
#define VERILATED_VKEYBOARD_BOTTOM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vkeyboard_bottom__Syms;
class Vkeyboard_bottom_VerilatedVcd;


//----------

VL_MODULE(Vkeyboard_bottom___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(led,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ keyboard_bottom__DOT__ready;
    CData/*0:0*/ keyboard_bottom__DOT__overflow;
    CData/*0:0*/ keyboard_bottom__DOT__nextdata_n;
    CData/*2:0*/ keyboard_bottom__DOT__k1__DOT__w_ptr;
    CData/*2:0*/ keyboard_bottom__DOT__k1__DOT__r_ptr;
    CData/*3:0*/ keyboard_bottom__DOT__k1__DOT__count;
    CData/*2:0*/ keyboard_bottom__DOT__k1__DOT__ps2_clk_sync;
    SData/*9:0*/ keyboard_bottom__DOT__k1__DOT__buffer;
    IData/*31:0*/ keyboard_bottom__DOT__data_sync;
    VlUnpacked<CData/*7:0*/, 8> keyboard_bottom__DOT__k1__DOT__fifo;

    // LOCAL VARIABLES
    CData/*0:0*/ keyboard_bottom__DOT__k1__DOT____Vlvbound1;
    CData/*2:0*/ __Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr;
    CData/*0:0*/ __Vdly__keyboard_bottom__DOT__ready;
    CData/*2:0*/ __Vdlyvdim0__keyboard_bottom__DOT__k1__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__keyboard_bottom__DOT__k1__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__keyboard_bottom__DOT__k1__DOT__fifo__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vkeyboard_bottom__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vkeyboard_bottom___024root);  ///< Copying not allowed
  public:
    Vkeyboard_bottom___024root(const char* name);
    ~Vkeyboard_bottom___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vkeyboard_bottom__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
