// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP___024UNIT_H_
#define VERILATED_VMYCPU_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top___024unit(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top___024unit();
    VL_UNCOPYABLE(Vmycpu_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
