// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cp0.h"

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__0(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__0\n"); );
    // Body
    vlSelf->__PVT___plus_380_exception_pc_T_3 = VL_CONCAT_III(32,20,12, 
                                                              (0xfffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0xcU, 0x14U)), 0x180U);
    vlSelf->__PVT___plus_200_exception_pc_T_3 = VL_CONCAT_III(32,20,12, 
                                                              (0xfffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT___cp0_count_T_4 = ((IData)(1U) + vlSelf->__PVT__cp0_count);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__1(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__1\n"); );
    // Body
    vlSelf->__PVT__io_asid = (0xffU & VL_SEL_IIII(32, vlSelf->__PVT__cp0_entryhi, 0U, 8U));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__2(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__2\n"); );
    // Body
    vlSelf->__PVT__io_epc = vlSelf->__PVT__cp0_epc;
    vlSelf->__PVT___timer_int_T = (0U != vlSelf->__PVT__cp0_compare);
    vlSelf->__PVT___timer_int_T_1 = (vlSelf->__PVT__cp0_count 
                                     == vlSelf->__PVT__cp0_compare);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__3(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__3\n"); );
    // Body
    vlSelf->__PVT__io_timer_int_has = ((IData)(vlSelf->__PVT___timer_int_T) 
                                       & (IData)(vlSelf->__PVT___timer_int_T_1));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__4(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__4\n"); );
    // Body
    vlSelf->__PVT__io_Int_able = (1U & ((~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)) 
                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U)));
    vlSelf->__PVT__io_cp0_status = (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 0xaU, 6U));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__5(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__5\n"); );
    // Body
    vlSelf->__PVT___int_signal_T_2 = (0xffU & (VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 8U, 8U) 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 8U, 8U)));
    vlSelf->__PVT___io_Int_able_T_1 = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__6(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__6\n"); );
    // Body
    vlSelf->__PVT__int_signal = (((0U != (IData)(vlSelf->__PVT___int_signal_T_2)) 
                                  & (IData)(vlSelf->__PVT___io_Int_able_T_1)) 
                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__7(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__7\n"); );
    // Body
    vlSelf->__PVT___cp0_read_data_Wire_T_28 = VL_CONCAT_III(32,8,24, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0x18U, 8U)), 
                                                            VL_EXTEND_II(24,23, 
                                                                         VL_CONCAT_III(23,15,8, 
                                                                                (0x7fffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 8U, 0xfU)), 
                                                                                VL_EXTEND_II(8,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0U, 5U))))));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__8(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__8\n"); );
    // Body
    vlSelf->__PVT__write_addr_sel = VL_CONCAT_III(6,5,1, (IData)(vlSelf->__PVT__io_cp0_write_addr), 
                                                  (1U 
                                                   & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__io_cp0_write_sel), 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__9(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__9\n"); );
    // Body
    vlSelf->__PVT__exception_type = VL_CONCAT_III(32,31,1, 
                                                  (0x7fffffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io_exception_type_i, 1U, 0x1fU)), (IData)(vlSelf->__PVT__int_signal));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__10(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__10\n"); );
    // Body
    vlSelf->__PVT___commit_next_pc_T_3 = (vlSelf->__PVT__io_pc 
                                          - (IData)(4U));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__11(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__11\n"); );
    // Body
    vlSelf->__PVT___cp0_status_T_7 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                      & (0x18U == (IData)(vlSelf->__PVT__write_addr_sel)));
    vlSelf->__PVT___cp0_epc_T_3 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                   & (0x1cU == (IData)(vlSelf->__PVT__write_addr_sel)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__12(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__12\n"); );
    // Body
    vlSelf->__PVT___commit_next_pc_T_6 = ((IData)(4U) 
                                          + vlSelf->__PVT__io_pc);
    vlSelf->__PVT___cp0_entryhi_T_6 = (0x7ffffU & (
                                                   ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                                    & (0x14U 
                                                       == (IData)(vlSelf->__PVT__write_addr_sel)))
                                                    ? 
                                                   VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0xdU, 0x13U)
                                                    : 
                                                   VL_SEL_IIII(32, vlSelf->__PVT__cp0_entryhi, 0xdU, 0x13U)));
    vlSelf->__PVT___cp0_ebase_T_6 = (0x3ffffU & (((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                                  & (0x1fU 
                                                     == (IData)(vlSelf->__PVT__write_addr_sel)))
                                                  ? 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0xcU, 0x12U)
                                                  : 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0xcU, 0x12U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__13(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__13\n"); );
    // Body
    vlSelf->__PVT___cp0_entryhi_T_3 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                       & (0x14U == (IData)(vlSelf->__PVT__write_addr_sel)));
    vlSelf->__PVT__cause_write_en = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                     & (0x1aU == (IData)(vlSelf->__PVT__write_addr_sel)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__14(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__14\n"); );
    // Body
    vlSelf->__PVT___cp0_compare_T_2 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                       & (0x16U == (IData)(vlSelf->__PVT__write_addr_sel)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__15(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__15\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_25 = VL_EXTEND_II(32,31, 
                                                           (0x7fffffffU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 1U, 0x1fU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__16(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__16\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_23 = VL_EXTEND_II(32,25, 
                                                           (0x1ffffffU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 7U, 0x19U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__17(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__17\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_21 = VL_EXTEND_II(32,30, 
                                                           (0x3fffffffU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 2U, 0x1eU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__18(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__18\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_15 = VL_EXTEND_II(32,20, 
                                                           (0xfffffU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0xcU, 0x14U)));
    vlSelf->__PVT___return_pc_Wire_T_5 = VL_EXTEND_II(32,26, 
                                                      (0x3ffffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 6U, 0x1aU)));
    vlSelf->__PVT___commit_epc_T_2 = VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__exception_type, 0x1fU)));
    vlSelf->__PVT___return_pc_Wire_T_2 = VL_EXTEND_II(32,29, 
                                                      (0x1fffffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 3U, 0x1dU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__19(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__19\n"); );
    // Body
    vlSelf->__PVT___return_pc_Wire_T = VL_EXTEND_II(32,22, 
                                                    (0x3fffffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0xaU, 0x16U)));
    vlSelf->__PVT___cause_exccode_Wire_T_11 = VL_EXTEND_II(32,23, 
                                                           (0x7fffffU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 9U, 0x17U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__20(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__20\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_9 = VL_EXTEND_II(32,24, 
                                                          (0xffffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 8U, 0x18U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__21(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__21\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_7 = VL_EXTEND_II(32,27, 
                                                          (0x7ffffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 5U, 0x1bU)));
    vlSelf->__PVT___cause_exccode_Wire_T_2 = VL_EXTEND_II(32,28, 
                                                          (0xfffffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 4U, 0x1cU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__22(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__22\n"); );
    // Body
    vlSelf->__PVT__commit_exception = ((0U != (0x7fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0U, 0x1fU))) 
                                       & (IData)(vlSelf->__PVT___io_Int_able_T_1));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__23(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__23\n"); );
    // Body
    vlSelf->__PVT___commit_eret_T_1 = VL_EXTEND_II(32,12, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0x14U, 0xcU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__24(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__24\n"); );
    // Body
    vlSelf->__PVT___cp0_status_T_4 = VL_CONCAT_III(32,30,2, 
                                                   (0x3fffffffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 2U, 0x1eU)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__commit_exception), 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U))));
    vlSelf->__PVT__cp0_ebase_hi = VL_CONCAT_III(20,2,18, 
                                                (3U 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0x1eU, 2U)), vlSelf->__PVT___cp0_ebase_T_6);
    vlSelf->__PVT___commit_next_pc_T_7 = ((0U != (IData)(vlSelf->__PVT__io_in_branchjump_jr))
                                           ? vlSelf->__PVT__io_pc
                                           : vlSelf->__PVT___commit_next_pc_T_6);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__25(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__25\n"); );
    // Body
    vlSelf->__PVT___cp0_entryhi_T_12 = (0xffU & ((IData)(vlSelf->__PVT___cp0_entryhi_T_3)
                                                  ? 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0U, 8U)
                                                  : 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__cp0_entryhi, 0U, 8U)));
    vlSelf->__PVT___cp0_cause_T_2 = (3U & ((IData)(vlSelf->__PVT__cause_write_en)
                                            ? VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 8U, 2U)
                                            : VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 8U, 2U)));
    vlSelf->__PVT__commit_in_delayslot = (1U & (((IData)(vlSelf->__PVT__int_signal) 
                                                 | (IData)(vlSelf->__PVT__commit_exception))
                                                 ? (IData)(vlSelf->__PVT__io_in_delayslot)
                                                 : 
                                                VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_cause, 0x1fU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__26(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__26\n"); );
    // Body
    vlSelf->__PVT___timer_int_T_6 = (1U & ((~ (IData)(vlSelf->__PVT___cp0_compare_T_2)) 
                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_cause, 0x1eU)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__27(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__27\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_25, 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__28(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__28\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_37 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_23, 0U))
                                                ? 3U
                                                : 0U);
    vlSelf->__PVT___cause_exccode_Wire_T_36 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_21, 0U))
                                                ? 2U
                                                : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__29(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__29\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_35 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_5, 0U))
                                                ? 3U
                                                : 0U);
    vlSelf->__PVT___return_pc_Wire_T_7 = (1U & ((VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T, 0U) 
                                                 | VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_2, 0U)) 
                                                | VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_5, 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__30(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__30\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_34 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_2, 0U))
                                                ? 2U
                                                : 0U);
    vlSelf->__PVT___cause_exccode_Wire_T_33 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_15, 0U))
                                                ? 0xcU
                                                : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__31(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__31\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_32 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T, 0U))
                                                ? 0xaU
                                                : 0U);
    vlSelf->__PVT___commit_eret_T_3 = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT___commit_eret_T_1, 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__32(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__32\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_31 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_11, 0U))
                                                ? 9U
                                                : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__33(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__33\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_30 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_9, 0U))
                                                ? 8U
                                                : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__34(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__34\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_29 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_7, 0U))
                                                ? 5U
                                                : 0U);
    vlSelf->__PVT___cause_exccode_Wire_T_6 = (1U & 
                                              (VL_BITSEL_IIII(32, vlSelf->__PVT___cause_exccode_Wire_T_2, 0U) 
                                               | VL_BITSEL_IIII(32, vlSelf->__PVT___commit_eret_T_1, 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__35(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__35\n"); );
    // Body
    vlSelf->__PVT__commit_eret = (1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__exception_type, 0x1fU) 
                                        & (~ VL_BITSEL_IIII(32, vlSelf->__PVT___commit_eret_T_1, 0U))));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__36(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__36\n"); );
    // Body
    vlSelf->__PVT___io_exception_T_1 = ((IData)(vlSelf->__PVT__commit_exception) 
                                        | (IData)(vlSelf->__PVT__commit_eret));
    vlSelf->__PVT___cp0_entryhi_T_13 = VL_CONCAT_III(32,19,13, vlSelf->__PVT___cp0_entryhi_T_6, 
                                                     VL_EXTEND_II(13,8, (IData)(vlSelf->__PVT___cp0_entryhi_T_12)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__37(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__37\n"); );
    // Body
    vlSelf->__PVT__timer_int = ((((0U != vlSelf->__PVT__cp0_compare) 
                                  & (vlSelf->__PVT__cp0_count 
                                     == vlSelf->__PVT__cp0_compare)) 
                                 & (~ (IData)(vlSelf->__PVT___cp0_compare_T_2))) 
                                | (IData)(vlSelf->__PVT___timer_int_T_6));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__38(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__38\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_37));
    vlSelf->__PVT___GEN_23 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_36));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__39(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__39\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_35));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__40(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__40\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_34));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__41(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__41\n"); );
    // Body
    vlSelf->__PVT___return_pc_Wire_T_13 = (VL_BITSEL_IIII(32, vlSelf->__PVT___commit_epc_T_2, 0U) 
                                           & (IData)(vlSelf->__PVT___commit_eret_T_3));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__42(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__42\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_28 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_6)
                                                ? 4U
                                                : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__43(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__43\n"); );
    // Body
    vlSelf->__PVT__io_exception = ((IData)(vlSelf->__PVT__commit_exception) 
                                   | (IData)(vlSelf->__PVT__commit_eret));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__44(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__44\n"); );
    // Body
    vlSelf->__PVT__cp0_cause_hi = VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__commit_in_delayslot), 
                                                VL_CONCAT_III(21,1,20, (IData)(vlSelf->__PVT__timer_int), 
                                                              VL_EXTEND_II(20,6, (IData)(vlSelf->__PVT__io_int_i))));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__45(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__45\n"); );
    // Body
    vlSelf->__PVT___return_pc_Wire_T_14 = ((IData)(vlSelf->__PVT___return_pc_Wire_T_13)
                                            ? vlSelf->__PVT__cp0_epc
                                            : vlSelf->__PVT__plus_380_exception_pc);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__46(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__46\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_40 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_28) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_29));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__47(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__47\n"); );
    // Body
    vlSelf->__PVT__io_return_pc = ((IData)(vlSelf->__PVT___return_pc_Wire_T_7)
                                    ? vlSelf->__PVT__plus_200_exception_pc
                                    : vlSelf->__PVT___return_pc_Wire_T_14);
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__48(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__48\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_40));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__49(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__49\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_41 = ((IData)(vlSelf->__PVT___GEN_20) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_30));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__50(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__50\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_42 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_41) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_31));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__51(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__51\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_43 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_42) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_32));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__52(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__52\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_44 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_43) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_33));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__53(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__53\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_45 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_44) 
                                               | (IData)(vlSelf->__PVT___GEN_21));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__54(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__54\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_46 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_45) 
                                               | (IData)(vlSelf->__PVT___GEN_22));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__55(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__55\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_47 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_46) 
                                               | (IData)(vlSelf->__PVT___GEN_23));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__56(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__56\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_48 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_47) 
                                               | (IData)(vlSelf->__PVT___GEN_24));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__57(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__57\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_49 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_48) 
                                               | (IData)(vlSelf->__PVT___GEN_25));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__58(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__58\n"); );
    // Body
    vlSelf->__PVT__cause_exccode_Wire = VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_49));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__59(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__59\n"); );
    // Body
    vlSelf->__PVT___cp0_cause_T_5 = (0x1fU & ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U))
                                               ? VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 2U, 5U)
                                               : (IData)(vlSelf->__PVT__cause_exccode_Wire)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__60(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___settle__TOP__mycpu_top__u_riscv_cpu___cp0__60\n"); );
    // Body
    vlSelf->__PVT__cp0_cause_lo = VL_CONCAT_III(10,2,8, (IData)(vlSelf->__PVT___cp0_cause_T_2), 
                                                VL_EXTEND_II(8,7, 
                                                             VL_CONCAT_III(7,5,2, (IData)(vlSelf->__PVT___cp0_cause_T_5), 0U)));
}

VL_ATTR_COLD void Vmycpu_top_cp0___ctor_var_reset(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_cp0_write_addr = 0;
    vlSelf->__PVT__io_cp0_write_sel = 0;
    vlSelf->__PVT__io_cp0_write_data = 0;
    vlSelf->__PVT__io_cp0_write_en = 0;
    vlSelf->__PVT__io_int_i = 0;
    vlSelf->__PVT__io_timer_int_has = 0;
    vlSelf->__PVT__io_pc = 0;
    vlSelf->__PVT__io_exception_type_i = 0;
    vlSelf->__PVT__io_in_delayslot = 0;
    vlSelf->__PVT__io_in_branchjump_jr = 0;
    vlSelf->__PVT__io_return_pc = 0;
    vlSelf->__PVT__io_exception = 0;
    vlSelf->__PVT__io_epc = 0;
    vlSelf->__PVT__io_cp0_status = 0;
    vlSelf->__PVT__io_Int_able = 0;
    vlSelf->__PVT__io_asid = 0;
    vlSelf->__PVT__io_cp0_tlb_write_en = 0;
    vlSelf->__PVT__cp0_count = 0;
    vlSelf->__PVT__cp0_entryhi = 0;
    vlSelf->__PVT__cp0_compare = 0;
    vlSelf->__PVT__cp0_status = 0;
    vlSelf->__PVT__cp0_cause = 0;
    vlSelf->__PVT__cp0_epc = 0;
    vlSelf->__PVT__cp0_ebase = 0;
    vlSelf->__PVT__cp0_counter_half = 0;
    vlSelf->__PVT__plus_380_exception_pc = 0;
    vlSelf->__PVT___plus_380_exception_pc_T_3 = 0;
    vlSelf->__PVT__plus_200_exception_pc = 0;
    vlSelf->__PVT___plus_200_exception_pc_T_3 = 0;
    vlSelf->__PVT___io_Int_able_T_1 = 0;
    vlSelf->__PVT___int_signal_T_2 = 0;
    vlSelf->__PVT__int_signal = 0;
    vlSelf->__PVT__exception_type = 0;
    vlSelf->__PVT__commit_exception = 0;
    vlSelf->__PVT__commit_in_delayslot = 0;
    vlSelf->__PVT___commit_eret_T_1 = 0;
    vlSelf->__PVT___commit_eret_T_3 = 0;
    vlSelf->__PVT__commit_eret = 0;
    vlSelf->__PVT___io_exception_T_1 = 0;
    vlSelf->__PVT___commit_next_pc_T_3 = 0;
    vlSelf->__PVT___commit_next_pc_T_6 = 0;
    vlSelf->__PVT___commit_next_pc_T_7 = 0;
    vlSelf->__PVT___commit_epc_T_2 = 0;
    vlSelf->__PVT__write_addr_sel = 0;
    vlSelf->__PVT___cp0_read_data_Wire_T_28 = 0;
    vlSelf->__PVT___return_pc_Wire_T = 0;
    vlSelf->__PVT___return_pc_Wire_T_2 = 0;
    vlSelf->__PVT___return_pc_Wire_T_5 = 0;
    vlSelf->__PVT___return_pc_Wire_T_7 = 0;
    vlSelf->__PVT___return_pc_Wire_T_13 = 0;
    vlSelf->__PVT___return_pc_Wire_T_14 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_2 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_6 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_7 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_9 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_11 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_15 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_21 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_23 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_25 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_28 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_29 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_30 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_31 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_32 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_33 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_34 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_35 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_36 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_37 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_40 = 0;
    vlSelf->__PVT___GEN_20 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_41 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_42 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_43 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_44 = 0;
    vlSelf->__PVT___GEN_21 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_45 = 0;
    vlSelf->__PVT___GEN_22 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_46 = 0;
    vlSelf->__PVT___GEN_23 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_47 = 0;
    vlSelf->__PVT___GEN_24 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_48 = 0;
    vlSelf->__PVT___GEN_25 = 0;
    vlSelf->__PVT___cause_exccode_Wire_T_49 = 0;
    vlSelf->__PVT___cp0_count_T_4 = 0;
    vlSelf->__PVT___cp0_entryhi_T_3 = 0;
    vlSelf->__PVT___cp0_entryhi_T_6 = 0;
    vlSelf->__PVT___cp0_entryhi_T_12 = 0;
    vlSelf->__PVT___cp0_entryhi_T_13 = 0;
    vlSelf->__PVT___cp0_compare_T_2 = 0;
    vlSelf->__PVT___cp0_status_T_4 = 0;
    vlSelf->__PVT___cp0_status_T_7 = 0;
    vlSelf->__PVT___cp0_ebase_T_6 = 0;
    vlSelf->__PVT__cp0_ebase_hi = 0;
    vlSelf->__PVT__cause_write_en = 0;
    vlSelf->__PVT___timer_int_T = 0;
    vlSelf->__PVT___timer_int_T_1 = 0;
    vlSelf->__PVT___timer_int_T_6 = 0;
    vlSelf->__PVT__timer_int = 0;
    vlSelf->__PVT___cp0_cause_T_2 = 0;
    vlSelf->__PVT__cause_exccode_Wire = 0;
    vlSelf->__PVT___cp0_cause_T_5 = 0;
    vlSelf->__PVT__cp0_cause_lo = 0;
    vlSelf->__PVT__cp0_cause_hi = 0;
    vlSelf->__PVT___cp0_epc_T_3 = 0;
    vlSelf->__Vdly__cp0_count = 0;
    vlSelf->__Vdly__cp0_entryhi = 0;
    vlSelf->__Vdly__cp0_compare = 0;
    vlSelf->__Vdly__cp0_status = 0;
    vlSelf->__Vdly__cp0_cause = 0;
    vlSelf->__Vdly__cp0_epc = 0;
    vlSelf->__Vdly__cp0_ebase = 0;
    vlSelf->__Vdly__cp0_counter_half = 0;
    vlSelf->__Vdly__plus_380_exception_pc = 0;
    vlSelf->__Vdly__plus_200_exception_pc = 0;
}
