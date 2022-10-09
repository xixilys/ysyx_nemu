// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cfu.h"

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__0(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__0\n"); );
    // Body
    vlSelf->__PVT___io_Forward2E_T_18 = ((IData)(vlSelf->__PVT___io_Forward2E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward2E_T_17));
    vlSelf->__PVT___io_Forward1E_T_18 = ((IData)(vlSelf->__PVT___io_Forward1E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward1E_T_17));
}
