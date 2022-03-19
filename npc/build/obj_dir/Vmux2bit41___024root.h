// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2bit41.h for the primary calling header

#ifndef VERILATED_VMUX2BIT41___024ROOT_H_
#define VERILATED_VMUX2BIT41___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux2bit41__Syms;
class Vmux2bit41_VerilatedVcd;


//----------

VL_MODULE(Vmux2bit41___024root) {
  public:

    // PORTS
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);
    VL_IN8(x[4],1,0);

    // LOCAL SIGNALS
    CData/*1:0*/ mux2bit41__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ mux2bit41__DOT__i0__DOT__i0__DOT__hit;
    VlUnpacked<CData/*3:0*/, 4> mux2bit41__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux2bit41__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux2bit41__DOT__i0__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    SData/*15:0*/ mux2bit41__DOT____Vcellinp__i0____pinNumber3;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmux2bit41__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux2bit41___024root);  ///< Copying not allowed
  public:
    Vmux2bit41___024root(const char* name);
    ~Vmux2bit41___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux2bit41__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
