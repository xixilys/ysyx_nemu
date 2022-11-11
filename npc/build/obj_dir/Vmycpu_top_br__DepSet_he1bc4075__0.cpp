// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_br.h"

VL_INLINE_OPT void Vmycpu_top_br___ico_sequent__TOP__mycpu_top__u_riscv_cpu___br__0(Vmycpu_top_br* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_br___ico_sequent__TOP__mycpu_top__u_riscv_cpu___br__0\n"); );
    // Body
    vlSelf->__PVT__io_exe = ((~ (IData)(vlSelf->__PVT__reset)) 
                             & (0U != (IData)(vlSelf->__PVT___io_exe_T_4)));
}
