// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_alu.h"

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__10(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__10\n"); );
    // Body
    vlSelf->__PVT__io_overflow = ((VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_3, 0U) 
                                   & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x40U)) 
                                      != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x3fU)))) 
                                  | (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_12, 0U) 
                                     & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x40U)) 
                                        != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x3fU)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_overflow 
        = vlSelf->__PVT__io_overflow;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___temp_exceptionE_T_11 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_overflow)
            ? 0x1000U : 0U);
}
