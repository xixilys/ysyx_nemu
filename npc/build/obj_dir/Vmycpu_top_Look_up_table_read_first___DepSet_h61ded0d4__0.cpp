// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___9(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___10(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___10\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___11(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___11\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___12(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___12\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___9(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___10(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___10\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___11(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___11\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___12(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___12\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___5(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__Vdly__btb_22 = vlSelf->__PVT__btb_22;
    vlSelf->__Vdly__btb_1 = vlSelf->__PVT__btb_1;
    vlSelf->__Vdly__btb_0 = vlSelf->__PVT__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_30;
    vlSelf->__Vdly__btb_29 = vlSelf->__PVT__btb_29;
    vlSelf->__Vdly__btb_28 = vlSelf->__PVT__btb_28;
    vlSelf->__Vdly__btb_27 = vlSelf->__PVT__btb_27;
    vlSelf->__Vdly__btb_26 = vlSelf->__PVT__btb_26;
    vlSelf->__Vdly__btb_25 = vlSelf->__PVT__btb_25;
    vlSelf->__Vdly__btb_24 = vlSelf->__PVT__btb_24;
    vlSelf->__Vdly__btb_23 = vlSelf->__PVT__btb_23;
    vlSelf->__Vdly__btb_21 = vlSelf->__PVT__btb_21;
    vlSelf->__Vdly__btb_20 = vlSelf->__PVT__btb_20;
    vlSelf->__Vdly__btb_19 = vlSelf->__PVT__btb_19;
    vlSelf->__Vdly__btb_18 = vlSelf->__PVT__btb_18;
    vlSelf->__Vdly__btb_17 = vlSelf->__PVT__btb_17;
    vlSelf->__Vdly__btb_16 = vlSelf->__PVT__btb_16;
    vlSelf->__Vdly__btb_15 = vlSelf->__PVT__btb_15;
    vlSelf->__Vdly__btb_14 = vlSelf->__PVT__btb_14;
    vlSelf->__Vdly__btb_13 = vlSelf->__PVT__btb_13;
    vlSelf->__Vdly__btb_12 = vlSelf->__PVT__btb_12;
    vlSelf->__Vdly__btb_11 = vlSelf->__PVT__btb_11;
    vlSelf->__Vdly__btb_10 = vlSelf->__PVT__btb_10;
    vlSelf->__Vdly__btb_9 = vlSelf->__PVT__btb_9;
    vlSelf->__Vdly__btb_8 = vlSelf->__PVT__btb_8;
    vlSelf->__Vdly__btb_7 = vlSelf->__PVT__btb_7;
    vlSelf->__Vdly__btb_6 = vlSelf->__PVT__btb_6;
    vlSelf->__Vdly__btb_5 = vlSelf->__PVT__btb_5;
    vlSelf->__Vdly__btb_4 = vlSelf->__PVT__btb_4;
    vlSelf->__Vdly__btb_3 = vlSelf->__PVT__btb_3;
    vlSelf->__Vdly__btb_2 = vlSelf->__PVT__btb_2;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___2(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_30 = 0U;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__io_in;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT__btb_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_30 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_29 = 0U;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_29 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_28 = 0U;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_28 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_27 = 0U;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_27 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_26 = 0U;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_26 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_25 = 0U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_25 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_24 = 0U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_24 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_23 = 0U;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_23 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_22 = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_22 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_21 = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_21 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_20 = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_20 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_19 = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_19 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_18 = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_18 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_17 = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_17 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_16 = 0U;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_16 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15 = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_15 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14 = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_14 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13 = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12 = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11 = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10 = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10 = ((IData)(vlSelf->__PVT__io_write)
                                   ? (IData)(vlSelf->__PVT__io_in)
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_31)
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? (IData)(vlSelf->__PVT__btb_30)
                                           : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9 = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8 = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7 = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6 = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5 = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4 = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3 = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2 = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1 = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1 = ((IData)(vlSelf->__PVT__io_write)
                                  ? (IData)(vlSelf->__PVT__io_in)
                                  : ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))
                                      ? (IData)(vlSelf->__PVT__btb_31)
                                      : ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? (IData)(vlSelf->__PVT__btb_30)
                                          : (IData)(vlSelf->__PVT___GEN_61))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___3(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___3\n"); );
    // Body
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_5 = vlSelf->__Vdly__btb_5;
    vlSelf->__PVT__btb_4 = vlSelf->__Vdly__btb_4;
    vlSelf->__PVT__btb_3 = vlSelf->__Vdly__btb_3;
    vlSelf->__PVT__btb_2 = vlSelf->__Vdly__btb_2;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___4(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___4\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
}
