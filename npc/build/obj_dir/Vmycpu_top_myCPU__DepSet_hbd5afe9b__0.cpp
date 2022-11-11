// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_myCPU.h"

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT___int_with_timer_int_T_1 = (1U & 
                                              ((IData)(vlSelf->__PVT___csr_io_timer_int_has) 
                                               | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 5U)));
    vlSelf->__PVT___csr_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___ex2mem_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___mem2mem2_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___id2ex_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___if2id_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___mem22wb_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___regfile_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___mtrace_mod_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_1_pc_L_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_1_pc_M_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_1_pc_R_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_L_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_M_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_R_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__id_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__ex_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__mem_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__mem2_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__wb_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___commit_difftest_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__fifo_with_bundle_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__branch_prediction_with_blockram_clock 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT___T_2 = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___ex2mem_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mem2mem2_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___id2ex_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___if2id_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mem22wb_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___regfile_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__id_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__ex_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__mem_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__mem2_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__wb_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mtrace_mod_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___commit_difftest_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__fifo_with_bundle_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___csr_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__branch_prediction_with_blockram_reset 
        = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___cfu_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___br_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__int_with_timer_int = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___int_with_timer_int_T_1), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 0U, 5U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__clock 
        = vlSelf->__PVT___csr_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__clock 
        = vlSelf->__PVT___ex2mem_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__clock 
        = vlSelf->__PVT___mem2mem2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__clock 
        = vlSelf->__PVT___id2ex_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__clock 
        = vlSelf->__PVT___if2id_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__clock 
        = vlSelf->__PVT___mem22wb_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__clock 
        = vlSelf->__PVT___regfile_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__clock 
        = vlSelf->__PVT___mtrace_mod_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_L_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_R_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_L_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_R_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__clock 
        = vlSelf->__PVT__id_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__clock 
        = vlSelf->__PVT__ex_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem2_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__clock 
        = vlSelf->__PVT__wb_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__clock 
        = vlSelf->__PVT___commit_difftest_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__clock 
        = vlSelf->__PVT__fifo_with_bundle_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__clock 
        = vlSelf->__PVT__branch_prediction_with_blockram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__reset 
        = vlSelf->__PVT___ex2mem_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__reset 
        = vlSelf->__PVT___mem2mem2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__reset 
        = vlSelf->__PVT___id2ex_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__reset 
        = vlSelf->__PVT___if2id_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__reset 
        = vlSelf->__PVT___mem22wb_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__reset 
        = vlSelf->__PVT___regfile_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__reset 
        = vlSelf->__PVT__id_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__reset 
        = vlSelf->__PVT__ex_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__reset 
        = vlSelf->__PVT__mem_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__reset 
        = vlSelf->__PVT__mem2_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__reset 
        = vlSelf->__PVT__wb_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__reset 
        = vlSelf->__PVT___mtrace_mod_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__reset 
        = vlSelf->__PVT__stage_fec_1_pc_L_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__reset 
        = vlSelf->__PVT__stage_fec_1_pc_M_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__reset 
        = vlSelf->__PVT__stage_fec_1_pc_R_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__reset 
        = vlSelf->__PVT__stage_fec_2_pc_L_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__reset 
        = vlSelf->__PVT__stage_fec_2_pc_M_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__reset 
        = vlSelf->__PVT__stage_fec_2_pc_R_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__reset 
        = vlSelf->__PVT___commit_difftest_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__reset 
        = vlSelf->__PVT__fifo_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__reset 
        = vlSelf->__PVT___csr_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__reset 
        = vlSelf->__PVT__branch_prediction_with_blockram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset 
        = vlSelf->__PVT___cfu_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset 
        = vlSelf->__PVT___br_reset;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T 
        = ((IData)(vlSelf->__PVT__int_with_timer_int) 
           & (IData)(vlSelf->__PVT___csr_io_csr_status));
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 
        = (((0U != (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T)) 
            & (IData)(vlSelf->__PVT___csr_io_Int_able))
            ? 1ULL : vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13);
    vlSelf->__PVT___id2ex_io_ExceptionTypeD = VL_SEL_IQII(64, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeD 
        = vlSelf->__PVT___id2ex_io_ExceptionTypeD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_ok = vlSelf->__PVT__data_stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_L_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_M_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_R_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_L_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_M_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_R_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__inst_sram_en = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT___csr_io_csr_read_data = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_data;
    vlSelf->__PVT___cfu_io_FlushM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM2;
    vlSelf->__PVT___cfu_io_FlushD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
    vlSelf->__PVT___br_io_exe = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSelf->__PVT___dmem_io_data_ok;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_flush;
    vlSelf->__PVT___T_4 = (1U & (~ (IData)(vlSelf->__PVT__inst_sram_en)));
    vlSelf->__PVT___GEN_2 = ((~ ((IData)(vlSelf->__PVT__returnPc_req_wait) 
                                 & (IData)(vlSelf->__PVT__inst_sram_en))) 
                             & (IData)(vlSelf->__PVT__returnPc_req_wait));
    vlSelf->__PVT___Forward_csr_data_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                             ? vlSelf->__PVT___ex2mem_io_WriteDataM
                                             : vlSelf->__PVT___csr_io_csr_read_data);
    vlSelf->__PVT___mem2_exception_T = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___mem2mem2_io_clr = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT__mem2_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___pre_decoder_branchD_flag_T = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT__id_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___if2id_io_clr = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___PCSrcD_T_3 = vlSelf->__PVT___br_io_exe;
    vlSelf->__PVT__Forward_csr_data = ((2U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                        ? vlSelf->__PVT___mem2mem2_io_WriteDataM
                                        : vlSelf->__PVT___Forward_csr_data_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_clr 
        = vlSelf->__PVT___mem2mem2_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem2_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__id_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr 
        = vlSelf->__PVT___if2id_io_clr;
    vlSelf->__PVT___T_30 = ((IData)(vlSelf->__PVT__pre_decoder_jump) 
                            | (IData)(vlSelf->__PVT___PCSrcD_T_3));
    vlSelf->__PVT___PC_nextD_T_2 = ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                     ? vlSelf->__PVT__PCBranchD
                                     : vlSelf->__PVT___if2id_io_PCPlus4D);
    vlSelf->__PVT__target_addr_error = (((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                         & (IData)(vlSelf->__PVT__target_neq_jumpD)) 
                                        | ((IData)(vlSelf->__PVT___PCSrcD_T_3) 
                                           & (IData)(vlSelf->__PVT__target_neq_branchD)));
    vlSelf->__PVT___CalCsrDataE_T_2 = (vlSelf->__PVT__Forward_csr_data 
                                       | vlSelf->__PVT__csr_src1);
    vlSelf->__PVT___CalCsrDataE_T_6 = (vlSelf->__PVT__Forward_csr_data 
                                       & vlSelf->__PVT___CalCsrDataE_T_5);
    vlSelf->__PVT___id2ex_io_Pc_NextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                          ? vlSelf->__PVT__PCJumpD
                                          : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT__PC_nextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                ? vlSelf->__PVT__PCJumpD
                                : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT___CalCsrDataE_T_9 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T), 0U))
                                        ? vlSelf->__PVT___CalCsrDataE_T_2
                                        : 0ULL);
    vlSelf->__PVT___CalCsrDataE_T_10 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T_3), 0U))
                                         ? vlSelf->__PVT___CalCsrDataE_T_6
                                         : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextD 
        = vlSelf->__PVT___id2ex_io_Pc_NextD;
    vlSelf->__PVT___CalCsrDataE_T_12 = (vlSelf->__PVT___CalCsrDataE_T_9 
                                        | vlSelf->__PVT___CalCsrDataE_T_10);
    vlSelf->__PVT___ex2mem_io_CsrWritedataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                               | vlSelf->__PVT___CalCsrDataE_T_11);
    vlSelf->__PVT__CalCsrDataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                  | vlSelf->__PVT___CalCsrDataE_T_11);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataE 
        = vlSelf->__PVT___ex2mem_io_CsrWritedataE;
    vlSelf->__PVT___resultE_T_3 = ((IData)(vlSelf->__PVT__csrToRegE)
                                    ? vlSelf->__PVT__CalCsrDataE
                                    : 0ULL);
    vlSelf->__PVT___resultE_T_6 = (vlSelf->__PVT___resultE_T_2 
                                   | vlSelf->__PVT___resultE_T_3);
    vlSelf->__PVT___resultE_T_7 = (vlSelf->__PVT___resultE_T_6 
                                   | vlSelf->__PVT___resultE_T_4);
    vlSelf->__PVT__resultE = (vlSelf->__PVT___resultE_T_7 
                              | vlSelf->__PVT___resultE_T_5);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_pending = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
    vlSelf->__PVT___cfu_io_DataPendingM = vlSelf->__PVT___dmem_io_data_pending;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSelf->__PVT___cfu_io_DataPendingM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
    vlSelf->__PVT___cfu_io_StallE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
    vlSelf->__PVT___cfu_io_FlushM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSelf->__PVT___cfu_io_StallM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2;
    vlSelf->__PVT___cfu_io_StallW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW;
    vlSelf->__PVT___cfu_io_FlushE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSelf->__PVT___cfu_io_StallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
    vlSelf->__PVT___cfu_io_FlushW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
    vlSelf->__PVT___mem_exception_T_1 = vlSelf->__PVT___cfu_io_StallM;
    vlSelf->__PVT__mem_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM;
    vlSelf->__PVT___ex2mem_io_en = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT__ex_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT___commit_cache_reg_T = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT___mem_exception_T = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT___ex2mem_io_clr = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT__mem_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT___mem2_exception_T_1 = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___mem2mem2_io_en = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT__mem2_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___wb_exception_T_1 = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT___mem22wb_io_en = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT__wb_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT___ex_exception_T = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT___id2ex_io_clr = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT__ex_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT___id2ex_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT__id_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___if2id_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___PCSrcD_T_1 = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___wb_exception_T = vlSelf->__PVT___cfu_io_FlushW;
    vlSelf->__PVT___mem22wb_io_clr = vlSelf->__PVT___cfu_io_FlushW;
    vlSelf->__PVT__wb_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_en 
        = vlSelf->__PVT___ex2mem_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__ex_bru_state_io_stall;
    vlSelf->__PVT___dmemreq_io_en = ((~ (IData)(vlSelf->__PVT___T_36)) 
                                     & (IData)(vlSelf->__PVT___commit_cache_reg_T));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_clr 
        = vlSelf->__PVT___ex2mem_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_en 
        = vlSelf->__PVT___mem2mem2_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem2_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_en 
        = vlSelf->__PVT___mem22wb_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__wb_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_clr 
        = vlSelf->__PVT___id2ex_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__ex_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_en 
        = vlSelf->__PVT___id2ex_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__id_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSelf->__PVT___if2id_io_en;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_clr 
        = vlSelf->__PVT___mem22wb_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__wb_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en 
        = vlSelf->__PVT___dmemreq_io_en;
    vlSelf->__PVT__ready_to_branch = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSelf->__PVT__Pc_Next_normal = ((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)
                                      ? vlSelf->__PVT__PC_nextD
                                      : vlSelf->__PVT__stage_fec_1_pc_next);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSelf->__PVT___GEN_0 = ((~ ((((IData)(vlSelf->__PVT__pc_req_wait) 
                                   & (IData)(vlSelf->__PVT__inst_sram_en)) 
                                  | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                 | ((IData)(vlSelf->__PVT__ready_to_branch) 
                                    & (IData)(vlSelf->__PVT__inst_sram_en)))) 
                             & (IData)(vlSelf->__PVT__pc_req_wait));
    vlSelf->__PVT__stage1_valid_flush = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                         | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT___pc_next_wait_T = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                      | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT___Pc_Next_T_1 = ((IData)(vlSelf->__PVT__pc_req_wait)
                                    ? vlSelf->__PVT__pc_next_wait
                                    : vlSelf->__PVT__Pc_Next_normal);
    vlSelf->__PVT___stage_fec_1_valid_T_2 = ((~ (IData)(vlSelf->__PVT___pc_next_wait_T)) 
                                             & (IData)(vlSelf->__PVT__stage_fec_1_valid));
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
    vlSelf->__PVT___Pc_Next_T_2 = ((IData)(vlSelf->__PVT__ready_to_branch)
                                    ? vlSelf->__PVT__Pc_Next_normal
                                    : vlSelf->__PVT___Pc_Next_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_stall 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_stall;
    vlSelf->__PVT___Pc_Next_T_3 = ((IData)(vlSelf->__PVT__returnPc_req_wait)
                                    ? vlSelf->__PVT__exception_Pc_reg
                                    : vlSelf->__PVT___Pc_Next_T_2);
    vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__inst_sram_addr = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                                      ? vlSelf->__PVT___csr_io_return_pc
                                      : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__Pc_Next = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                               ? vlSelf->__PVT___csr_io_return_pc
                               : vlSelf->__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in;
    vlSelf->__PVT__inst_cache = (4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0x1dU, 3U)));
    vlSelf->__PVT__inst_ready_to_use = (0U == (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_req = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_req;
    vlSelf->__PVT__fifo_with_bundle_io_empty = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jump;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jr;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_true_branch_state;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pc_target;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_hashcode;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pht;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_bht;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_value;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_exception_type;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pc;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_inst;
    vlSelf->__PVT__data_sram_en = ((IData)(vlSelf->__PVT___dmemreq_io_req) 
                                   & (~ (IData)(vlSelf->__PVT___dmem_io_data_pending)));
    vlSelf->__PVT___stage_fec_2_data_valid_T = (1U 
                                                & (~ (IData)(vlSelf->__PVT__fifo_with_bundle_io_empty)));
    vlSelf->__PVT___cfu_io_Inst_Fifo_Empty = vlSelf->__PVT__fifo_with_bundle_io_empty;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jump 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchdata 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jr 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr;
    vlSelf->__PVT__inst_buffer_read_out_true_branch_state 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_true_branch_state;
    vlSelf->__PVT__id_bru_state_io_in_target_pc = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target;
    vlSelf->__PVT__id_bru_state_io_in_lookup_data = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__id_bru_state_io_in_hashcode = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode;
    vlSelf->__PVT__id_bru_state_io_in_pht = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pht;
    vlSelf->__PVT__id_bru_state_io_in_bht = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_bht;
    vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value;
    vlSelf->__PVT__inst_buffer_read_out_exception_type 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSelf->__PVT___if2id_io_ExceptionTypeF = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSelf->__PVT__inst_buffer_read_out_pc = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSelf->__PVT___if2id_io_PCF = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSelf->__PVT__inst_buffer_read_out_inst = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst;
    vlSelf->__PVT__stage2_flush = (((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en) 
                                    & (IData)(vlSelf->__PVT___stage_fec_2_data_valid_T)) 
                                   | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty 
        = vlSelf->__PVT___cfu_io_Inst_Fifo_Empty;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__id_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__id_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__id_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__id_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__id_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeF 
        = vlSelf->__PVT___if2id_io_ExceptionTypeF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCF 
        = vlSelf->__PVT___if2id_io_PCF;
    vlSelf->__PVT___if2id_io_PCPlus4F = (4ULL + vlSelf->__PVT___if2id_io_PCF);
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_5 = ((((IData)(vlSelf->__PVT___cu_io1_BadInstrD) 
                                                  | (IData)(vlSelf->__PVT___cu_io1_SysCallD)) 
                                                 | (IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T_3))
                                                 ? 0U
                                                 : vlSelf->__PVT__inst_buffer_read_out_inst);
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush 
        = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_L_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_M_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_R_io_flush = vlSelf->__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4F 
        = vlSelf->__PVT___if2id_io_PCPlus4F;
    vlSelf->__PVT___if2id_io_InstrF = VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fif2id_io_InstrF_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_flush 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrF 
        = vlSelf->__PVT___if2id_io_InstrF;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ico_sequent__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallF = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF;
    vlSelf->__PVT___T_25 = vlSelf->__PVT___cfu_io_StallF;
    vlSelf->__PVT__fifo_with_bundle_io_read_en = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___T_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en 
        = vlSelf->__PVT__fifo_with_bundle_io_read_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_BranchD_Flag 
        = vlSelf->__PVT___cfu_io_BranchD_Flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch 
        = vlSelf->__PVT___br_io_branch;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__id_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__id_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__id_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__ex_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__ex_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__9\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem2_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_len;
    vlSelf->__PVT___mem22wb_io_Pc_NextW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__11\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___ex2mem_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextM;
    vlSelf->__PVT___ex2mem_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___ex2mem_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemWidthM;
    vlSelf->__PVT___ex2mem_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___ex2mem_io_WriteDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteDataM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem2mem2_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_eBreakM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_eBreakM;
    vlSelf->__PVT___mem2mem2_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem2mem2_io_WriteDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteDataM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_Pc_NextE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextE;
    vlSelf->__PVT___id2ex_io_csrToRegE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csrToRegE_Out;
    vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeE_Out;
    vlSelf->__PVT___id2ex_io2_MemWidthE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWidthE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__17(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__17\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_in_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__18(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__18\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrToRegE 
        = vlSelf->__PVT___cfu_io_csrToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE 
        = vlSelf->__PVT___dmemreq_io_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE;
    vlSelf->__PVT___dmemreq_io_size = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size;
    vlSelf->__PVT__data_size = vlSelf->__PVT___dmemreq_io_size;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_size 
        = vlSelf->__PVT__data_size;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len 
        = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__data_size));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_size 
        = VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_size));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_len 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_size 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_size;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__24(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__24\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_ResultW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultW;
    vlSelf->__PVT___mem22wb_io_RegWriteW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteW_Out;
    vlSelf->__PVT___mem22wb_io_WriteRegW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__25(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__25\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___ex2mem_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RegWriteM;
    vlSelf->__PVT___ex2mem_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemToRegM;
    vlSelf->__PVT___ex2mem_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__26(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__26\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemRLM;
    vlSelf->__PVT___mem2mem2_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtM;
    vlSelf->__PVT___mem2mem2_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrM;
    vlSelf->__PVT___mem2mem2_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__27(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__27\n"); );
    // Body
    vlSelf->__PVT___if2id_io_PCD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__28(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__28\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_BranchJump_JrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_BranchJump_JrE;
    vlSelf->__PVT___id2ex_io2_csrWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_csrWriteE;
    vlSelf->__PVT___id2ex_io2_LoadUnsignedE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LoadUnsignedE;
    vlSelf->__PVT___id2ex_io_alu_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_alu_calE;
    vlSelf->__PVT___id2ex_io2_MemWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWriteE;
    vlSelf->__PVT___id2ex_io_csr_controlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csr_controlE;
    vlSelf->__PVT___id2ex_io_data_wE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_data_wE;
    vlSelf->__PVT___id2ex_io2_ReadcsrAddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ReadcsrAddrE;
    vlSelf->__PVT___id2ex_io2_ALUCtrlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUCtrlE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_0;
    vlSelf->__PVT___id2ex_io2_PCE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_1;
    vlSelf->__PVT___id2ex_io_RD2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2E;
    vlSelf->__PVT___id2ex_io_RD1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1E;
    vlSelf->__PVT___id2ex_io_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmE;
    vlSelf->__PVT___id2ex_io_R2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2E;
    vlSelf->__PVT___id2ex_io_R1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__29(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__29\n"); );
    // Body
    vlSelf->__PVT___csr_io_Int_able = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_Int_able;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW 
        = vlSelf->__PVT___cfu_io_RegWriteW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__36(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__36\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW 
        = vlSelf->__PVT___cfu_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__37(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__37\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM 
        = vlSelf->__PVT___cfu_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM 
        = vlSelf->__PVT___cfu_io_MemToRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM 
        = vlSelf->__PVT___cfu_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__38(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__38\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN 
        = vlSelf->__PVT___dmem_io_SIGN;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address 
        = vlSelf->__PVT___dmem_io_Physisc_Address;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2 
        = vlSelf->__PVT___cfu_io_RegWriteM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2 
        = vlSelf->__PVT___cfu_io_MemToRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2 
        = vlSelf->__PVT___cfu_io_WriteRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__third_ra 
        = (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address, 2U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__ra 
        = (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address, 0U, 2U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__39(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__39\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE 
        = vlSelf->__PVT___dmemreq_io_MemWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w 
        = vlSelf->__PVT___alu_io_data_w;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl 
        = vlSelf->__PVT___alu_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E 
        = vlSelf->__PVT___cfu_io_R2E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E 
        = vlSelf->__PVT___cfu_io_R1E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_38 
        = VL_EXTEND_II(24,10, (0x3ffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xeU, 0xaU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_35 
        = VL_EXTEND_II(24,8, (0xffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x10U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_32 
        = VL_EXTEND_II(24,9, (0x1ffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xfU, 9U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_30 
        = VL_EXTEND_II(24,11, (0x7ffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xdU, 0xbU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_28 
        = VL_EXTEND_II(24,12, (0xfffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_26 
        = VL_EXTEND_II(24,17, (0x1ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 7U, 0x11U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_24 
        = VL_EXTEND_II(24,4, (0xfU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x14U, 4U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_22 
        = VL_EXTEND_II(24,14, (0x3fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_20 
        = VL_EXTEND_II(24,13, (0x1fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_18 
        = VL_EXTEND_II(24,20, (0xfffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 4U, 0x14U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_15 
        = VL_EXTEND_II(24,5, (0x1fU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x13U, 5U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_9 
        = VL_EXTEND_II(24,7, (0x7fU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x11U, 7U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_6 
        = VL_EXTEND_II(24,21, (0x1fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 3U, 0x15U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T 
        = VL_EXTEND_II(24,23, (0x7fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 1U, 0x17U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_12 
        = VL_EXTEND_II(24,6, (0x3fU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x12U, 6U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_3 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 2U, 0x16U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__43(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__43\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__44(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__44\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__45(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__45\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__46(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__46\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_BranchJump_JrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrW;
    vlSelf->__PVT___mem22wb_io_PCW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__47(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__47\n"); );
    // Body
    vlSelf->__PVT___if2id_io_InstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__48(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__48\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_RegWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegWriteE;
    vlSelf->__PVT___id2ex_io2_RegDstE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegDstE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__53(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__53\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__54(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__54\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_target_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__55(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__55\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc, 2U, 2U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__56(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__56\n"); );
    // Body
    vlSelf->__PVT__PCJumpD_lo_lo = VL_CONCAT_III(13,1,12, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                 VL_CONCAT_III(12,1,11, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                               VL_CONCAT_III(11,1,10, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                             VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), (IData)(vlSelf->__PVT__PCJumpD_lo_lo_lo))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D 
        = vlSelf->__PVT___cfu_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D 
        = vlSelf->__PVT___cfu_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD 
        = vlSelf->__PVT___cu_io1_InstrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct6D 
        = (0x3fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1aU, 6U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD 
        = (0x7fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0U, 7U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D 
        = (0x7fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x19U, 7U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D 
        = (7U & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 3U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__57(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__57\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE 
        = vlSelf->__PVT___cfu_io_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE 
        = vlSelf->__PVT___cfu_io_WriteRegE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__59(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__59\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_bank_sel 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__60(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__60\n"); );
    // Body
    vlSelf->__PVT__PCJumpD_lo = VL_CONCAT_III(26,1,25, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(25,1,24, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                            VL_CONCAT_III(24,1,23, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                          VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSelf->__PVT__PCJumpD_lo_lo_lo), (IData)(vlSelf->__PVT__PCJumpD_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_117 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x11U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_121 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 5U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_108 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x18U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_134 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x39U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_156 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x4cU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_136 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x3aU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_128 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x3cU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_93 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 8U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_57 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x37U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_4 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct6D))
            ? 0x13U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_53 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x38U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_76 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x1cU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_2 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0xfU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_47 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x32U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_43 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x41U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_39 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x35U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_8 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0xdU : 4U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_35 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x2fU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_31 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x31U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_25 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x36U : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__61(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__61\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc, 2U, 2U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc, 2U, 2U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_ar_addr_L 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc, 4U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__62(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__62\n"); );
    // Body
    vlSelf->__PVT___PCJumpD_T_54 = VL_CONCAT_QIQ(52,1,51, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                 VL_CONCAT_QIQ(51,1,50, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                               VL_CONCAT_QIQ(50,1,49, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                             VL_CONCAT_QIQ(49,1,48, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSelf->__PVT__PCJumpD_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSelf->__PVT__PCJumpD_lo_lo), vlSelf->__PVT__PCJumpD_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_119 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x12U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_117));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_123 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x10U : VL_EXTEND_II(5,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_121)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_110 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x19U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_108));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_158 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x4dU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_138 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x3bU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_136));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_130 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x3dU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_128));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_95 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0xaU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_93));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_59 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x25U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_57));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_6 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct6D))
            ? 0x14U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_55 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x26U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_53));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_78 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x1dU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_76));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_49 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x23U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_47));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_45 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x24U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_43));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_41 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x2eU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_39));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_10 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0xeU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_37 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x34U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_33 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x2dU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_31));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_27 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x30U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_25));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__63(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__63\n"); );
    // Body
    vlSelf->__PVT___PCJumpD_T_56 = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___PCJumpD_T_54, 
                                                 (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_125 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_119)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_123));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_112 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x1aU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_110));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_159 
        = VL_CONCAT_III(10,7,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_158), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_140 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x28U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_138));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_132 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x2bU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_130));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_97 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0xcU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_95));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_80 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x20U : VL_EXTEND_II(6,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_78)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_51 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D))
            ? 0x33U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_49));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_12 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0x17U : VL_EXTEND_II(5,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_10)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__64(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__64\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_out_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__65(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__65\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_WritecsrAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__66(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__66\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_WritecsrAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WritecsrAddrM;
    vlSelf->__PVT___mem2mem2_io_csrWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__67(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__67\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_control;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__71(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__71\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM 
        = vlSelf->__PVT___cfu_io_WritecsrAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__72(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__72\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM2 
        = vlSelf->__PVT___cfu_io_WritecsrAddrM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM2 
        = vlSelf->__PVT___cfu_io_csrWriteM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__73(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__73\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl 
        = vlSelf->__PVT___muldiv_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_28 
        = VL_EXTEND_II(24,12, (0xfffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_26 
        = VL_EXTEND_II(24,13, (0x1fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_24 
        = VL_EXTEND_II(24,14, (0x3fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_21 
        = VL_EXTEND_II(24,16, (0xffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 8U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_18 
        = VL_EXTEND_II(24,15, (0x7fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 9U, 0xfU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_16 
        = VL_EXTEND_II(24,17, (0x1ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 7U, 0x11U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_14 
        = VL_EXTEND_II(24,18, (0x3ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 6U, 0x12U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_12 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 2U, 0x16U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_10 
        = VL_EXTEND_II(24,21, (0x1fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 3U, 0x15U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_8 
        = VL_EXTEND_II(24,19, (0x7ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 5U, 0x13U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_6 
        = VL_EXTEND_II(24,20, (0xfffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 4U, 0x14U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T 
        = VL_EXTEND_II(24,23, (0x7fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 1U, 0x17U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__78(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__78\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_bht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__79(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__79\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_full;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__80(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__80\n"); );
    // Body
    vlSelf->__PVT__inst_buffer_full = vlSelf->__PVT__fifo_with_bundle_io_full;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_buffer_full 
        = vlSelf->__PVT__inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__84(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__84\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_data_ok_ok = vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__data_ok_ok;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__86(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__86\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_CanBranchD 
        = vlSelf->__PVT___cfu_io_CanBranchD;
    vlSelf->__PVT__pre_decoder_jump = vlSelf->__Vdly__pre_decoder_jump;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__87(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__87\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__88(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__88\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__89(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__89\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_CsrWritedataW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CsrWritedataW;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_data;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mem22wb_io_eBreakW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakW;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_mem_fetch_type;
    vlSelf->__PVT___mem22wb_io_WritecsrAddrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WritecsrAddrW;
    vlSelf->__PVT___mem22wb_io_csrWriteW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_csrWriteW;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeW_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__90(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__90\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_CsrWritedataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataM;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___ex2mem_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PCM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__91(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__91\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem2mem2_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PCM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___mem2mem2_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemWidthM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__92(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__92\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_eBreakE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_eBreakE;
    vlSelf->__PVT___id2ex_io2_MemToRegE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemToRegE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__97(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__97\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_exception_type_i 
        = vlSelf->__PVT___csr_io_exception_type_i;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__98(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__98\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___GEN_19 = VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH 
        = vlSelf->__PVT___dmem_io_WIDTH;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__99(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__99\n"); );
    // Body
    vlSelf->__PVT__immUJ_lo_lo = VL_CONCAT_III(10,1,9, 
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
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)))))))))));
    vlSelf->__PVT__immUJ_lo_lo_lo = VL_CONCAT_III(5,1,4, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                  VL_CONCAT_III(4,1,3, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                VL_CONCAT_III(3,1,2, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                              VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(21, vlSelf->__PVT___immUJ_T_4, 0x14U))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2 
        = vlSelf->__PVT___regfile_io_A2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1 
        = vlSelf->__PVT___regfile_io_A1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD 
        = (0x1fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1 
        = VL_CONCAT_III(32,20,12, (0xfffffU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 0x14U)), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo_lo 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4 
        = VL_CONCAT_III(13,1,12, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(12,1,11, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U)), 
                                      VL_CONCAT_III(11,6,5, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x19U, 6U)), 
                                                    VL_CONCAT_III(5,4,1, 
                                                                  (0xfU 
                                                                   & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 8U, 4U)), 0U))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__100(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__100\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_eBreakE = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemToRegE 
        = vlSelf->__PVT___dmemreq_io_MemToRegE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__101(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__101\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSelf->__PVT___regfile_io_reg_file_alL_out, vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_reg_file_alL_out);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__102(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__102\n"); );
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU_lo_lo 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo 
        = VL_CONCAT_III(13,1,12, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(12,1,11, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_III(11,1,10, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                    VL_CONCAT_III(10,1,9, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo_lo))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo_lo 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2 
        = VL_CONCAT_III(12,7,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct7D), 
                        (0x1fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U, 5U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__104(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__104\n"); );
    // Body
    vlSelf->__PVT___cu_io_RegDstD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_hi 
        = VL_CONCAT_III(13,1,12, (1U & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                        VL_CONCAT_III(12,1,11, (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                      VL_CONCAT_III(11,1,10, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                    VL_CONCAT_III(10,1,9, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                  VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo_lo))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo 
        = VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                        VL_CONCAT_III(11,1,10, (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                      VL_CONCAT_III(10,1,9, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                    VL_CONCAT_III(9,1,8, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                  VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo_lo)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo 
        = VL_CONCAT_III(26,1,25, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(25,1,24, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_III(24,1,23, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                    VL_CONCAT_III(23,1,22, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo_lo 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__105(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__105\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, vlSelf->__PVT___commit_difftest_gpr_wire);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[1U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x40U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[2U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x80U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[3U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0xc0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[4U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x100U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[5U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x140U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[6U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x180U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[7U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x1c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[8U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x200U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[9U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x240U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xaU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x280U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xbU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x2c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xcU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x300U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xdU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x340U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xeU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x380U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0xfU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x3c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x10U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x400U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x11U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x440U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x12U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x480U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x13U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x4c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x14U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x500U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x15U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x540U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x16U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x580U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x17U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x5c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x18U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x600U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x19U] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x640U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1aU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x680U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1bU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x6c0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1cU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x700U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1dU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x740U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1eU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x780U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr[0x1fU] 
        = VL_SEL_QWII(2048, vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, 0x7c0U, 0x40U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__106(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__106\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_RegDstD = vlSelf->__PVT___cu_io_RegDstD;
    vlSelf->__PVT___PCJumpD_T_60 = (vlSelf->__PVT__immUJ 
                                    + vlSelf->__PVT___if2id_io_PCD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_1 
        = VL_CONCAT_III(25,1,24, (1U & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                        VL_CONCAT_III(24,1,23, (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                      VL_CONCAT_III(23,1,22, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                    VL_CONCAT_III(22,1,21, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                  VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_34 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immI_T_53 
        = VL_CONCAT_QIQ(52,1,51, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_QIQ(51,1,50, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_QIQ(50,1,49, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                    VL_CONCAT_QIQ(49,1,48, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo), vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo 
        = VL_CONCAT_III(13,1,12, (1U & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                        VL_CONCAT_III(12,1,11, (1U 
                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                      VL_CONCAT_III(11,1,10, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                    VL_CONCAT_III(10,1,9, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                  VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo_lo))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__107(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__107\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegDstD 
        = vlSelf->__PVT___id2ex_io1_RegDstD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_56 
        = VL_CONCAT_QIQ(51,1,50, (1U & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                        VL_CONCAT_QIQ(50,1,49, (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                      VL_CONCAT_QIQ(49,1,48, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                    VL_CONCAT_QIQ(48,1,47, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                  VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(45,1,44, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(44,6,38, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_lo_lo), 
                                                                                VL_CONCAT_QII(38,13,25, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_hi), vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB_lo_1)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI 
        = VL_CONCAT_QQI(64,52,12, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immI_T_53, 
                        (0xfffU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x14U, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immU_T_34, 
                        VL_CONCAT_III(32,20,12, (0xfffffU 
                                                 & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 0x14U)), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo 
        = VL_CONCAT_III(26,1,25, (1U & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                        VL_CONCAT_III(25,1,24, (1U 
                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                      VL_CONCAT_III(24,1,23, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                    VL_CONCAT_III(23,1,22, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                  VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT___csr_io_exception = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_exception;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___cfu_io_Forward2D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException 
        = vlSelf->__PVT___cfu_io_InException;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_22 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT___cfu_io_Forward1D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__110(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__110\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__111(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__111\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtM;
    vlSelf->__PVT___ex2mem_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__112(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__112\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_CsrWritedataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CsrWritedataM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__113(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__113\n"); );
    // Body
    vlSelf->__PVT___if2id_io_PCPlus4D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__114(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__114\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_PCPlus4E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCPlus4E;
    vlSelf->__PVT___id2ex_io2_LinkE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LinkE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__120(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__120\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_JRD 
        = vlSelf->__PVT___cfu_io_JRD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__121(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__121\n"); );
    // Body
    vlSelf->__PVT__debug_wb_rf_wnum = vlSelf->__PVT___regfile_io_A3;
    vlSelf->__PVT__debug_wb_rf_wdata = vlSelf->__PVT___regfile_io_WD3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3 
        = vlSelf->__PVT___regfile_io_WD3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3 
        = vlSelf->__PVT___regfile_io_A3;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_rf_wdata 
        = vlSelf->__PVT__debug_wb_rf_wdata;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_rf_wnum 
        = vlSelf->__PVT__debug_wb_rf_wnum;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__122(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__122\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtE 
        = vlSelf->__PVT___mem2mem2_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___mem2mem2_io_PhyAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__123(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__123\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCPlus4D 
        = vlSelf->__PVT___id2ex_io_PCPlus4D;
    vlSelf->__PVT___ExceptionTypeD_Out_T_4 = ((IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_1)
                                               ? 0x100000U
                                               : 0U);
    vlSelf->__PVT__immSB_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                  VL_CONCAT_III(5,1,4, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                VL_CONCAT_III(4,1,3, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                              VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__126(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__126\n"); );
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
    vlSelf->__PVT___if2id_io_ExceptionTypeD_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeD_Out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
               | ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                  | ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                     | (0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)))))
            : ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD)) 
               & ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                  | ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                     | ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                        | ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                           | ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                              | ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                                 | (0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata 
        = vlSelf->__PVT___dmem_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_816 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_856 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_12 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_13 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__136(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__136\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_addr 
        = vlSelf->__PVT___csr_io_csr_read_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_read_data = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__138(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__138\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_csrWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__139(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__139\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_WritecsrAddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WritecsrAddrE;
    vlSelf->__PVT___id2ex_io_muldiv_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_calE;
    vlSelf->__PVT___id2ex_io_csr_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csr_ImmE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__140(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__140\n"); );
    // Body
    vlSelf->__PVT___csr_io_csr_status = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_status;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__141(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__141\n"); );
    // Body
    vlSelf->__PVT___csr_io_timer_int_has = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_timer_int_has;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__150(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__150\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem_bru_state_io_in_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__151(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__151\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem2_bru_state_io_in_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__152(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__152\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__wb_bru_state_io_in_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__153(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__153\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegE 
        = vlSelf->__PVT___mem2mem2_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM 
        = vlSelf->__PVT___cfu_io_csrWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__154(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__154\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WritecsrAddrD 
        = vlSelf->__PVT___id2ex_io_WritecsrAddrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__155(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__155\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WritecsrAddrE 
        = vlSelf->__PVT___ex2mem_io1_WritecsrAddrE;
    vlSelf->__PVT___csr_src1_T_1 = VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___csr_src1_T));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ReadcsrAddrE 
        = vlSelf->__PVT___cfu_io_ReadcsrAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_pc 
        = vlSelf->__PVT___csr_io_pc;
    vlSelf->__PVT__debug_wb_rf_wen = ((vlSelf->__PVT__reg_pc 
                                       == vlSelf->__PVT___mem22wb_io_PCW)
                                       ? 0U : (IData)(vlSelf->__PVT___debug_wb_rf_wen_T_2));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_rf_wen 
        = vlSelf->__PVT__debug_wb_rf_wen;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__157(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__157\n"); );
    // Body
    vlSelf->__PVT___cu_io_MemWidthD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_23 
        = VL_CONCAT_III(8,5,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_22), 2U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_71 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? VL_EXTEND_II(7,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_55))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_69));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__158(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__158\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_MemWidthD = vlSelf->__PVT___cu_io_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_181 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_23)
            : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_73 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? VL_EXTEND_II(7,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_59))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_71));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWidthD 
        = vlSelf->__PVT___id2ex_io1_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_74 
        = VL_CONCAT_III(10,7,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_73), 5U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__160(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__160\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSelf->__PVT___dmem_io_data_ok;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc1946603__0;
    // Body
    vlSelf->__PVT___addr_cal_io_d_cached = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_cached;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_41 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_26, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulhu_answer
            : 0ULL);
    VL_SEL_WWII(128,129, __Vtemp_hc1946603__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___mulhsu_answer_T_2, 0U, 0x80U);
    VL_ASSIGN_W(128,vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___mulhsu_answer_T_4, __Vtemp_hc1946603__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_40 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_24, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulh_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remuw_answer 
        = VL_EXTEND_QI(33,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_35 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_12, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remu_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_33 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_8, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__divuw_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_43 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_30 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_31);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer_lo_lo 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__divw_answer_lo_lo 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__161(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__161\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_pending = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__16(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__16\n"); );
    // Body
    vlSelf->__PVT__data_cache = vlSelf->__PVT___addr_cal_io_d_cached;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_cache 
        = vlSelf->__PVT__data_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulhsu_answer 
        = VL_SEL_QWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___mulhsu_answer_T_4, 0x40U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___mulw_answer_T_33 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_37 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_16, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remuw_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___GEN_12 
        = VL_EXTEND_QQ(64,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_33);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__divw_answer_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___divw_answer_T_5, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__divw_answer_lo_lo)))))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__163(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__163\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSelf->__PVT___cfu_io_DataPendingM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__18(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__18\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_inst;
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD 
        = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__inst_buffer_write_bundle_inst, 0U, 7U));
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D 
        = (7U & VL_SEL_IIII(32, vlSelf->__PVT__inst_buffer_write_bundle_inst, 0xcU, 3U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__19(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__19\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr 
        = ((0x67U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD)) 
           & (0U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__20(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__20\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__168(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__168\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__169(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__169\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__170(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__170\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__173(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__173\n"); );
    // Body
    vlSelf->__PVT__debug_wb_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT___mem22wb_io_PCW, 4U, 7U));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_pc 
        = vlSelf->__PVT__debug_wb_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__174(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__174\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_in 
        = (7U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_in), 0U, 3U));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__175(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__175\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__ex_bru_state_io_in_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__176(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__176\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_bht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSymsp->TOP__mycpu_top.debug_wb_pc = VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_debug_wb_pc, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_bht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_write;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__22(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__22\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3 
        = vlSelf->__PVT___regfile_io_WE3;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__182(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__182\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__ex_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__183(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__183\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__184(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__184\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem2_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem2_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__185(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__185\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__wb_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__wb_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__186(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__186\n"); );
    // Body
    vlSelf->__PVT___cu_io1_dmem_addr_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSelf->__PVT___csr_io_return_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_return_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__188(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__188\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_dmem_calD 
        = vlSelf->__PVT___cfu_io_dmem_calD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__26(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__26\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush 
        = vlSelf->__PVT__fifo_with_bundle_io_point_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__27(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__27\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__28(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__28\n"); );
    // Body
    vlSelf->__PVT___pre_decoder_branchD_flag_T = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT__id_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___if2id_io_clr = vlSelf->__PVT___cfu_io_FlushD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__id_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr 
        = vlSelf->__PVT___if2id_io_clr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__29(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__29\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__31(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__31\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSelf->__PVT___cfu_io_StallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__34(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__34\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en 
        = vlSelf->__PVT___dmemreq_io_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__35(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__35\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSelf->__PVT___if2id_io_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__36(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__36\n"); );
    // Body
    vlSelf->__PVT___regfile_io_RD2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2;
    vlSelf->__PVT___regfile_io_RD1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__39(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__39\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2D 
        = vlSelf->__PVT___id2ex_io_RD2D;
    vlSelf->__PVT___PCJumpD_T_58 = (vlSelf->__PVT__BranchR1D 
                                    + vlSelf->__PVT___PCJumpD_T_56);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2 
        = vlSelf->__PVT___br_io_r2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
        = vlSelf->__PVT___br_io_r1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           >= vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_1 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           < vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_4 
        = VL_GTES_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_7 
        = VL_LTS_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_8 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           != vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_9 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           == vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__40(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__40\n"); );
    // Body
    vlSelf->__PVT__PCJumpD = ((IData)(vlSelf->__PVT__pre_decoder_jr)
                               ? vlSelf->__PVT___PCJumpD_T_58
                               : vlSelf->__PVT___PCJumpD_T_60);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result 
        = VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T), 
                        VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_1), 
                                      VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_4), 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_7), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_8), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_9))))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__42(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__42\n"); );
    // Body
    vlSelf->__PVT___Pc_targetD_T_2 = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                       ? vlSelf->__PVT__PCJumpD
                                       : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__43(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__43\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_target_pc = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag)
                                                    ? vlSelf->__PVT__PCBranchD
                                                    : vlSelf->__PVT___Pc_targetD_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset)) 
           & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__44(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__44\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__ex_bru_state_io_in_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__45(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__45\n"); );
    // Body
    vlSelf->__PVT___br_io_exe = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__50(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__50\n"); );
    // Body
    vlSelf->__PVT__ready_to_branch = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__52(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__52\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_empty = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__53(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__53\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextD 
        = vlSelf->__PVT___id2ex_io_Pc_NextD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__191(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__191\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemRLM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__193(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__193\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__194(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__194\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__195(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__195\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__196(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__196\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__58(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__58\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem_bru_state_io_in_bht;
    vlSelf->__PVT___pht_tobeE_T_7 = ((1U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_2)
                                      : (IData)(vlSelf->__PVT___pht_tobeE_T_5));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__60(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__60\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___mem2mem2_io_ExceptionTypeE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__208(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__208\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__ex_bru_state_io_in_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__209(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__209\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem2_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__210(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__210\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__wb_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__wb_bru_state_io_in_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__211(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__211\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_data 
        = vlSelf->__PVT___csr_io_csr_write_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_addr 
        = vlSelf->__PVT___csr_io_csr_write_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__212(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__212\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_len 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_addr 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_mem_fetch_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_data 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_pc 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___mem2mem2_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CsrWritedataE 
        = vlSelf->__PVT___mem2mem2_io_CsrWritedataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteDataE 
        = vlSelf->__PVT___mem2mem2_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___mem2mem2_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemRLE 
        = vlSelf->__PVT___mem2mem2_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_PCE 
        = vlSelf->__PVT___mem2mem2_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___mem2mem2_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___mem2mem2_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___mem2mem2_io1_RegWriteE;
    vlSelf->__PVT___mem2mem2_io1_csrWriteE = (1U & 
                                              ((IData)(vlSelf->__PVT_____05Fmem2mem2_io_csrWriteE_T) 
                                               | VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___ex2mem_io_Tlb_ControlM), 2U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__213(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__213\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_pc 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextM 
        = vlSelf->__PVT___mem22wb_io_Pc_NextM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakM 
        = vlSelf->__PVT___mem22wb_io_eBreakM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrM 
        = vlSelf->__PVT___mem22wb_io_BranchJump_JrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeM 
        = vlSelf->__PVT___mem22wb_io_ExceptionTypeM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCM 
        = vlSelf->__PVT___mem22wb_io_PCM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CsrWritedataM 
        = vlSelf->__PVT___mem22wb_io_CsrWritedataM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WritecsrAddrM 
        = vlSelf->__PVT___mem22wb_io_WritecsrAddrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_csrWriteM 
        = vlSelf->__PVT___mem22wb_io_csrWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegM 
        = vlSelf->__PVT___mem22wb_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteM 
        = vlSelf->__PVT___mem22wb_io_RegWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__214(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__214\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCD 
        = vlSelf->__PVT___id2ex_io_PCD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ReadcsrAddrD 
        = vlSelf->__PVT___id2ex_io_ReadcsrAddrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1D 
        = vlSelf->__PVT___id2ex_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2D 
        = vlSelf->__PVT___id2ex_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ebreakD 
        = (0x100073U == vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immUJ 
        = VL_CONCAT_III(20,1,19, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(19,8,11, (0xffU 
                                                & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 8U)), 
                                      VL_CONCAT_III(11,1,10, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x14U)), 
                                                    (0x3ffU 
                                                     & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x15U, 0xaU)))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__215(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__215\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_pc 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___ex2mem_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegE 
        = vlSelf->__PVT___ex2mem_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_eBreakE 
        = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___ex2mem_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_PCE 
        = vlSelf->__PVT___ex2mem_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_csrWriteE 
        = vlSelf->__PVT___ex2mem_io1_csrWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___ex2mem_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___ex2mem_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___ex2mem_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___ex2mem_io1_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__62(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__62\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_en 
        = vlSelf->__PVT___csr_io_csr_write_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__217(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__217\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_BranchJump_JrD 
        = vlSelf->__PVT___id2ex_io_BranchJump_JrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__218(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__218\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__219(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__219\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__220(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__220\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_csrWriteE 
        = vlSelf->__PVT___mem2mem2_io1_csrWriteE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__221(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__221\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_eBreakE 
        = vlSelf->__PVT___mem2mem2_io1_eBreakE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__222(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__222\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__64(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__64\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem_bru_state_io_in_pht;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_10 = VL_CONCAT_III(8,2,6, (IData)(vlSelf->__PVT__pht_tobeE), 
                                                                (0x3fU 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 0U, 6U)));
    vlSelf->__PVT___pht_lookup_value_tobeE_T_8 = VL_CONCAT_III(8,2,6, 
                                                               (3U 
                                                                & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 6U, 2U)), 
                                                               VL_CONCAT_III(6,2,4, (IData)(vlSelf->__PVT__pht_tobeE), 
                                                                             (0xfU 
                                                                              & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 0U, 4U))));
    vlSelf->__PVT___pht_lookup_value_tobeE_T_2 = VL_CONCAT_III(8,6,2, 
                                                               (0x3fU 
                                                                & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 2U, 6U)), (IData)(vlSelf->__PVT__pht_tobeE));
    vlSelf->__PVT___pht_lookup_value_tobeE_T_5 = VL_CONCAT_III(8,4,4, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 4U, 4U)), 
                                                               VL_CONCAT_III(4,2,2, (IData)(vlSelf->__PVT__pht_tobeE), 
                                                                             (3U 
                                                                              & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 0U, 2U))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__65(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__65\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WritecsrAddrE 
        = vlSelf->__PVT___mem2mem2_io1_WritecsrAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__223(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__223\n"); );
    // Body
    vlSelf->__PVT___cu_io_ebreakD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ebreakD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__224(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__224\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_wr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__225(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__225\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ebreakD = vlSelf->__PVT___cu_io_ebreakD;
    vlSelf->__PVT___cu_io_LoadUnsignedD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LoadUnsignedD;
    vlSelf->__PVT___cu_io_MemWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWriteD;
    vlSelf->__PVT___cu_io_MemToRegD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemToRegD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__226(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__226\n"); );
    // Body
    vlSelf->__PVT__data_sram_wen = vlSelf->__PVT___dmemreq_io_wr;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_wen 
        = vlSelf->__PVT__data_sram_wen;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__227(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__227\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ebreakD 
        = vlSelf->__PVT___id2ex_io1_ebreakD;
    vlSelf->__PVT___id2ex_io1_MemToRegD = vlSelf->__PVT___cu_io_MemToRegD;
    vlSelf->__PVT___id2ex_io1_MemWriteD = vlSelf->__PVT___cu_io_MemWriteD;
    vlSelf->__PVT___id2ex_io1_LoadUnsignedD = vlSelf->__PVT___cu_io_LoadUnsignedD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__228(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__228\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LoadUnsignedD 
        = vlSelf->__PVT___id2ex_io1_LoadUnsignedD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWriteD 
        = vlSelf->__PVT___id2ex_io1_MemWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemToRegD 
        = vlSelf->__PVT___id2ex_io1_MemToRegD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__69(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__69\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__70(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__70\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__72(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__72\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_clr 
        = vlSelf->__PVT___mem2mem2_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem2_bru_state_io_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__74(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__74\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc78a9efb__0;
    VlWide<3>/*95:0*/ __Vtemp_hded21a08__0;
    VlWide<3>/*95:0*/ __Vtemp_h53a86302__0;
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtE 
        = vlSelf->__PVT___ex2mem_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteDataE 
        = vlSelf->__PVT___ex2mem_io_WriteDataE;
    VL_CONCAT_WQI(65,33,32, __Vtemp_hc78a9efb__0, VL_EXTEND_QI(33,32, 
                                                               VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x20U)), 0U);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_74, __Vtemp_hc78a9efb__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_70 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x20U));
    VL_CONCAT_WIQ(65,9,56, __Vtemp_hded21a08__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_30, __Vtemp_hded21a08__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h53a86302__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_h53a86302__0);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__76(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__76\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___ex2mem_io_PhyAddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__77(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__77\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h95958b69__0;
    CData/*31:0*/ __Vtemp_h7a532750__0;
    VlWide<3>/*95:0*/ __Vtemp_h626844c2__0;
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr 
        = vlSelf->__PVT__data_sram_addr;
    VL_EXTEND_WQ(65,49, __Vtemp_h95958b69__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_65);
    __Vtemp_h7a532750__0 = (6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h626844c2__0, __Vtemp_h7a532750__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_h95958b69__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_67, __Vtemp_h626844c2__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_7 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x10U : VL_EXTEND_II(5,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_5)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_38 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_18
            : VL_EXTEND_QQ(41,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_36));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__78(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__78\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_addr 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_9 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x20U : VL_EXTEND_II(6,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_7)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_40 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_22
            : VL_EXTEND_QQ(49,41, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_38));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__229(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__229\n"); );
    // Body
    vlSelf->__PVT___cu_io_csrToRegD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrToRegD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1 
        = VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUSrcD_1_T_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_0 
        = VL_EXTEND_QI(64,20, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_9);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_89 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                      | ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                         | ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                            | ((6U 
                                                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                               | ((5U 
                                                   == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                  | ((4U 
                                                      == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                     | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_59))))))))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_10 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_5 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_6);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_11 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 4U : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_16)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_37 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_35));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__79(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__79\n"); );
    // Body
    vlSelf->__PVT___dmem_io_RD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__230(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__230\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_csrToRegD = vlSelf->__PVT___cu_io_csrToRegD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_119 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                      | ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                         | ((0x14U 
                                             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                            | ((0x13U 
                                                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                               | ((0x12U 
                                                   == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                  | ((0x11U 
                                                      == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                     | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_89))))))))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_11 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_10 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_7);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_13 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 8U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_39 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_37));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__80(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__80\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__231(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__231\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csrToRegD 
        = vlSelf->__PVT___id2ex_io1_csrToRegD;
    vlSelf->__PVT___cu_io_ALUSrcD_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_119));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_12 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_11 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_8);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_15 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 1U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_41 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_39));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__82(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__82\n"); );
    // Body
    vlSelf->__PVT__data_wstrb = vlSelf->__PVT___dmemreq_io_wstrb;
    vlSelf->__PVT___dmemreq_io_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_wstrb 
        = vlSelf->__PVT__data_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__232(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__232\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ALUSrcD_1 = vlSelf->__PVT___cu_io_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_12 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_17 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 1U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x20U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_43 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x2000U : VL_EXTEND_II(16,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_41)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__84(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__84\n"); );
    // Body
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT___dmemreq_io_wdata;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_data_wstrb 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_wstrb;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_wdata 
        = vlSelf->__PVT__data_sram_wdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__233(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__233\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_1 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_1;
    vlSelf->__PVT___cu_io_RegWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csr_control 
        = VL_EXTEND_II(6,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_csr_control_T_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x40U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_45 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x4000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_43));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__86(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__86\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data 
        = VL_SEL_IQII(64, vlSelf->__PVT__data_sram_wdata, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_data_wstrb 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_data_wstrb;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_wdata 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_wdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__234(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__234\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_RegWriteD = vlSelf->__PVT___cu_io_RegWriteD;
    vlSelf->__PVT___cu_io_ImmD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x80U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_47 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_45));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__88(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__88\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_data 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wdata 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_wdata;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__235(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__235\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegWriteD 
        = vlSelf->__PVT___id2ex_io1_RegWriteD;
    vlSelf->__PVT___id2ex_io_ImmD = vlSelf->__PVT___cu_io_ImmD;
    vlSelf->__PVT___cu_io_csr_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100U : VL_EXTEND_II(16,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_49 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_47));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__236(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__236\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmD 
        = vlSelf->__PVT___id2ex_io_ImmD;
    vlSelf->__PVT___id2ex_io1_csr_control = vlSelf->__PVT___cu_io_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x200U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_51 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10000U : VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_49)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__93(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__93\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultM 
        = vlSelf->__PVT___mem22wb_io_ResultM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__237(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__237\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csr_control 
        = vlSelf->__PVT___id2ex_io1_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_34 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x400U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_53 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x8000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_51);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__96(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__96\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_data 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__238(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__238\n"); );
    // Body
    vlSelf->__PVT___cu_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_63 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_61);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__239(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__239\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_muldiv_control = vlSelf->__PVT___cu_io_muldiv_control;
    vlSelf->__PVT___cu_io_muldiv_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_65 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x80U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_63);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__240(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__240\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSelf->__PVT___id2ex_io1_muldiv_control;
    vlSelf->__PVT___id2ex_io1_muldiv_cal = vlSelf->__PVT___cu_io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_67 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_65);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__241(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__241\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSelf->__PVT___id2ex_io1_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_69 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_67);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__242(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__242\n"); );
    // Body
    vlSelf->__PVT___cu_io_ALUCtrlD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__243(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__243\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ALUCtrlD = vlSelf->__PVT___cu_io_ALUCtrlD;
    vlSelf->__PVT___cu_io_alu_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__244(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__244\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUCtrlD 
        = vlSelf->__PVT___id2ex_io1_ALUCtrlD;
    vlSelf->__PVT___id2ex_io1_alu_cal = vlSelf->__PVT___cu_io_alu_cal;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__245(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__245\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal 
        = vlSelf->__PVT___id2ex_io1_alu_cal;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__248(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__248\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__249(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__249\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_lookup_data_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__250(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__250\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__253(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__253\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__254(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__254\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pc 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__98(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__98\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_write_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__257(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__257\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
    vlSelf->__PVT__mem_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM;
    vlSelf->__PVT___cfu_io_StallM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__99(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__99\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSelf->__PVT___ex2mem_io_clr = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT__mem_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_clr 
        = vlSelf->__PVT___ex2mem_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem_bru_state_io_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__258(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__258\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_size 
        = vlSelf->__PVT___mtrace_mod_mem_size;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_write_read 
        = vlSelf->__PVT___mtrace_mod_mem_write_read;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_req 
        = vlSelf->__PVT___mtrace_mod_mem_req;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__addr 
        = vlSelf->__PVT___mtrace_mod_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__pc 
        = vlSelf->__PVT___mtrace_mod_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__data 
        = vlSelf->__PVT___mtrace_mod_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__cpu_ebreak_sign 
        = vlSelf->__PVT___commit_difftest_cpu_ebreak_sign;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__pc 
        = vlSelf->__PVT___commit_difftest_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__100(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__100\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__inst_commit 
        = vlSelf->__PVT___commit_difftest_inst_commit;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__101(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__101\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__debug_pc 
        = vlSelf->__PVT___commit_difftest_debug_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__pc_debug 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__debug_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__110(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__110\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataE 
        = vlSelf->__PVT___ex2mem_io_CsrWritedataE;
    vlSelf->__PVT___resultE_T_3 = ((IData)(vlSelf->__PVT__csrToRegE)
                                    ? vlSelf->__PVT__CalCsrDataE
                                    : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__111(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__111\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hbe41855d__0;
    VlWide<4>/*127:0*/ __Vtemp_h520921ad__0;
    // Body
    vlSelf->__PVT___alu_io_overflow = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_overflow;
    VL_EXTEND_WQ(127,64, __Vtemp_hbe41855d__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_54);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_19, __Vtemp_hbe41855d__0);
    VL_EXTEND_WQ(127,64, __Vtemp_h520921ad__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_53);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_18, __Vtemp_h520921ad__0);
    vlSelf->__PVT___temp_exceptionE_T_11 = ((IData)(vlSelf->__PVT___alu_io_overflow)
                                             ? 0x1000U
                                             : 0U);
    vlSelf->__PVT___ex2mem_io_ExceptionTypeE = ((0U 
                                                 != vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out)
                                                 ? vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out
                                                 : 
                                                VL_EXTEND_II(32,13, (IData)(vlSelf->__PVT___temp_exceptionE_T_11)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__259(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__259\n"); );
    // Body
    vlSelf->__PVT___mem_exception_T_1 = vlSelf->__PVT___cfu_io_StallM;
    vlSelf->__PVT___cfu_io_StallW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__112(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__112\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___ex2mem_io_ExceptionTypeE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__260(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__260\n"); );
    // Body
    vlSelf->__PVT___mem2_exception_T_1 = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___wb_exception_T_1 = vlSelf->__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem_bru_state_io_stall;
    vlSelf->__PVT___mem2mem2_io_en = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___mem22wb_io_en = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT__mem2_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT__wb_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__114(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__114\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_en 
        = vlSelf->__PVT___ex2mem_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__ex_bru_state_io_stall;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__117(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__117\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__261(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__261\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_en 
        = vlSelf->__PVT___mem2mem2_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_en 
        = vlSelf->__PVT___mem22wb_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem2_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__wb_bru_state_io_stall;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__118(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__118\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_clr 
        = vlSelf->__PVT___id2ex_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_en 
        = vlSelf->__PVT___id2ex_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__id_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__ex_bru_state_io_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__119(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__119\n"); );
    // Body
    vlSelf->__PVT___wb_exception_T = vlSelf->__PVT___cfu_io_FlushW;
    vlSelf->__PVT___mem22wb_io_clr = vlSelf->__PVT___cfu_io_FlushW;
    vlSelf->__PVT__wb_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_clr 
        = vlSelf->__PVT___mem22wb_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__wb_bru_state_io_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__120(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__120\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_req = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_req;
    vlSelf->__PVT__data_sram_en = ((IData)(vlSelf->__PVT___dmemreq_io_req) 
                                   & (~ (IData)(vlSelf->__PVT___dmem_io_data_pending)));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_en 
        = vlSelf->__PVT__data_sram_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__262(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__262\n"); );
    // Body
    vlSelf->__PVT___cu_io_data_wD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_data_wD;
    vlSelf->__PVT___cu_io_csrWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrWriteD;
    vlSelf->__PVT___cu_io_LinkD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LinkD;
    vlSelf->__PVT___cu_io_ALUSrcD_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_0;
    vlSelf->__PVT___id2ex_io1_ALUSrcD_0 = vlSelf->__PVT___cu_io_ALUSrcD_0;
    vlSelf->__PVT___id2ex_io1_LinkD = vlSelf->__PVT___cu_io_LinkD;
    vlSelf->__PVT___id2ex_io1_csrWriteD = vlSelf->__PVT___cu_io_csrWriteD;
    vlSelf->__PVT___id2ex_io1_data_wD = vlSelf->__PVT___cu_io_data_wD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__263(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_sequent__TOP__mycpu_top__u_riscv_cpu__263\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_data_wD 
        = vlSelf->__PVT___id2ex_io1_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csrWriteD 
        = vlSelf->__PVT___id2ex_io1_csrWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LinkD 
        = vlSelf->__PVT___id2ex_io1_LinkD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_0 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__122(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__122\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1D 
        = vlSelf->__PVT___id2ex_io_RD1D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__125(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__125\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeD 
        = vlSelf->__PVT___id2ex_io_ExceptionTypeD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__128(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__128\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_true_branch_state;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jr;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jump;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_value;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_bht;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pht;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_hashcode;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_exception_type;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__130(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__130\n"); );
    // Body
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jump 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchdata 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jr 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr;
    vlSelf->__PVT__inst_buffer_read_out_pc = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSelf->__PVT__inst_buffer_read_out_exception_type 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSelf->__PVT__inst_buffer_read_out_true_branch_state 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_true_branch_state;
    vlSelf->__PVT___if2id_io_ExceptionTypeF = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSelf->__PVT__id_bru_state_io_in_pht = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pht;
    vlSelf->__PVT__id_bru_state_io_in_bht = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_bht;
    vlSelf->__PVT__id_bru_state_io_in_hashcode = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode;
    vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value;
    vlSelf->__PVT___if2id_io_PCF = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeF 
        = vlSelf->__PVT___if2id_io_ExceptionTypeF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCF 
        = vlSelf->__PVT___if2id_io_PCF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__id_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__id_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__id_bru_state_io_in_pht;
    vlSelf->__PVT___if2id_io_PCPlus4F = (4ULL + vlSelf->__PVT___if2id_io_PCF);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4F 
        = vlSelf->__PVT___if2id_io_PCPlus4F;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__131(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__131\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pc_target;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__134(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__134\n"); );
    // Body
    vlSelf->__PVT__stage2_flush = (((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en) 
                                    & (IData)(vlSelf->__PVT___stage_fec_2_data_valid_T)) 
                                   | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty 
        = vlSelf->__PVT___cfu_io_Inst_Fifo_Empty;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_flush 
        = vlSelf->__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T) 
                         | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)) 
                        | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)) 
                       | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty)))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__135(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__135\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__id_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__id_bru_state_io_in_target_pc;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_5 = ((((IData)(vlSelf->__PVT___cu_io1_BadInstrD) 
                                                  | (IData)(vlSelf->__PVT___cu_io1_SysCallD)) 
                                                 | (IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T_3))
                                                 ? 0U
                                                 : vlSelf->__PVT__inst_buffer_read_out_inst);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__136(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__136\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush 
        = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_L_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_M_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_R_io_flush = vlSelf->__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__138(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__138\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_flush 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_flush;
    vlSelf->__PVT___cfu_io_StallF = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__139(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__139\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrF 
        = vlSelf->__PVT___if2id_io_InstrF;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__142(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__142\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en 
        = vlSelf->__PVT__fifo_with_bundle_io_read_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__144(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__144\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_M_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_R_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__inst_sram_en = vlSelf->__PVT__stage2_stall;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_en 
        = vlSelf->__PVT__inst_sram_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__145(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__145\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__148(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__148\n"); );
    // Body
    vlSelf->__PVT___T_4 = (1U & (~ (IData)(vlSelf->__PVT__inst_sram_en)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_stall;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_req 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_en;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__149(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__149\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_target_L;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSelf->__PVT__stage_fec_2_pre_target_0 = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__150(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__150\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_hit_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__152(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__152\n"); );
    // Body
    vlSelf->__PVT__stage1_valid_flush = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                         | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT___pc_next_wait_T = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                      | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage1_valid_flush 
        = vlSelf->__PVT__stage1_valid_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__156(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__156\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__157(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__157\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__158(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__158\n"); );
    // Body
    vlSelf->__PVT___stage_fec_1_valid_T_2 = ((~ (IData)(vlSelf->__PVT___pc_next_wait_T)) 
                                             & (IData)(vlSelf->__PVT__stage_fec_1_valid));
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage1_valid_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage1_valid_flush;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__159(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__159\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_stall 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_stall;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__163(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___nba_comb__TOP__mycpu_top__u_riscv_cpu__163\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? vlSelf->__PVT___csr_io_return_pc : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__inst_sram_addr = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                                      ? vlSelf->__PVT___csr_io_return_pc
                                      : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__Pc_Next = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                               ? vlSelf->__PVT___csr_io_return_pc
                               : vlSelf->__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_addr 
        = vlSelf->__PVT__inst_sram_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in;
    vlSelf->__PVT__inst_cache = (4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0x1dU, 3U)));
    vlSelf->__PVT__inst_ready_to_use = (0U == (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0U, 2U)));
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_ready_to_use 
        = vlSelf->__PVT__inst_ready_to_use;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_cache 
        = vlSelf->__PVT__inst_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_inst_ready_to_use 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_ready_to_use;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_cache 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_cache 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_ready_to_use 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_inst_ready_to_use;
}
