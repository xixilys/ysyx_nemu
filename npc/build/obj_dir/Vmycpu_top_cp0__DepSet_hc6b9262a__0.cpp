// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cp0.h"

VL_INLINE_OPT void Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__9(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__9\n"); );
    // Body
    vlSelf->__PVT__io_Int_able = (1U & ((~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)) 
                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U)));
    vlSelf->__PVT___int_signal_T_2 = (0xffU & (VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 8U, 8U) 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 8U, 8U)));
    vlSelf->__PVT___io_Int_able_T_1 = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_Int_able 
        = vlSelf->__PVT__io_Int_able;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__19(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__19\n"); );
    // Body
    vlSelf->__PVT__io_timer_int_has = ((IData)(vlSelf->__PVT___timer_int_T) 
                                       & (IData)(vlSelf->__PVT___timer_int_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_epc 
        = vlSelf->__PVT__io_epc;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__20(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cp0__20\n"); );
    // Body
    vlSelf->__PVT__io_cp0_status = (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 0xaU, 6U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_timer_int_has 
        = vlSelf->__PVT__io_timer_int_has;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__4(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__4\n"); );
    // Body
    vlSelf->__PVT___commit_next_pc_T_3 = (vlSelf->__PVT__io_pc 
                                          - (IData)(4U));
    vlSelf->__PVT___commit_next_pc_T_6 = ((IData)(4U) 
                                          + vlSelf->__PVT__io_pc);
    vlSymsp->TOP__mycpu_top.debug_wb_rf_wen = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_rf_wen;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__14(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__14\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_40));
    vlSelf->__PVT__io_return_pc = ((IData)(vlSelf->__PVT___return_pc_Wire_T_7)
                                    ? vlSelf->__PVT__plus_200_exception_pc
                                    : vlSelf->__PVT___return_pc_Wire_T_14);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__15(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__15\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_41 = ((IData)(vlSelf->__PVT___GEN_20) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc 
        = vlSelf->__PVT__io_return_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException));
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__17(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__17\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_43 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_42) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__18(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__18\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_44 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_43) 
                                               | (IData)(vlSelf->__PVT___cause_exccode_Wire_T_33));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pre_decoder_branchD_flag_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushD;
}

VL_INLINE_OPT void Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__19(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___nba_comb__TOP__mycpu_top__u_riscv_cpu___cp0__19\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_45 = ((IData)(vlSelf->__PVT___cause_exccode_Wire_T_44) 
                                               | (IData)(vlSelf->__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_clr;
}
