// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cp0.h"

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__0(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__0\n"); );
    // Body
    vlSelf->__Vdly__cp0_entryhi = vlSelf->__PVT__cp0_entryhi;
    vlSelf->__Vdly__cp0_count = vlSelf->__PVT__cp0_count;
    vlSelf->__Vdly__cp0_cause = vlSelf->__PVT__cp0_cause;
    vlSelf->__Vdly__plus_200_exception_pc = vlSelf->__PVT__plus_200_exception_pc;
    vlSelf->__Vdly__plus_380_exception_pc = vlSelf->__PVT__plus_380_exception_pc;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__1(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__1\n"); );
    // Body
    vlSelf->__Vdly__cp0_entryhi = ((IData)(vlSelf->__PVT__reset)
                                    ? 0U : ((IData)(vlSelf->__PVT__io_cp0_tlb_write_en)
                                             ? 0U : vlSelf->__PVT___cp0_entryhi_T_13));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__cp0_count = 0U;
    } else if (((IData)(vlSelf->__PVT__io_cp0_write_en) 
                & (0x12U == (IData)(vlSelf->__PVT__write_addr_sel)))) {
        vlSelf->__Vdly__cp0_count = vlSelf->__PVT__io_cp0_write_data;
    } else if (vlSelf->__PVT__cp0_counter_half) {
        vlSelf->__Vdly__cp0_count = vlSelf->__PVT___cp0_count_T_4;
    }
    vlSelf->__Vdly__cp0_cause = ((IData)(vlSelf->__PVT__reset)
                                  ? 0U : VL_CONCAT_III(32,22,10, vlSelf->__PVT__cp0_cause_hi, (IData)(vlSelf->__PVT__cp0_cause_lo)));
    vlSelf->__Vdly__plus_200_exception_pc = ((IData)(vlSelf->__PVT__reset)
                                              ? 0xbfc00200U
                                              : ((1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0x16U))
                                                  ? 0xbfc00200U
                                                  : vlSelf->__PVT___plus_200_exception_pc_T_3));
    vlSelf->__Vdly__plus_380_exception_pc = ((IData)(vlSelf->__PVT__reset)
                                              ? 0xbfc00380U
                                              : ((1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0x16U))
                                                  ? 0xbfc00380U
                                                  : vlSelf->__PVT___plus_380_exception_pc_T_3));
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__2(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__2\n"); );
    // Body
    vlSelf->__PVT__cp0_entryhi = vlSelf->__Vdly__cp0_entryhi;
    vlSelf->__PVT__cp0_count = vlSelf->__Vdly__cp0_count;
    vlSelf->__PVT__cp0_cause = vlSelf->__Vdly__cp0_cause;
    vlSelf->__Vdly__cp0_status = vlSelf->__PVT__cp0_status;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__3(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__3\n"); );
    // Body
    vlSelf->__PVT__io_asid = (0xffU & VL_SEL_IIII(32, vlSelf->__PVT__cp0_entryhi, 0U, 8U));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__cp0_status = 0x400000U;
    } else if (vlSelf->__PVT___io_exception_T_1) {
        vlSelf->__Vdly__cp0_status = vlSelf->__PVT___cp0_status_T_4;
    } else if (vlSelf->__PVT___cp0_status_T_7) {
        vlSelf->__Vdly__cp0_status = vlSelf->__PVT___cp0_read_data_Wire_T_28;
    }
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__5(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__5\n"); );
    // Body
    vlSelf->__PVT___int_signal_T_2 = (0xffU & (VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 8U, 8U) 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 8U, 8U)));
    vlSelf->__PVT___io_Int_able_T_1 = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)));
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__6(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__6\n"); );
    // Body
    vlSelf->__Vdly__cp0_compare = vlSelf->__PVT__cp0_compare;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__7(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__cp0_compare = 0U;
    } else if (((IData)(vlSelf->__PVT__io_cp0_write_en) 
                & (0x16U == (IData)(vlSelf->__PVT__write_addr_sel)))) {
        vlSelf->__Vdly__cp0_compare = vlSelf->__PVT__io_cp0_write_data;
    }
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__8(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__8\n"); );
    // Body
    vlSelf->__PVT__cp0_compare = vlSelf->__Vdly__cp0_compare;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__9(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__9\n"); );
    // Body
    vlSelf->__Vdly__cp0_counter_half = vlSelf->__PVT__cp0_counter_half;
    vlSelf->__Vdly__cp0_ebase = vlSelf->__PVT__cp0_ebase;
    vlSelf->__Vdly__cp0_epc = vlSelf->__PVT__cp0_epc;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__10(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__10\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__cp0_counter_half = 0U;
    } else if (vlSelf->__PVT__clock) {
        vlSelf->__Vdly__cp0_counter_half = (1U & (~ (IData)(vlSelf->__PVT__cp0_counter_half)));
    }
    vlSelf->__Vdly__cp0_ebase = ((IData)(vlSelf->__PVT__reset)
                                  ? 0xaff00000U : VL_CONCAT_III(32,20,12, vlSelf->__PVT__cp0_ebase_hi, 
                                                                (0xfffU 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0U, 0xcU))));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__cp0_epc = 0U;
    } else if (vlSelf->__PVT__commit_exception) {
        if ((1U & (~ (VL_BITSEL_IIII(32, vlSelf->__PVT___commit_eret_T_1, 0U) 
                      & VL_BITSEL_IIII(32, vlSelf->__PVT___commit_epc_T_2, 0U))))) {
            vlSelf->__Vdly__cp0_epc = ((IData)(vlSelf->__PVT__int_signal)
                                        ? ((IData)(vlSelf->__PVT__io_in_delayslot)
                                            ? vlSelf->__PVT___commit_next_pc_T_3
                                            : vlSelf->__PVT___commit_next_pc_T_7)
                                        : ((IData)(vlSelf->__PVT__io_in_delayslot)
                                            ? vlSelf->__PVT___commit_next_pc_T_3
                                            : vlSelf->__PVT__io_pc));
        }
    } else if (vlSelf->__PVT___cp0_epc_T_3) {
        vlSelf->__Vdly__cp0_epc = vlSelf->__PVT__io_cp0_write_data;
    }
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__11(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__11\n"); );
    // Body
    vlSelf->__PVT__cp0_counter_half = vlSelf->__Vdly__cp0_counter_half;
    vlSelf->__PVT__cp0_ebase = vlSelf->__Vdly__cp0_ebase;
    vlSelf->__PVT__plus_200_exception_pc = vlSelf->__Vdly__plus_200_exception_pc;
    vlSelf->__PVT__plus_380_exception_pc = vlSelf->__Vdly__plus_380_exception_pc;
    vlSelf->__PVT__cp0_epc = vlSelf->__Vdly__cp0_epc;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__12(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__12\n"); );
    // Body
    vlSelf->__PVT___plus_380_exception_pc_T_3 = VL_CONCAT_III(32,20,12, 
                                                              (0xfffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0xcU, 0x14U)), 0x180U);
    vlSelf->__PVT___plus_200_exception_pc_T_3 = VL_CONCAT_III(32,20,12, 
                                                              (0xfffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_ebase, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT__io_epc = vlSelf->__PVT__cp0_epc;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__13(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__13\n"); );
    // Body
    vlSelf->__PVT__io_Int_able = (1U & ((~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)) 
                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U)));
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__15(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__15\n"); );
    // Body
    vlSelf->__PVT___cp0_count_T_4 = ((IData)(1U) + vlSelf->__PVT__cp0_count);
    vlSelf->__PVT___timer_int_T = (0U != vlSelf->__PVT__cp0_compare);
    vlSelf->__PVT___timer_int_T_1 = (vlSelf->__PVT__cp0_count 
                                     == vlSelf->__PVT__cp0_compare);
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__16(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__16\n"); );
    // Body
    vlSelf->__PVT__io_timer_int_has = ((IData)(vlSelf->__PVT___timer_int_T) 
                                       & (IData)(vlSelf->__PVT___timer_int_T_1));
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__17(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__17\n"); );
    // Body
    vlSelf->__PVT__io_cp0_status = (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 0xaU, 6U));
}
