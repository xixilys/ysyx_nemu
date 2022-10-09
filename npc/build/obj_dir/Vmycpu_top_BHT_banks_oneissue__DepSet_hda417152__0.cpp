// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BHT_banks_oneissue.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__reset 
        = vlSelf->__PVT__BHT_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__reset 
        = vlSelf->__PVT__BHT_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__reset 
        = vlSelf->__PVT__BHT_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__reset 
        = vlSelf->__PVT__BHT_3_reset;
}
