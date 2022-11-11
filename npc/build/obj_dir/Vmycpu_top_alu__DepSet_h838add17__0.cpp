// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_alu.h"

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__24(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__24\n"); );
    // Body
    vlSelf->__PVT__io_result = VL_SEL_QWII(127, vlSelf->__PVT___io_result_T_36, 0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result 
        = vlSelf->__PVT__io_result;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_alu_calE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result
            : 0ULL);
}
