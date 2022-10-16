// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_myCPU.h"

VL_ATTR_COLD void Vmycpu_top_myCPU___initial__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___initial__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0HiLoDataE 
        = vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___ex2mem_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemRLE 
        = vlSelf->__PVT___ex2mem_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_CP0WriteE 
        = vlSelf->__PVT___ex2mem_io1_CP0WriteE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__reset 
        = vlSelf->__PVT___cp0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__clock 
        = vlSelf->__PVT___cp0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__clock 
        = vlSelf->__PVT___mtrace_mod_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_R_clock;
    vlSelf->__PVT___cp0_io_asid = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_asid;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_R_clock;
    vlSelf->__PVT___cp0_io_epc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_epc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem2_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_L_clock;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__clock 
        = vlSelf->__PVT__ex_bru_state_clock;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset 
        = vlSelf->__PVT___cfu_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset 
        = vlSelf->__PVT___br_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__clock 
        = vlSelf->__PVT__id_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__clock 
        = vlSelf->__PVT___commit_difftest_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__clock 
        = vlSelf->__PVT__fifo_with_bundle_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__clock 
        = vlSelf->__PVT___regfile_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__clock 
        = vlSelf->__PVT___if2id_clock;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__11\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__clock 
        = vlSelf->__PVT__wb_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__clock 
        = vlSelf->__PVT___ex2mem_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__clock 
        = vlSelf->__PVT___id2ex_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__clock 
        = vlSelf->__PVT___mem2mem2_clock;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_L_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__clock 
        = vlSelf->__PVT__branch_prediction_with_blockram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__clock 
        = vlSelf->__PVT___mem22wb_clock;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSelf->__PVT___cp0_io_timer_int_has = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_timer_int_has;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__14(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__14\n"); );
    // Body
    vlSelf->__PVT___cp0_io_Int_able = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_Int_able;
    vlSelf->__PVT___cp0_io_cp0_status = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_status;
    vlSelf->__PVT___int_with_timer_int_T_1 = (1U & 
                                              ((IData)(vlSelf->__PVT___cp0_io_timer_int_has) 
                                               | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 5U)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__reset 
        = vlSelf->__PVT___mtrace_mod_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__reset 
        = vlSelf->__PVT___commit_difftest_reset;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__19(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__19\n"); );
    // Body
    vlSelf->__PVT___br_io_branch = vlSelf->__PVT__pre_decoder_branchdata;
    vlSelf->__PVT___cfu_io_CanBranchD = (1U & (~ ((
                                                   (((IData)(vlSelf->__PVT__id_exception) 
                                                     | (IData)(vlSelf->__PVT__ex_exception)) 
                                                    | (IData)(vlSelf->__PVT__mem_exception)) 
                                                   | (IData)(vlSelf->__PVT__mem2_exception)) 
                                                  | (IData)(vlSelf->__PVT__wb_exception))));
    vlSelf->__PVT___commit_difftest_data_ok_ok = vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__data_ok_ok;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__20(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__20\n"); );
    // Body
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__reset 
        = vlSelf->__PVT__fifo_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__reset 
        = vlSelf->__PVT__branch_prediction_with_blockram_reset;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0HiLoDataE 
        = vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___ex2mem_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemRLE 
        = vlSelf->__PVT___ex2mem_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_CP0WriteE 
        = vlSelf->__PVT___ex2mem_io1_CP0WriteE;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_int_i 
        = vlSelf->__PVT___cp0_io_int_i;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__21(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__21\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_bht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__22(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__22\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch 
        = vlSelf->__PVT___br_io_branch;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_CanBranchD 
        = vlSelf->__PVT___cfu_io_CanBranchD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__25(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__25\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__reset 
        = vlSelf->__PVT___regfile_reset;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__26(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__26\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_2_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__wb_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__28(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__28\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___ex2mem_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextM;
    vlSelf->__PVT___ex2mem_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___ex2mem_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtM;
    vlSelf->__PVT___ex2mem_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemRLM;
    vlSelf->__PVT___ex2mem_io_InDelaySlotM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_InDelaySlotM;
    vlSelf->__PVT___ex2mem_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrM;
    vlSelf->__PVT___ex2mem_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemWidthM;
    vlSelf->__PVT___ex2mem_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem2mem2_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_eBreakM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_eBreakM;
    vlSelf->__PVT___mem2mem2_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem2mem2_io_InDelaySlotM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_InDelaySlotM;
    vlSelf->__PVT___mem2mem2_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PCM;
    vlSelf->__PVT___mem2mem2_io_WriteCP0SelM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0SelM;
    vlSelf->__PVT___id2ex_io_Pc_NextE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextE;
    vlSelf->__PVT___id2ex_io2_BranchJump_JrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_BranchJump_JrE;
    vlSelf->__PVT___id2ex_io2_InDelaySlotE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_InDelaySlotE;
    vlSelf->__PVT___id2ex_io2_WriteCP0SelE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WriteCP0SelE;
    vlSelf->__PVT___id2ex_io2_WriteCP0AddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WriteCP0AddrE;
    vlSelf->__PVT___id2ex_io2_LoadUnsignedE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LoadUnsignedE;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_len;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_data;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mem22wb_io_eBreakW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakW;
    vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__id_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__id_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__id_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__id_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__ex_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__ex_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem2_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_out_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem2_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___ex2mem_io_WriteCP0SelM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0SelM;
    vlSelf->__PVT___if2id_io_InDelaySlotD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InDelaySlotD;
    vlSelf->__PVT__ex_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT___id2ex_io_muldiv_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_calE;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_mem_fetch_type;
    vlSelf->__PVT___mem22wb_io_Pc_NextW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextW;
    vlSelf->__PVT___id2ex_io_alu_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_alu_calE;
    vlSelf->__PVT___id2ex_io2_PCPlus4E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCPlus4E;
    vlSelf->__PVT___id2ex_io2_eBreakE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_eBreakE;
    vlSelf->__PVT___ex2mem_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___id2ex_io2_LinkE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LinkE;
    vlSelf->__PVT___mem22wb_io_InDelaySlotW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_InDelaySlotW;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT__ex_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT___ex2mem_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PCM;
    vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeE_Out;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_lookup_data_0;
    vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_out_pc_value_out;
    vlSelf->__PVT___ex2mem_io_WriteCP0AddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0AddrM;
    vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0HiLoDataW;
    vlSelf->__PVT___ex2mem_io_CP0WriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CP0WriteM;
    vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0HiLoDataM;
    vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT___mem2mem2_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemRLM;
    vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0HiLoDataM;
    vlSelf->__PVT__wb_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT___mem2mem2_io_WriteCP0AddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0AddrM;
    vlSelf->__PVT___mem2mem2_io_CP0WriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CP0WriteM;
    vlSelf->__PVT___mem22wb_io_CP0WriteW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CP0WriteW;
    vlSelf->__PVT___mem22wb_io_WriteCP0SelW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0SelW;
    vlSelf->__PVT___mem22wb_io_WriteCP0AddrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0AddrW;
    vlSelf->__PVT___id2ex_io2_MemToRegE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemToRegE;
    vlSelf->__PVT___id2ex_io2_MemWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWriteE;
    vlSelf->__PVT__ex_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT___mem2mem2_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtM;
    vlSelf->__PVT__wb_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT___id2ex_io2_MemWidthE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWidthE;
    vlSelf->__PVT___if2id_io_PCPlus4D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4D;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__29(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__29\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__wb_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrW;
    vlSelf->__PVT__id_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT___mem2mem2_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemWidthM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__30(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__30\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_data_wE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_data_wE;
    vlSelf->__PVT___if2id_io_PCD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCD;
    vlSelf->__PVT___id2ex_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_JRD 
        = vlSelf->__PVT___cfu_io_JRD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_BranchD_Flag 
        = vlSelf->__PVT___cfu_io_BranchD_Flag;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__31(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__31\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_RegWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegWriteE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__32(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__32\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_RegDstE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegDstE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__33(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__33\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_LoadUnsignedM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__34(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__34\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrM;
    vlSelf->__PVT___id2ex_io2_ALUCtrlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUCtrlE;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeW_Out;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_0;
    vlSelf->__PVT___id2ex_io2_PCE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_1;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__35(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__35\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_RD2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2E;
    vlSelf->__PVT___id2ex_io_R2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2E;
    vlSelf->__PVT___if2id_io_InstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrD;
    vlSelf->__PVT___id2ex_io_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmE;
    vlSelf->__PVT___id2ex_io_RD1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1E;
    vlSelf->__PVT___mem22wb_io_ResultW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultW;
    vlSelf->__PVT__wb_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT___ex2mem_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegM;
    vlSelf->__PVT___ex2mem_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RegWriteM;
    vlSelf->__PVT___ex2mem_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegM;
    vlSelf->__PVT___mem2mem2_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RegWriteM;
    vlSelf->__PVT___mem22wb_io_WriteRegW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegW;
    vlSelf->__PVT___mem22wb_io_RegWriteW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteW_Out;
    vlSelf->__PVT___mem2mem2_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemToRegM;
    vlSelf->__PVT___id2ex_io_R1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1E;
    vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_out_pc_value_out;
    vlSelf->__PVT___mem22wb_io_PCW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__36(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__36\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_BranchJump_JrD 
        = vlSelf->__PVT___id2ex_io_BranchJump_JrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_NextDelaySlotD 
        = vlSelf->__PVT___if2id_io_NextDelaySlotD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__70(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__70\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_tlb_write_en 
        = vlSelf->__PVT___cp0_io_cp0_tlb_write_en;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_InDelaySlotE 
        = vlSelf->__PVT___ex2mem_io1_InDelaySlotE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_PCE 
        = vlSelf->__PVT___ex2mem_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WriteCP0SelE 
        = vlSelf->__PVT___ex2mem_io1_WriteCP0SelE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WriteCP0AddrE 
        = vlSelf->__PVT___ex2mem_io1_WriteCP0AddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___ex2mem_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___ex2mem_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___ex2mem_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___ex2mem_io1_RegWriteE;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtE 
        = vlSelf->__PVT___mem2mem2_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___mem2mem2_io_ExceptionTypeE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___mem2mem2_io_PhyAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegE 
        = vlSelf->__PVT___mem2mem2_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___mem2mem2_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemRLE 
        = vlSelf->__PVT___mem2mem2_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_InDelaySlotE 
        = vlSelf->__PVT___mem2mem2_io1_InDelaySlotE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_PCE 
        = vlSelf->__PVT___mem2mem2_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WriteCP0SelE 
        = vlSelf->__PVT___mem2mem2_io1_WriteCP0SelE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WriteCP0AddrE 
        = vlSelf->__PVT___mem2mem2_io1_WriteCP0AddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___mem2mem2_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___mem2mem2_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___mem2mem2_io1_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_InDelaySlotD 
        = vlSelf->__PVT___id2ex_io_InDelaySlotD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCD 
        = vlSelf->__PVT___id2ex_io_PCD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WriteCP0SelD 
        = vlSelf->__PVT___id2ex_io_WriteCP0SelD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WriteCP0AddrD 
        = vlSelf->__PVT___id2ex_io_WriteCP0AddrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCPlus4D 
        = vlSelf->__PVT___id2ex_io_PCPlus4D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1D 
        = vlSelf->__PVT___id2ex_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2D 
        = vlSelf->__PVT___id2ex_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_InDelaySlotM 
        = vlSelf->__PVT___mem22wb_io_InDelaySlotM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCM 
        = vlSelf->__PVT___mem22wb_io_PCM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0HiLoDataM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0SelM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0SelM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0AddrM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0AddrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CP0WriteM 
        = vlSelf->__PVT___mem22wb_io_CP0WriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegM 
        = vlSelf->__PVT___mem22wb_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteM 
        = vlSelf->__PVT___mem22wb_io_RegWriteM;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__ex_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__ex_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__ex_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem2_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem2_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem2_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem2_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__wb_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__wb_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__wb_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__wb_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__wb_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__cpu_ebreak_sign 
        = vlSelf->__PVT___commit_difftest_cpu_ebreak_sign;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__pc 
        = vlSelf->__PVT___commit_difftest_pc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__71(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__71\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__debug_pc 
        = vlSelf->__PVT___commit_difftest_debug_pc;
    vlSelf->__PVT___mem2mem2_io1_eBreakE = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSelf->__PVT___mem2mem2_io1_CP0WriteE = (1U & 
                                              ((IData)(vlSelf->__PVT___Forward_for_epc_T) 
                                               | VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___ex2mem_io_Tlb_ControlM), 2U)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__76(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__76\n"); );
    // Body
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_6 
        = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
            ? vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_5
            : vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM);
    vlSelf->__PVT___cp0_io_in_delayslot = ((IData)(vlSelf->__PVT___PCW_Reg_T)
                                            ? (IData)(vlSelf->__PVT___mem22wb_io_InDelaySlotW)
                                            : (IData)(vlSelf->__PVT__slot_Reg));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pc 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc;
    vlSelf->__PVT___cp0_io_pc = VL_SEL_IQII(64, vlSelf->__PVT___PCW_Reg_T_1, 0U, 0x20U);
    vlSelf->__PVT___debug_wb_rf_wen_T_2 = ((IData)(vlSelf->__PVT__RegWriteW)
                                            ? 0xfU : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__77(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__77\n"); );
    // Body
    vlSelf->__PVT__int_with_timer_int = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___int_with_timer_int_T_1), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 0U, 5U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_data 
        = vlSelf->__PVT___cp0_io_cp0_write_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_bht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__78(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__78\n"); );
    // Body
    vlSelf->__PVT___Forward_for_epc_T_6 = ((IData)(vlSelf->__PVT___Forward_for_epc_T_5)
                                            ? vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM
                                            : vlSelf->__PVT___cp0_io_epc);
    vlSelf->__PVT___cp0_io_cp0_write_en = ((IData)(vlSelf->__PVT__CP0WriteW) 
                                           | (IData)(vlSelf->__PVT__tlb_exception_co0_writeW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_sel 
        = vlSelf->__PVT___cp0_io_cp0_write_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_addr 
        = vlSelf->__PVT___cp0_io_cp0_write_addr;
    vlSelf->__PVT___ExceptionTypeD_Out_T_4 = ((IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_1)
                                               ? 0x100000U
                                               : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemToRegE 
        = vlSelf->__PVT___dmemreq_io_MemToRegE;
    vlSelf->__PVT___pht_tobeE_T_7 = ((1U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_2)
                                      : (IData)(vlSelf->__PVT___pht_tobeE_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE 
        = vlSelf->__PVT___dmemreq_io_MemWriteE;
    vlSelf->__PVT___if2id_io_ExceptionTypeD_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeD_Out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE 
        = vlSelf->__PVT___dmemreq_io_MemWidthE;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT___stage_fec_1_pc_next_T_1 = (4ULL 
                                               + vlSelf->__PVT__stage_fec_1_pc);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__79(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__79\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_ways_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__80(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__80\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH 
        = vlSelf->__PVT___dmem_io_WIDTH;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__81(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__81\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w 
        = vlSelf->__PVT___alu_io_data_w;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__82(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__82\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl 
        = vlSelf->__PVT___muldiv_io_ctrl;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__85(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__85\n"); );
    // Body
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
    vlSelf->__PVT__fifo_with_bundle_io_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_full;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__86(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__86\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE 
        = vlSelf->__PVT___cfu_io_RegWriteE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__87(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__87\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE 
        = vlSelf->__PVT___cfu_io_WriteRegE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__88(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__88\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN 
        = vlSelf->__PVT___dmem_io_SIGN;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__89(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__89\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address 
        = vlSelf->__PVT___dmem_io_Physisc_Address;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__90(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__90\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl 
        = vlSelf->__PVT___alu_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_exception_type_i 
        = vlSelf->__PVT___cp0_io_exception_type_i;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3 
        = vlSelf->__PVT___regfile_io_WD3;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__91(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__91\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3 
        = vlSelf->__PVT___regfile_io_A3;
    vlSelf->__PVT___regfile_io_WE3 = ((IData)(vlSelf->__PVT__RegWriteW) 
                                      & (IData)(vlSelf->__PVT___commit_difftest_data_ok_ok));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__92(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__92\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D 
        = vlSelf->__PVT___cfu_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D 
        = vlSelf->__PVT___cfu_io_R1D;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__93(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__93\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E 
        = vlSelf->__PVT___cfu_io_R2E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__94(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__94\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2 
        = vlSelf->__PVT___regfile_io_A2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1 
        = vlSelf->__PVT___regfile_io_A1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD 
        = vlSelf->__PVT___cu_io1_InstrD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__95(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__95\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM 
        = vlSelf->__PVT___cfu_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM 
        = vlSelf->__PVT___cfu_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW 
        = vlSelf->__PVT___cfu_io_RegWriteW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW 
        = vlSelf->__PVT___cfu_io_WriteRegW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2 
        = vlSelf->__PVT___cfu_io_RegWriteM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2 
        = vlSelf->__PVT___cfu_io_WriteRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM 
        = vlSelf->__PVT___cfu_io_MemToRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2 
        = vlSelf->__PVT___cfu_io_MemToRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E 
        = vlSelf->__PVT___cfu_io_R1E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__96(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__96\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__97(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__97\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_eBreakE 
        = vlSelf->__PVT___mem2mem2_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_CP0WriteE 
        = vlSelf->__PVT___mem2mem2_io1_CP0WriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__inst_commit 
        = vlSelf->__PVT___commit_difftest_inst_commit;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__99(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__99\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_in_pht = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                               ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                               : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_in_branchjump_jr 
        = vlSelf->__PVT___cp0_io_in_branchjump_jr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__100(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__100\n"); );
    // Body
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_7 
        = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___ex2mem_io_Tlb_ControlM), 2U))
            ? 0ULL : VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_in_delayslot 
        = vlSelf->__PVT___cp0_io_in_delayslot;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_pc 
        = vlSelf->__PVT___cp0_io_pc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__104(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__104\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_en 
        = vlSelf->__PVT___cp0_io_cp0_write_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__108(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__108\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write;
    VL_ASSIGN_W(2048,vlSelf->__PVT___regfile_io_reg_file_alL_out, vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_reg_file_alL_out);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__109(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__109\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__113(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__113\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3 
        = vlSelf->__PVT___regfile_io_WE3;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__114(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__114\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem_bru_state_io_in_pht;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__116(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__116\n"); );
    // Body
    vlSelf->__PVT___cu_io_ebreakD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ebreakD;
    vlSelf->__PVT___cu_io_RegDstD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD;
    vlSelf->__PVT___pht_lookup_value_tobeE_T_10 = VL_CONCAT_III(8,2,6, (IData)(vlSelf->__PVT__pht_tobeE), 
                                                                (0x3fU 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value), 0U, 6U)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__118(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__118\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_wr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__120(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__120\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_size = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__125(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__125\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0HiLoDataE 
        = vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__127(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__127\n"); );
    // Body
    vlSelf->__PVT___cu_io_LoadUnsignedD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LoadUnsignedD;
    vlSelf->__PVT___cu_io_MemWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWriteD;
    vlSelf->__PVT___cu_io_MemToRegD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemToRegD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__131(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__131\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, vlSelf->__PVT___commit_difftest_gpr_wire);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__134(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__134\n"); );
    // Body
    vlSelf->__PVT___cu_io1_dmem_addr_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__135(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__135\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ebreakD 
        = vlSelf->__PVT___id2ex_io1_ebreakD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegDstD 
        = vlSelf->__PVT___id2ex_io1_RegDstD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__141(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__141\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_len 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LoadUnsignedD 
        = vlSelf->__PVT___id2ex_io1_LoadUnsignedD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWriteD 
        = vlSelf->__PVT___id2ex_io1_MemWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemToRegD 
        = vlSelf->__PVT___id2ex_io1_MemToRegD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__145(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__145\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_dmem_calD 
        = vlSelf->__PVT___cfu_io_dmem_calD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__146(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__146\n"); );
    // Body
    vlSelf->__PVT___cp0_io_exception = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_exception;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__147(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__147\n"); );
    // Body
    vlSelf->__PVT___cfu_io_Forward2D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2D;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__148(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__148\n"); );
    // Body
    vlSelf->__PVT___stage_fec_2_branch_answer_T_8 = 
        (1U & (~ (IData)(vlSelf->__PVT___cp0_io_exception)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__153(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__153\n"); );
    // Body
    vlSelf->__PVT___cfu_io_Forward1D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1D;
    vlSelf->__PVT___cfu_io_Forward2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__154(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__154\n"); );
    // Body
    vlSelf->__PVT___cfu_io_Forward1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__155(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__155\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush 
        = vlSelf->__PVT__fifo_with_bundle_io_point_flush;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__156(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__156\n"); );
    // Body
    vlSelf->__PVT___cp0_io_return_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_return_pc;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__157(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__157\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException 
        = vlSelf->__PVT___cfu_io_InException;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__162(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__162\n"); );
    // Body
    vlSelf->__PVT___cu_io_MemWidthD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWidthD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__163(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__163\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM2;
    vlSelf->__PVT___cfu_io_FlushD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__170(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__170\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_write_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__174(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__174\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtE 
        = vlSelf->__PVT___ex2mem_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_clr 
        = vlSelf->__PVT___mem2mem2_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWidthD 
        = vlSelf->__PVT___id2ex_io1_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__id_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem2_bru_state_io_flush;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__175(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__175\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr 
        = vlSelf->__PVT___if2id_io_clr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__176(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__176\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE 
        = vlSelf->__PVT___dmemreq_io_WriteDataE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__177(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__177\n"); );
    // Body
    vlSelf->__PVT___muldiv_io_in1 = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_0)
                                      ? vlSelf->__PVT___id2ex_io2_PCE
                                      : vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT___muldiv_io_in2 = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_1)
                                      ? vlSelf->__PVT___id2ex_io_ImmE
                                      : vlSelf->__PVT__RD2ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSelf->__PVT___dmem_io_data_ok;
    vlSelf->__PVT__Src1E = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_0)
                             ? vlSelf->__PVT___id2ex_io2_PCE
                             : vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT__Src2E = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_1)
                             ? vlSelf->__PVT___id2ex_io_ImmE
                             : vlSelf->__PVT__RD2ForWardE);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__179(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__179\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in1 
        = vlSelf->__PVT___muldiv_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in2 
        = vlSelf->__PVT___muldiv_io_in2;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__181(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__181\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSelf->__PVT___addr_cal_io_d_vaddr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__182(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__182\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_pending = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
        = vlSelf->__PVT___alu_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2 
        = vlSelf->__PVT___alu_io_in2;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__183(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__183\n"); );
    // Body
    vlSelf->__PVT___addr_cal_io_d_cached = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_cached;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__185(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__185\n"); );
    // Body
    vlSelf->__PVT___addr_cal_io_d_paddr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__187(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__187\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSelf->__PVT___cfu_io_DataPendingM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__189(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__189\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___ex2mem_io_PhyAddrE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__190(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__190\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSelf->__PVT___dmemreq_io_VAddrE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__191(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__191\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__192(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__192\n"); );
    // Body
    vlSelf->__PVT___alu_io_overflow = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_overflow;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__193(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__193\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__195(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__195\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_en = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT__ex_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT__mem_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM;
    vlSelf->__PVT___cfu_io_FlushM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSelf->__PVT___cfu_io_FlushE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSelf->__PVT___cfu_io_StallW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW;
    vlSelf->__PVT___cfu_io_StallM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__201(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__201\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__203(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__203\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__204(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__204\n"); );
    // Body
    vlSelf->__PVT___ex_exception_T = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT___mem_exception_T = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT___mem2_exception_T_1 = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___wb_exception_T_1 = vlSelf->__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_en 
        = vlSelf->__PVT___ex2mem_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__ex_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem_bru_state_io_stall;
    vlSelf->__PVT___ex2mem_io_clr = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT___mem2mem2_io_en = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT___id2ex_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___id2ex_io_clr = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT___mem22wb_io_en = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT__id_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT__ex_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushE;
    vlSelf->__PVT__mem_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM;
    vlSelf->__PVT__mem2_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallM2;
    vlSelf->__PVT__wb_bru_state_io_stall = vlSelf->__PVT___cfu_io_StallW;
    vlSelf->__PVT__temp_exceptionE = ((0U != vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out)
                                       ? vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out
                                       : VL_EXTEND_II(32,13, (IData)(vlSelf->__PVT___temp_exceptionE_T_11)));
    vlSelf->__PVT___cfu_io_FlushW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
    vlSelf->__PVT___if2id_io_en = vlSelf->__PVT___cfu_io_StallD;
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__207(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__207\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata 
        = vlSelf->__PVT___dmem_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__209(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__209\n"); );
    // Body
    vlSelf->__PVT___wb_exception_T = vlSelf->__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_clr 
        = vlSelf->__PVT___ex2mem_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_en 
        = vlSelf->__PVT___mem2mem2_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_clr 
        = vlSelf->__PVT___id2ex_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_en 
        = vlSelf->__PVT___id2ex_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_en 
        = vlSelf->__PVT___mem22wb_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__id_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__ex_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__mem_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__mem2_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_stall 
        = vlSelf->__PVT__wb_bru_state_io_stall;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr 
        = vlSelf->__PVT__data_sram_addr;
    vlSelf->__PVT___mem22wb_io_clr = vlSelf->__PVT___cfu_io_FlushW;
    vlSelf->__PVT__wb_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushW;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__210(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__210\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_ExceptionTypeE = (vlSelf->__PVT___GEN_17 
                                                | vlSelf->__PVT__temp_exceptionE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSelf->__PVT___if2id_io_en;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr 
        = ((0x67U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD)) 
           & (0U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en 
        = vlSelf->__PVT___dmemreq_io_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__211(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__211\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_addr 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___ex2mem_io_ExceptionTypeE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_clr 
        = vlSelf->__PVT___mem22wb_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_flush 
        = vlSelf->__PVT__wb_bru_state_io_flush;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__212(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__212\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__213(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__213\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_req = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_req;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__215(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__215\n"); );
    // Body
    vlSelf->__PVT___cu_io_data_wD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_data_wD;
    vlSelf->__PVT___cu_io_LinkD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LinkD;
    vlSelf->__PVT___cu_io_ALUSrcD_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_0;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__216(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__216\n"); );
    // Body
    vlSelf->__PVT___cu_io1_BadInstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_BadInstrD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__219(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__219\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_data_wD 
        = vlSelf->__PVT___id2ex_io1_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LinkD 
        = vlSelf->__PVT___id2ex_io1_LinkD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_0 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_0;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__220(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__220\n"); );
    // Body
    vlSelf->__PVT___cu_io_ALUSrcD_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__221(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__221\n"); );
    // Body
    vlSelf->__PVT___dmemreq_io_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wstrb;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6 
        = ((IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T)
            ? 0x400U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__222(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__222\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ALUSrcD_1 = vlSelf->__PVT___cu_io_ALUSrcD_1;
    vlSelf->__PVT___cu_io_RegWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD;
    vlSelf->__PVT___muldiv_io_data_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_data_out;
    vlSelf->__PVT__data_wstrb = vlSelf->__PVT___dmemreq_io_wstrb;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12 
        = VL_EXTEND_II(32,11, (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6));
    vlSelf->__PVT___dmemreq_io_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__223(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__223\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_1 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_1;
    vlSelf->__PVT___id2ex_io1_RegWriteD = vlSelf->__PVT___cu_io_RegWriteD;
    vlSelf->__PVT___resultE_T_7 = ((IData)(vlSelf->__PVT___id2ex_io_muldiv_calE)
                                    ? vlSelf->__PVT___muldiv_io_data_out
                                    : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__225(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__225\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegWriteD 
        = vlSelf->__PVT___id2ex_io1_RegWriteD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__228(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__228\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_data 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__229(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__229\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_ExceptionTypeD = VL_SEL_IQII(64, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14, 0U, 0x20U);
    vlSelf->__PVT___cu_io_ImmD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__230(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__230\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeD 
        = vlSelf->__PVT___id2ex_io_ExceptionTypeD;
    vlSelf->__PVT___id2ex_io_ImmD = vlSelf->__PVT___cu_io_ImmD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__231(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__231\n"); );
    // Body
    vlSelf->__PVT___regfile_io_RD2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2;
    vlSelf->__PVT___regfile_io_RD1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__232(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__232\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmD 
        = vlSelf->__PVT___id2ex_io_ImmD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__236(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__236\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2D 
        = vlSelf->__PVT___id2ex_io_RD2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1D 
        = vlSelf->__PVT___id2ex_io_RD1D;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__237(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__237\n"); );
    // Body
    vlSelf->__PVT___dmem_io_RD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD;
    vlSelf->__PVT___PCJumpD_T_3 = (vlSelf->__PVT__BranchR1D 
                                   + vlSelf->__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2 
        = vlSelf->__PVT___br_io_r2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
        = vlSelf->__PVT___br_io_r1;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__242(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__242\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_in_target_pc = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag)
                                                    ? vlSelf->__PVT__PCBranchD
                                                    : vlSelf->__PVT___Pc_targetD_T_2);
    vlSelf->__PVT___cu_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control;
    vlSelf->__PVT___alu_io_result = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__244(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__244\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__ex_bru_state_io_in_target_pc;
    vlSelf->__PVT___id2ex_io1_muldiv_control = vlSelf->__PVT___cu_io_muldiv_control;
    vlSelf->__PVT___resultE_T_3 = ((IData)(vlSelf->__PVT___id2ex_io_alu_calE)
                                    ? vlSelf->__PVT___alu_io_result
                                    : 0ULL);
    vlSelf->__PVT___cu_io_muldiv_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal;
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

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__245(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__245\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSelf->__PVT___id2ex_io1_muldiv_control;
    vlSelf->__PVT___resultE_T_10 = (vlSelf->__PVT___resultE_T_3 
                                    | vlSelf->__PVT___resultE_T_6);
    vlSelf->__PVT___id2ex_io1_muldiv_cal = vlSelf->__PVT___cu_io_muldiv_cal;
    vlSelf->__PVT___Mem_withRL_Data_T_33 = ((2U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                             ? vlSelf->__PVT___Mem_withRL_Data_T_15
                                             : vlSelf->__PVT___dmem_io_RD);
    vlSelf->__PVT___br_io_exe = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__246(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__246\n"); );
    // Body
    vlSelf->__PVT__resultE = (vlSelf->__PVT___resultE_T_10 
                              | vlSelf->__PVT___resultE_T_7);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSelf->__PVT___id2ex_io1_muldiv_cal;
    vlSelf->__PVT__Mem_withRL_Data = ((1U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                       ? vlSelf->__PVT___Mem_withRL_Data_T_31
                                       : vlSelf->__PVT___Mem_withRL_Data_T_33);
    vlSelf->__PVT___PCSrcD_T_3 = vlSelf->__PVT___br_io_exe;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__248(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__248\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultM 
        = vlSelf->__PVT___mem22wb_io_ResultM;
    vlSelf->__PVT___id2ex_io_Pc_NextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                          ? vlSelf->__PVT__PCJumpD
                                          : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_4 
        = (vlSelf->__PVT___GEN_19 | vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3);
    vlSelf->__PVT__PC_nextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                ? vlSelf->__PVT__PCJumpD
                                : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT__fifo_with_bundle_io_point_write_en 
        = ((IData)(vlSelf->__PVT___PCSrcD_T_1) & ((
                                                   ((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                                    | (IData)(vlSelf->__PVT___PCSrcD_T_3)) 
                                                   != (IData)(vlSelf->__PVT__id_true_branch_state)) 
                                                  | (IData)(vlSelf->__PVT__target_addr_error)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__249(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__249\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextD 
        = vlSelf->__PVT___id2ex_io_Pc_NextD;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data 
        = VL_SEL_IQII(64, vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_4, 0U, 0x20U);
    vlSelf->__PVT__ready_to_branch = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__250(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__250\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_data 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__251(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__251\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_empty = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__252(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__252\n"); );
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
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pc_target;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_exception_type;
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pc;
    vlSelf->__PVT___stage_fec_2_data_valid_T = (1U 
                                                & (~ (IData)(vlSelf->__PVT__fifo_with_bundle_io_empty)));
    vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_inst;
    vlSelf->__PVT___cfu_io_Inst_Fifo_Empty = vlSelf->__PVT__fifo_with_bundle_io_empty;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__253(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__253\n"); );
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
    vlSelf->__PVT__id_bru_state_io_in_target_pc = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target;
    vlSelf->__PVT__id_bru_state_io_in_lookup_data = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data;
    vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value 
        = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value;
    vlSelf->__PVT___if2id_io_PCF = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSelf->__PVT__stage2_flush = (((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en) 
                                    & (IData)(vlSelf->__PVT___stage_fec_2_data_valid_T)) 
                                   | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7));
    vlSelf->__PVT__inst_buffer_read_out_inst = vlSelf->__PVT__fifo_with_bundle_io_read_out_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty 
        = vlSelf->__PVT___cfu_io_Inst_Fifo_Empty;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__254(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__254\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeF 
        = vlSelf->__PVT___if2id_io_ExceptionTypeF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCF 
        = vlSelf->__PVT___if2id_io_PCF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__id_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__id_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__id_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__id_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__id_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__id_bru_state_io_in_pht;
    vlSelf->__PVT___if2id_io_PCPlus4F = (4ULL + vlSelf->__PVT___if2id_io_PCF);
    vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush 
        = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_L_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_M_io_flush = vlSelf->__PVT__stage2_flush;
    vlSelf->__PVT__stage_fec_2_pc_R_io_flush = vlSelf->__PVT__stage2_flush;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__256(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__256\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4F 
        = vlSelf->__PVT___if2id_io_PCPlus4F;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_flush 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_flush;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__257(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__257\n"); );
    // Body
    vlSelf->__PVT___if2id_io_InstrF = VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fif2id_io_InstrF_T_5);
    vlSelf->__PVT___cfu_io_StallF = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__258(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__258\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrF 
        = vlSelf->__PVT___if2id_io_InstrF;
    vlSelf->__PVT___T_25 = vlSelf->__PVT___cfu_io_StallF;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__261(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__261\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en 
        = vlSelf->__PVT__fifo_with_bundle_io_read_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__262(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__262\n"); );
    // Body
    vlSelf->__PVT___cu_io_ALUCtrlD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__263(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__263\n"); );
    // Body
    vlSelf->__PVT___id2ex_io1_ALUCtrlD = vlSelf->__PVT___cu_io_ALUCtrlD;
    vlSelf->__PVT___cu_io_alu_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__264(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__264\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUCtrlD 
        = vlSelf->__PVT___id2ex_io1_ALUCtrlD;
    vlSelf->__PVT___id2ex_io1_alu_cal = vlSelf->__PVT___cu_io_alu_cal;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__265(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__265\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal 
        = vlSelf->__PVT___id2ex_io1_alu_cal;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__266(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__266\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__268(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__268\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__269(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__269\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__271(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__271\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pht;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__272(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__272\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_L;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__273(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__273\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_L;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__276(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__276\n"); );
    // Body
    vlSelf->__PVT___T_4 = (1U & (~ (IData)(vlSelf->__PVT__inst_sram_en)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_flush 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_stall;
    vlSelf->__PVT___GEN_2 = ((~ ((IData)(vlSelf->__PVT__returnPc_req_wait) 
                                 & (IData)(vlSelf->__PVT__inst_sram_en))) 
                             & (IData)(vlSelf->__PVT__returnPc_req_wait));
    vlSelf->__PVT___GEN_0 = ((~ ((((IData)(vlSelf->__PVT__pc_req_wait) 
                                   & (IData)(vlSelf->__PVT__inst_sram_en)) 
                                  | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                 | ((IData)(vlSelf->__PVT__ready_to_branch) 
                                    & (IData)(vlSelf->__PVT__inst_sram_en)))) 
                             & (IData)(vlSelf->__PVT__pc_req_wait));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__277(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__277\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_target_L;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__278(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__278\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSelf->__PVT__stage_fec_2_pre_target_0 = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_hit_0;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state 
        = ((((((IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L) 
               & ((IData)(vlSelf->__PVT__stage_fec_2_inst_branch) 
                  | (IData)(vlSelf->__PVT__stage_fec_2_inst_jump))) 
              & (IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
             & (IData)(vlSelf->__PVT__stage_fec_2_stall_reg)) 
            & (IData)(vlSelf->__PVT__stage_fec_2_valid)) 
           & (~ (IData)(vlSelf->__PVT___cp0_io_exception)));
    vlSelf->__PVT__stage_fec_2_branch_answer = ((((
                                                   ((IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L) 
                                                    & ((IData)(vlSelf->__PVT__stage_fec_2_inst_branch) 
                                                       | (IData)(vlSelf->__PVT__stage_fec_2_inst_jump))) 
                                                   & (IData)(vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
                                                  & (IData)(vlSelf->__PVT__stage_fec_2_stall_reg)) 
                                                 & (IData)(vlSelf->__PVT__stage_fec_2_valid)) 
                                                & (~ (IData)(vlSelf->__PVT___cp0_io_exception)));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__279(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__279\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state;
    vlSelf->__PVT___pc_next_wait_T = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                      | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT__stage1_valid_flush = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                         | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT__stage_fec_1_pc_next = ((IData)(vlSelf->__PVT__stage_fec_2_branch_answer)
                                           ? vlSelf->__PVT__stage_fec_2_pre_target_0
                                           : vlSelf->__PVT___stage_fec_1_pc_next_T_1);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__282(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__282\n"); );
    // Body
    vlSelf->__PVT__Pc_Next_normal = ((IData)(vlSelf->__PVT__fifo_with_bundle_io_point_write_en)
                                      ? vlSelf->__PVT__PC_nextD
                                      : vlSelf->__PVT__stage_fec_1_pc_next);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_stall 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_stall 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_stall;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__286(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___settle__TOP__mycpu_top__u_riscv_cpu__286\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT___cp0_io_return_pc)
            : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT___cp0_io_return_pc)
            : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in 
        = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT___cp0_io_return_pc)
            : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__inst_sram_addr = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                                      ? VL_EXTEND_QI(64,32, vlSelf->__PVT___cp0_io_return_pc)
                                      : vlSelf->__PVT___Pc_Next_T_3);
    vlSelf->__PVT__Pc_Next = ((IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)
                               ? VL_EXTEND_QI(64,32, vlSelf->__PVT___cp0_io_return_pc)
                               : vlSelf->__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_R_io_in_pc_value_in;
}
