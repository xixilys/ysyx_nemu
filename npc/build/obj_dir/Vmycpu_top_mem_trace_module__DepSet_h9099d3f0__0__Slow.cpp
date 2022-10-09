// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mem_trace_module.h"

VL_ATTR_COLD void Vmycpu_top_mem_trace_module___ctor_var_reset(Vmycpu_top_mem_trace_module* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem_trace_module___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__addr = 0;
    vlSelf->__PVT__data = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__mem_req = 0;
    vlSelf->__PVT__mem_size = 0;
    vlSelf->__PVT__mem_write_read = 0;
}
