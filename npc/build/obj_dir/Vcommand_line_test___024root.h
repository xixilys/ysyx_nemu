// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommand_line_test.h for the primary calling header

#ifndef VERILATED_VCOMMAND_LINE_TEST___024ROOT_H_
#define VERILATED_VCOMMAND_LINE_TEST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcommand_line_test__Syms;
class Vcommand_line_test_VerilatedVcd;


//----------

VL_MODULE(Vcommand_line_test___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(vga_vs,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(vga_hs,0,0);
    VL_OUT8(vga_clk,0,0);
    VL_OUT8(vga_blank_n,0,0);
    VL_OUT8(vga_sync_n,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    VL_OUT8(led,0,0);
    VL_OUT16(addr_h,9,0);
    VL_OUT16(addr_v,9,0);

    // LOCAL SIGNALS
    CData/*7:0*/ command_line_test__DOT__asc_data;
    CData/*0:0*/ command_line_test__DOT__continue_flag;
    CData/*0:0*/ command_line_test__DOT__ready;
    CData/*7:0*/ command_line_test__DOT__temp_asc;
    CData/*0:0*/ command_line_test__DOT__vga_module1__DOT__h_valid;
    CData/*0:0*/ command_line_test__DOT__vga_module1__DOT__v_valid;
    CData/*0:0*/ command_line_test__DOT__keyboard1__DOT__overflow;
    CData/*0:0*/ command_line_test__DOT__keyboard1__DOT__nextdata_n;
    CData/*2:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr;
    CData/*2:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr;
    CData/*3:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT__count;
    CData/*2:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync;
    SData/*9:0*/ command_line_test__DOT__vga_module1__DOT__x_cnt;
    SData/*9:0*/ command_line_test__DOT__vga_module1__DOT__y_cnt;
    SData/*9:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer;
    IData/*31:0*/ command_line_test__DOT__i;
    IData/*23:0*/ command_line_test__DOT__vga_data;
    IData/*31:0*/ command_line_test__DOT__temp_h;
    IData/*31:0*/ command_line_test__DOT__temp_v;
    IData/*31:0*/ command_line_test__DOT__char_x;
    IData/*31:0*/ command_line_test__DOT__char_y;
    IData/*31:0*/ command_line_test__DOT__down_set;
    IData/*31:0*/ command_line_test__DOT__keyboard1__DOT__data_sync;
    VlUnpacked<SData/*15:0*/, 256> command_line_test__DOT__raw_table_data;
    VlUnpacked<IData/*23:0*/, 500001> command_line_test__DOT__vga_data_array;
    VlUnpacked<SData/*11:0*/, 5001> command_line_test__DOT__char_table;
    VlUnpacked<CData/*7:0*/, 2501> command_line_test__DOT__screen_data;
    VlUnpacked<CData/*7:0*/, 8> command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo;

    // LOCAL VARIABLES
    CData/*0:0*/ command_line_test__DOT__keyboard1__DOT__k1__DOT____Vlvbound1;
    CData/*2:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr;
    CData/*0:0*/ __Vdly__command_line_test__DOT__ready;
    CData/*2:0*/ __Vdlyvdim0__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP__vga_vs;
    IData/*23:0*/ command_line_test__DOT____Vlvbound2;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcommand_line_test__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcommand_line_test___024root);  ///< Copying not allowed
  public:
    Vcommand_line_test___024root(const char* name);
    ~Vcommand_line_test___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcommand_line_test__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
