// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_module.h for the primary calling header

#ifndef VERILATED_VVGA_MODULE___024ROOT_H_
#define VERILATED_VVGA_MODULE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vvga_module__Syms;
class Vvga_module_VerilatedVcd;


//----------

VL_MODULE(Vvga_module___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(vga_vs,0,0);
    VL_OUT8(vga_hs,0,0);
    VL_OUT8(vga_clk,0,0);
    VL_OUT8(vga_blank_n,0,0);
    VL_OUT8(vga_sync_n,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    VL_OUT16(addr_h,9,0);
    VL_OUT16(addr_v,9,0);

    // LOCAL SIGNALS
    CData/*0:0*/ vga_module__DOT__vga_1__DOT__h_valid;
    CData/*0:0*/ vga_module__DOT__vga_1__DOT__v_valid;
    SData/*9:0*/ vga_module__DOT__h_addr;
    SData/*9:0*/ vga_module__DOT__v_addr;
    SData/*9:0*/ vga_module__DOT__vga_1__DOT__x_cnt;
    SData/*9:0*/ vga_module__DOT__vga_1__DOT__y_cnt;
    IData/*23:0*/ vga_module__DOT__vga_data;
    IData/*31:0*/ vga_module__DOT__vga_1__DOT__clk_1__DOT__count;
    VlUnpacked<IData/*23:0*/, 524288> vga_module__DOT__vga_data_array;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vvga_module__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vvga_module___024root);  ///< Copying not allowed
  public:
    Vvga_module___024root(const char* name);
    ~Vvga_module___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vvga_module__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
