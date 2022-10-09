// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_banks_oneissue_block_ram.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0\n"); );
    // Body
    vlSelf->__Vdly__ar_bank_sel_reg = vlSelf->__PVT__ar_bank_sel_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1\n"); );
    // Body
    vlSelf->__Vdly__ar_bank_sel_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : (IData)(vlSelf->__PVT__io_ar_bank_sel));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__ar_bank_sel_reg = vlSelf->__Vdly__ar_bank_sel_reg;
}
