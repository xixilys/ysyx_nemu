// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_myCPU.h"

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__Vdly__returnPc_req_wait = vlSelf->__PVT__returnPc_req_wait;
    vlSelf->__Vdly__exception_Pc_reg = vlSelf->__PVT__exception_Pc_reg;
    vlSelf->__Vdly__id_true_branch_state = vlSelf->__PVT__id_true_branch_state;
    vlSelf->__Vdly__pre_decoder_branchD_flag = vlSelf->__PVT__pre_decoder_branchD_flag;
    vlSelf->__Vdly__pre_decoder_branchdata = vlSelf->__PVT__pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__Vdly__returnPc_req_wait = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                         & (((IData)(vlSelf->__PVT___T_4) 
                                             & (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                            | (IData)(vlSelf->__PVT___GEN_2)));
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__exception_Pc_reg = 0ULL;
    } else if (vlSelf->__PVT___stage_fec_2_branch_answer_T_7) {
        vlSelf->__Vdly__exception_Pc_reg = vlSelf->__PVT___csr_io_return_pc;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__id_true_branch_state = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__id_true_branch_state = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__id_true_branch_state = vlSelf->__PVT__inst_buffer_read_out_true_branch_state;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushD) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_branchD_flag = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchD_flag;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_branchdata = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_branchdata = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_branchdata = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchdata;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT__exception_Pc_reg = vlSelf->__Vdly__exception_Pc_reg;
    vlSelf->__PVT__returnPc_req_wait = vlSelf->__Vdly__returnPc_req_wait;
    vlSelf->__PVT__id_true_branch_state = vlSelf->__Vdly__id_true_branch_state;
    vlSelf->__PVT__pre_decoder_branchD_flag = vlSelf->__Vdly__pre_decoder_branchD_flag;
    vlSelf->__PVT__pre_decoder_branchdata = vlSelf->__Vdly__pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT___cfu_io_BranchD_Flag = vlSelf->__PVT__pre_decoder_branchD_flag;
    vlSelf->__PVT___br_io_branch = vlSelf->__PVT__pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__14(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__14\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_lookup_data = vlSelf->__PVT__id_bru_state_io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Body
    vlSelf->__PVT___mtrace_mod_mem_size = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__16(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__16\n"); );
    // Body
    vlSelf->__PVT__csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___cfu_io_csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                        & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___dmemreq_io_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__19(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__19\n"); );
    // Body
    vlSelf->__Vdly__Forward_Lock2E = vlSelf->__PVT__Forward_Lock2E;
    vlSelf->__Vdly__Forward_Lock1E = vlSelf->__PVT__Forward_Lock1E;
    vlSelf->__Vdly__tlb_exception_co0_writeW = vlSelf->__PVT__tlb_exception_co0_writeW;
    vlSelf->__Vdly__pc_next_wait = vlSelf->__PVT__pc_next_wait;
    vlSelf->__Vdly__wb_exception = vlSelf->__PVT__wb_exception;
    vlSelf->__Vdly__RD2ForWardE_r = vlSelf->__PVT__RD2ForWardE_r;
    vlSelf->__Vdly__RD1ForWardE_r = vlSelf->__PVT__RD1ForWardE_r;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__20(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__20\n"); );
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
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = 0U;
    } else if (vlSelf->__PVT___wb_exception_T) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = 0U;
    } else if (vlSelf->__PVT___wb_exception_T_1) {
        vlSelf->__Vdly__tlb_exception_co0_writeW = vlSelf->__PVT__tlb_exception_csr_writeM2;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pc_next_wait = 0ULL;
    } else if (((IData)(vlSelf->__PVT__ready_to_branch) 
                | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer))) {
        vlSelf->__Vdly__pc_next_wait = ((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)
                                         ? ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                             ? ((IData)(vlSelf->__PVT__pre_decoder_jr)
                                                 ? vlSelf->__PVT___PCJumpD_T_58
                                                 : vlSelf->__PVT___PCJumpD_T_60)
                                             : ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                                 ? vlSelf->__PVT__PCBranchD
                                                 : vlSelf->__PVT___if2id_io_PCPlus4D))
                                         : ((IData)(vlSelf->__PVT__stage_fec_2_branch_answer)
                                             ? vlSelf->__PVT__stage_fec_2_pre_target_0
                                             : vlSelf->__PVT___stage_fec_1_pc_next_T_1));
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__wb_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushW) {
        vlSelf->__Vdly__wb_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallW) {
        vlSelf->__Vdly__wb_exception = (0U != vlSelf->__PVT___mem22wb_io_ExceptionTypeM);
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
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__21(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__21\n"); );
    // Body
    vlSelf->__PVT__pc_next_wait = vlSelf->__Vdly__pc_next_wait;
    vlSelf->__Vdly__tlb_exception_csr_writeM2 = vlSelf->__PVT__tlb_exception_csr_writeM2;
    vlSelf->__Vdly__pre_decoder_jr = vlSelf->__PVT__pre_decoder_jr;
    vlSelf->__PVT__Forward_Lock1E = vlSelf->__Vdly__Forward_Lock1E;
    vlSelf->__PVT__RD1ForWardE_r = vlSelf->__Vdly__RD1ForWardE_r;
    vlSelf->__PVT__wb_exception = vlSelf->__Vdly__wb_exception;
    vlSelf->__Vdly__ResultM2_Reg = vlSelf->__PVT__ResultM2_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__22(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__22\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = 0U;
    } else if (vlSelf->__PVT___mem2_exception_T) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = 0U;
    } else if (vlSelf->__PVT___mem2_exception_T_1) {
        vlSelf->__Vdly__tlb_exception_csr_writeM2 = vlSelf->__PVT__inst_tlb_exceptionM;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__ResultM2_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem2_exception_T) {
        vlSelf->__Vdly__ResultM2_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem2_exception_T_1) {
        vlSelf->__Vdly__ResultM2_Reg = vlSelf->__PVT__resultE2M_Reg;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSelf->__Vdly__inst_tlb_exceptionM = vlSelf->__PVT__inst_tlb_exceptionM;
    vlSelf->__PVT__ResultM2_Reg = vlSelf->__Vdly__ResultM2_Reg;
    vlSelf->__Vdly__resultE2M_Reg = vlSelf->__PVT__resultE2M_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT__RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
    vlSelf->__PVT___cfu_io_RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                        & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__30(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__30\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__inst_tlb_exceptionM = 0U;
    } else if (vlSelf->__PVT___mem_exception_T) {
        vlSelf->__Vdly__inst_tlb_exceptionM = 0U;
    } else if (vlSelf->__PVT___mem_exception_T_1) {
        vlSelf->__Vdly__inst_tlb_exceptionM = vlSelf->__PVT__inst_tlb_exceptionE;
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__resultE2M_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem_exception_T) {
        vlSelf->__Vdly__resultE2M_Reg = 0ULL;
    } else if (vlSelf->__PVT___mem_exception_T_1) {
        vlSelf->__Vdly__resultE2M_Reg = vlSelf->__PVT__resultE;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__31(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__31\n"); );
    // Body
    vlSelf->__PVT__ResultW = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT___cfu_io_WriteRegW = vlSelf->__PVT___mem22wb_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__32(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__32\n"); );
    // Body
    vlSelf->__PVT___cfu_io_RegWriteM = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___cfu_io_MemToRegM = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___cfu_io_WriteRegM = vlSelf->__PVT___ex2mem_io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__33(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__33\n"); );
    // Body
    vlSelf->__PVT___dmem_io_SIGN = (1U & (~ (IData)(vlSelf->__PVT___mem2mem2_io_LoadUnsignedM)));
    vlSelf->__PVT___dmem_io_Physisc_Address = vlSelf->__PVT___mem2mem2_io_PhyAddrM;
    vlSelf->__PVT___cfu_io_RegWriteM2 = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___cfu_io_MemToRegM2 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
    vlSelf->__PVT___cfu_io_WriteRegM2 = vlSelf->__PVT___mem2mem2_io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__34(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__34\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_7 = VL_EXTEND_II(6,4, 
                                                   (0xfU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 2U, 4U)));
    vlSelf->__PVT___CalCsrDataE_T = vlSelf->__PVT___id2ex_io_csr_controlE;
    vlSelf->__PVT___CalCsrDataE_T_3 = VL_EXTEND_II(6,5, 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 1U, 5U)));
    vlSelf->__PVT___dmemreq_io_MemWriteE = vlSelf->__PVT___id2ex_io2_MemWriteE;
    vlSelf->__PVT___alu_io_data_w = vlSelf->__PVT___id2ex_io_data_wE;
    vlSelf->__PVT___alu_io_ctrl = vlSelf->__PVT___id2ex_io2_ALUCtrlE;
    vlSelf->__PVT___cfu_io_R2E = vlSelf->__PVT___id2ex_io_R2E;
    vlSelf->__PVT___cfu_io_R1E = vlSelf->__PVT___id2ex_io_R1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__35(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__35\n"); );
    // Body
    vlSelf->__Vdly__inst_tlb_exceptionE = vlSelf->__PVT__inst_tlb_exceptionE;
    vlSelf->__PVT__resultE2M_Reg = vlSelf->__Vdly__resultE2M_Reg;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__40(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__40\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__inst_tlb_exceptionE = 0U;
    } else if (vlSelf->__PVT___ex_exception_T) {
        vlSelf->__Vdly__inst_tlb_exceptionE = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__inst_tlb_exceptionE = (0U != (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out));
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__41(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__41\n"); );
    // Body
    vlSelf->__Vdly__pcw_reg = vlSelf->__PVT__pcw_reg;
    vlSelf->__Vdly__PCW_Reg = vlSelf->__PVT__PCW_Reg;
    vlSelf->__Vdly__reg_pc = vlSelf->__PVT__reg_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__42(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__42\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__PCW_Reg = 0ULL;
    } else if ((0ULL != vlSelf->__PVT___mem22wb_io_PCW)) {
        vlSelf->__Vdly__PCW_Reg = vlSelf->__PVT___mem22wb_io_PCW;
    }
    vlSelf->__Vdly__pcw_reg = ((IData)(vlSelf->__PVT___T_2)
                                ? 0ULL : vlSelf->__PVT___mem22wb_io_PCW);
    vlSelf->__Vdly__reg_pc = ((IData)(vlSelf->__PVT___T_2)
                               ? 0ULL : vlSelf->__PVT___mem22wb_io_PCW);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__49(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__49\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__50(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__50\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_BranchJump_JrW), 0U));
    vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc 
        = vlSelf->__PVT___mem22wb_io_PCW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__51(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__51\n"); );
    // Body
    vlSelf->__PVT__PCJumpD_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)))))));
    vlSelf->__PVT___cfu_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___cfu_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___cu_io1_InstrD = vlSelf->__PVT___if2id_io_InstrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__52(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__52\n"); );
    // Body
    vlSelf->__PVT___cfu_io_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___cfu_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__58(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__58\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pc 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__68(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__68\n"); );
    // Body
    vlSelf->__PVT___cfu_io_WritecsrAddrM = vlSelf->__PVT___ex2mem_io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__69(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__69\n"); );
    // Body
    vlSelf->__PVT___cfu_io_csrWriteM2 = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___cfu_io_WritecsrAddrM2 = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__70(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__70\n"); );
    // Body
    vlSelf->__PVT___muldiv_io_ctrl = vlSelf->__PVT___id2ex_io_muldiv_control;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__74(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__74\n"); );
    // Body
    vlSelf->__Vdly__stage_fec_2_bht_0 = vlSelf->__PVT__stage_fec_2_bht_0;
    vlSelf->__Vdly__stage_fec_2_hascode_0 = vlSelf->__PVT__stage_fec_2_hascode_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__75(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__75\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__76(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__76\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_bht_0 = vlSelf->__Vdly__stage_fec_2_bht_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__77(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__77\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht 
        = vlSelf->__PVT__stage_fec_2_bht_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__81(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__81\n"); );
    // Body
    vlSelf->__Vdly__id_exception = vlSelf->__PVT__id_exception;
    vlSelf->__Vdly__mem2_exception = vlSelf->__PVT__mem2_exception;
    vlSelf->__Vdly__mem_exception = vlSelf->__PVT__mem_exception;
    vlSelf->__Vdly__ex_exception = vlSelf->__PVT__ex_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__82(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__82\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__id_exception = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__id_exception = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__id_exception = ((0U != (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__inst_buffer_read_out_pc, 0U, 2U))) 
                                        | (0U != (IData)(vlSelf->__PVT__inst_buffer_read_out_exception_type)));
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__mem2_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushM2) {
        vlSelf->__Vdly__mem2_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallM2) {
        vlSelf->__Vdly__mem2_exception = (0U != vlSelf->__PVT___mem2mem2_io_ExceptionTypeE);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__mem_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushM) {
        vlSelf->__Vdly__mem_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_StallM) {
        vlSelf->__Vdly__mem_exception = (0U != vlSelf->__PVT___ex2mem_io_ExceptionTypeE);
    }
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__ex_exception = 0U;
    } else if (vlSelf->__PVT___cfu_io_FlushE) {
        vlSelf->__Vdly__ex_exception = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__ex_exception = (0U != vlSelf->__PVT___id2ex_io_ExceptionTypeD);
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__83(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__83\n"); );
    // Body
    vlSelf->__PVT__id_exception = vlSelf->__Vdly__id_exception;
    vlSelf->__PVT__mem2_exception = vlSelf->__Vdly__mem2_exception;
    vlSelf->__PVT__ex_exception = vlSelf->__Vdly__ex_exception;
    vlSelf->__PVT__mem_exception = vlSelf->__Vdly__mem_exception;
    vlSelf->__Vdly__pre_decoder_jump = vlSelf->__PVT__pre_decoder_jump;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__85(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__85\n"); );
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
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_jump = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_jump = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_jump = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jump;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__93(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__93\n"); );
    // Body
    vlSelf->__PVT___mtrace_mod_data = VL_EXTEND_QI(64,32, vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data);
    vlSelf->__PVT___mtrace_mod_pc = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mtrace_mod_addr = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mtrace_mod_mem_req = (0U != (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type));
    vlSelf->__PVT___mtrace_mod_mem_write_read = (1U 
                                                 & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type), 0U));
    vlSelf->__PVT___commit_difftest_cpu_ebreak_sign 
        = vlSelf->__PVT___mem22wb_io_eBreakW;
    vlSelf->__PVT___csr_io_exception_type_i = vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__94(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__94\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 0U))
            ? vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data
            : 0U);
    vlSelf->__PVT___dmem_io_WIDTH = vlSelf->__PVT___mem2mem2_io_MemWidthM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__95(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__95\n"); );
    // Body
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
    vlSelf->__PVT___regfile_io_A2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___regfile_io_A1 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__96(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__96\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_eBreakE = vlSelf->__PVT___id2ex_io2_eBreakE;
    vlSelf->__PVT___dmemreq_io_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__103(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__103\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSelf->__PVT___commit_difftest_gpr_wire, vlSelf->__PVT___regfile_io_reg_file_alL_out);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT___cfu_io_InException = vlSelf->__PVT___csr_io_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__108(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__108\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__pre_decoder_jr = 0U;
    } else if (vlSelf->__PVT___pre_decoder_branchD_flag_T) {
        vlSelf->__Vdly__pre_decoder_jr = 0U;
    } else if (vlSelf->__PVT___PCSrcD_T_1) {
        vlSelf->__Vdly__pre_decoder_jr = vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jr;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__109(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__109\n"); );
    // Body
    vlSelf->__PVT__pre_decoder_jr = vlSelf->__Vdly__pre_decoder_jr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__115(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__115\n"); );
    // Body
    vlSelf->__PVT___cfu_io_JRD = vlSelf->__PVT__pre_decoder_jr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__116(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__116\n"); );
    // Body
    vlSelf->__PVT___regfile_io_WD3 = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT___regfile_io_A3 = vlSelf->__PVT___mem22wb_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__117(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__117\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_PhyAddrE = vlSelf->__PVT___ex2mem_io_PhyAddrM;
    vlSelf->__PVT___mem2mem2_io_RtE = vlSelf->__PVT___ex2mem_io_RtM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__118(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__118\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_PCPlus4D = vlSelf->__PVT___if2id_io_PCPlus4D;
    vlSelf->__PVT___ExceptionTypeD_Out_T_1 = (0U != 
                                              (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT___if2id_io_PCD, 0U, 2U)));
    vlSelf->__PVT___immSB_T_4 = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 7U)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 8U, 4U)), 0U))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__119(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__119\n"); );
    // Body
    vlSelf->__PVT___resultE_T_1 = vlSelf->__PVT___id2ex_io2_LinkE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__124(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__124\n"); );
    // Body
    vlSelf->__PVT___resultE_T_4 = ((IData)(vlSelf->__PVT___resultE_T_1)
                                    ? vlSelf->__PVT___id2ex_io2_PCPlus4E
                                    : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__125(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__125\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__127(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__127\n"); );
    // Body
    vlSelf->__PVT___stage_fec_1_pc_next_T_1 = (4ULL 
                                               + vlSelf->__PVT__stage_fec_1_pc);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__128(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__128\n"); );
    // Body
    vlSelf->__PVT__inst_tlb_exceptionE = vlSelf->__Vdly__inst_tlb_exceptionE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__129(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__129\n"); );
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
    vlSelf->__PVT___ExceptionTypeD_Out_T_6 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 1U))
                                               ? 4U
                                               : 0U);
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 0U))
                                               ? 8U
                                               : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__130(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__130\n"); );
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
    vlSelf->__PVT___GEN_13 = VL_EXTEND_II(21,3, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_6));
    vlSelf->__PVT___GEN_12 = VL_EXTEND_II(21,4, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_5));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__131(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__131\n"); );
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
    vlSelf->__PVT___ExceptionTypeD_Out_T_7 = (vlSelf->__PVT___ExceptionTypeD_Out_T_4 
                                              | vlSelf->__PVT___GEN_12);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__132(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__132\n"); );
    // Body
    vlSelf->__PVT__PCBranchD = (vlSelf->__PVT__immSB 
                                + vlSelf->__PVT___if2id_io_PCD);
    vlSelf->__PVT___ExceptionTypeD_Out_T_8 = (vlSelf->__PVT___ExceptionTypeD_Out_T_7 
                                              | vlSelf->__PVT___GEN_13);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSelf->__PVT__target_neq_branchD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                         != vlSelf->__PVT__PCBranchD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__133(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__133\n"); );
    // Body
    vlSelf->__PVT__ExceptionTypeD_Out = VL_EXTEND_QI(64,21, vlSelf->__PVT___ExceptionTypeD_Out_T_8);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSelf->__PVT___dmem_io_rdata = vlSelf->__PVT__data_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__134(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__134\n"); );
    // Body
    vlSelf->__PVT__Forward_Lock2E = vlSelf->__Vdly__Forward_Lock2E;
    vlSelf->__PVT__RD2ForWardE_r = vlSelf->__Vdly__RD2ForWardE_r;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__135(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__135\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_read_addr = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__137(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__137\n"); );
    // Body
    vlSelf->__PVT__pcw_reg = vlSelf->__Vdly__pcw_reg;
    vlSelf->__PVT__PCW_Reg = vlSelf->__Vdly__PCW_Reg;
    vlSelf->__PVT__reg_pc = vlSelf->__Vdly__reg_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__142(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__142\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_target_pc = vlSelf->__PVT__ex_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__143(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__143\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_in_target_pc = vlSelf->__PVT__mem_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__144(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__144\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_in_target_pc = vlSelf->__PVT__mem2_bru_state_io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__145(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__145\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT___PCW_Reg_T = (0ULL != vlSelf->__PVT___mem22wb_io_PCW);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__146(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__146\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_WriteRegE = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT___cfu_io_csrWriteM = vlSelf->__PVT___ex2mem_io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__147(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__147\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_WritecsrAddrD = (0xfffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__148(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__148\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_WritecsrAddrE = vlSelf->__PVT___id2ex_io2_WritecsrAddrE;
    vlSelf->__PVT___csr_src1_T = vlSelf->__PVT___id2ex_io_R1E;
    vlSelf->__PVT___cfu_io_ReadcsrAddrE = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__11\n"); );
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

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__149(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__149\n"); );
    // Body
    vlSelf->__PVT___int_with_timer_int_T_1 = (1U & 
                                              ((IData)(vlSelf->__PVT___csr_io_timer_int_has) 
                                               | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 5U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__156(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__156\n"); );
    // Body
    vlSelf->__PVT__int_with_timer_int = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___int_with_timer_int_T_1), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 0U, 5U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T 
        = ((IData)(vlSelf->__PVT__int_with_timer_int) 
           & (IData)(vlSelf->__PVT___csr_io_csr_status));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__14(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__14\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_inst_jump = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x21U));
    vlSelf->__PVT__stage_fec_2_inst_branch = (1U & 
                                              VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x20U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__159(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__159\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_ok = vlSelf->__PVT__data_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__162(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__162\n"); );
    // Body
    vlSelf->__PVT___cfu_io_DataPendingM = vlSelf->__PVT___dmem_io_data_pending;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__17(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__17\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_inst 
        = VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0U, 0x20U);
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag 
        = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x20U));
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump 
        = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x21U));
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata 
        = (0x3fU & VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x22U, 6U));
    vlSelf->__PVT__inst_buffer_write_bundle_inst = 
        VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__164(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__164\n"); );
    // Body
    vlSelf->__Vdly__true_branch_stateE = vlSelf->__PVT__true_branch_stateE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__165(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__165\n"); );
    // Body
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__true_branch_stateE = 0U;
    } else if (vlSelf->__PVT___ex_exception_T) {
        vlSelf->__Vdly__true_branch_stateE = 0U;
    } else if (vlSelf->__PVT___commit_cache_reg_T) {
        vlSelf->__Vdly__true_branch_stateE = vlSelf->__PVT___T_30;
    }
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__166(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__166\n"); );
    // Body
    vlSelf->__PVT__true_branch_stateE = vlSelf->__Vdly__true_branch_stateE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__167(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__167\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_3 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 1U);
    vlSelf->__PVT___pht_tobeE_T_2 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 2U : 0U);
    vlSelf->__PVT___pht_tobeE_T_1 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 2U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__171(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__171\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__172(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__172\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_pht = vlSelf->__PVT__id_bru_state_io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__177(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__177\n"); );
    // Body
    vlSelf->__Vdly__pc_req_wait = vlSelf->__PVT__pc_req_wait;
    vlSelf->__Vdly__stage_fec_2_stall_reg = vlSelf->__PVT__stage_fec_2_stall_reg;
    vlSelf->__Vdly__stage_fec_2_valid = vlSelf->__PVT__stage_fec_2_valid;
    vlSelf->__Vdly__pc_req_wait = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                   & ((((~ (IData)(vlSelf->__PVT__inst_sram_en)) 
                                        & (IData)(vlSelf->__PVT___pc_next_wait_T)) 
                                       & (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_8)) 
                                      | (IData)(vlSelf->__PVT___GEN_0)));
    vlSelf->__Vdly__stage_fec_2_stall_reg = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                             & ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T))));
    if (vlSelf->__PVT___T_2) {
        vlSelf->__Vdly__stage_fec_2_valid = 0U;
    } else if (vlSelf->__PVT__stage_fec_2_stall) {
        vlSelf->__Vdly__stage_fec_2_valid = ((~ (IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)) 
                                             & (IData)(vlSelf->__PVT__stage_fec_1_valid));
    }
    vlSelf->__PVT__pc_req_wait = vlSelf->__Vdly__pc_req_wait;
    vlSelf->__Vdly__stage_fec_1_valid = vlSelf->__PVT__stage_fec_1_valid;
    vlSelf->__PVT__stage_fec_2_valid = vlSelf->__Vdly__stage_fec_2_valid;
    vlSelf->__PVT__stage_fec_2_stall_reg = vlSelf->__Vdly__stage_fec_2_stall_reg;
    vlSelf->__Vdly__stage_fec_1_valid = ((~ (IData)(vlSelf->__PVT___T_2)) 
                                         & ((IData)(vlSelf->__PVT__stage2_stall) 
                                            | (IData)(vlSelf->__PVT___stage_fec_1_valid_T_2)));
    vlSelf->__PVT__stage_fec_1_valid = vlSelf->__Vdly__stage_fec_1_valid;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__21(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__21\n"); );
    // Body
    vlSelf->__PVT___regfile_io_WE3 = ((IData)(vlSelf->__PVT__RegWriteW) 
                                      & (IData)(vlSelf->__PVT___commit_difftest_data_ok_ok));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__178(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__178\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_hashcode = vlSelf->__PVT__id_bru_state_io_out_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__179(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__179\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_hashcode = vlSelf->__PVT__ex_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__180(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__180\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_in_hashcode = vlSelf->__PVT__mem_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__181(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__181\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_in_hashcode = vlSelf->__PVT__mem2_bru_state_io_out_hashcode;
    vlSelf->__PVT__wb_bru_state_io_in_lookup_data = vlSelf->__PVT__mem2_bru_state_io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__187(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__187\n"); );
    // Body
    vlSelf->__PVT___cfu_io_dmem_calD = vlSelf->__PVT___cu_io1_dmem_addr_cal;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__24(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__24\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_debug_pc = ((IData)(vlSelf->__PVT__wb_exception)
                                                 ? vlSelf->__PVT___csr_io_return_pc
                                                 : vlSelf->__PVT___mem22wb_io_Pc_NextW);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__25(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__25\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_branch_answer_T_8 = 
        (1U & (~ (IData)(vlSelf->__PVT___csr_io_exception)));
    vlSelf->__PVT__fifo_with_bundle_io_point_flush 
        = vlSelf->__PVT___csr_io_exception;
    vlSelf->__PVT___stage_fec_2_branch_answer_T_7 = vlSelf->__PVT___csr_io_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__30(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__30\n"); );
    // Body
    vlSelf->__PVT___commit_cache_reg_T = vlSelf->__PVT___cfu_io_StallE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__32(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__32\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_en = ((~ (IData)(vlSelf->__PVT___T_36)) 
                                     & (IData)(vlSelf->__PVT___commit_cache_reg_T));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__33(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__33\n"); );
    // Body
    vlSelf->__PVT___if2id_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___PCSrcD_T_1 = vlSelf->__PVT___cfu_io_StallD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__37(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__37\n"); );
    // Body
    vlSelf->__PVT___BranchR2D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD2);
    vlSelf->__PVT___BranchR1D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__38(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__38\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_RD2D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR2D_T_2);
    vlSelf->__PVT__BranchR1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___br_io_r1 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___br_io_r2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR2D_T_2);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__41(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__41\n"); );
    // Body
    vlSelf->__PVT__target_neq_jumpD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                       != vlSelf->__PVT__PCJumpD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__46(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__46\n"); );
    // Body
    vlSelf->__PVT___PCSrcD_T_3 = vlSelf->__PVT___br_io_exe;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__47(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__47\n"); );
    // Body
    vlSelf->__PVT__target_addr_error = (((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                         & (IData)(vlSelf->__PVT__target_neq_jumpD)) 
                                        | ((IData)(vlSelf->__PVT___PCSrcD_T_3) 
                                           & (IData)(vlSelf->__PVT__target_neq_branchD)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__48(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__48\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_point_write_en 
        = (((IData)(vlSelf->__PVT___PCSrcD_T_1) & (
                                                   (((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                                     | (IData)(vlSelf->__PVT___PCSrcD_T_3)) 
                                                    != (IData)(vlSelf->__PVT__id_true_branch_state)) 
                                                   | (IData)(vlSelf->__PVT__target_addr_error))) 
           & (~ ((((IData)(vlSelf->__PVT__ex_exception) 
                   | (IData)(vlSelf->__PVT__mem_exception)) 
                  | (IData)(vlSelf->__PVT__mem2_exception)) 
                 | (IData)(vlSelf->__PVT__wb_exception))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__49(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__49\n"); );
    // Body
    vlSelf->__PVT___T_30 = ((IData)(vlSelf->__PVT__pre_decoder_jump) 
                            | (IData)(vlSelf->__PVT___PCSrcD_T_3));
    vlSelf->__PVT___PC_nextD_T_2 = ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                     ? vlSelf->__PVT__PCBranchD
                                     : vlSelf->__PVT___if2id_io_PCPlus4D);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__51(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__51\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_Pc_NextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                          ? vlSelf->__PVT__PCJumpD
                                          : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT__PC_nextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                ? vlSelf->__PVT__PCJumpD
                                : vlSelf->__PVT___PC_nextD_T_2);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__189(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__189\n"); );
    // Body
    vlSelf->__PVT__tlb_exception_co0_writeW = vlSelf->__Vdly__tlb_exception_co0_writeW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__190(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__190\n"); );
    // Body
    vlSelf->__PVT__tlb_exception_csr_writeM2 = vlSelf->__Vdly__tlb_exception_csr_writeM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__54(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__54\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_bht = VL_CONCAT_III(7,6,1, 
                                                           (0x3fU 
                                                            & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_bht), 0U, 6U)), (IData)(vlSelf->__PVT__true_branch_stateE));
    vlSelf->__PVT___pht_tobeE_T_5 = ((3U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_1)
                                      : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__true_branch_stateE)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__55(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__55\n"); );
    // Body
    vlSelf->__PVT__csrWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_csrWriteW));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__56(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__56\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeE = ((IData)(vlSelf->__PVT__mem_exception)
                                                   ? vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out
                                                   : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__57(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__57\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_3 = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__192(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__192\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2 
        = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag) 
           | (IData)(vlSelf->__PVT__pre_decoder_jump));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__197(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__197\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_bht = vlSelf->__PVT__id_bru_state_io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__198(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__198\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_in_pht = vlSelf->__PVT__mem_bru_state_io_out_pht;
    vlSelf->__PVT__mem2_bru_state_io_in_bht = vlSelf->__PVT__mem_bru_state_io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__199(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__199\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_in_pht = vlSelf->__PVT__mem2_bru_state_io_out_pht;
    vlSelf->__PVT__wb_bru_state_io_in_bht = vlSelf->__PVT__mem2_bru_state_io_out_bht;
    vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__200(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__200\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_write_data = vlSelf->__PVT___mem22wb_io_CsrWritedataW;
    vlSelf->__PVT___csr_io_csr_write_addr = vlSelf->__PVT___mem22wb_io_WritecsrAddrW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__201(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__201\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_RegWriteE = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io1_MemToRegE = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE = vlSelf->__PVT___ex2mem_io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io1_MemWidthE = vlSelf->__PVT___ex2mem_io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io1_PCE = vlSelf->__PVT___ex2mem_io_PCM;
    vlSelf->__PVT___mem2mem2_io1_MemRLE = vlSelf->__PVT___ex2mem_io_MemRLM;
    vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE = vlSelf->__PVT___ex2mem_io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io1_Tlb_Control = vlSelf->__PVT___ex2mem_io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_WriteDataE = vlSelf->__PVT___ex2mem_io_WriteDataM;
    vlSelf->__PVT___mem2mem2_io_CsrWritedataE = vlSelf->__PVT___ex2mem_io_CsrWritedataM;
    vlSelf->__PVT___mem2mem2_io_Pc_NextE = vlSelf->__PVT___ex2mem_io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_pc 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_data 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_addr 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_len 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len;
    vlSelf->__PVT_____05Fmem2mem2_io_csrWriteE_T = vlSelf->__PVT___ex2mem_io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__202(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__202\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_RegWriteM = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___mem22wb_io_WriteRegM = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT___mem22wb_io_csrWriteM = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___mem22wb_io_WritecsrAddrM = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
    vlSelf->__PVT___mem22wb_io_CsrWritedataM = vlSelf->__PVT___mem2mem2_io_CsrWritedataM;
    vlSelf->__PVT___mem22wb_io_PCM = vlSelf->__PVT___mem2mem2_io_PCM;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeM = vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrM = vlSelf->__PVT___mem2mem2_io_BranchJump_JrM;
    vlSelf->__PVT___mem22wb_io_eBreakM = vlSelf->__PVT___mem2mem2_io_eBreakM;
    vlSelf->__PVT___mem22wb_io_Pc_NextM = vlSelf->__PVT___mem2mem2_io_Pc_NextM;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len;
    vlSelf->__PVT___Forward_Lock1E_T_1 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__203(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__203\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___id2ex_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___id2ex_io_ReadcsrAddrD = (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
    vlSelf->__PVT___id2ex_io_PCD = vlSelf->__PVT___if2id_io_PCD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__204(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__204\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___ex2mem_io1_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___ex2mem_io1_LoadUnsignedE = vlSelf->__PVT___id2ex_io2_LoadUnsignedE;
    vlSelf->__PVT___ex2mem_io1_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
    vlSelf->__PVT___ex2mem_io1_csrWriteE = vlSelf->__PVT___id2ex_io2_csrWriteE;
    vlSelf->__PVT___ex2mem_io1_PCE = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___ex2mem_io1_BranchJump_JrE = vlSelf->__PVT___id2ex_io2_BranchJump_JrE;
    vlSelf->__PVT___ex2mem_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
    vlSelf->__PVT___ex2mem_io_Pc_NextE = vlSelf->__PVT___id2ex_io_Pc_NextE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT___id2ex_io2_MemToRegE), (IData)(vlSelf->__PVT___id2ex_io2_MemWriteE));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__59(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__59\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_write_en = ((IData)(vlSelf->__PVT__csrWriteW) 
                                           | (IData)(vlSelf->__PVT__tlb_exception_co0_writeW));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__205(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__205\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_BranchJump_JrD = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2));
    vlSelf->__PVT__inst_tlb_exceptionM = vlSelf->__Vdly__inst_tlb_exceptionM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__206(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__206\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__207(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__207\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__216(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__216\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__61(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__61\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                               ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                               : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
    vlSelf->__PVT__pht_tobeE = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                 ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                 : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__63(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__63\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_WritecsrAddrE = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
                                                   ? 0xaU
                                                   : (IData)(vlSelf->__PVT___ex2mem_io_WritecsrAddrM));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__66(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__66\n"); );
    // Body
    vlSelf->__PVT___pht_lookup_value_tobeE_T_12 = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_5)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_2));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__67(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__67\n"); );
    // Body
    vlSelf->__PVT___pht_lookup_value_tobeE_T_14 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_8)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_12));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__68(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__68\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value 
        = ((3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
            ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_10)
            : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_14));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__71(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__71\n"); );
    // Body
    vlSelf->__PVT___mem2_exception_T = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___mem2mem2_io_clr = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT__mem2_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__73(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__73\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_WriteDataE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                             ? vlSelf->__PVT__RD2ForWardE_r
                                             : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT___ex2mem_io_RtE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                      ? vlSelf->__PVT__RD2ForWardE_r
                                      : vlSelf->__PVT__RD2ForWardE_p);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__75(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__75\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_PhyAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__81(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__81\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_25 = VL_CONCAT_III(32,24,8, 
                                                         (0xffffffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 8U, 0x18U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0x18U, 8U)));
    vlSelf->__PVT___Mem_withRL_Data_T_22 = VL_CONCAT_III(32,16,16, 
                                                         (0xffffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 0x10U, 0x10U)), 
                                                         (0xffffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0x10U, 0x10U)));
    vlSelf->__PVT___Mem_withRL_Data_T_9 = VL_CONCAT_III(32,24,8, 
                                                        (0xffffffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0U, 0x18U)), 
                                                        (0xffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 0U, 8U)));
    vlSelf->__PVT___Mem_withRL_Data_T_19 = VL_CONCAT_III(32,8,24, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 0x18U, 8U)), 
                                                         (0xffffffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 8U, 0x18U)));
    vlSelf->__PVT___Mem_withRL_Data_T_6 = VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0U, 0x10U)), 
                                                        (0xffffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 0U, 0x10U)));
    vlSelf->__PVT___Mem_withRL_Data_T_3 = VL_CONCAT_III(32,8,24, 
                                                        (0xffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0U, 8U)), 
                                                        (0xffffffU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 0U, 0x18U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__83(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__83\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_27 = ((1U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_19)
                                             : vlSelf->__PVT___dmem_io_RD);
    vlSelf->__PVT___Mem_withRL_Data_T_11 = ((0U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_3)
                                             : vlSelf->__PVT___dmem_io_RD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__85(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__85\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_29 = ((2U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_22)
                                             : vlSelf->__PVT___Mem_withRL_Data_T_27);
    vlSelf->__PVT___Mem_withRL_Data_T_13 = ((1U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_6)
                                             : vlSelf->__PVT___Mem_withRL_Data_T_11);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__87(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__87\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_31 = ((3U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_25)
                                             : vlSelf->__PVT___Mem_withRL_Data_T_29);
    vlSelf->__PVT___Mem_withRL_Data_T_15 = ((2U == 
                                             (3U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_PhyAddrM, 0U, 2U)))
                                             ? VL_EXTEND_QI(64,32, vlSelf->__PVT___Mem_withRL_Data_T_9)
                                             : vlSelf->__PVT___Mem_withRL_Data_T_13);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__89(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__89\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_33 = ((2U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                             ? vlSelf->__PVT___Mem_withRL_Data_T_15
                                             : vlSelf->__PVT___dmem_io_RD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__90(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__90\n"); );
    // Body
    vlSelf->__PVT__Mem_withRL_Data = ((1U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                       ? vlSelf->__PVT___Mem_withRL_Data_T_31
                                       : vlSelf->__PVT___Mem_withRL_Data_T_33);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__91(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__91\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_ResultM = ((IData)(vlSelf->__PVT___Forward_Lock1E_T_1)
                                           ? vlSelf->__PVT__Mem_withRL_Data
                                           : vlSelf->__PVT__ResultM2_Reg);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__92(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__92\n"); );
    // Body
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 1U))
            ? vlSelf->__PVT__Mem_withRL_Data : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__94(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__94\n"); );
    // Body
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_4 
        = (vlSelf->__PVT___GEN_19 | vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__95(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__95\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data 
        = VL_SEL_IQII(64, vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_4, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__246(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__246\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_hascode_0 = vlSelf->__Vdly__stage_fec_2_hascode_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__247(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__247\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__stage_fec_2_hascode_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__251(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__251\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__252(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__252\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__255(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__255\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 4U, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 8U, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 0xcU, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 0x10U, 4U))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__256(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__256\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_hascode_0_T_1 = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1), (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__97(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__97\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_en = vlSelf->__PVT__inst_write_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__102(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__102\n"); );
    // Body
    vlSelf->__PVT___Forward_csr_data_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                             ? vlSelf->__PVT___ex2mem_io_WriteDataM
                                             : vlSelf->__PVT___csr_io_csr_read_data);
    vlSelf->__PVT__Forward_csr_data = ((2U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                        ? vlSelf->__PVT___mem2mem2_io_WriteDataM
                                        : vlSelf->__PVT___Forward_csr_data_T_1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__103(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__103\n"); );
    // Body
    vlSelf->__PVT__csr_src1 = ((IData)(vlSelf->__PVT___id2ex_io_csr_ImmE)
                                ? VL_EXTEND_QI(64,6, (IData)(vlSelf->__PVT___csr_src1_T_1))
                                : vlSelf->__PVT__RD1ForWardE);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__104(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__104\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_2 = (vlSelf->__PVT__Forward_csr_data 
                                       | vlSelf->__PVT__csr_src1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__105(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__105\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_11 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T_7), 0U))
                                         ? vlSelf->__PVT__csr_src1
                                         : 0ULL);
    vlSelf->__PVT___CalCsrDataE_T_5 = (~ vlSelf->__PVT__csr_src1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__106(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__106\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_9 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T), 0U))
                                        ? vlSelf->__PVT___CalCsrDataE_T_2
                                        : 0ULL);
    vlSelf->__PVT___CalCsrDataE_T_6 = (vlSelf->__PVT__Forward_csr_data 
                                       & vlSelf->__PVT___CalCsrDataE_T_5);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__107(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__107\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_10 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T_3), 0U))
                                         ? vlSelf->__PVT___CalCsrDataE_T_6
                                         : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__108(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__108\n"); );
    // Body
    vlSelf->__PVT___CalCsrDataE_T_12 = (vlSelf->__PVT___CalCsrDataE_T_9 
                                        | vlSelf->__PVT___CalCsrDataE_T_10);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__109(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__109\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_CsrWritedataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                               | vlSelf->__PVT___CalCsrDataE_T_11);
    vlSelf->__PVT__CalCsrDataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                  | vlSelf->__PVT___CalCsrDataE_T_11);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__113(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__113\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_en = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT__ex_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__115(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__115\n"); );
    // Body
    vlSelf->__PVT___ex_exception_T = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT___id2ex_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___id2ex_io_clr = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT__id_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT__ex_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__116(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__116\n"); );
    // Body
    vlSelf->__PVT___mem_exception_T = vlSelf->__PVT___cfu_io_FlushM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__264(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__264\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_9 
        = ((IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6) 
           | (IData)(vlSelf->__PVT___GEN_14));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__265(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__265\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = VL_EXTEND_II(32,11, (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_9));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__121(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__121\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_RD1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR1D_T_2);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__266(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__266\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12 
        = (vlSelf->__PVT___GEN_15 | vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_11);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__267(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__267\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13 
        = ((0ULL == vlSelf->__PVT__ExceptionTypeD_Out)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12)
            : vlSelf->__PVT__ExceptionTypeD_Out);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__123(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__123\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 
        = (((0U != (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T)) 
            & (IData)(vlSelf->__PVT___csr_io_Int_able))
            ? 1ULL : vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__124(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__124\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_ExceptionTypeD = VL_SEL_IQII(64, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__126(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__126\n"); );
    // Body
    vlSelf->__PVT___resultE_T_6 = (vlSelf->__PVT___resultE_T_2 
                                   | vlSelf->__PVT___resultE_T_3);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__127(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__127\n"); );
    // Body
    vlSelf->__PVT___resultE_T_7 = (vlSelf->__PVT___resultE_T_6 
                                   | vlSelf->__PVT___resultE_T_4);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__129(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__129\n"); );
    // Body
    vlSelf->__PVT__resultE = (vlSelf->__PVT___resultE_T_7 
                              | vlSelf->__PVT___resultE_T_5);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__132(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__132\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_data_valid_T = (1U 
                                                & (~ (IData)(vlSelf->__PVT__fifo_with_bundle_io_empty)));
    vlSelf->__PVT___cfu_io_Inst_Fifo_Empty = vlSelf->__PVT__fifo_with_bundle_io_empty;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__133(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__133\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_in_target_pc = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target;
    vlSelf->__PVT__id_bru_state_io_in_lookup_data = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__inst_buffer_read_out_inst = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__137(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__137\n"); );
    // Body
    vlSelf->__PVT___if2id_io_InstrF = VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fif2id_io_InstrF_T_5);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__140(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__140\n"); );
    // Body
    vlSelf->__PVT___T_25 = vlSelf->__PVT___cfu_io_StallF;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__141(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__141\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_read_en = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___T_25));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__143(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__143\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_M_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_R_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__146(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__146\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((~ ((IData)(vlSelf->__PVT__returnPc_req_wait) 
                                 & (IData)(vlSelf->__PVT__inst_sram_en))) 
                             & (IData)(vlSelf->__PVT__returnPc_req_wait));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__147(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__147\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = ((~ ((((IData)(vlSelf->__PVT__pc_req_wait) 
                                   & (IData)(vlSelf->__PVT__inst_sram_en)) 
                                  | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                 | ((IData)(vlSelf->__PVT__ready_to_branch) 
                                    & (IData)(vlSelf->__PVT__inst_sram_en)))) 
                             & (IData)(vlSelf->__PVT__pc_req_wait));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__151(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__151\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state 
        = ((((((IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L) 
               & ((IData)(vlSelf->__PVT__stage_fec_2_inst_branch) 
                  | (IData)(vlSelf->__PVT__stage_fec_2_inst_jump))) 
              & (IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
             & (IData)(vlSelf->__PVT__stage_fec_2_stall_reg)) 
            & (IData)(vlSelf->__PVT__stage_fec_2_valid)) 
           & (~ (IData)(vlSelf->__PVT___csr_io_exception)));
    vlSelf->__PVT__stage_fec_2_branch_answer = ((((
                                                   ((IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L) 
                                                    & ((IData)(vlSelf->__PVT__stage_fec_2_inst_branch) 
                                                       | (IData)(vlSelf->__PVT__stage_fec_2_inst_jump))) 
                                                   & (IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
                                                  & (IData)(vlSelf->__PVT__stage_fec_2_stall_reg)) 
                                                 & (IData)(vlSelf->__PVT__stage_fec_2_valid)) 
                                                & (~ (IData)(vlSelf->__PVT___csr_io_exception)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__153(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__153\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_next = ((IData)(vlSelf->__PVT__stage_fec_2_branch_answer)
                                           ? vlSelf->__PVT__stage_fec_2_pre_target_0
                                           : vlSelf->__PVT___stage_fec_1_pc_next_T_1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__154(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__154\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                        & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall 
        = ((IData)(vlSelf->__PVT__stage2_stall) & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_L_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_M_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_R_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__155(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__155\n"); );
    // Body
    vlSelf->__PVT__Pc_Next_normal = ((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)
                                      ? vlSelf->__PVT__PC_nextD
                                      : vlSelf->__PVT__stage_fec_1_pc_next);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__160(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__160\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_1 = ((IData)(vlSelf->__PVT__pc_req_wait)
                                    ? vlSelf->__PVT__pc_next_wait
                                    : vlSelf->__PVT__Pc_Next_normal);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__161(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__161\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_2 = ((IData)(vlSelf->__PVT__ready_to_branch)
                                    ? vlSelf->__PVT__Pc_Next_normal
                                    : vlSelf->__PVT___Pc_Next_T_1);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__162(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__162\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_3 = ((IData)(vlSelf->__PVT__returnPc_req_wait)
                                    ? vlSelf->__PVT__exception_Pc_reg
                                    : vlSelf->__PVT___Pc_Next_T_2);
}
