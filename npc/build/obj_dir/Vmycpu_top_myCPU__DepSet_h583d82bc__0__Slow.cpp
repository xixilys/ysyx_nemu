// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_myCPU.h"

VL_ATTR_COLD void Vmycpu_top_myCPU___initial__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___initial__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io1_CP0WriteE = 0U;
    vlSelf->__PVT___ex2mem_io1_MemRLE = 0U;
    vlSelf->__PVT___ex2mem_io1_Tlb_Control = 0U;
    vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataE = 0U;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSelf->__PVT___cp0_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___cp0_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___ex2mem_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mem2mem2_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___id2ex_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___if2id_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___mem22wb_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___regfile_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__fifo_with_bundle_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__branch_prediction_with_blockram_reset 
        = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
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
    vlSelf->__PVT___mtrace_mod_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_M_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_R_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_M_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_1_pc_R_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__mem2_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__stage_fec_2_pc_L_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__ex_bru_state_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT___cfu_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___br_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__id_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___commit_difftest_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__fifo_with_bundle_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___regfile_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___if2id_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___ex2mem_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___id2ex_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT___mem2mem2_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_clock = vlSelf->__PVT__clk;
    vlSelf->__PVT__branch_prediction_with_blockram_clock 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT___mem22wb_clock = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__16(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__16\n"); );
    // Body
    vlSelf->__PVT___cp0_io_int_i = vlSelf->__PVT__int_instanceW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__17(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__17\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__stage_fec_2_hascode_0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht 
        = vlSelf->__PVT__stage_fec_2_bht_0;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__18(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__18\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_3 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 1U);
    vlSelf->__PVT___pht_tobeE_T_2 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 2U : 0U);
    vlSelf->__PVT___pht_tobeE_T_1 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 2U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSelf->__PVT___T_29 = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag) 
                            | (IData)(vlSelf->__PVT__pre_decoder_jump));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__24(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__24\n"); );
    // Body
    vlSelf->__PVT___cfu_io_BranchD_Flag = vlSelf->__PVT__pre_decoder_branchD_flag;
    vlSelf->__PVT___cfu_io_JRD = vlSelf->__PVT__pre_decoder_jr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__27(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__27\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_BranchJump_JrD = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___T_29));
    vlSelf->__PVT___if2id_io_NextDelaySlotD = ((IData)(vlSelf->__PVT___T_29) 
                                               | (IData)(vlSelf->__PVT__InDelaySlotF));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__37(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__37\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_3 = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__38(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__38\n"); );
    // Body
    vlSelf->__PVT___cp0_io_cp0_tlb_write_en = (1U & 
                                               VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___mem2mem2_io_Tlb_ControlM), 1U));
    vlSelf->__PVT___ex2mem_io1_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___ex2mem_io1_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___ex2mem_io1_LoadUnsignedE = vlSelf->__PVT___id2ex_io2_LoadUnsignedE;
    vlSelf->__PVT___ex2mem_io1_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
    vlSelf->__PVT___ex2mem_io1_WriteCP0AddrE = vlSelf->__PVT___id2ex_io2_WriteCP0AddrE;
    vlSelf->__PVT___ex2mem_io1_WriteCP0SelE = vlSelf->__PVT___id2ex_io2_WriteCP0SelE;
    vlSelf->__PVT___ex2mem_io1_PCE = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___ex2mem_io1_InDelaySlotE = vlSelf->__PVT___id2ex_io2_InDelaySlotE;
    vlSelf->__PVT___ex2mem_io1_BranchJump_JrE = vlSelf->__PVT___id2ex_io2_BranchJump_JrE;
    vlSelf->__PVT___ex2mem_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
    vlSelf->__PVT___ex2mem_io_Pc_NextE = vlSelf->__PVT___id2ex_io_Pc_NextE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___mem2mem2_io1_RegWriteE = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io1_MemToRegE = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE = vlSelf->__PVT___ex2mem_io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io1_MemWidthE = vlSelf->__PVT___ex2mem_io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io1_PCE = vlSelf->__PVT___ex2mem_io_PCM;
    vlSelf->__PVT___mem2mem2_io1_InDelaySlotE = vlSelf->__PVT___ex2mem_io_InDelaySlotM;
    vlSelf->__PVT___mem2mem2_io1_MemRLE = vlSelf->__PVT___ex2mem_io_MemRLM;
    vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE = vlSelf->__PVT___ex2mem_io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io1_Tlb_Control = vlSelf->__PVT___ex2mem_io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_WriteRegE = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrE = vlSelf->__PVT___ex2mem_io_PhyAddrM;
    vlSelf->__PVT___mem2mem2_io_RtE = vlSelf->__PVT___ex2mem_io_RtM;
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
    vlSelf->__PVT___id2ex_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___id2ex_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___id2ex_io_PCPlus4D = vlSelf->__PVT___if2id_io_PCPlus4D;
    vlSelf->__PVT___id2ex_io_WriteCP0AddrD = (0x1fU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xbU, 5U));
    vlSelf->__PVT___id2ex_io_WriteCP0SelD = (7U & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0U, 3U));
    vlSelf->__PVT___id2ex_io_PCD = vlSelf->__PVT___if2id_io_PCD;
    vlSelf->__PVT___mem22wb_io_RegWriteM = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___mem22wb_io_WriteRegM = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT___mem22wb_io_CP0WriteM = vlSelf->__PVT___mem2mem2_io_CP0WriteM;
    vlSelf->__PVT___mem22wb_io_WriteCP0AddrM = vlSelf->__PVT___mem2mem2_io_WriteCP0AddrM;
    vlSelf->__PVT___mem22wb_io_WriteCP0SelM = vlSelf->__PVT___mem2mem2_io_WriteCP0SelM;
    vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataM = 
        VL_EXTEND_QI(64,32, vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM);
    vlSelf->__PVT___mem22wb_io_PCM = vlSelf->__PVT___mem2mem2_io_PCM;
    vlSelf->__PVT___mem22wb_io_InDelaySlotM = vlSelf->__PVT___mem2mem2_io_InDelaySlotM;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeM = vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrM = vlSelf->__PVT___mem2mem2_io_BranchJump_JrM;
    vlSelf->__PVT___mem22wb_io_eBreakM = vlSelf->__PVT___mem2mem2_io_eBreakM;
    vlSelf->__PVT___mem22wb_io_Pc_NextM = vlSelf->__PVT___mem2mem2_io_Pc_NextM;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len;
    vlSelf->__PVT___mtrace_mod_data = VL_EXTEND_QI(64,32, vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data);
    vlSelf->__PVT___mtrace_mod_pc = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mtrace_mod_addr = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mtrace_mod_mem_req = (0U != (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type));
    vlSelf->__PVT___mtrace_mod_mem_write_read = (1U 
                                                 & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type), 0U));
    vlSelf->__PVT___mtrace_mod_mem_size = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len;
    vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out;
    vlSelf->__PVT__ex_bru_state_io_in_pht = vlSelf->__PVT__id_bru_state_io_out_pht;
    vlSelf->__PVT__ex_bru_state_io_in_bht = vlSelf->__PVT__id_bru_state_io_out_bht;
    vlSelf->__PVT__ex_bru_state_io_in_hashcode = vlSelf->__PVT__id_bru_state_io_out_hashcode;
    vlSelf->__PVT__ex_bru_state_io_in_lookup_data = vlSelf->__PVT__id_bru_state_io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT__mem_bru_state_io_in_hashcode = vlSelf->__PVT__ex_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_in_target_pc = vlSelf->__PVT__ex_bru_state_io_out_target_pc;
    vlSelf->__PVT__mem_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_in_pht = vlSelf->__PVT__mem_bru_state_io_out_pht;
    vlSelf->__PVT__mem2_bru_state_io_in_bht = vlSelf->__PVT__mem_bru_state_io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_in_hashcode = vlSelf->__PVT__mem_bru_state_io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_in_target_pc = vlSelf->__PVT__mem_bru_state_io_out_target_pc;
    vlSelf->__PVT__mem2_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT__wb_bru_state_io_in_pht = vlSelf->__PVT__mem2_bru_state_io_out_pht;
    vlSelf->__PVT__wb_bru_state_io_in_bht = vlSelf->__PVT__mem2_bru_state_io_out_bht;
    vlSelf->__PVT__wb_bru_state_io_in_hashcode = vlSelf->__PVT__mem2_bru_state_io_out_hashcode;
    vlSelf->__PVT__wb_bru_state_io_in_target_pc = vlSelf->__PVT__mem2_bru_state_io_out_target_pc;
    vlSelf->__PVT__wb_bru_state_io_in_lookup_data = vlSelf->__PVT__mem2_bru_state_io_out_lookup_data;
    vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT___commit_difftest_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT___commit_difftest_cpu_ebreak_sign 
        = vlSelf->__PVT___mem22wb_io_eBreakW;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT___id2ex_io2_MemToRegE), (IData)(vlSelf->__PVT___id2ex_io2_MemWriteE));
    vlSelf->__PVT___mem2mem2_io1_WriteCP0AddrE = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
                                                   ? 0xaU
                                                   : (IData)(vlSelf->__PVT___ex2mem_io_WriteCP0AddrM));
    vlSelf->__PVT___mem2mem2_io1_WriteCP0SelE = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
                                                  ? 0U
                                                  : (IData)(vlSelf->__PVT___ex2mem_io_WriteCP0SelM));
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeE = ((IData)(vlSelf->__PVT__mem_exception)
                                                   ? vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out
                                                   : 0U);
    vlSelf->__PVT___id2ex_io_InDelaySlotD = ((IData)(vlSelf->__PVT___if2id_io_InDelaySlotD) 
                                             & (0U 
                                                == 
                                                (3U 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT___if2id_io_PCD, 0U, 2U))));
    vlSelf->__PVT__mem_bru_state_io_in_bht = VL_CONCAT_III(7,6,1, 
                                                           (0x3fU 
                                                            & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_bht), 0U, 6U)), (IData)(vlSelf->__PVT__true_branch_stateE));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__39(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__39\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_debug_pc = vlSelf->__PVT___mem22wb_io_Pc_NextW;
    vlSelf->__PVT___Forward_for_epc_T = vlSelf->__PVT___ex2mem_io_CP0WriteM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__40(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__40\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_1 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
    vlSelf->__PVT___ex2mem_io1_eBreakE = vlSelf->__PVT___id2ex_io2_eBreakE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__41(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__41\n"); );
    // Body
    vlSelf->__PVT__debug_wb_pc = vlSelf->__PVT___mem22wb_io_PCW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__42(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__42\n"); );
    // Body
    vlSelf->__PVT___resultE_T_2 = vlSelf->__PVT___id2ex_io2_LinkE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__43(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__43\n"); );
    // Body
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 0U))
            ? vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data
            : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__44(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__44\n"); );
    // Body
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_5 
        = VL_CONCAT_III(32,19,13, (0x7ffffU & VL_SEL_IQII(64, vlSelf->__PVT___ex2mem_io_PCM, 0xdU, 0x13U)), 
                        VL_EXTEND_II(13,8, (IData)(vlSelf->__PVT___cp0_io_asid)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__45(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__45\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0;
    vlSelf->__PVT___PCW_Reg_T_1 = ((0ULL != vlSelf->__PVT___mem22wb_io_PCW)
                                    ? vlSelf->__PVT___mem22wb_io_PCW
                                    : vlSelf->__PVT__PCW_Reg);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__46(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__46\n"); );
    // Body
    vlSelf->__PVT___PCW_Reg_T = (0ULL != vlSelf->__PVT___mem22wb_io_PCW);
    vlSelf->__PVT___cp0_io_cp0_write_data = VL_SEL_IQII(64, vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataW, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__47(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__47\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT___mem22wb_io_PCW, 4U, 7U));
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_bht;
    vlSelf->__PVT___Forward_for_epc_T_5 = ((IData)(vlSelf->__PVT___mem2mem2_io_CP0WriteM) 
                                           & (0xeU 
                                              == (IData)(vlSelf->__PVT___mem2mem2_io_WriteCP0AddrM)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__48(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__48\n"); );
    // Body
    vlSelf->__PVT__CP0WriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_CP0WriteW));
    vlSelf->__PVT___cp0_io_cp0_write_addr = vlSelf->__PVT___mem22wb_io_WriteCP0AddrW;
    vlSelf->__PVT___cp0_io_cp0_write_sel = vlSelf->__PVT___mem22wb_io_WriteCP0SelW;
    vlSelf->__PVT___ExceptionTypeD_Out_T_1 = (0U != 
                                              (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT___if2id_io_PCD, 0U, 2U)));
    vlSelf->__PVT___dmemreq_io_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__49(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__49\n"); );
    // Body
    vlSelf->__PVT___pht_tobeE_T_5 = ((3U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_1)
                                      : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__true_branch_stateE)));
    vlSelf->__PVT___dmemreq_io_MemWriteE = vlSelf->__PVT___id2ex_io2_MemWriteE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__50(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__50\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_target_pc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__51(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__51\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__52(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__52\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__53(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__53\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_hashcode;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__54(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__54\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_BranchJump_JrW), 0U));
    vlSelf->__PVT___dmem_io_WIDTH = vlSelf->__PVT___mem2mem2_io_MemWidthM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__55(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__55\n"); );
    // Body
    vlSelf->__PVT___alu_io_data_w = vlSelf->__PVT___id2ex_io_data_wE;
    vlSelf->__PVT___GEN_14 = VL_EXTEND_QI(64,12, (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU)));
    vlSelf->__PVT___muldiv_io_ctrl = vlSelf->__PVT___id2ex_io_muldiv_control;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__56(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__56\n"); );
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
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__57(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__57\n"); );
    // Body
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__58(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__58\n"); );
    // Body
    vlSelf->__PVT___cfu_io_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__59(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__59\n"); );
    // Body
    vlSelf->__PVT___cfu_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__60(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__60\n"); );
    // Body
    vlSelf->__PVT___dmem_io_SIGN = (1U & (~ (IData)(vlSelf->__PVT___mem2mem2_io_LoadUnsignedM)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__61(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__61\n"); );
    // Body
    vlSelf->__PVT___dmem_io_Physisc_Address = vlSelf->__PVT___mem2mem2_io_PhyAddrM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__62(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__62\n"); );
    // Body
    vlSelf->__PVT___alu_io_ctrl = vlSelf->__PVT___id2ex_io2_ALUCtrlE;
    vlSelf->__PVT___cp0_io_exception_type_i = vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out;
    vlSelf->__PVT___regfile_io_WD3 = vlSelf->__PVT___mem22wb_io_ResultW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__63(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__63\n"); );
    // Body
    vlSelf->__PVT___regfile_io_A3 = vlSelf->__PVT___mem22wb_io_WriteRegW;
    vlSelf->__PVT__RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__64(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__64\n"); );
    // Body
    vlSelf->__PVT___cfu_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___cfu_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__65(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__65\n"); );
    // Body
    vlSelf->__PVT___cfu_io_R2E = vlSelf->__PVT___id2ex_io_R2E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__66(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__66\n"); );
    // Body
    vlSelf->__PVT___regfile_io_A2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___regfile_io_A1 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___cu_io1_InstrD = vlSelf->__PVT___if2id_io_InstrD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__67(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__67\n"); );
    // Body
    vlSelf->__PVT__ResultW = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_lookup_data;
    vlSelf->__PVT___cfu_io_WriteRegM = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT___cfu_io_RegWriteM = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___cfu_io_MemToRegM = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___cfu_io_WriteRegM2 = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT___cfu_io_RegWriteM2 = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___cfu_io_WriteRegW = vlSelf->__PVT___mem22wb_io_WriteRegW;
    vlSelf->__PVT___cfu_io_RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                        & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
    vlSelf->__PVT___cfu_io_MemToRegM2 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
    vlSelf->__PVT___cfu_io_R1E = vlSelf->__PVT___id2ex_io_R1E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__68(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__68\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pc 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc 
        = vlSelf->__PVT___mem22wb_io_PCW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__69(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__69\n"); );
    // Body
    vlSelf->__PVT___T_2 = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__72(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__72\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_inst_commit = ((IData)(vlSelf->__PVT___PCW_Reg_T) 
                                                   & (vlSelf->__PVT__pcw_reg 
                                                      != vlSelf->__PVT___mem22wb_io_PCW));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__73(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__73\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__74(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__74\n"); );
    // Body
    vlSelf->__PVT___resultE_T_6 = ((IData)(vlSelf->__PVT___resultE_T_2)
                                    ? vlSelf->__PVT___id2ex_io2_PCPlus4E
                                    : 0ULL);
    vlSelf->__PVT___cp0_io_in_branchjump_jr = ((IData)(vlSelf->__PVT___PCW_Reg_T)
                                                ? (IData)(vlSelf->__PVT___mem22wb_io_BranchJump_JrW)
                                                : (IData)(vlSelf->__PVT__branchjump_Jr_Reg));
    vlSelf->__PVT__debug_wb_rf_wnum = vlSelf->__PVT___regfile_io_A3;
    vlSelf->__PVT__debug_wb_rf_wdata = vlSelf->__PVT___regfile_io_WD3;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__75(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__75\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__83(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__83\n"); );
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
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__84(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__84\n"); );
    // Body
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
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__98(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__98\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_hascode_0_T_1 = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1), (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0))));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__101(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__101\n"); );
    // Body
    vlSelf->__PVT__debug_wb_rf_wen = ((vlSelf->__PVT__reg_pc 
                                       == vlSelf->__PVT___mem22wb_io_PCW)
                                       ? 0U : (IData)(vlSelf->__PVT___debug_wb_rf_wen_T_2));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__102(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__102\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T 
        = ((IData)(vlSelf->__PVT__int_with_timer_int) 
           & (IData)(vlSelf->__PVT___cp0_io_cp0_status));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__103(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__103\n"); );
    // Body
    vlSelf->__PVT__Forward_for_epc = (((IData)(vlSelf->__PVT___ex2mem_io_CP0WriteM) 
                                       & (0xeU == (IData)(vlSelf->__PVT___ex2mem_io_WriteCP0AddrM)))
                                       ? vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM
                                       : vlSelf->__PVT___Forward_for_epc_T_6);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__105(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__105\n"); );
    // Body
    vlSelf->__PVT__pht_tobeE = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                 ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                 : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__106(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__106\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_6 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 1U))
                                               ? 4U
                                               : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__107(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__107\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 0U))
                                               ? 8U
                                               : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__110(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__110\n"); );
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
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__111(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__111\n"); );
    // Body
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
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__112(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__112\n"); );
    // Body
    vlSelf->__PVT__inst_buffer_full = vlSelf->__PVT__fifo_with_bundle_io_full;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__115(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__115\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataE = 
        VL_SEL_IQII(64, vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_7, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__117(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__117\n"); );
    // Body
    vlSelf->__PVT___pht_lookup_value_tobeE_T_8 = VL_CONCAT_III(8,2,6, 
                                                               (3U 
                                                                & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 6U, 2U)), 
                                                               VL_CONCAT_III(6,2,4, (IData)(vlSelf->__PVT__pht_tobeE), 
                                                                             (0xfU 
                                                                              & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 0U, 4U))));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__119(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__119\n"); );
    // Body
    vlSelf->__PVT___BadVAddrE_T_8 = (VL_BITSEL_IIII(32, vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out, 0x1fU) 
                                     & (0U != (3U & 
                                               VL_SEL_IIII(32, vlSelf->__PVT__Forward_for_epc, 0U, 2U))));
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__121(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__121\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = VL_EXTEND_II(21,3, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_6));
    vlSelf->__PVT___GEN_15 = VL_EXTEND_II(21,4, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_5));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__122(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__122\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSelf->__PVT___commit_difftest_gpr_wire, vlSelf->__PVT___regfile_io_reg_file_alL_out);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__123(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__123\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__124(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__124\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__126(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__126\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_RegDstD = vlSelf->__PVT___cu_io_RegDstD;
    vlSelf->__PVT___id2ex_io1_ebreakD = vlSelf->__PVT___cu_io_ebreakD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__128(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__128\n"); );
    // Body
    vlSelf->__PVT__data_sram_wen = vlSelf->__PVT___dmemreq_io_wr;
    vlSelf->__PVT_____05Fex2mem_io_ExceptionTypeE_T_4 
        = ((IData)(vlSelf->__PVT___BadVAddrE_T_8) ? 0x100000U
            : 0U);
    vlSelf->__PVT___pht_lookup_value_tobeE_T_12 = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_5)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_2));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__129(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__129\n"); );
    // Body
    vlSelf->__PVT__data_size = vlSelf->__PVT___dmemreq_io_size;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__130(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__130\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_7 = (vlSelf->__PVT___ExceptionTypeD_Out_T_4 
                                              | vlSelf->__PVT___GEN_15);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__132(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__132\n"); );
    // Body
    vlSelf->__PVT___PCJumpD_T_5 = (vlSelf->__PVT__immUJ 
                                   + vlSelf->__PVT___if2id_io_PCD);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__133(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__133\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__136(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__136\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len 
        = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__data_size));
    vlSelf->__PVT___id2ex_io1_MemToRegD = vlSelf->__PVT___cu_io_MemToRegD;
    vlSelf->__PVT___id2ex_io1_MemWriteD = vlSelf->__PVT___cu_io_MemWriteD;
    vlSelf->__PVT___id2ex_io1_LoadUnsignedD = vlSelf->__PVT___cu_io_LoadUnsignedD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__137(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__137\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = VL_EXTEND_II(32,21, vlSelf->__PVT_____05Fex2mem_io_ExceptionTypeE_T_4);
    vlSelf->__PVT___pht_lookup_value_tobeE_T_14 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_8)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_12));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__138(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__138\n"); );
    // Body
    vlSelf->__PVT___ExceptionTypeD_Out_T_8 = (vlSelf->__PVT___ExceptionTypeD_Out_T_7 
                                              | vlSelf->__PVT___GEN_16);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__139(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__139\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__140(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__140\n"); );
    // Body
    vlSelf->__PVT___cfu_io_dmem_calD = vlSelf->__PVT___cu_io1_dmem_addr_cal;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__142(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__142\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value 
        = ((3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
            ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_10)
            : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_14));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__143(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__143\n"); );
    // Body
    vlSelf->__PVT__ExceptionTypeD_Out = VL_EXTEND_QI(64,21, vlSelf->__PVT___ExceptionTypeD_Out_T_8);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__144(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__144\n"); );
    // Body
    vlSelf->__PVT__PCBranchD = (vlSelf->__PVT__immSB 
                                + vlSelf->__PVT___if2id_io_PCD);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__149(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__149\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_point_flush 
        = vlSelf->__PVT___cp0_io_exception;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__150(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__150\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_branch_answer_T_7 = vlSelf->__PVT___cp0_io_exception;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__151(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__151\n"); );
    // Body
    vlSelf->__PVT__target_neq_branchD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                         != vlSelf->__PVT__PCBranchD);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__152(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__152\n"); );
    // Body
    vlSelf->__PVT___cfu_io_InException = vlSelf->__PVT___cp0_io_exception;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__158(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__158\n"); );
    // Body
    vlSelf->__PVT___RD2ForWardE_p_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                          ? vlSelf->__PVT__ResultW
                                          : vlSelf->__PVT___id2ex_io_RD2E);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__159(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__159\n"); );
    // Body
    vlSelf->__PVT___RD1ForWardE_p_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                          ? vlSelf->__PVT__ResultW
                                          : vlSelf->__PVT___id2ex_io_RD1E);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__160(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__160\n"); );
    // Body
    vlSelf->__PVT___RD2ForWardE_p_T_3 = ((2U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                          ? vlSelf->__PVT__resultE2M_Reg
                                          : vlSelf->__PVT___RD2ForWardE_p_T_1);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__161(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__161\n"); );
    // Body
    vlSelf->__PVT___RD1ForWardE_p_T_3 = ((2U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                          ? vlSelf->__PVT__resultE2M_Reg
                                          : vlSelf->__PVT___RD1ForWardE_p_T_1);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__164(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__164\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_en = vlSelf->__PVT__inst_write_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__165(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__165\n"); );
    // Body
    vlSelf->__PVT__RD2ForWardE_p = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                     ? vlSelf->__PVT__ResultM2_Reg
                                     : vlSelf->__PVT___RD2ForWardE_p_T_3);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__166(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__166\n"); );
    // Body
    vlSelf->__PVT__RD1ForWardE_p = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                     ? vlSelf->__PVT__ResultM2_Reg
                                     : vlSelf->__PVT___RD1ForWardE_p_T_3);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__167(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__167\n"); );
    // Body
    vlSelf->__PVT___pre_decoder_branchD_flag_T = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___mem2_exception_T = vlSelf->__PVT___cfu_io_FlushM2;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__168(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__168\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_clr = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___id2ex_io1_MemWidthD = vlSelf->__PVT___cu_io_MemWidthD;
    vlSelf->__PVT__id_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT__mem2_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM2;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__169(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__169\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_RtE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                      ? vlSelf->__PVT__RD2ForWardE_r
                                      : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT___if2id_io_clr = vlSelf->__PVT___cfu_io_FlushD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__171(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__171\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_WriteDataE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                              ? vlSelf->__PVT__RD2ForWardE_r
                                              : vlSelf->__PVT__RD2ForWardE_p);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__172(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__172\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_ok = vlSelf->__PVT__data_stage2_stall;
    vlSelf->__PVT__RD2ForWardE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                   ? vlSelf->__PVT__RD2ForWardE_r
                                   : vlSelf->__PVT__RD2ForWardE_p);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__173(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__173\n"); );
    // Body
    vlSelf->__PVT__RD1ForWardE = ((IData)(vlSelf->__PVT__Forward_Lock1E)
                                   ? vlSelf->__PVT__RD1ForWardE_r
                                   : vlSelf->__PVT__RD1ForWardE_p);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__178(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__178\n"); );
    // Body
    vlSelf->__PVT___addr_cal_io_d_vaddr = (vlSelf->__PVT___id2ex_io_ImmE 
                                           + vlSelf->__PVT__RD1ForWardE);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__180(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__180\n"); );
    // Body
    vlSelf->__PVT___alu_io_in1 = VL_CONCAT_QII(64,32,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src1E, 0x20U, 0x20U), 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src1E, 0U, 0x20U));
    vlSelf->__PVT___alu_io_in2 = VL_CONCAT_QII(64,32,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src2E, 0x20U, 0x20U), 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src2E, 0U, 0x20U));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__184(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__184\n"); );
    // Body
    vlSelf->__PVT___cfu_io_DataPendingM = vlSelf->__PVT___dmem_io_data_pending;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__186(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__186\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_PhyAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
    vlSelf->__PVT__data_cache = vlSelf->__PVT___addr_cal_io_d_cached;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__188(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__188\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_VAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__194(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__194\n"); );
    // Body
    vlSelf->__PVT___mem_exception_T_1 = vlSelf->__PVT___cfu_io_StallM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__196(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__196\n"); );
    // Body
    vlSelf->__PVT___temp_exceptionE_T_11 = ((IData)(vlSelf->__PVT___alu_io_overflow)
                                             ? 0x1000U
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__197(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__197\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_inst 
        = VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0U, 0x20U);
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag 
        = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x20U));
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump 
        = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x21U));
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata 
        = (0x3fU & VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x22U, 6U));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__198(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__198\n"); );
    // Body
    vlSelf->__PVT__inst_buffer_write_bundle_inst = 
        VL_SEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__199(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__199\n"); );
    // Body
    vlSelf->__PVT___commit_cache_reg_T = vlSelf->__PVT___cfu_io_StallE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__200(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__200\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_inst_jump = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x21U));
    vlSelf->__PVT__stage_fec_2_inst_branch = (1U & 
                                              VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x20U));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__202(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__202\n"); );
    // Body
    vlSelf->__PVT___dmem_io_rdata = vlSelf->__PVT__data_sram_rdata;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__205(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__205\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_en = ((~ ((((IData)(vlSelf->__PVT__ex_exception) 
                                           | (IData)(vlSelf->__PVT__mem_exception)) 
                                          | (IData)(vlSelf->__PVT__mem2_exception)) 
                                         | (IData)(vlSelf->__PVT__wb_exception))) 
                                     & (IData)(vlSelf->__PVT___commit_cache_reg_T));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__206(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__206\n"); );
    // Body
    vlSelf->__PVT___PCSrcD_T_1 = vlSelf->__PVT___cfu_io_StallD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__208(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__208\n"); );
    // Body
    vlSelf->__PVT__data_sram_addr = vlSelf->__PVT___dmemreq_io_addr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__214(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__214\n"); );
    // Body
    vlSelf->__PVT__data_sram_en = ((IData)(vlSelf->__PVT___dmemreq_io_req) 
                                   & (~ (IData)(vlSelf->__PVT___dmem_io_data_pending)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__217(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__217\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ALUSrcD_0 = vlSelf->__PVT___cu_io_ALUSrcD_0;
    vlSelf->__PVT___id2ex_io1_LinkD = vlSelf->__PVT___cu_io_LinkD;
    vlSelf->__PVT___id2ex_io1_data_wD = vlSelf->__PVT___cu_io_data_wD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__218(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__218\n"); );
    // Body
    vlSelf->__PVT_____05Fif2id_io_InstrF_T = vlSelf->__PVT___cu_io1_BadInstrD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__224(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__224\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13 
        = ((0ULL == vlSelf->__PVT__ExceptionTypeD_Out)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12)
            : vlSelf->__PVT__ExceptionTypeD_Out);
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT___dmemreq_io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__226(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__226\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data 
        = VL_SEL_IQII(64, vlSelf->__PVT__data_sram_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__227(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__227\n"); );
    // Body
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 
        = (((0U != (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T)) 
            & (IData)(vlSelf->__PVT___cp0_io_Int_able))
            ? 1ULL : vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__233(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__233\n"); );
    // Body
    vlSelf->__PVT___BranchR2D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD2);
    vlSelf->__PVT___BranchR1D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD1);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__234(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__234\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_RD1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___id2ex_io_RD2D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR2D_T_2);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__235(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__235\n"); );
    // Body
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__238(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__238\n"); );
    // Body
    vlSelf->__PVT___Mem_withRL_Data_T_25 = VL_CONCAT_III(32,24,8, 
                                                         (0xffffffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___mem2mem2_io_RtM, 8U, 0x18U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelf->__PVT___dmem_io_RD, 0x18U, 8U)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__239(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__239\n"); );
    // Body
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
    vlSelf->__PVT__PCJumpD = ((IData)(vlSelf->__PVT__pre_decoder_jr)
                               ? vlSelf->__PVT___PCJumpD_T_3
                               : vlSelf->__PVT___PCJumpD_T_5);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__240(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__240\n"); );
    // Body
    vlSelf->__PVT___Pc_targetD_T_2 = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                       ? vlSelf->__PVT__PCJumpD
                                       : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__241(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__241\n"); );
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
    vlSelf->__PVT__target_neq_jumpD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                       != vlSelf->__PVT__PCJumpD);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__243(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__243\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__247(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__247\n"); );
    // Body
    vlSelf->__PVT___T_36 = ((IData)(vlSelf->__PVT__pre_decoder_jump) 
                            | (IData)(vlSelf->__PVT___PCSrcD_T_3));
    vlSelf->__PVT___mem22wb_io_ResultM = ((IData)(vlSelf->__PVT___Forward_Lock1E_T_1)
                                           ? vlSelf->__PVT__Mem_withRL_Data
                                           : vlSelf->__PVT__ResultM2_Reg);
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 1U))
            ? vlSelf->__PVT__Mem_withRL_Data : 0ULL);
    vlSelf->__PVT___PC_nextD_T_2 = ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                     ? vlSelf->__PVT__PCBranchD
                                     : vlSelf->__PVT___if2id_io_PCPlus4D);
    vlSelf->__PVT__target_addr_error = (((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                         & (IData)(vlSelf->__PVT__target_neq_jumpD)) 
                                        | ((IData)(vlSelf->__PVT___PCSrcD_T_3) 
                                           & (IData)(vlSelf->__PVT__target_neq_branchD)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__255(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__255\n"); );
    // Body
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_5 = ((IData)(vlSelf->__PVT___cu_io1_BadInstrD)
                                                 ? 0U
                                                 : vlSelf->__PVT__inst_buffer_read_out_inst);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__259(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__259\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((~ (IData)(vlSelf->__PVT___T_25)) 
                             & (IData)(vlSelf->__PVT__InDelaySlotF));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__260(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__260\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_read_en = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___T_25));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__267(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__267\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__270(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__270\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pht 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__274(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__274\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_M_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_R_io_stall = vlSelf->__PVT__stage2_stall;
    vlSelf->__PVT__stage_fec_1_pc_L_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_M_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
    vlSelf->__PVT__stage_fec_1_pc_R_io_flush = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7) 
                                                & (~ (IData)(vlSelf->__PVT__stage2_stall)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__275(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__275\n"); );
    // Body
    vlSelf->__PVT__inst_sram_en = vlSelf->__PVT__stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__280(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__280\n"); );
    // Body
    vlSelf->__PVT___stage_fec_1_valid_T_2 = ((~ (IData)(vlSelf->__PVT___pc_next_wait_T)) 
                                             & (IData)(vlSelf->__PVT__stage_fec_1_valid));
    vlSelf->__PVT__stage_fec_2_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                        & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__281(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__281\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall 
        = ((IData)(vlSelf->__PVT__stage2_stall) & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_L_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_M_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
    vlSelf->__PVT__stage_fec_2_pc_R_io_stall = ((IData)(vlSelf->__PVT__stage2_stall) 
                                                & (~ (IData)(vlSelf->__PVT___pc_next_wait_T)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__283(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__283\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_1 = ((IData)(vlSelf->__PVT__pc_req_wait)
                                    ? vlSelf->__PVT__pc_next_wait
                                    : vlSelf->__PVT__Pc_Next_normal);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__284(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__284\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_2 = ((IData)(vlSelf->__PVT__ready_to_branch)
                                    ? vlSelf->__PVT__Pc_Next_normal
                                    : vlSelf->__PVT___Pc_Next_T_1);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__285(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__285\n"); );
    // Body
    vlSelf->__PVT___Pc_Next_T_3 = ((IData)(vlSelf->__PVT__returnPc_req_wait)
                                    ? vlSelf->__PVT__exception_Pc_reg
                                    : vlSelf->__PVT___Pc_Next_T_2);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__287(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__287\n"); );
    // Body
    vlSelf->__PVT__inst_cache = (4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0x1dU, 3U)));
    vlSelf->__PVT__inst_ready_to_use = (0U == (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Pc_Next, 0U, 2U)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___ctor_var_reset(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ext_int = 0;
    vlSelf->__PVT__resetn = 0;
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__inst_cache = 0;
    vlSelf->__PVT__inst_sram_en = 0;
    vlSelf->__PVT__inst_sram_addr = 0;
    vlSelf->__PVT__inst_sram_rdata_L = 0;
    vlSelf->__PVT__inst_write_en = 0;
    vlSelf->__PVT__stage2_flush = 0;
    vlSelf->__PVT__stage2_stall = 0;
    vlSelf->__PVT__stage1_valid_flush = 0;
    vlSelf->__PVT__inst_ready_to_use = 0;
    vlSelf->__PVT__inst_buffer_full = 0;
    vlSelf->__PVT__data_sram_en = 0;
    vlSelf->__PVT__data_sram_wen = 0;
    vlSelf->__PVT__data_size = 0;
    vlSelf->__PVT__data_sram_addr = 0;
    vlSelf->__PVT__data_sram_wdata = 0;
    vlSelf->__PVT__data_cache = 0;
    vlSelf->__PVT__data_sram_rdata = 0;
    vlSelf->__PVT__data_stage2_stall = 0;
    vlSelf->__PVT__data_wstrb = 0;
    vlSelf->__PVT__debug_wb_pc = 0;
    vlSelf->__PVT__debug_wb_rf_wen = 0;
    vlSelf->__PVT__debug_wb_rf_wnum = 0;
    vlSelf->__PVT__debug_wb_rf_wdata = 0;
    vlSelf->__PVT___alu_io_ctrl = 0;
    vlSelf->__PVT___alu_io_in1 = 0;
    vlSelf->__PVT___alu_io_in2 = 0;
    vlSelf->__PVT___alu_io_result = 0;
    vlSelf->__PVT___alu_io_overflow = 0;
    vlSelf->__PVT___alu_io_data_w = 0;
    vlSelf->__PVT___br_reset = 0;
    vlSelf->__PVT___br_io_r1 = 0;
    vlSelf->__PVT___br_io_r2 = 0;
    vlSelf->__PVT___br_io_branch = 0;
    vlSelf->__PVT___br_io_exe = 0;
    vlSelf->__PVT___cfu_reset = 0;
    vlSelf->__PVT___cfu_io_Inst_Fifo_Empty = 0;
    vlSelf->__PVT___cfu_io_dmem_calD = 0;
    vlSelf->__PVT___cfu_io_BranchD_Flag = 0;
    vlSelf->__PVT___cfu_io_JRD = 0;
    vlSelf->__PVT___cfu_io_CanBranchD = 0;
    vlSelf->__PVT___cfu_io_DataPendingM = 0;
    vlSelf->__PVT___cfu_io_InException = 0;
    vlSelf->__PVT___cfu_io_WriteRegE = 0;
    vlSelf->__PVT___cfu_io_RegWriteE = 0;
    vlSelf->__PVT___cfu_io_WriteRegM = 0;
    vlSelf->__PVT___cfu_io_MemToRegM = 0;
    vlSelf->__PVT___cfu_io_RegWriteM = 0;
    vlSelf->__PVT___cfu_io_WriteRegM2 = 0;
    vlSelf->__PVT___cfu_io_MemToRegM2 = 0;
    vlSelf->__PVT___cfu_io_RegWriteM2 = 0;
    vlSelf->__PVT___cfu_io_WriteRegW = 0;
    vlSelf->__PVT___cfu_io_RegWriteW = 0;
    vlSelf->__PVT___cfu_io_R2D = 0;
    vlSelf->__PVT___cfu_io_R1D = 0;
    vlSelf->__PVT___cfu_io_R2E = 0;
    vlSelf->__PVT___cfu_io_R1E = 0;
    vlSelf->__PVT___cfu_io_StallF = 0;
    vlSelf->__PVT___cfu_io_StallD = 0;
    vlSelf->__PVT___cfu_io_StallE = 0;
    vlSelf->__PVT___cfu_io_StallM = 0;
    vlSelf->__PVT___cfu_io_StallM2 = 0;
    vlSelf->__PVT___cfu_io_StallW = 0;
    vlSelf->__PVT___cfu_io_FlushD = 0;
    vlSelf->__PVT___cfu_io_FlushE = 0;
    vlSelf->__PVT___cfu_io_FlushM = 0;
    vlSelf->__PVT___cfu_io_FlushM2 = 0;
    vlSelf->__PVT___cfu_io_FlushW = 0;
    vlSelf->__PVT___cfu_io_Forward1E = 0;
    vlSelf->__PVT___cfu_io_Forward2E = 0;
    vlSelf->__PVT___cfu_io_Forward1D = 0;
    vlSelf->__PVT___cfu_io_Forward2D = 0;
    vlSelf->__PVT___cp0_clock = 0;
    vlSelf->__PVT___cp0_reset = 0;
    vlSelf->__PVT___cp0_io_cp0_write_addr = 0;
    vlSelf->__PVT___cp0_io_cp0_write_sel = 0;
    vlSelf->__PVT___cp0_io_cp0_write_data = 0;
    vlSelf->__PVT___cp0_io_cp0_write_en = 0;
    vlSelf->__PVT___cp0_io_int_i = 0;
    vlSelf->__PVT___cp0_io_timer_int_has = 0;
    vlSelf->__PVT___cp0_io_pc = 0;
    vlSelf->__PVT___cp0_io_exception_type_i = 0;
    vlSelf->__PVT___cp0_io_in_delayslot = 0;
    vlSelf->__PVT___cp0_io_in_branchjump_jr = 0;
    vlSelf->__PVT___cp0_io_return_pc = 0;
    vlSelf->__PVT___cp0_io_exception = 0;
    vlSelf->__PVT___cp0_io_epc = 0;
    vlSelf->__PVT___cp0_io_cp0_status = 0;
    vlSelf->__PVT___cp0_io_Int_able = 0;
    vlSelf->__PVT___cp0_io_asid = 0;
    vlSelf->__PVT___cp0_io_cp0_tlb_write_en = 0;
    vlSelf->__PVT___cu_io1_InstrD = 0;
    vlSelf->__PVT___cu_io1_BadInstrD = 0;
    vlSelf->__PVT___cu_io1_dmem_addr_cal = 0;
    vlSelf->__PVT___cu_io_RegWriteD = 0;
    vlSelf->__PVT___cu_io_MemToRegD = 0;
    vlSelf->__PVT___cu_io_MemWriteD = 0;
    vlSelf->__PVT___cu_io_ALUCtrlD = 0;
    vlSelf->__PVT___cu_io_ALUSrcD_0 = 0;
    vlSelf->__PVT___cu_io_ALUSrcD_1 = 0;
    vlSelf->__PVT___cu_io_RegDstD = 0;
    vlSelf->__PVT___cu_io_LinkD = 0;
    vlSelf->__PVT___cu_io_LoadUnsignedD = 0;
    vlSelf->__PVT___cu_io_MemWidthD = 0;
    vlSelf->__PVT___cu_io_ImmD = 0;
    vlSelf->__PVT___cu_io_ebreakD = 0;
    vlSelf->__PVT___cu_io_data_wD = 0;
    vlSelf->__PVT___cu_io_muldiv_control = 0;
    vlSelf->__PVT___cu_io_muldiv_cal = 0;
    vlSelf->__PVT___cu_io_alu_cal = 0;
    vlSelf->__PVT___dmem_io_data_ok = 0;
    vlSelf->__PVT___dmem_io_rdata = 0;
    vlSelf->__PVT___dmem_io_Physisc_Address = 0;
    vlSelf->__PVT___dmem_io_WIDTH = 0;
    vlSelf->__PVT___dmem_io_SIGN = 0;
    vlSelf->__PVT___dmem_io_RD = 0;
    vlSelf->__PVT___dmem_io_data_pending = 0;
    vlSelf->__PVT___dmemreq_io_en = 0;
    vlSelf->__PVT___dmemreq_io_MemWriteE = 0;
    vlSelf->__PVT___dmemreq_io_MemToRegE = 0;
    vlSelf->__PVT___dmemreq_io_MemWidthE = 0;
    vlSelf->__PVT___dmemreq_io_VAddrE = 0;
    vlSelf->__PVT___dmemreq_io_WriteDataE = 0;
    vlSelf->__PVT___dmemreq_io_req = 0;
    vlSelf->__PVT___dmemreq_io_wr = 0;
    vlSelf->__PVT___dmemreq_io_size = 0;
    vlSelf->__PVT___dmemreq_io_addr = 0;
    vlSelf->__PVT___dmemreq_io_wdata = 0;
    vlSelf->__PVT___dmemreq_io_wstrb = 0;
    vlSelf->__PVT___ex2mem_clock = 0;
    vlSelf->__PVT___ex2mem_reset = 0;
    vlSelf->__PVT___ex2mem_io1_RegWriteE = 0;
    vlSelf->__PVT___ex2mem_io1_MemToRegE = 0;
    vlSelf->__PVT___ex2mem_io1_LoadUnsignedE = 0;
    vlSelf->__PVT___ex2mem_io1_MemWidthE = 0;
    vlSelf->__PVT___ex2mem_io1_CP0WriteE = 0;
    vlSelf->__PVT___ex2mem_io1_WriteCP0AddrE = 0;
    vlSelf->__PVT___ex2mem_io1_WriteCP0SelE = 0;
    vlSelf->__PVT___ex2mem_io1_PCE = 0;
    vlSelf->__PVT___ex2mem_io1_InDelaySlotE = 0;
    vlSelf->__PVT___ex2mem_io1_MemRLE = 0;
    vlSelf->__PVT___ex2mem_io1_BranchJump_JrE = 0;
    vlSelf->__PVT___ex2mem_io1_Tlb_Control = 0;
    vlSelf->__PVT___ex2mem_io1_eBreakE = 0;
    vlSelf->__PVT___ex2mem_io_en = 0;
    vlSelf->__PVT___ex2mem_io_clr = 0;
    vlSelf->__PVT___ex2mem_io_WriteRegE = 0;
    vlSelf->__PVT___ex2mem_io_PhyAddrE = 0;
    vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataE = 0;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeE = 0;
    vlSelf->__PVT___ex2mem_io_RtE = 0;
    vlSelf->__PVT___ex2mem_io_Pc_NextE = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len = 0;
    vlSelf->__PVT___ex2mem_io_RegWriteM = 0;
    vlSelf->__PVT___ex2mem_io_MemToRegM = 0;
    vlSelf->__PVT___ex2mem_io_WriteRegM = 0;
    vlSelf->__PVT___ex2mem_io_LoadUnsignedM = 0;
    vlSelf->__PVT___ex2mem_io_MemWidthM = 0;
    vlSelf->__PVT___ex2mem_io_PhyAddrM = 0;
    vlSelf->__PVT___ex2mem_io_CP0WriteM = 0;
    vlSelf->__PVT___ex2mem_io_WriteCP0AddrM = 0;
    vlSelf->__PVT___ex2mem_io_WriteCP0SelM = 0;
    vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM = 0;
    vlSelf->__PVT___ex2mem_io_PCM = 0;
    vlSelf->__PVT___ex2mem_io_InDelaySlotM = 0;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out = 0;
    vlSelf->__PVT___ex2mem_io_MemRLM = 0;
    vlSelf->__PVT___ex2mem_io_RtM = 0;
    vlSelf->__PVT___ex2mem_io_BranchJump_JrM = 0;
    vlSelf->__PVT___ex2mem_io_Tlb_ControlM = 0;
    vlSelf->__PVT___ex2mem_io_Pc_NextM = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr = 0;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len = 0;
    vlSelf->__PVT___mem2mem2_clock = 0;
    vlSelf->__PVT___mem2mem2_reset = 0;
    vlSelf->__PVT___mem2mem2_io1_RegWriteE = 0;
    vlSelf->__PVT___mem2mem2_io1_MemToRegE = 0;
    vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE = 0;
    vlSelf->__PVT___mem2mem2_io1_MemWidthE = 0;
    vlSelf->__PVT___mem2mem2_io1_CP0WriteE = 0;
    vlSelf->__PVT___mem2mem2_io1_WriteCP0AddrE = 0;
    vlSelf->__PVT___mem2mem2_io1_WriteCP0SelE = 0;
    vlSelf->__PVT___mem2mem2_io1_PCE = 0;
    vlSelf->__PVT___mem2mem2_io1_InDelaySlotE = 0;
    vlSelf->__PVT___mem2mem2_io1_MemRLE = 0;
    vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE = 0;
    vlSelf->__PVT___mem2mem2_io1_Tlb_Control = 0;
    vlSelf->__PVT___mem2mem2_io1_eBreakE = 0;
    vlSelf->__PVT___mem2mem2_io_en = 0;
    vlSelf->__PVT___mem2mem2_io_clr = 0;
    vlSelf->__PVT___mem2mem2_io_WriteRegE = 0;
    vlSelf->__PVT___mem2mem2_io_PhyAddrE = 0;
    vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataE = 0;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeE = 0;
    vlSelf->__PVT___mem2mem2_io_RtE = 0;
    vlSelf->__PVT___mem2mem2_io_Pc_NextE = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_pc = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_data = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_mem_fetch_type = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_addr = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_len = 0;
    vlSelf->__PVT___mem2mem2_io_RegWriteM = 0;
    vlSelf->__PVT___mem2mem2_io_MemToRegM = 0;
    vlSelf->__PVT___mem2mem2_io_WriteRegM = 0;
    vlSelf->__PVT___mem2mem2_io_LoadUnsignedM = 0;
    vlSelf->__PVT___mem2mem2_io_MemWidthM = 0;
    vlSelf->__PVT___mem2mem2_io_PhyAddrM = 0;
    vlSelf->__PVT___mem2mem2_io_CP0WriteM = 0;
    vlSelf->__PVT___mem2mem2_io_WriteCP0AddrM = 0;
    vlSelf->__PVT___mem2mem2_io_WriteCP0SelM = 0;
    vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM = 0;
    vlSelf->__PVT___mem2mem2_io_PCM = 0;
    vlSelf->__PVT___mem2mem2_io_InDelaySlotM = 0;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out = 0;
    vlSelf->__PVT___mem2mem2_io_MemRLM = 0;
    vlSelf->__PVT___mem2mem2_io_RtM = 0;
    vlSelf->__PVT___mem2mem2_io_BranchJump_JrM = 0;
    vlSelf->__PVT___mem2mem2_io_Tlb_ControlM = 0;
    vlSelf->__PVT___mem2mem2_io_eBreakM = 0;
    vlSelf->__PVT___mem2mem2_io_Pc_NextM = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr = 0;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len = 0;
    vlSelf->__PVT___id2ex_clock = 0;
    vlSelf->__PVT___id2ex_reset = 0;
    vlSelf->__PVT___id2ex_io1_RegWriteD = 0;
    vlSelf->__PVT___id2ex_io1_MemToRegD = 0;
    vlSelf->__PVT___id2ex_io1_MemWriteD = 0;
    vlSelf->__PVT___id2ex_io1_ALUCtrlD = 0;
    vlSelf->__PVT___id2ex_io1_ALUSrcD_0 = 0;
    vlSelf->__PVT___id2ex_io1_ALUSrcD_1 = 0;
    vlSelf->__PVT___id2ex_io1_RegDstD = 0;
    vlSelf->__PVT___id2ex_io1_LinkD = 0;
    vlSelf->__PVT___id2ex_io1_LoadUnsignedD = 0;
    vlSelf->__PVT___id2ex_io1_MemWidthD = 0;
    vlSelf->__PVT___id2ex_io1_ebreakD = 0;
    vlSelf->__PVT___id2ex_io1_data_wD = 0;
    vlSelf->__PVT___id2ex_io1_muldiv_control = 0;
    vlSelf->__PVT___id2ex_io1_muldiv_cal = 0;
    vlSelf->__PVT___id2ex_io1_alu_cal = 0;
    vlSelf->__PVT___id2ex_io2_RegWriteE = 0;
    vlSelf->__PVT___id2ex_io2_MemToRegE = 0;
    vlSelf->__PVT___id2ex_io2_MemWriteE = 0;
    vlSelf->__PVT___id2ex_io2_ALUCtrlE = 0;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_0 = 0;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_1 = 0;
    vlSelf->__PVT___id2ex_io2_RegDstE = 0;
    vlSelf->__PVT___id2ex_io2_LinkE = 0;
    vlSelf->__PVT___id2ex_io2_PCPlus4E = 0;
    vlSelf->__PVT___id2ex_io2_LoadUnsignedE = 0;
    vlSelf->__PVT___id2ex_io2_MemWidthE = 0;
    vlSelf->__PVT___id2ex_io2_WriteCP0AddrE = 0;
    vlSelf->__PVT___id2ex_io2_WriteCP0SelE = 0;
    vlSelf->__PVT___id2ex_io2_PCE = 0;
    vlSelf->__PVT___id2ex_io2_InDelaySlotE = 0;
    vlSelf->__PVT___id2ex_io2_BranchJump_JrE = 0;
    vlSelf->__PVT___id2ex_io2_eBreakE = 0;
    vlSelf->__PVT___id2ex_io_en = 0;
    vlSelf->__PVT___id2ex_io_clr = 0;
    vlSelf->__PVT___id2ex_io_RD1D = 0;
    vlSelf->__PVT___id2ex_io_RD2D = 0;
    vlSelf->__PVT___id2ex_io_R2D = 0;
    vlSelf->__PVT___id2ex_io_R1D = 0;
    vlSelf->__PVT___id2ex_io_ImmD = 0;
    vlSelf->__PVT___id2ex_io_PCPlus4D = 0;
    vlSelf->__PVT___id2ex_io_WriteCP0AddrD = 0;
    vlSelf->__PVT___id2ex_io_WriteCP0SelD = 0;
    vlSelf->__PVT___id2ex_io_PCD = 0;
    vlSelf->__PVT___id2ex_io_InDelaySlotD = 0;
    vlSelf->__PVT___id2ex_io_ExceptionTypeD = 0;
    vlSelf->__PVT___id2ex_io_Pc_NextD = 0;
    vlSelf->__PVT___id2ex_io_BranchJump_JrD = 0;
    vlSelf->__PVT___id2ex_io_RD1E = 0;
    vlSelf->__PVT___id2ex_io_RD2E = 0;
    vlSelf->__PVT___id2ex_io_R2E = 0;
    vlSelf->__PVT___id2ex_io_R1E = 0;
    vlSelf->__PVT___id2ex_io_ImmE = 0;
    vlSelf->__PVT___id2ex_io_data_wE = 0;
    vlSelf->__PVT___id2ex_io_Pc_NextE = 0;
    vlSelf->__PVT___id2ex_io_muldiv_control = 0;
    vlSelf->__PVT___id2ex_io_alu_calE = 0;
    vlSelf->__PVT___id2ex_io_muldiv_calE = 0;
    vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out = 0;
    vlSelf->__PVT___if2id_clock = 0;
    vlSelf->__PVT___if2id_reset = 0;
    vlSelf->__PVT___if2id_io_en = 0;
    vlSelf->__PVT___if2id_io_clr = 0;
    vlSelf->__PVT___if2id_io_InstrF = 0;
    vlSelf->__PVT___if2id_io_PCPlus4F = 0;
    vlSelf->__PVT___if2id_io_PCF = 0;
    vlSelf->__PVT___if2id_io_ExceptionTypeF = 0;
    vlSelf->__PVT___if2id_io_NextDelaySlotD = 0;
    vlSelf->__PVT___if2id_io_InstrD = 0;
    vlSelf->__PVT___if2id_io_PCPlus4D = 0;
    vlSelf->__PVT___if2id_io_InDelaySlotD = 0;
    vlSelf->__PVT___if2id_io_PCD = 0;
    vlSelf->__PVT___if2id_io_ExceptionTypeD_Out = 0;
    vlSelf->__PVT___mem22wb_clock = 0;
    vlSelf->__PVT___mem22wb_reset = 0;
    vlSelf->__PVT___mem22wb_io_en = 0;
    vlSelf->__PVT___mem22wb_io_clr = 0;
    vlSelf->__PVT___mem22wb_io_RegWriteM = 0;
    vlSelf->__PVT___mem22wb_io_ResultM = 0;
    vlSelf->__PVT___mem22wb_io_WriteRegM = 0;
    vlSelf->__PVT___mem22wb_io_CP0WriteM = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0AddrM = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0SelM = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataM = 0;
    vlSelf->__PVT___mem22wb_io_PCM = 0;
    vlSelf->__PVT___mem22wb_io_InDelaySlotM = 0;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeM = 0;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrM = 0;
    vlSelf->__PVT___mem22wb_io_eBreakM = 0;
    vlSelf->__PVT___mem22wb_io_Pc_NextM = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len = 0;
    vlSelf->__PVT___mem22wb_io_RegWriteW_Out = 0;
    vlSelf->__PVT___mem22wb_io_ResultW = 0;
    vlSelf->__PVT___mem22wb_io_WriteRegW = 0;
    vlSelf->__PVT___mem22wb_io_CP0WriteW = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0AddrW = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0SelW = 0;
    vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataW = 0;
    vlSelf->__PVT___mem22wb_io_PCW = 0;
    vlSelf->__PVT___mem22wb_io_InDelaySlotW = 0;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out = 0;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrW = 0;
    vlSelf->__PVT___mem22wb_io_eBreakW = 0;
    vlSelf->__PVT___mem22wb_io_Pc_NextW = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr = 0;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len = 0;
    vlSelf->__PVT___addr_cal_io_d_vaddr = 0;
    vlSelf->__PVT___addr_cal_io_d_paddr = 0;
    vlSelf->__PVT___addr_cal_io_d_cached = 0;
    vlSelf->__PVT___muldiv_io_ctrl = 0;
    vlSelf->__PVT___muldiv_io_in1 = 0;
    vlSelf->__PVT___muldiv_io_in2 = 0;
    vlSelf->__PVT___muldiv_io_data_out = 0;
    vlSelf->__PVT___regfile_clock = 0;
    vlSelf->__PVT___regfile_reset = 0;
    vlSelf->__PVT___regfile_io_A1 = 0;
    vlSelf->__PVT___regfile_io_A2 = 0;
    vlSelf->__PVT___regfile_io_WE3 = 0;
    vlSelf->__PVT___regfile_io_A3 = 0;
    vlSelf->__PVT___regfile_io_WD3 = 0;
    vlSelf->__PVT___regfile_io_RD1 = 0;
    vlSelf->__PVT___regfile_io_RD2 = 0;
    VL_ZERO_RESET_W(2048, vlSelf->__PVT___regfile_io_reg_file_alL_out);
    vlSelf->__PVT___mtrace_mod_reset = 0;
    vlSelf->__PVT___mtrace_mod_clock = 0;
    vlSelf->__PVT___mtrace_mod_data = 0;
    vlSelf->__PVT___mtrace_mod_pc = 0;
    vlSelf->__PVT___mtrace_mod_addr = 0;
    vlSelf->__PVT___mtrace_mod_mem_req = 0;
    vlSelf->__PVT___mtrace_mod_mem_write_read = 0;
    vlSelf->__PVT___mtrace_mod_mem_size = 0;
    vlSelf->__PVT__fifo_with_bundle_clock = 0;
    vlSelf->__PVT__fifo_with_bundle_reset = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_en = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_en = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pht = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_bht = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr = 0;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_true_branch_state = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_inst = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pht = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr = 0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state = 0;
    vlSelf->__PVT__fifo_with_bundle_io_full = 0;
    vlSelf->__PVT__fifo_with_bundle_io_empty = 0;
    vlSelf->__PVT__fifo_with_bundle_io_point_write_en = 0;
    vlSelf->__PVT__fifo_with_bundle_io_point_flush = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_clock = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_reset = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_io_stall = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_io_flush = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_clock = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_reset = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_io_stall = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_io_flush = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_clock = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_reset = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_io_stall = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_io_flush = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_clock = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_reset = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pc = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_out_L = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_L = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0 = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out = 0;
    vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0 = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_clock = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_reset = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_io_stall = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_io_flush = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_clock = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_reset = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_io_stall = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_io_flush = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_2_pc_M_io_out_pc_value_out = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_clock = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_reset = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_io_stall = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_io_flush = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in = 0;
    vlSelf->__PVT__stage_fec_2_pc_R_io_out_pc_value_out = 0;
    vlSelf->__PVT__id_bru_state_clock = 0;
    vlSelf->__PVT__id_bru_state_reset = 0;
    vlSelf->__PVT__id_bru_state_io_stall = 0;
    vlSelf->__PVT__id_bru_state_io_flush = 0;
    vlSelf->__PVT__id_bru_state_io_in_pht = 0;
    vlSelf->__PVT__id_bru_state_io_in_bht = 0;
    vlSelf->__PVT__id_bru_state_io_in_hashcode = 0;
    vlSelf->__PVT__id_bru_state_io_in_target_pc = 0;
    vlSelf->__PVT__id_bru_state_io_in_lookup_data = 0;
    vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value = 0;
    vlSelf->__PVT__id_bru_state_io_out_pht = 0;
    vlSelf->__PVT__id_bru_state_io_out_bht = 0;
    vlSelf->__PVT__id_bru_state_io_out_hashcode = 0;
    vlSelf->__PVT__id_bru_state_io_out_target_pc = 0;
    vlSelf->__PVT__id_bru_state_io_out_lookup_data = 0;
    vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value = 0;
    vlSelf->__PVT__ex_bru_state_clock = 0;
    vlSelf->__PVT__ex_bru_state_reset = 0;
    vlSelf->__PVT__ex_bru_state_io_stall = 0;
    vlSelf->__PVT__ex_bru_state_io_flush = 0;
    vlSelf->__PVT__ex_bru_state_io_in_pht = 0;
    vlSelf->__PVT__ex_bru_state_io_in_bht = 0;
    vlSelf->__PVT__ex_bru_state_io_in_hashcode = 0;
    vlSelf->__PVT__ex_bru_state_io_in_target_pc = 0;
    vlSelf->__PVT__ex_bru_state_io_in_lookup_data = 0;
    vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value = 0;
    vlSelf->__PVT__ex_bru_state_io_out_pht = 0;
    vlSelf->__PVT__ex_bru_state_io_out_bht = 0;
    vlSelf->__PVT__ex_bru_state_io_out_hashcode = 0;
    vlSelf->__PVT__ex_bru_state_io_out_target_pc = 0;
    vlSelf->__PVT__ex_bru_state_io_out_lookup_data = 0;
    vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value = 0;
    vlSelf->__PVT__mem_bru_state_clock = 0;
    vlSelf->__PVT__mem_bru_state_reset = 0;
    vlSelf->__PVT__mem_bru_state_io_stall = 0;
    vlSelf->__PVT__mem_bru_state_io_flush = 0;
    vlSelf->__PVT__mem_bru_state_io_in_pht = 0;
    vlSelf->__PVT__mem_bru_state_io_in_bht = 0;
    vlSelf->__PVT__mem_bru_state_io_in_hashcode = 0;
    vlSelf->__PVT__mem_bru_state_io_in_target_pc = 0;
    vlSelf->__PVT__mem_bru_state_io_in_lookup_data = 0;
    vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value = 0;
    vlSelf->__PVT__mem_bru_state_io_out_pht = 0;
    vlSelf->__PVT__mem_bru_state_io_out_bht = 0;
    vlSelf->__PVT__mem_bru_state_io_out_hashcode = 0;
    vlSelf->__PVT__mem_bru_state_io_out_target_pc = 0;
    vlSelf->__PVT__mem_bru_state_io_out_lookup_data = 0;
    vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value = 0;
    vlSelf->__PVT__mem2_bru_state_clock = 0;
    vlSelf->__PVT__mem2_bru_state_reset = 0;
    vlSelf->__PVT__mem2_bru_state_io_stall = 0;
    vlSelf->__PVT__mem2_bru_state_io_flush = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_pht = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_bht = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_hashcode = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_target_pc = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_lookup_data = 0;
    vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_pht = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_bht = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_hashcode = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_target_pc = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_lookup_data = 0;
    vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value = 0;
    vlSelf->__PVT__wb_bru_state_clock = 0;
    vlSelf->__PVT__wb_bru_state_reset = 0;
    vlSelf->__PVT__wb_bru_state_io_stall = 0;
    vlSelf->__PVT__wb_bru_state_io_flush = 0;
    vlSelf->__PVT__wb_bru_state_io_in_pht = 0;
    vlSelf->__PVT__wb_bru_state_io_in_bht = 0;
    vlSelf->__PVT__wb_bru_state_io_in_hashcode = 0;
    vlSelf->__PVT__wb_bru_state_io_in_target_pc = 0;
    vlSelf->__PVT__wb_bru_state_io_in_lookup_data = 0;
    vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value = 0;
    vlSelf->__PVT__wb_bru_state_io_out_pht = 0;
    vlSelf->__PVT__wb_bru_state_io_out_bht = 0;
    vlSelf->__PVT__wb_bru_state_io_out_hashcode = 0;
    vlSelf->__PVT__wb_bru_state_io_out_target_pc = 0;
    vlSelf->__PVT__wb_bru_state_io_out_lookup_data = 0;
    vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value = 0;
    vlSelf->__PVT___commit_difftest_reset = 0;
    vlSelf->__PVT___commit_difftest_clock = 0;
    VL_ZERO_RESET_W(2048, vlSelf->__PVT___commit_difftest_gpr_wire);
    vlSelf->__PVT___commit_difftest_pc = 0;
    vlSelf->__PVT___commit_difftest_debug_pc = 0;
    vlSelf->__PVT___commit_difftest_inst_commit = 0;
    vlSelf->__PVT___commit_difftest_data_ok_ok = 0;
    vlSelf->__PVT___commit_difftest_cpu_ebreak_sign = 0;
    vlSelf->__PVT___T_2 = 0;
    vlSelf->__PVT__stage_fec_2_inst_jump = 0;
    vlSelf->__PVT__stage_fec_2_inst_branch = 0;
    vlSelf->__PVT__pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__pre_decoder_branchdata = 0;
    vlSelf->__PVT__pre_decoder_jump = 0;
    vlSelf->__PVT__pre_decoder_jr = 0;
    vlSelf->__PVT___immSB_T_4 = 0;
    vlSelf->__PVT__immSB_lo_lo_lo = 0;
    vlSelf->__PVT__immSB_lo_lo = 0;
    vlSelf->__PVT__immSB_lo_hi = 0;
    vlSelf->__PVT__immSB_lo_1 = 0;
    vlSelf->__PVT___immSB_T_56 = 0;
    vlSelf->__PVT__immSB = 0;
    vlSelf->__PVT___PCSrcD_T_1 = 0;
    vlSelf->__PVT___PCSrcD_T_3 = 0;
    vlSelf->__PVT__PCBranchD = 0;
    vlSelf->__PVT___immUJ_T_4 = 0;
    vlSelf->__PVT__immUJ_lo_lo_lo = 0;
    vlSelf->__PVT__immUJ_lo_lo = 0;
    vlSelf->__PVT__immUJ_lo_hi = 0;
    vlSelf->__PVT__immUJ_lo_1 = 0;
    vlSelf->__PVT__immUJ = 0;
    vlSelf->__PVT__resultE2M_Reg = 0;
    vlSelf->__PVT__ResultM2_Reg = 0;
    vlSelf->__PVT___BranchR1D_T_2 = 0;
    vlSelf->__PVT__BranchR1D = 0;
    vlSelf->__PVT___GEN_14 = 0;
    vlSelf->__PVT___PCJumpD_T_3 = 0;
    vlSelf->__PVT___PCJumpD_T_5 = 0;
    vlSelf->__PVT__PCJumpD = 0;
    vlSelf->__PVT__PCW_Reg = 0;
    vlSelf->__PVT__slot_Reg = 0;
    vlSelf->__PVT__branchjump_Jr_Reg = 0;
    vlSelf->__PVT___PCW_Reg_T = 0;
    vlSelf->__PVT___PCW_Reg_T_1 = 0;
    vlSelf->__PVT__reg_pc = 0;
    vlSelf->__PVT__wb_exception = 0;
    vlSelf->__PVT__RegWriteW = 0;
    vlSelf->__PVT___debug_wb_rf_wen_T_2 = 0;
    vlSelf->__PVT__pc_next_wait = 0;
    vlSelf->__PVT__ready_to_branch = 0;
    vlSelf->__PVT__stage_fec_2_stall_reg = 0;
    vlSelf->__PVT__stage_fec_2_valid = 0;
    vlSelf->__PVT___stage_fec_2_branch_answer_T_7 = 0;
    vlSelf->__PVT___stage_fec_2_branch_answer_T_8 = 0;
    vlSelf->__PVT__stage_fec_2_branch_answer = 0;
    vlSelf->__PVT___pc_next_wait_T = 0;
    vlSelf->__PVT___PC_nextD_T_2 = 0;
    vlSelf->__PVT__PC_nextD = 0;
    vlSelf->__PVT__stage_fec_2_pre_target_0 = 0;
    vlSelf->__PVT__stage_fec_1_pc = 0;
    vlSelf->__PVT___stage_fec_1_pc_next_T_1 = 0;
    vlSelf->__PVT__stage_fec_1_pc_next = 0;
    vlSelf->__PVT__Pc_Next_normal = 0;
    vlSelf->__PVT__pc_req_wait = 0;
    vlSelf->__PVT___T_4 = 0;
    vlSelf->__PVT___GEN_0 = 0;
    vlSelf->__PVT__exception_Pc_reg = 0;
    vlSelf->__PVT__returnPc_req_wait = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT___Pc_Next_T_1 = 0;
    vlSelf->__PVT___Pc_Next_T_2 = 0;
    vlSelf->__PVT___Pc_Next_T_3 = 0;
    vlSelf->__PVT__Pc_Next = 0;
    vlSelf->__PVT___commit_cache_reg_T = 0;
    vlSelf->__PVT__stage_fec_1_valid = 0;
    vlSelf->__PVT___stage_fec_1_valid_T_2 = 0;
    vlSelf->__PVT__stage_fec_2_stall = 0;
    vlSelf->__PVT__stage_fec_2_bht_0 = 0;
    vlSelf->__PVT__stage_fec_2_hascode_0 = 0;
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0 = 0;
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1 = 0;
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2 = 0;
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3 = 0;
    vlSelf->__PVT___stage_fec_2_hascode_0_T_1 = 0;
    vlSelf->__PVT___stage_fec_2_data_valid_T = 0;
    vlSelf->__PVT__inst_buffer_write_bundle_inst = 0;
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD = 0;
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D = 0;
    vlSelf->__PVT___T_25 = 0;
    vlSelf->__PVT___pre_decoder_branchD_flag_T = 0;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jump = 0;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__inst_buffer_read_out_pre_decoder_jr = 0;
    vlSelf->__PVT__InDelaySlotF = 0;
    vlSelf->__PVT___T_29 = 0;
    vlSelf->__PVT___GEN_4 = 0;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T = 0;
    vlSelf->__PVT__inst_buffer_read_out_inst = 0;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_5 = 0;
    vlSelf->__PVT__id_exception = 0;
    vlSelf->__PVT__inst_buffer_read_out_pc = 0;
    vlSelf->__PVT__inst_buffer_read_out_exception_type = 0;
    vlSelf->__PVT__ex_exception = 0;
    vlSelf->__PVT___ex_exception_T = 0;
    vlSelf->__PVT__mem_exception = 0;
    vlSelf->__PVT___mem_exception_T = 0;
    vlSelf->__PVT___mem_exception_T_1 = 0;
    vlSelf->__PVT__mem2_exception = 0;
    vlSelf->__PVT___mem2_exception_T = 0;
    vlSelf->__PVT___mem2_exception_T_1 = 0;
    vlSelf->__PVT___wb_exception_T = 0;
    vlSelf->__PVT___wb_exception_T_1 = 0;
    vlSelf->__PVT__id_true_branch_state = 0;
    vlSelf->__PVT__inst_buffer_read_out_true_branch_state = 0;
    vlSelf->__PVT__inst_tlb_exceptionE = 0;
    vlSelf->__PVT__target_neq_branchD = 0;
    vlSelf->__PVT__target_neq_jumpD = 0;
    vlSelf->__PVT__target_addr_error = 0;
    vlSelf->__PVT___T_36 = 0;
    vlSelf->__PVT___Pc_targetD_T_2 = 0;
    vlSelf->__PVT__true_branch_stateE = 0;
    vlSelf->__PVT___pht_tobeE_T_1 = 0;
    vlSelf->__PVT___pht_tobeE_T_2 = 0;
    vlSelf->__PVT___pht_tobeE_T_3 = 0;
    vlSelf->__PVT___pht_tobeE_T_5 = 0;
    vlSelf->__PVT___pht_tobeE_T_7 = 0;
    vlSelf->__PVT__pht_tobeE = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_2 = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_5 = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_8 = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_10 = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_12 = 0;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_14 = 0;
    vlSelf->__PVT___BranchR2D_T_2 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_1 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_4 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_6 = 0;
    vlSelf->__PVT___GEN_15 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_7 = 0;
    vlSelf->__PVT___GEN_16 = 0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_8 = 0;
    vlSelf->__PVT__int_instanceE = 0;
    vlSelf->__PVT__int_instanceM = 0;
    vlSelf->__PVT__int_instanceM2 = 0;
    vlSelf->__PVT__int_instanceW = 0;
    vlSelf->__PVT___int_with_timer_int_T_1 = 0;
    vlSelf->__PVT__int_with_timer_int = 0;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T = 0;
    vlSelf->__PVT__ExceptionTypeD_Out = 0;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6 = 0;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12 = 0;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13 = 0;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 = 0;
    vlSelf->__PVT__inst_tlb_exceptionM = 0;
    vlSelf->__PVT__ResultW = 0;
    vlSelf->__PVT___RD1ForWardE_p_T_1 = 0;
    vlSelf->__PVT___RD1ForWardE_p_T_3 = 0;
    vlSelf->__PVT__RD1ForWardE_p = 0;
    vlSelf->__PVT___RD2ForWardE_p_T_1 = 0;
    vlSelf->__PVT___RD2ForWardE_p_T_3 = 0;
    vlSelf->__PVT__RD2ForWardE_p = 0;
    vlSelf->__PVT__RD1ForWardE_r = 0;
    vlSelf->__PVT__RD2ForWardE_r = 0;
    vlSelf->__PVT__Forward_Lock1E = 0;
    vlSelf->__PVT__Forward_Lock2E = 0;
    vlSelf->__PVT__RD1ForWardE = 0;
    vlSelf->__PVT__RD2ForWardE = 0;
    vlSelf->__PVT___Forward_Lock1E_T_1 = 0;
    vlSelf->__PVT___Forward_Lock1E_T_3 = 0;
    vlSelf->__PVT__Src1E = 0;
    vlSelf->__PVT__Src2E = 0;
    vlSelf->__PVT___temp_exceptionE_T_11 = 0;
    vlSelf->__PVT__temp_exceptionE = 0;
    vlSelf->__PVT___Forward_for_epc_T = 0;
    vlSelf->__PVT___Forward_for_epc_T_5 = 0;
    vlSelf->__PVT___Forward_for_epc_T_6 = 0;
    vlSelf->__PVT__Forward_for_epc = 0;
    vlSelf->__PVT___BadVAddrE_T_8 = 0;
    vlSelf->__PVT_____05Fex2mem_io_ExceptionTypeE_T_4 = 0;
    vlSelf->__PVT___GEN_17 = 0;
    vlSelf->__PVT___resultE_T_2 = 0;
    vlSelf->__PVT___resultE_T_3 = 0;
    vlSelf->__PVT___resultE_T_6 = 0;
    vlSelf->__PVT___resultE_T_7 = 0;
    vlSelf->__PVT___resultE_T_10 = 0;
    vlSelf->__PVT__resultE = 0;
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_5 = 0;
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_6 = 0;
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_7 = 0;
    vlSelf->__PVT__tlb_exception_cp0_writeM2 = 0;
    vlSelf->__PVT__tlb_exception_co0_writeW = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_25 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_22 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_19 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_27 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_29 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_31 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_9 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_6 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_3 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_11 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_13 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_15 = 0;
    vlSelf->__PVT___Mem_withRL_Data_T_33 = 0;
    vlSelf->__PVT__Mem_withRL_Data = 0;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 = 0;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3 = 0;
    vlSelf->__PVT___GEN_19 = 0;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_4 = 0;
    vlSelf->__PVT__pcw_reg = 0;
    vlSelf->__PVT__CP0WriteW = 0;
    vlSelf->__Vdly__pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__pre_decoder_branchdata = 0;
    vlSelf->__Vdly__pre_decoder_jump = 0;
    vlSelf->__Vdly__pre_decoder_jr = 0;
    vlSelf->__Vdly__resultE2M_Reg = 0;
    vlSelf->__Vdly__ResultM2_Reg = 0;
    vlSelf->__Vdly__PCW_Reg = 0;
    vlSelf->__Vdly__slot_Reg = 0;
    vlSelf->__Vdly__branchjump_Jr_Reg = 0;
    vlSelf->__Vdly__reg_pc = 0;
    vlSelf->__Vdly__wb_exception = 0;
    vlSelf->__Vdly__pc_next_wait = 0;
    vlSelf->__Vdly__stage_fec_2_stall_reg = 0;
    vlSelf->__Vdly__stage_fec_2_valid = 0;
    vlSelf->__Vdly__pc_req_wait = 0;
    vlSelf->__Vdly__exception_Pc_reg = 0;
    vlSelf->__Vdly__returnPc_req_wait = 0;
    vlSelf->__Vdly__stage_fec_1_valid = 0;
    vlSelf->__Vdly__stage_fec_2_bht_0 = 0;
    vlSelf->__Vdly__stage_fec_2_hascode_0 = 0;
    vlSelf->__Vdly__InDelaySlotF = 0;
    vlSelf->__Vdly__id_exception = 0;
    vlSelf->__Vdly__ex_exception = 0;
    vlSelf->__Vdly__mem_exception = 0;
    vlSelf->__Vdly__mem2_exception = 0;
    vlSelf->__Vdly__id_true_branch_state = 0;
    vlSelf->__Vdly__inst_tlb_exceptionE = 0;
    vlSelf->__Vdly__true_branch_stateE = 0;
    vlSelf->__Vdly__int_instanceE = 0;
    vlSelf->__Vdly__int_instanceM = 0;
    vlSelf->__Vdly__int_instanceM2 = 0;
    vlSelf->__Vdly__int_instanceW = 0;
    vlSelf->__Vdly__inst_tlb_exceptionM = 0;
    vlSelf->__Vdly__RD1ForWardE_r = 0;
    vlSelf->__Vdly__RD2ForWardE_r = 0;
    vlSelf->__Vdly__Forward_Lock1E = 0;
    vlSelf->__Vdly__Forward_Lock2E = 0;
    vlSelf->__Vdly__tlb_exception_cp0_writeM2 = 0;
    vlSelf->__Vdly__tlb_exception_co0_writeW = 0;
    vlSelf->__Vdly__pcw_reg = 0;
}
