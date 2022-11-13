// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mem_trace_module.h"

void Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 3> &a, IData/*31:0*/ mem_write_state, IData/*31:0*/ size, IData/*31:0*/ cache);

VL_INLINE_OPT void Vmycpu_top_mem_trace_module___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mtrace_mod__0(Vmycpu_top_mem_trace_module* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem_trace_module___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mtrace_mod__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__mem_req))) {
        Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func__Vdpioc2_TOP____024unit(vlSelf->__PVT__packed_data, 
                                                                                VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__mem_write_read)), 
                                                                                VL_EXTEND_II(32,3, (IData)(vlSelf->__PVT__mem_size)), 
                                                                                VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__mem_cached)));
    }
}
