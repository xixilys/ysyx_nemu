// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfourbitalu.h for the primary calling header

#ifndef VERILATED_VFOURBITALU___024ROOT_H_
#define VERILATED_VFOURBITALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfourbitalu__Syms;
class Vfourbitalu_VerilatedVcd;


//----------

VL_MODULE(Vfourbitalu___024root) {
  public:

    // PORTS
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(x,2,0);
    VL_OUT8(out,3,0);
    VL_OUT8(overflower,0,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(carry_flag,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ fourbitalu__DOT__temp_adder;
    CData/*3:0*/ fourbitalu__DOT__adder_out;
    CData/*3:0*/ fourbitalu__DOT__normal_a;
    CData/*3:0*/ fourbitalu__DOT__normal_b;

    // INTERNAL VARIABLES
    Vfourbitalu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfourbitalu___024root);  ///< Copying not allowed
  public:
    Vfourbitalu___024root(const char* name);
    ~Vfourbitalu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfourbitalu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
