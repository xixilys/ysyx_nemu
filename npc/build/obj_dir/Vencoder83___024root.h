// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder83.h for the primary calling header

#ifndef VERILATED_VENCODER83___024ROOT_H_
#define VERILATED_VENCODER83___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vencoder83__Syms;
class Vencoder83_VerilatedVcd;


//----------

VL_MODULE(Vencoder83___024root) {
  public:

    // PORTS
    VL_IN8(x,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,3,0);
    VL_OUT8(out,6,0);
    VL_OUT(i,31,0);

    // INTERNAL VARIABLES
    Vencoder83__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vencoder83___024root);  ///< Copying not allowed
  public:
    Vencoder83___024root(const char* name);
    ~Vencoder83___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vencoder83__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
