// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mem_trace_module.h"

void Vmycpu_top_mem_trace_module___ctor_var_reset(Vmycpu_top_mem_trace_module* vlSelf);

Vmycpu_top_mem_trace_module::Vmycpu_top_mem_trace_module(Vmycpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_mem_trace_module___ctor_var_reset(this);
}

void Vmycpu_top_mem_trace_module::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_mem_trace_module::~Vmycpu_top_mem_trace_module() {
}
