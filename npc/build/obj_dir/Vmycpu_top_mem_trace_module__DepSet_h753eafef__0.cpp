// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mem_trace_module.h"

void Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func_TOP____024unit(CData/*0:0*/ mem_write_state, QData/*63:0*/ addr, QData/*63:0*/ data, QData/*63:0*/ pc, CData/*2:0*/ size);

VL_INLINE_OPT void Vmycpu_top_mem_trace_module___sequent__TOP__mycpu_top__u_riscv_cpu___mtrace_mod__0(Vmycpu_top_mem_trace_module* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem_trace_module___sequent__TOP__mycpu_top__u_riscv_cpu___mtrace_mod__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__mem_req))) {
        Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func_TOP____024unit(vlSelf->__PVT__mem_write_read, vlSelf->__PVT__addr, vlSelf->__PVT__data, vlSelf->__PVT__pc, (IData)(vlSelf->__PVT__mem_size));
    }
}
