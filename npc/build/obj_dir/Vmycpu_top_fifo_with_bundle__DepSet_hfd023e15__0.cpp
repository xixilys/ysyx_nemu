// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_fifo_with_bundle.h"

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0\n"); );
    // Body
    vlSelf->__Vdly__read_banks_points = vlSelf->__PVT__read_banks_points;
    vlSelf->__Vdly__write_length_points = vlSelf->__PVT__write_length_points;
    vlSelf->__Vdly__write_banks_points = vlSelf->__PVT__write_banks_points;
    vlSelf->__Vdly__read_length_points = vlSelf->__PVT__read_length_points;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1\n"); );
    // Body
    vlSelf->__Vdly__read_banks_points = ((IData)(vlSelf->__PVT__reset)
                                          ? 0U : ((IData)(vlSelf->__PVT___write_banks_points_T)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT___read_banks_points_T_2)));
    vlSelf->__Vdly__write_length_points = ((IData)(vlSelf->__PVT__reset)
                                            ? 0U : 
                                           ((IData)(vlSelf->__PVT___write_banks_points_T)
                                             ? 0U : (IData)(vlSelf->__PVT___write_length_points_T_7)));
    vlSelf->__Vdly__write_banks_points = ((IData)(vlSelf->__PVT__reset)
                                           ? 0U : (
                                                   ((IData)(vlSelf->__PVT__io_point_flush) 
                                                    | (IData)(vlSelf->__PVT__io_point_write_en))
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT___write_banks_points_T_2)));
    vlSelf->__Vdly__read_length_points = ((IData)(vlSelf->__PVT__reset)
                                           ? 0U : ((IData)(vlSelf->__PVT___write_banks_points_T)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT___read_length_points_T_7)));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2\n"); );
    // Body
    vlSelf->__PVT__read_banks_points = vlSelf->__Vdly__read_banks_points;
    vlSelf->__PVT__write_length_points = vlSelf->__Vdly__write_length_points;
    vlSelf->__PVT__write_banks_points = vlSelf->__Vdly__write_banks_points;
    vlSelf->__PVT__read_length_points = vlSelf->__Vdly__read_length_points;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__3(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT___io_empty_T_1 = ((IData)(vlSelf->__PVT__write_length_points) 
                                    == (IData)(vlSelf->__PVT__read_length_points));
    vlSelf->__PVT___read_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__read_banks_points));
    vlSelf->__PVT___fifo_banks_3_write_T_1 = (3U == (IData)(vlSelf->__PVT__write_banks_points));
    vlSelf->__PVT___io_full_T_7 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__write_length_points)));
    vlSelf->__PVT___write_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__write_banks_points));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT__io_full = ((IData)(vlSelf->__PVT___io_empty_T_1)
                               ? ((IData)(vlSelf->__PVT___io_full_T_3) 
                                  == (IData)(vlSelf->__PVT___read_length_points_T_1))
                               : (IData)(vlSelf->__PVT___io_full_T_12));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
}
