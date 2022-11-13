// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__125(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__125\n"); );
    // Body
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pc 
        = vlSelf->__PVT__io_out_pc;
}
