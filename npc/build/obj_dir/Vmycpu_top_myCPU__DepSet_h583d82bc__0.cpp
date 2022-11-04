// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_myCPU.h"

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__Vdly__PCW_Reg = vlSelf->__PVT__PCW_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___mem22wb_clock = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__Vdly__pcw_reg = vlSelf->__PVT__pcw_reg;
    vlSelf->__Vdly__reg_pc = vlSelf->__PVT__reg_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__PCW_Reg = 0ULL;
    } else if ((0ULL != vlSelf->__PVT___mem22wb_io_PCW)) {
        vlSelf->__Vdly__PCW_Reg = vlSelf->__PVT___mem22wb_io_PCW;
    }
    vlSelf->__Vdly__reg_pc = ((IData)(vlSelf->__PVT___T_2)
                               ? 0ULL : vlSelf->__PVT___mem22wb_io_PCW);
    vlSelf->__Vdly__pcw_reg = ((IData)(vlSelf->__PVT___T_2)
                                ? 0ULL : vlSelf->__PVT___mem22wb_io_PCW);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc 
        = vlSelf->__PVT___mem22wb_io_PCW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pc 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__9\n"); );
    // Body
    vlSelf->__Vdly__tlb_exception_co0_writeW = vlSelf->__PVT__tlb_exception_co0_writeW;
    vlSelf->__Vdly__ex_exception = vlSelf->__PVT__ex_exception;
    vlSelf->__Vdly__pc_next_wait = vlSelf->__PVT__pc_next_wait;
    vlSelf->__Vdly__RD2ForWardE_r = vlSelf->__PVT__RD2ForWardE_r;
    vlSelf->__Vdly__RD1ForWardE_r = vlSelf->__PVT__RD1ForWardE_r;
    vlSelf->__Vdly__wb_exception = vlSelf->__PVT__wb_exception;
    vlSelf->__Vdly__Forward_Lock1E = vlSelf->__PVT__Forward_Lock1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = 0U;
    } else if (vlSelf->__PVT___wb_exception_T) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = 0U;
    } else if (vlSelf->__PVT___wb_exception_T_1) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = vlSelf->__PVT__tlb_exception_csr_writeM2;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__ex_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushE) {
        vlSelf->__Vdly__ex_exception = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__ex_exception = (0U != vlSelf->__PVT___id2ex_io_ExceptionTypeD);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pc_next_wait = 0ULL;
    } else if (((IData)(vlSelf->__PVT__ready_to_branch) 
                | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer))) {
        vlSelf->__Vdly__pc_next_wait = ((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)
                                         ? ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                             ? ((IData)(vlSelf->__PVT__pre_decoder_jr)
                                                 ? vlSelf->__PVT___PCJumpD_T_3
                                                 : vlSelf->__PVT___PCJumpD_T_5)
                                             : ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                                 ? vlSelf->__PVT__PCBranchD
                                                 : vlSelf->__PVT___if2id_io_PCPlus4D))
                                         : ((IData)(vlSelf->__PVT__stage_fec_2_branch_answer)
                                             ? vlSelf->__PVT__stage_fec_2_pre_target_0
                                             : vlSelf->__PVT___stage_fec_1_pc_next_T_1));
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__RD2ForWardE_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->__PVT___commit_cache_reg_T)))) {
        if ((1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2E), 0U) 
                    | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2E), 1U)) 
                   & (~ (IData)(vlSelf->__PVT__Forward_Lock2E))))) {
            vlSelf->__Vdly__RD2ForWardE_r = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                              ? vlSelf->__PVT__ResultM2_Reg
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                                  ? vlSelf->__PVT__resultE2M_Reg
                                                  : vlSelf->__PVT___RD2ForWardE_p_T_1));
        }
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__RD1ForWardE_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->__PVT___commit_cache_reg_T)))) {
        if ((1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1E), 0U) 
                    | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1E), 1U)) 
                   & (~ (IData)(vlSelf->__PVT__Forward_Lock1E))))) {
            vlSelf->__Vdly__RD1ForWardE_r = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                              ? vlSelf->__PVT__ResultM2_Reg
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                                  ? vlSelf->__PVT__resultE2M_Reg
                                                  : vlSelf->__PVT___RD1ForWardE_p_T_1));
        }
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__wb_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushW) {
        vlSelf->__Vdly__wb_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallW) {
        vlSelf->__Vdly__wb_exception = (0U != vlSelf->__PVT___mem22wb_io_ExceptionTypeM);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__Forward_Lock1E = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__Forward_Lock1E = 0U;
    } else if ((1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1E), 0U) 
                       | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1E), 1U)) 
                      & (~ (IData)(vlSelf->__PVT__Forward_Lock1E))))) {
        vlSelf->__Vdly__Forward_Lock1E = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__11\n"); );
    // Body
    vlSelf->__Vdly__tlb_exception_csr_writeM2 = vlSelf->__PVT__tlb_exception_csr_writeM2;
    vlSelf->__PVT__ex_exception = vlSelf->__Vdly__ex_exception;
    vlSelf->__Vdly__ResultM2_Reg = vlSelf->__PVT__ResultM2_Reg;
    vlSelf->__PVT__wb_exception = vlSelf->__Vdly__wb_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__ResultM2_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem2_exception_T) {
        vlSelf->__Vdly__ResultM2_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem2_exception_T_1) {
        vlSelf->__Vdly__ResultM2_Reg = vlSelf->__PVT__resultE2M_Reg;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSelf->__PVT__ResultM2_Reg = vlSelf->__Vdly__ResultM2_Reg;
    vlSelf->__Vdly__resultE2M_Reg = vlSelf->__PVT__resultE2M_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__14(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__14\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__resultE2M_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem_exception_T) {
        vlSelf->__Vdly__resultE2M_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem_exception_T_1) {
        vlSelf->__Vdly__resultE2M_Reg = vlSelf->__PVT__resultE;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Body
    vlSelf->__PVT__resultE2M_Reg = vlSelf->__Vdly__resultE2M_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT___cfu_io_RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                        & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__22(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__22\n"); );
    // Body
    vlSelf->__PVT___cfu_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___cfu_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___regfile_io_A2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___cu_io1_InstrD = vlSelf->__PVT___if2id_io_InstrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_MemToRegE = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___cfu_io_WriteRegM = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT___cfu_io_RegWriteM = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___cfu_io_MemToRegM = vlSelf->__PVT___ex2mem_io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__24(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__24\n"); );
    // Body
    vlSelf->__PVT___cfu_io_R1E = vlSelf->__PVT___id2ex_io_R1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__25(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__25\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_RegWriteM = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___cfu_io_WriteRegM2 = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT___cfu_io_RegWriteM2 = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___cfu_io_MemToRegM2 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__26(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__26\n"); );
    // Body
    vlSelf->__PVT__ResultW = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT___cfu_io_WriteRegW = vlSelf->__PVT___mem22wb_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__33(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__33\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT___csr_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___ex2mem_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mem2mem2_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___id2ex_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___commit_difftest_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_R_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_1_pc_R_clock = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__37(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__37\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__39(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__39\n"); );
    // Body
    vlSelf->__Vdly__Forward_Lock2E = vlSelf->__PVT__Forward_Lock2E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__40(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__40\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__Forward_Lock2E = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__Forward_Lock2E = 0U;
    } else if ((1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2E), 0U) 
                       | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2E), 1U)) 
                      & (~ (IData)(vlSelf->__PVT__Forward_Lock2E))))) {
        vlSelf->__Vdly__Forward_Lock2E = vlSelf->__PVT___Forward_Lock1E_T_3;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__41(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__41\n"); );
    // Body
    vlSelf->__PVT__Forward_Lock2E = vlSelf->__Vdly__Forward_Lock2E;
    vlSelf->__PVT__RD2ForWardE_r = vlSelf->__Vdly__RD2ForWardE_r;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__42(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__42\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = 0U;
    } else if (vlSelf->__PVT___mem2_exception_T) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = 0U;
    } else if (vlSelf->__PVT___mem2_exception_T_1) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = vlSelf->__PVT__inst_tlb_exceptionM;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__43(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__43\n"); );
    // Body
    vlSelf->__Vdly__inst_tlb_exceptionM = vlSelf->__PVT__inst_tlb_exceptionM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__44(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__44\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__inst_tlb_exceptionM = 0U;
    } else if (vlSelf->__PVT___mem_exception_T) {
        vlSelf->__Vdly__inst_tlb_exceptionM = 0U;
    } else if (vlSelf->__PVT___mem_exception_T_1) {
        vlSelf->__Vdly__inst_tlb_exceptionM = vlSelf->__PVT__inst_tlb_exceptionE;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__45(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__45\n"); );
    // Body
    vlSelf->__Vdly__inst_tlb_exceptionE = vlSelf->__PVT__inst_tlb_exceptionE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_3 = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__47(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__47\n"); );
    // Body
    vlSelf->__PVT___cfu_io_R2E = vlSelf->__PVT___id2ex_io_R2E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__54(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__54\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__55(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__55\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_eBreakE = vlSelf->__PVT___id2ex_io2_eBreakE;
    vlSelf->__PVT___CalCsrDataE_T_7 = VL_EXTEND_II(6,4, 
                                                   (0xfU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 2U, 4U)));
    vlSelf->__PVT___CalCsrDataE_T = vlSelf->__PVT___id2ex_io_csr_controlE;
    vlSelf->__PVT___CalCsrDataE_T_3 = VL_EXTEND_II(6,5, 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 1U, 5U)));
    vlSelf->__PVT___dmemreq_io_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__56(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__56\n"); );
    // Body
    vlSelf->__PVT___mtrace_mod_pc = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc;
    vlSelf->__PVT___commit_difftest_cpu_ebreak_sign 
        = vlSelf->__PVT___mem22wb_io_eBreakW;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_BranchJump_JrW), 0U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__62(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__62\n"); );
    // Body
    vlSelf->__PVT__tlb_exception_co0_writeW = vlSelf->__Vdly__tlb_exception_co0_writeW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT___int_with_timer_int_T_1 = (1U & 
                                              ((IData)(vlSelf->__PVT___csr_io_timer_int_has) 
                                               | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 5U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSelf->__PVT__int_with_timer_int = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___int_with_timer_int_T_1), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 0U, 5U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT__csrWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_csrWriteW));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T 
        = ((IData)(vlSelf->__PVT__int_with_timer_int) 
           & (IData)(vlSelf->__PVT___csr_io_csr_status));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__69(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__69\n"); );
    // Body
    vlSelf->__PVT___cfu_io_csrWriteM = vlSelf->__PVT___ex2mem_io_csrWriteM;
    vlSelf->__PVT___cfu_io_WritecsrAddrM = vlSelf->__PVT___ex2mem_io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__70(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__70\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___ex2mem_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
    vlSelf->__PVT___csr_src1_T = vlSelf->__PVT___id2ex_io_R1E;
    vlSelf->__PVT___muldiv_io_ctrl = vlSelf->__PVT___id2ex_io_muldiv_control;
    vlSelf->__PVT___cfu_io_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___cfu_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__71(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__71\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_csrWriteM = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___dmem_io_WIDTH = vlSelf->__PVT___mem2mem2_io_MemWidthM;
    vlSelf->__PVT___cfu_io_csrWriteM2 = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___cfu_io_WritecsrAddrM2 = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__72(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__72\n"); );
    // Body
    vlSelf->__PVT___mtrace_mod_data = VL_EXTEND_QI(64,32, vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data);
    vlSelf->__PVT___mtrace_mod_addr = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mtrace_mod_mem_req = (0U != (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type));
    vlSelf->__PVT___mtrace_mod_mem_write_read = (1U 
                                                 & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type), 0U));
    vlSelf->__PVT___mtrace_mod_mem_size = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_write_en = ((IData)(vlSelf->__PVT__csrWriteW) 
                                           | (IData)(vlSelf->__PVT__tlb_exception_co0_writeW));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__79(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__79\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__80(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__80\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_bht;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__83(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__83\n"); );
    // Body
    vlSelf->__PVT___regfile_io_A1 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__84(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__84\n"); );
    // Body
    vlSelf->__PVT___regfile_io_WD3 = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT___regfile_io_A3 = vlSelf->__PVT___mem22wb_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__wb_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mtrace_mod_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_M_clock = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__87(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__87\n"); );
    // Body
    vlSelf->__Vdly__stage_fec_2_bht_0 = vlSelf->__PVT__stage_fec_2_bht_0;
    vlSelf->__Vdly__stage_fec_2_hascode_0 = vlSelf->__PVT__stage_fec_2_hascode_0;
    vlSelf->__Vdly__returnPc_req_wait = vlSelf->__PVT__returnPc_req_wait;
    vlSelf->__Vdly__exception_Pc_reg = vlSelf->__PVT__exception_Pc_reg;
    vlSelf->__Vdly__pc_req_wait = vlSelf->__PVT__pc_req_wait;
    vlSelf->__Vdly__true_branch_stateE = vlSelf->__PVT__true_branch_stateE;
    vlSelf->__Vdly__stage_fec_2_stall_reg = vlSelf->__PVT__stage_fec_2_stall_reg;
    vlSelf->__Vdly__stage_fec_2_valid = vlSelf->__PVT__stage_fec_2_valid;
    vlSelf->__Vdly__id_true_branch_state = vlSelf->__PVT__id_true_branch_state;
    vlSelf->__Vdly__pre_decoder_branchdata = vlSelf->__PVT__pre_decoder_branchdata;
    vlSelf->__Vdly__pre_decoder_branchD_flag = vlSelf->__PVT__pre_decoder_branchD_flag;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__88(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__88\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__stage_fec_2_bht_0 = 0U;
    } else if (vlSelf->__PVT__stage2_flush) {
        vlSelf->__Vdly__stage_fec_2_bht_0 = 0U;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage_fec_2_bht_0 = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_L;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__stage_fec_2_hascode_0 = 0U;
    } else if (vlSelf->__PVT__stage2_flush) {
        vlSelf->__Vdly__stage_fec_2_hascode_0 = 0U;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage_fec_2_hascode_0 = vlSelf->__PVT___stage_fec_2_hascode_0_T_1;
    }
    vlSelf->__Vdly__returnPc_req_wait = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                         & (((IData)(vlSelf->__PVT___T_4) 
                                             & (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                            | (IData)(vlSelf->__PVT___GEN_2)));
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__exception_Pc_reg = 0ULL;
    } else if (vlSelf->__PVT___stage_fec_2_branch_answer_T_7) {
        vlSelf->__Vdly__exception_Pc_reg = vlSelf->__PVT___csr_io_return_pc;
    }
    vlSelf->__Vdly__pc_req_wait = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                   & ((((~ (IData)(vlSelf->__PVT__inst_sram_en)) 
                                        & (IData)(vlSelf->__PVT___pc_next_wait_T)) 
                                       & (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_8)) 
                                      | (IData)(vlSelf->__PVT___GEN_0)));
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__true_branch_stateE = 0U;
    } else if (vlSelf->__PVT___ex_exception_T) {
        vlSelf->__Vdly__true_branch_stateE = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__true_branch_stateE = vlSelf->__PVT___T_30;
    }
    vlSelf->__Vdly__stage_fec_2_stall_reg = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                             & ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T))));
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__stage_fec_2_valid = 0U;
    } else if (vlSelf->__PVT__stage_fec_2_stall) {
        vlSelf->__Vdly__stage_fec_2_valid = ((~ (IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)) 
                                             & (IData)(vlSelf->__PVT__stage_fec_1_valid));
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__id_true_branch_state = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__id_true_branch_state = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__id_true_branch_state = vlSelf->__PVT__inst_buffer_read_out_true_branch_state;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_branchdata = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_branchdata = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_branchdata = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchdata;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushD) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchD_flag;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__89(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__89\n"); );
    // Body
    vlSelf->__PVT__pcw_reg = vlSelf->__Vdly__pcw_reg;
    vlSelf->__PVT__PCW_Reg = vlSelf->__Vdly__PCW_Reg;
    vlSelf->__PVT__reg_pc = vlSelf->__Vdly__reg_pc;
    vlSelf->__PVT__exception_Pc_reg = vlSelf->__Vdly__exception_Pc_reg;
    vlSelf->__PVT__returnPc_req_wait = vlSelf->__Vdly__returnPc_req_wait;
    vlSelf->__PVT__pc_req_wait = vlSelf->__Vdly__pc_req_wait;
    vlSelf->__PVT__true_branch_stateE = vlSelf->__Vdly__true_branch_stateE;
    vlSelf->__PVT__stage_fec_2_valid = vlSelf->__Vdly__stage_fec_2_valid;
    vlSelf->__PVT__stage_fec_2_stall_reg = vlSelf->__Vdly__stage_fec_2_stall_reg;
    vlSelf->__PVT__id_true_branch_state = vlSelf->__Vdly__id_true_branch_state;
    vlSelf->__Vdly__pre_decoder_jump = vlSelf->__PVT__pre_decoder_jump;
    vlSelf->__PVT__pre_decoder_branchdata = vlSelf->__Vdly__pre_decoder_branchdata;
    vlSelf->__PVT__pre_decoder_branchD_flag = vlSelf->__Vdly__pre_decoder_branchD_flag;
    vlSelf->__Vdly__pre_decoder_jr = vlSelf->__PVT__pre_decoder_jr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__91(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__91\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_3 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 1U);
    vlSelf->__PVT___pht_tobeE_T_2 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 2U : 0U);
    vlSelf->__PVT___pht_tobeE_T_1 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 2U);
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_jump = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_jump = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_jump = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jump;
    }
    vlSelf->__PVT___br_io_branch = vlSelf->__PVT__pre_decoder_branchdata;
    vlSelf->__PVT___cfu_io_BranchD_Flag = vlSelf->__PVT__pre_decoder_branchD_flag;
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_jr = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_jr = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_jr = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jr;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__93(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__93\n"); );
    // Body
    vlSelf->__PVT___cfu_io_JRD = vlSelf->__PVT__pre_decoder_jr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT__RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__98(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__98\n"); );
    // Body
    vlSelf->__PVT__csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___cfu_io_csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                        & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___alu_io_data_w = vlSelf->__PVT___id2ex_io_data_wE;
    vlSelf->__PVT___alu_io_ctrl = vlSelf->__PVT___id2ex_io2_ALUCtrlE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__99(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__99\n"); );
    // Body
    vlSelf->__PVT___dmem_io_SIGN = (1U & (~ (IData)(vlSelf->__PVT___mem2mem2_io_LoadUnsignedM)));
    vlSelf->__PVT___dmem_io_Physisc_Address = vlSelf->__PVT___mem2mem2_io_PhyAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__100(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__100\n"); );
    // Body
    vlSelf->__PVT___PCW_Reg_T = (0ULL != vlSelf->__PVT___mem22wb_io_PCW);
    vlSelf->__PVT___csr_io_exception_type_i = vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT___csr_io_pc = ((IData)(vlSelf->__PVT___PCW_Reg_T)
                                  ? vlSelf->__PVT___mem22wb_io_PCW
                                  : vlSelf->__PVT__PCW_Reg);
    vlSelf->__PVT___commit_difftest_inst_commit = ((IData)(vlSelf->__PVT___PCW_Reg_T) 
                                                   & (vlSelf->__PVT__pcw_reg 
                                                      != vlSelf->__PVT___mem22wb_io_PCW));
    vlSelf->__PVT___debug_wb_rf_wen_T_2 = ((IData)(vlSelf->__PVT__RegWriteW)
                                            ? 0xfU : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_5 = ((3U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_1)
                                      : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__true_branch_stateE)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__106(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__106\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_bht = vlSelf->__PVT__id_bru_state_io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__9\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_7 = ((1U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_2)
                                      : (IData)(vlSelf->__PVT___pht_tobeE_T_5));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSelf->__PVT__pht_tobeE = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                 ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                 : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__109(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__109\n"); );
    // Body
    vlSelf->__PVT__inst_buffer_full = vlSelf->__PVT__fifo_with_bundle_io_full;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__110(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__110\n"); );
    // Body
    vlSelf->__PVT__Forward_Lock1E = vlSelf->__Vdly__Forward_Lock1E;
    vlSelf->__PVT__RD1ForWardE_r = vlSelf->__Vdly__RD1ForWardE_r;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__111(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__111\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_WriteRegM = vlSelf->__PVT___mem2mem2_io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__113(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__113\n"); );
    // Body
    vlSelf->__Vdly__id_exception = vlSelf->__PVT__id_exception;
    vlSelf->__Vdly__mem2_exception = vlSelf->__PVT__mem2_exception;
    vlSelf->__Vdly__mem_exception = vlSelf->__PVT__mem_exception;
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__mem_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushM) {
        vlSelf->__Vdly__mem_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallM) {
        vlSelf->__Vdly__mem_exception = (0U != vlSelf->__PVT___ex2mem_io_ExceptionTypeE);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__mem2_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushM2) {
        vlSelf->__Vdly__mem2_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallM2) {
        vlSelf->__Vdly__mem2_exception = (0U != vlSelf->__PVT___mem2mem2_io_ExceptionTypeE);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__id_exception = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__id_exception = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__id_exception = ((0U != (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__inst_buffer_read_out_pc, 0U, 2U))) 
                                        | (0U != (IData)(vlSelf->__PVT__inst_buffer_read_out_exception_type)));
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__114(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__114\n"); );
    // Body
    vlSelf->__PVT__pc_next_wait = vlSelf->__Vdly__pc_next_wait;
    vlSelf->__PVT__id_exception = vlSelf->__Vdly__id_exception;
    vlSelf->__PVT__mem2_exception = vlSelf->__Vdly__mem2_exception;
    vlSelf->__PVT__mem_exception = vlSelf->__Vdly__mem_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__115(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__115\n"); );
    // Body
    vlSelf->__PVT___T_36 = ((((IData)(vlSelf->__PVT__ex_exception) 
                              | (IData)(vlSelf->__PVT__mem_exception)) 
                             | (IData)(vlSelf->__PVT__mem2_exception)) 
                            | (IData)(vlSelf->__PVT__wb_exception));
    vlSelf->__PVT___cfu_io_CanBranchD = (1U & (~ ((
                                                   (((IData)(vlSelf->__PVT__id_exception) 
                                                     | (IData)(vlSelf->__PVT__ex_exception)) 
                                                    | (IData)(vlSelf->__PVT__mem_exception)) 
                                                   | (IData)(vlSelf->__PVT__mem2_exception)) 
                                                  | (IData)(vlSelf->__PVT__wb_exception))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__118(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__118\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___id2ex_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___id2ex_io_PCD = vlSelf->__PVT___if2id_io_PCD;
    vlSelf->__PVT___GEN_12 = VL_EXTEND_QI(64,12, (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU)));
    vlSelf->__PVT___immUJ_T_4 = VL_CONCAT_III(21,1,20, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(20,8,12, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xcU, 8U)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U)), 
                                                                          VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x15U, 0xaU)), 0U))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__119(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__119\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___dmemreq_io_MemWriteE = vlSelf->__PVT___id2ex_io2_MemWriteE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__122(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__122\n"); );
    // Body
    vlSelf->__PVT__immUJ_lo_hi = VL_CONCAT_III(11,1,10, 
                                               (1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                               VL_CONCAT_III(10,1,9, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                             VL_CONCAT_III(9,1,8, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                           VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), (IData)(vlSelf->__PVT__immUJ_lo_lo_lo)))))));
    vlSelf->__PVT__immUJ_lo_1 = VL_CONCAT_III(21,1,20, 
                                              (1U & 
                                               VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                              VL_CONCAT_III(20,1,19, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                            VL_CONCAT_III(19,1,18, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                          VL_CONCAT_III(18,1,17, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(17,1,16, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(16,1,15, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(15,5,10, (IData)(vlSelf->__PVT__immUJ_lo_lo_lo), (IData)(vlSelf->__PVT__immUJ_lo_lo))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__123(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__123\n"); );
    // Body
    vlSelf->__PVT__immUJ = VL_CONCAT_QIQ(64,1,63, (1U 
                                                   & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                         VL_CONCAT_QIQ(63,1,62, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                       VL_CONCAT_QIQ(62,1,61, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                     VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_QIQ(58,5,53, (IData)(vlSelf->__PVT__immUJ_lo_lo_lo), 
                                                                                VL_CONCAT_QII(53,32,21, 
                                                                                VL_CONCAT_III(32,11,21, (IData)(vlSelf->__PVT__immUJ_lo_hi), vlSelf->__PVT__immUJ_lo_1), vlSelf->__PVT___immUJ_T_4))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__124(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__124\n"); );
    // Body
    vlSelf->__PVT___PCJumpD_T_5 = (vlSelf->__PVT__immUJ 
                                   + vlSelf->__PVT___if2id_io_PCD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__125(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__125\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSelf->__PVT___commit_difftest_gpr_wire, vlSelf->__PVT___regfile_io_reg_file_alL_out);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__127(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__127\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_hascode_0 = vlSelf->__Vdly__stage_fec_2_hascode_0;
    vlSelf->__PVT__stage_fec_2_bht_0 = vlSelf->__Vdly__stage_fec_2_bht_0;
    vlSelf->__Vdly__stage_fec_1_valid = vlSelf->__PVT__stage_fec_1_valid;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__128(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__128\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__stage_fec_2_hascode_0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht 
        = vlSelf->__PVT__stage_fec_2_bht_0;
    vlSelf->__Vdly__stage_fec_1_valid = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                         & ((IData)(vlSelf->__PVT__stage2_stall) 
                                            | (IData)(vlSelf->__PVT___stage_fec_1_valid_T_2)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__130(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__130\n"); );
    // Body
    vlSelf->__PVT__inst_tlb_exceptionM = vlSelf->__Vdly__inst_tlb_exceptionM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__11\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_WritecsrAddrE = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
                                                   ? 0xaU
                                                   : (IData)(vlSelf->__PVT___ex2mem_io_WritecsrAddrM));
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeE = ((IData)(vlSelf->__PVT__mem_exception)
                                                   ? vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out
                                                   : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__133(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__133\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__inst_tlb_exceptionE = 0U;
    } else if (vlSelf->__PVT___ex_exception_T) {
        vlSelf->__Vdly__inst_tlb_exceptionE = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__inst_tlb_exceptionE = (0U != (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out));
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__135(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__135\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_MemWidthE = vlSelf->__PVT___ex2mem_io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrE = vlSelf->__PVT___ex2mem_io_PhyAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__136(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__136\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
    vlSelf->__PVT___resultE_T_1 = vlSelf->__PVT___id2ex_io2_LinkE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__137(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__137\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_ExceptionTypeM = vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrM = vlSelf->__PVT___mem2mem2_io_BranchJump_JrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__138(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__138\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_1_pc = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__144(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__144\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_hi = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(12,1,11, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(11,1,10, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo))))))));
    vlSelf->__PVT__immSB_lo_lo = VL_CONCAT_III(12,1,11, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(11,1,10, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(10,1,9, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo)))))));
    vlSelf->__PVT___GEN_14 = VL_EXTEND_II(21,3, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_6));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__145(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__145\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_hascode_0_T_1 = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1), (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__146(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__146\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_1 = VL_CONCAT_III(25,1,24, 
                                              (1U & 
                                               VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                              VL_CONCAT_III(24,1,23, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                            VL_CONCAT_III(23,1,22, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                          VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), (IData)(vlSelf->__PVT__immSB_lo_lo)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__147(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__147\n"); );
    // Body
    vlSelf->__PVT___immSB_T_56 = VL_CONCAT_QIQ(51,1,50, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_QIQ(50,1,49, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_QIQ(49,1,48, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(45,1,44, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(44,6,38, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), 
                                                                                VL_CONCAT_QII(38,13,25, (IData)(vlSelf->__PVT__immSB_lo_hi), vlSelf->__PVT__immSB_lo_1)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__148(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__148\n"); );
    // Body
    vlSelf->__PVT__immSB = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___immSB_T_56, 
                                         VL_CONCAT_III(13,1,12, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                       VL_CONCAT_III(12,1,11, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 7U)), 
                                                                     VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 8U, 4U)), 0U)))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__149(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__149\n"); );
    // Body
    vlSelf->__PVT__PCBranchD = (vlSelf->__PVT__immSB 
                                + vlSelf->__PVT___if2id_io_PCD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSelf->__PVT__target_neq_branchD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                         != vlSelf->__PVT__PCBranchD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__155(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__155\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__156(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__156\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_WritecsrAddrD = (0xfffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
    vlSelf->__PVT___id2ex_io_ReadcsrAddrD = (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__157(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__157\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_WriteDataE = vlSelf->__PVT___ex2mem_io_WriteDataM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_data 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_addr 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_len 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__158(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__158\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___ex2mem_io1_WritecsrAddrE = vlSelf->__PVT___id2ex_io2_WritecsrAddrE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT___id2ex_io2_MemToRegE), (IData)(vlSelf->__PVT___id2ex_io2_MemWriteE));
    vlSelf->__PVT___cfu_io_ReadcsrAddrE = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
    vlSelf->__PVT___csr_io_csr_read_addr = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__159(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__159\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__170(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__170\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__171(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__171\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_in_pht = vlSelf->__PVT__mem_bru_state_io_out_pht;
    vlSelf->__PVT__mem2_bru_state_io_in_bht = vlSelf->__PVT__mem_bru_state_io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_in_hashcode = vlSelf->__PVT__mem_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_in_target_pc = vlSelf->__PVT__mem_bru_state_io_out_target_pc;
    vlSelf->__PVT__mem2_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__172(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__172\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_in_pht = vlSelf->__PVT__mem2_bru_state_io_out_pht;
    vlSelf->__PVT__wb_bru_state_io_in_bht = vlSelf->__PVT__mem2_bru_state_io_out_bht;
    vlSelf->__PVT__wb_bru_state_io_in_hashcode = vlSelf->__PVT__mem2_bru_state_io_out_hashcode;
    vlSelf->__PVT__wb_bru_state_io_in_target_pc = vlSelf->__PVT__mem2_bru_state_io_out_target_pc;
    vlSelf->__PVT__wb_bru_state_io_in_lookup_data = vlSelf->__PVT__mem2_bru_state_io_out_lookup_data;
    vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__173(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__173\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_hashcode = vlSelf->__PVT__ex_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_in_target_pc = vlSelf->__PVT__ex_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__174(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__174\n"); );
    // Body
    vlSelf->__PVT__debug_wb_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT___mem22wb_io_PCW, 4U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__180(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__180\n"); );
    // Body
    vlSelf->__PVT__tlb_exception_csr_writeM2 = vlSelf->__Vdly__tlb_exception_csr_writeM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__181(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__181\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2 
        = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag) 
           | (IData)(vlSelf->__PVT__pre_decoder_jump));
    vlSelf->__PVT___id2ex_io_BranchJump_JrD = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__187(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__187\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE = vlSelf->__PVT___ex2mem_io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io1_PCE = vlSelf->__PVT___ex2mem_io_PCM;
    vlSelf->__PVT___mem2mem2_io1_MemRLE = vlSelf->__PVT___ex2mem_io_MemRLM;
    vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE = vlSelf->__PVT___ex2mem_io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io_CsrWritedataE = vlSelf->__PVT___ex2mem_io_CsrWritedataM;
    vlSelf->__PVT___mem2mem2_io_RtE = vlSelf->__PVT___ex2mem_io_RtM;
    vlSelf->__PVT___mem2mem2_io_Pc_NextE = vlSelf->__PVT___ex2mem_io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_pc 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__188(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__188\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_LoadUnsignedE = vlSelf->__PVT___id2ex_io2_LoadUnsignedE;
    vlSelf->__PVT___ex2mem_io1_csrWriteE = vlSelf->__PVT___id2ex_io2_csrWriteE;
    vlSelf->__PVT___ex2mem_io1_PCE = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___ex2mem_io1_BranchJump_JrE = vlSelf->__PVT___id2ex_io2_BranchJump_JrE;
    vlSelf->__PVT___ex2mem_io_Pc_NextE = vlSelf->__PVT___id2ex_io_Pc_NextE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc = vlSelf->__PVT___id2ex_io2_PCE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__189(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__189\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_WritecsrAddrM = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
    vlSelf->__PVT___mem22wb_io_CsrWritedataM = vlSelf->__PVT___mem2mem2_io_CsrWritedataM;
    vlSelf->__PVT___mem22wb_io_PCM = vlSelf->__PVT___mem2mem2_io_PCM;
    vlSelf->__PVT___mem22wb_io_eBreakM = vlSelf->__PVT___mem2mem2_io_eBreakM;
    vlSelf->__PVT___mem22wb_io_Pc_NextM = vlSelf->__PVT___mem2mem2_io_Pc_NextM;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__190(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__190\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_write_data = vlSelf->__PVT___mem22wb_io_CsrWritedataW;
    vlSelf->__PVT___csr_io_csr_write_addr = vlSelf->__PVT___mem22wb_io_WritecsrAddrW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__191(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__191\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 0U))
                                               ? 8U
                                               : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__196(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__196\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = VL_EXTEND_II(21,4, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_5));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__197(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__197\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_7 = (vlSelf->__PVT___ExceptionTypeD_Out_T_4 
                                              | vlSelf->__PVT___GEN_13);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__198(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__198\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_8 = (vlSelf->__PVT___ExceptionTypeD_Out_T_7 
                                              | vlSelf->__PVT___GEN_14);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__199(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__199\n"); );
    // Body
    vlSelf->__PVT__ExceptionTypeD_Out = VL_EXTEND_QI(64,21, vlSelf->__PVT___ExceptionTypeD_Out_T_8);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_bht = VL_CONCAT_III(7,6,1, 
                                                           (0x3fU 
                                                            & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_bht), 0U, 6U)), (IData)(vlSelf->__PVT__true_branch_stateE));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__16(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__16\n"); );
    // Body
    vlSelf->__PVT___regfile_io_WE3 = ((IData)(vlSelf->__PVT__RegWriteW) 
                                      & (IData)(vlSelf->__PVT___commit_difftest_data_ok_ok));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__202(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__202\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__203(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__203\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_pht = vlSelf->__PVT__id_bru_state_io_out_pht;
    vlSelf->__PVT__ex_bru_state_io_in_hashcode = vlSelf->__PVT__id_bru_state_io_out_hashcode;
    vlSelf->__PVT__ex_bru_state_io_in_lookup_data = vlSelf->__PVT__id_bru_state_io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__204(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__204\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_RegWriteE = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io1_Tlb_Control = vlSelf->__PVT___ex2mem_io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_WriteRegE = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT_____05Fmem2mem2_io_csrWriteE_T = vlSelf->__PVT___ex2mem_io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__205(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__205\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 0U))
            ? vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data
            : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__206(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__206\n"); );
    // Body
    vlSelf->__PVT__inst_tlb_exceptionE = vlSelf->__Vdly__inst_tlb_exceptionE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__19(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__19\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                               ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                               : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__21(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__21\n"); );
    // Body
    vlSelf->__PVT___pht_lookup_value_tobeE_T_12 = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_5)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_2));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__22(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__22\n"); );
    // Body
    vlSelf->__PVT___pht_lookup_value_tobeE_T_14 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_8)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_12));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value 
        = ((3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
            ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_10)
            : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_14));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__212(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__212\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_1 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__213(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__213\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_pc = vlSelf->__PVT___mem22wb_io_PCW;
}
