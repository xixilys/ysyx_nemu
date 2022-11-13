// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_myCPU.h"

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__0(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__0\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___ex2mem_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemRLE 
        = vlSelf->__PVT___ex2mem_io1_MemRLE;
    vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2 
        = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag) 
           | (IData)(vlSelf->__PVT__pre_decoder_jump));
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__stage_fec_2_hascode_0;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht 
        = vlSelf->__PVT__stage_fec_2_bht_0;
    vlSelf->__PVT___T_36 = ((((IData)(vlSelf->__PVT__ex_exception) 
                              | (IData)(vlSelf->__PVT__mem_exception)) 
                             | (IData)(vlSelf->__PVT__mem2_exception)) 
                            | (IData)(vlSelf->__PVT__wb_exception));
    vlSelf->__PVT___pht_tobeE_T_3 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 1U);
    vlSelf->__PVT___pht_tobeE_T_2 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 2U : 0U);
    vlSelf->__PVT___pht_tobeE_T_1 = ((IData)(vlSelf->__PVT__true_branch_stateE)
                                      ? 3U : 2U);
    vlSelf->__PVT___cfu_io_BranchD_Flag = vlSelf->__PVT__pre_decoder_branchD_flag;
    vlSelf->__PVT___cfu_io_JRD = vlSelf->__PVT__pre_decoder_jr;
    vlSelf->__PVT___cfu_io_CanBranchD = (1U & (~ ((
                                                   (((IData)(vlSelf->__PVT__id_exception) 
                                                     | (IData)(vlSelf->__PVT__ex_exception)) 
                                                    | (IData)(vlSelf->__PVT__mem_exception)) 
                                                   | (IData)(vlSelf->__PVT__mem2_exception)) 
                                                  | (IData)(vlSelf->__PVT__wb_exception))));
    vlSelf->__PVT___br_io_branch = vlSelf->__PVT__pre_decoder_branchdata;
    vlSelf->__PVT___commit_difftest_data_ok_ok = vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__data_ok_ok;
    vlSelf->__PVT___id2ex_io_BranchJump_JrD = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT_____05Fid2ex_io_BranchJump_JrD_T_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_bht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_BranchD_Flag 
        = vlSelf->__PVT___cfu_io_BranchD_Flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_JRD 
        = vlSelf->__PVT___cfu_io_JRD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_CanBranchD 
        = vlSelf->__PVT___cfu_io_CanBranchD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch 
        = vlSelf->__PVT___br_io_branch;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_BranchJump_JrD 
        = vlSelf->__PVT___id2ex_io_BranchJump_JrD;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__PVT___csr_io_Int_able = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_Int_able;
    vlSelf->__PVT___csr_io_csr_status = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_status;
    vlSelf->__PVT___csr_io_timer_int_has = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_timer_int_has;
    vlSelf->__PVT___ex2mem_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___ex2mem_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemWidthM;
    vlSelf->__PVT___ex2mem_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrM;
    vlSelf->__PVT___ex2mem_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PCM;
    vlSelf->__PVT___ex2mem_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemRLM;
    vlSelf->__PVT___ex2mem_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtM;
    vlSelf->__PVT___ex2mem_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___ex2mem_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextM;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleM_cache 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleM_cache;
    vlSelf->__PVT___ex2mem_io_CsrWritedataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataM;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___ex2mem_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___ex2mem_io_WriteDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteDataM;
    vlSelf->__PVT___ex2mem_io_WritecsrAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WritecsrAddrM;
    vlSelf->__PVT___ex2mem_io_csrWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_csrWriteM;
    vlSelf->__PVT___ex2mem_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RegWriteM;
    vlSelf->__PVT___ex2mem_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemToRegM;
    vlSelf->__PVT___ex2mem_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegM;
    vlSelf->__PVT___mem2mem2_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PCM;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem2mem2_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io_eBreakM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_eBreakM;
    vlSelf->__PVT___mem2mem2_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_pc;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_addr;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_len;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_cache 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_cache;
    vlSelf->__PVT___mem2mem2_io_CsrWritedataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CsrWritedataM;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_data;
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT___mem2mem2_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemRLM;
    vlSelf->__PVT___mem2mem2_io_WriteDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteDataM;
    vlSelf->__PVT___mem2mem2_io_csrWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_csrWriteM;
    vlSelf->__PVT___mem2mem2_io_WritecsrAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WritecsrAddrM;
    vlSelf->__PVT___mem2mem2_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtM;
    vlSelf->__PVT___mem2mem2_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrM;
    vlSelf->__PVT___mem2mem2_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegM;
    vlSelf->__PVT__stage_fec_2_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_2_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__wb_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__wb_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__wb_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__wb_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__wb_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT___id2ex_io2_LoadUnsignedE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LoadUnsignedE;
    vlSelf->__PVT___id2ex_io2_csrWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_csrWriteE;
    vlSelf->__PVT___id2ex_io2_WritecsrAddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WritecsrAddrE;
    vlSelf->__PVT___id2ex_io2_BranchJump_JrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_BranchJump_JrE;
    vlSelf->__PVT___id2ex_io_Pc_NextE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextE;
    vlSelf->__PVT___id2ex_io_muldiv_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_calE;
    vlSelf->__PVT___id2ex_io2_PCPlus4E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCPlus4E;
    vlSelf->__PVT___id2ex_io2_eBreakE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_eBreakE;
    vlSelf->__PVT___id2ex_io2_LinkE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LinkE;
    vlSelf->__PVT___id2ex_io_alu_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_alu_calE;
    vlSelf->__PVT___id2ex_io2_MemToRegE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemToRegE;
    vlSelf->__PVT___id2ex_io2_MemWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWriteE;
    vlSelf->__PVT___id2ex_io_csr_controlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csr_controlE;
    vlSelf->__PVT___id2ex_io_csr_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csr_ImmE;
    vlSelf->__PVT___id2ex_io_csrToRegE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_csrToRegE_Out;
    vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeE_Out;
    vlSelf->__PVT___id2ex_io2_MemWidthE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWidthE;
    vlSelf->__PVT___id2ex_io_data_wE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_data_wE;
    vlSelf->__PVT___id2ex_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_control;
    vlSelf->__PVT___id2ex_io2_ReadcsrAddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ReadcsrAddrE;
    vlSelf->__PVT___id2ex_io2_RegWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegWriteE;
    vlSelf->__PVT___id2ex_io2_RegDstE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegDstE;
    vlSelf->__PVT___id2ex_io2_ALUCtrlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUCtrlE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_0;
    vlSelf->__PVT___id2ex_io2_PCE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_1;
    vlSelf->__PVT___id2ex_io_RD2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2E;
    vlSelf->__PVT___id2ex_io_RD1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1E;
    vlSelf->__PVT___id2ex_io_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmE;
    vlSelf->__PVT___id2ex_io_R2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2E;
    vlSelf->__PVT___id2ex_io_R1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1E;
    vlSelf->__PVT___mem22wb_io_eBreakW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakW;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_len;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_cache 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_cache;
    vlSelf->__PVT___mem22wb_io_CsrWritedataW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CsrWritedataW;
    vlSelf->__PVT___mem22wb_io_Pc_NextW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextW;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_data;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleW_mem_fetch_type;
    vlSelf->__PVT___mem22wb_io_WritecsrAddrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WritecsrAddrW;
    vlSelf->__PVT___mem22wb_io_csrWriteW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_csrWriteW;
    vlSelf->__PVT___mem22wb_io_BranchJump_JrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrW;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeW_Out;
    vlSelf->__PVT___mem22wb_io_ResultW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultW;
    vlSelf->__PVT___mem22wb_io_RegWriteW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteW_Out;
    vlSelf->__PVT___mem22wb_io_WriteRegW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegW;
    vlSelf->__PVT___mem22wb_io_PCW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCW;
    vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__id_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__id_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__id_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__id_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__id_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__ex_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__ex_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__ex_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__ex_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__ex_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__mem_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__mem_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem2_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht;
    vlSelf->__PVT__mem2_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_out_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem2_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_out_pc_value_out;
    vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_lookup_data_0;
    vlSelf->__PVT___if2id_io_ExceptionTypeD_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeD_Out;
    vlSelf->__PVT___if2id_io_PCPlus4D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4D;
    vlSelf->__PVT___if2id_io_PCD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCD;
    vlSelf->__PVT___if2id_io_InstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrD;
    vlSelf->__PVT__fifo_with_bundle_io_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_full;
    VL_ASSIGN_W(2048,vlSelf->__PVT___regfile_io_reg_file_alL_out, vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_reg_file_alL_out);
    vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_out_pc_value_out;
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
    vlSelf->__PVT___mtrace_mod_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_1_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_L_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_M_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__stage_fec_2_pc_R_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__id_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__ex_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__mem_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__mem2_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__wb_bru_state_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___commit_difftest_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__fifo_with_bundle_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___csr_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT__branch_prediction_with_blockram_reset 
        = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___cfu_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___br_reset = (1U & (~ (IData)(vlSelf->__PVT__resetn)));
    vlSelf->__PVT___int_with_timer_int_T_1 = (1U & 
                                              ((IData)(vlSelf->__PVT___csr_io_timer_int_has) 
                                               | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 5U)));
    vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE = vlSelf->__PVT___ex2mem_io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io1_MemWidthE = vlSelf->__PVT___ex2mem_io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrE = vlSelf->__PVT___ex2mem_io_PhyAddrM;
    vlSelf->__PVT___mem2mem2_io1_PCE = vlSelf->__PVT___ex2mem_io_PCM;
    vlSelf->__PVT___mem2mem2_io1_MemRLE = vlSelf->__PVT___ex2mem_io_MemRLM;
    vlSelf->__PVT___mem2mem2_io_RtE = vlSelf->__PVT___ex2mem_io_RtM;
    vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE = vlSelf->__PVT___ex2mem_io_BranchJump_JrM;
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
    vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_cache 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleM_cache;
    vlSelf->__PVT___mem2mem2_io_CsrWritedataE = vlSelf->__PVT___ex2mem_io_CsrWritedataM;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeE = ((IData)(vlSelf->__PVT__mem_exception)
                                                   ? vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out
                                                   : 0U);
    vlSelf->__PVT___mem2mem2_io1_Tlb_Control = vlSelf->__PVT___ex2mem_io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_WriteDataE = vlSelf->__PVT___ex2mem_io_WriteDataM;
    vlSelf->__PVT___mem2mem2_io1_WritecsrAddrE = ((IData)(vlSelf->__PVT__inst_tlb_exceptionM)
                                                   ? 0xaU
                                                   : (IData)(vlSelf->__PVT___ex2mem_io_WritecsrAddrM));
    vlSelf->__PVT___cfu_io_WritecsrAddrM = vlSelf->__PVT___ex2mem_io_WritecsrAddrM;
    vlSelf->__PVT_____05Fmem2mem2_io_csrWriteE_T = vlSelf->__PVT___ex2mem_io_csrWriteM;
    vlSelf->__PVT___cfu_io_csrWriteM = vlSelf->__PVT___ex2mem_io_csrWriteM;
    vlSelf->__PVT___mem2mem2_io1_RegWriteE = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___cfu_io_RegWriteM = vlSelf->__PVT___ex2mem_io_RegWriteM;
    vlSelf->__PVT___mem2mem2_io1_MemToRegE = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___cfu_io_MemToRegM = vlSelf->__PVT___ex2mem_io_MemToRegM;
    vlSelf->__PVT___mem2mem2_io_WriteRegE = vlSelf->__PVT___ex2mem_io_WriteRegM;
    vlSelf->__PVT___cfu_io_WriteRegM = vlSelf->__PVT___ex2mem_io_WriteRegM;
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
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_cache 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_cache;
    vlSelf->__PVT___mem22wb_io_CsrWritedataM = vlSelf->__PVT___mem2mem2_io_CsrWritedataM;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type;
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 0U))
            ? vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_data
            : 0ULL);
    vlSelf->__PVT___mem22wb_io_csrWriteM = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___cfu_io_csrWriteM2 = vlSelf->__PVT___mem2mem2_io_csrWriteM;
    vlSelf->__PVT___mem22wb_io_WritecsrAddrM = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
    vlSelf->__PVT___cfu_io_WritecsrAddrM2 = vlSelf->__PVT___mem2mem2_io_WritecsrAddrM;
    vlSelf->__PVT___dmem_io_WIDTH = vlSelf->__PVT___mem2mem2_io_MemWidthM;
    vlSelf->__PVT___dmem_io_SIGN = (1U & (~ (IData)(vlSelf->__PVT___mem2mem2_io_LoadUnsignedM)));
    vlSelf->__PVT___dmem_io_Physisc_Address = vlSelf->__PVT___mem2mem2_io_PhyAddrM;
    vlSelf->__PVT___mem22wb_io_RegWriteM = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___cfu_io_RegWriteM2 = vlSelf->__PVT___mem2mem2_io_RegWriteM;
    vlSelf->__PVT___Forward_Lock1E_T_3 = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
    vlSelf->__PVT___Forward_Lock1E_T_1 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
    vlSelf->__PVT___cfu_io_MemToRegM2 = vlSelf->__PVT___mem2mem2_io_MemToRegM;
    vlSelf->__PVT___mem22wb_io_WriteRegM = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT___cfu_io_WriteRegM2 = vlSelf->__PVT___mem2mem2_io_WriteRegM;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_bht;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_target_pc;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in 
        = vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_hashcode;
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr 
        = vlSelf->__PVT__wb_bru_state_io_out_lookup_data;
    vlSelf->__PVT___ex2mem_io1_LoadUnsignedE = vlSelf->__PVT___id2ex_io2_LoadUnsignedE;
    vlSelf->__PVT___ex2mem_io1_csrWriteE = vlSelf->__PVT___id2ex_io2_csrWriteE;
    vlSelf->__PVT___ex2mem_io1_WritecsrAddrE = vlSelf->__PVT___id2ex_io2_WritecsrAddrE;
    vlSelf->__PVT___ex2mem_io1_BranchJump_JrE = vlSelf->__PVT___id2ex_io2_BranchJump_JrE;
    vlSelf->__PVT___ex2mem_io_Pc_NextE = vlSelf->__PVT___id2ex_io_Pc_NextE;
    vlSelf->__PVT___ex2mem_io1_eBreakE = vlSelf->__PVT___id2ex_io2_eBreakE;
    vlSelf->__PVT___resultE_T_1 = vlSelf->__PVT___id2ex_io2_LinkE;
    vlSelf->__PVT___ex2mem_io1_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___dmemreq_io_MemToRegE = vlSelf->__PVT___id2ex_io2_MemToRegE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT___id2ex_io2_MemToRegE), (IData)(vlSelf->__PVT___id2ex_io2_MemWriteE));
    vlSelf->__PVT___dmemreq_io_MemWriteE = vlSelf->__PVT___id2ex_io2_MemWriteE;
    vlSelf->__PVT___CalCsrDataE_T_7 = VL_EXTEND_II(6,4, 
                                                   (0xfU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 2U, 4U)));
    vlSelf->__PVT___CalCsrDataE_T = vlSelf->__PVT___id2ex_io_csr_controlE;
    vlSelf->__PVT___CalCsrDataE_T_3 = VL_EXTEND_II(6,5, 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT___id2ex_io_csr_controlE), 1U, 5U)));
    vlSelf->__PVT__csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___cfu_io_csrToRegE = ((0U == vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out) 
                                        & (IData)(vlSelf->__PVT___id2ex_io_csrToRegE_Out));
    vlSelf->__PVT___ex2mem_io1_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
    vlSelf->__PVT___dmemreq_io_MemWidthE = vlSelf->__PVT___id2ex_io2_MemWidthE;
    vlSelf->__PVT___alu_io_data_w = vlSelf->__PVT___id2ex_io_data_wE;
    vlSelf->__PVT___muldiv_io_ctrl = vlSelf->__PVT___id2ex_io_muldiv_control;
    vlSelf->__PVT___cfu_io_ReadcsrAddrE = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
    vlSelf->__PVT___csr_io_csr_read_addr = vlSelf->__PVT___id2ex_io2_ReadcsrAddrE;
    vlSelf->__PVT___ex2mem_io1_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___cfu_io_RegWriteE = vlSelf->__PVT___id2ex_io2_RegWriteE;
    vlSelf->__PVT___ex2mem_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
    vlSelf->__PVT___cfu_io_WriteRegE = vlSelf->__PVT___id2ex_io2_RegDstE;
    vlSelf->__PVT___alu_io_ctrl = vlSelf->__PVT___id2ex_io2_ALUCtrlE;
    vlSelf->__PVT___ex2mem_io1_PCE = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc = vlSelf->__PVT___id2ex_io2_PCE;
    vlSelf->__PVT___cfu_io_R2E = vlSelf->__PVT___id2ex_io_R2E;
    vlSelf->__PVT___csr_src1_T = vlSelf->__PVT___id2ex_io_R1E;
    vlSelf->__PVT___cfu_io_R1E = vlSelf->__PVT___id2ex_io_R1E;
    vlSelf->__PVT___commit_difftest_cpu_ebreak_sign 
        = vlSelf->__PVT___mem22wb_io_eBreakW;
    vlSelf->__PVT___mtrace_mod_mem_size = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_len;
    vlSelf->__PVT___mtrace_mod_mem_cached = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_cache;
    vlSelf->__PVT___csr_io_csr_write_data = vlSelf->__PVT___mem22wb_io_CsrWritedataW;
    vlSelf->__PVT___mtrace_mod_pc = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_pc;
    vlSelf->__PVT___mtrace_mod_data = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_data;
    vlSelf->__PVT___mtrace_mod_addr = vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_addr;
    vlSelf->__PVT___mtrace_mod_mem_req = (0U != (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type));
    vlSelf->__PVT___mtrace_mod_mem_write_read = (1U 
                                                 & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_Mem_trace_budleW_mem_fetch_type), 0U));
    vlSelf->__PVT___csr_io_csr_write_addr = vlSelf->__PVT___mem22wb_io_WritecsrAddrW;
    vlSelf->__PVT__csrWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_csrWriteW));
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem22wb_io_BranchJump_JrW), 0U));
    vlSelf->__PVT___csr_io_exception_type_i = vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out;
    vlSelf->__PVT___regfile_io_WD3 = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT__ResultW = vlSelf->__PVT___mem22wb_io_ResultW;
    vlSelf->__PVT__RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
    vlSelf->__PVT___cfu_io_RegWriteW = ((~ (IData)(vlSelf->__PVT__wb_exception)) 
                                        & (IData)(vlSelf->__PVT___mem22wb_io_RegWriteW_Out));
    vlSelf->__PVT___regfile_io_A3 = vlSelf->__PVT___mem22wb_io_WriteRegW;
    vlSelf->__PVT___cfu_io_WriteRegW = vlSelf->__PVT___mem22wb_io_WriteRegW;
    vlSelf->__PVT___commit_difftest_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT__debug_wb_pc = vlSelf->__PVT___mem22wb_io_PCW;
    vlSelf->__PVT___PCW_Reg_T = (0ULL != vlSelf->__PVT___mem22wb_io_PCW);
    vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT___mem22wb_io_PCW, 4U, 7U));
    vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc 
        = vlSelf->__PVT___mem22wb_io_PCW;
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
    vlSelf->__PVT__mem_bru_state_io_in_bht = VL_CONCAT_III(7,6,1, 
                                                           (0x3fU 
                                                            & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_bht), 0U, 6U)), (IData)(vlSelf->__PVT__true_branch_stateE));
    vlSelf->__PVT__mem_bru_state_io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_out_lookup_data;
    vlSelf->__PVT___pht_tobeE_T_5 = ((3U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_1)
                                      : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__true_branch_stateE)));
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
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0;
    vlSelf->__PVT___ExceptionTypeD_Out_T_6 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 1U))
                                               ? 4U
                                               : 0U);
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 0U))
                                               ? 8U
                                               : 0U);
    vlSelf->__PVT___id2ex_io_PCPlus4D = vlSelf->__PVT___if2id_io_PCPlus4D;
    vlSelf->__PVT___id2ex_io_PCD = vlSelf->__PVT___if2id_io_PCD;
    vlSelf->__PVT___ExceptionTypeD_Out_T_1 = (0U != 
                                              (3U & 
                                               VL_SEL_IQII(64, vlSelf->__PVT___if2id_io_PCD, 0U, 2U)));
    vlSelf->__PVT___id2ex_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___id2ex_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___id2ex_io_WritecsrAddrD = (0xfffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
    vlSelf->__PVT___id2ex_io_ReadcsrAddrD = (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU));
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
    vlSelf->__PVT___cfu_io_R2D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___cfu_io_R1D = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___regfile_io_A2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 5U));
    vlSelf->__PVT___regfile_io_A1 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0xfU, 5U));
    vlSelf->__PVT___cu_io1_InstrD = vlSelf->__PVT___if2id_io_InstrD;
    vlSelf->__PVT__inst_buffer_full = vlSelf->__PVT__fifo_with_bundle_io_full;
    VL_ASSIGN_W(2048,vlSelf->__PVT___commit_difftest_gpr_wire, vlSelf->__PVT___regfile_io_reg_file_alL_out);
    vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__stage_fec_1_pc = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pc 
        = vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out;
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
    vlSelf->__PVT__int_with_timer_int = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___int_with_timer_int_T_1), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__ext_int), 0U, 5U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___mem2mem2_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___mem2mem2_io_PhyAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_PCE 
        = vlSelf->__PVT___mem2mem2_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemRLE 
        = vlSelf->__PVT___mem2mem2_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtE 
        = vlSelf->__PVT___mem2mem2_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___mem2mem2_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_pc 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_data 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_mem_fetch_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_addr 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_len 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_mem_trace_budleE_cache 
        = vlSelf->__PVT___mem2mem2_io_mem_trace_budleE_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CsrWritedataE 
        = vlSelf->__PVT___mem2mem2_io_CsrWritedataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___mem2mem2_io_ExceptionTypeE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___mem2mem2_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteDataE 
        = vlSelf->__PVT___mem2mem2_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WritecsrAddrE 
        = vlSelf->__PVT___mem2mem2_io1_WritecsrAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM 
        = vlSelf->__PVT___cfu_io_WritecsrAddrM;
    vlSelf->__PVT___mem2mem2_io1_csrWriteE = (1U & 
                                              ((IData)(vlSelf->__PVT_____05Fmem2mem2_io_csrWriteE_T) 
                                               | VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___ex2mem_io_Tlb_ControlM), 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM 
        = vlSelf->__PVT___cfu_io_csrWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___mem2mem2_io1_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM 
        = vlSelf->__PVT___cfu_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___mem2mem2_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM 
        = vlSelf->__PVT___cfu_io_MemToRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegE 
        = vlSelf->__PVT___mem2mem2_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM 
        = vlSelf->__PVT___cfu_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCM 
        = vlSelf->__PVT___mem22wb_io_PCM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeM 
        = vlSelf->__PVT___mem22wb_io_ExceptionTypeM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrM 
        = vlSelf->__PVT___mem22wb_io_BranchJump_JrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakM 
        = vlSelf->__PVT___mem22wb_io_eBreakM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextM 
        = vlSelf->__PVT___mem22wb_io_Pc_NextM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_pc 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_addr 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_len 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_cache 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CsrWritedataM 
        = vlSelf->__PVT___mem22wb_io_CsrWritedataM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_mem_fetch_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_csrWriteM 
        = vlSelf->__PVT___mem22wb_io_csrWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM2 
        = vlSelf->__PVT___cfu_io_csrWriteM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WritecsrAddrM 
        = vlSelf->__PVT___mem22wb_io_WritecsrAddrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM2 
        = vlSelf->__PVT___cfu_io_WritecsrAddrM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH 
        = vlSelf->__PVT___dmem_io_WIDTH;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN 
        = vlSelf->__PVT___dmem_io_SIGN;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address 
        = vlSelf->__PVT___dmem_io_Physisc_Address;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteM 
        = vlSelf->__PVT___mem22wb_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2 
        = vlSelf->__PVT___cfu_io_RegWriteM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2 
        = vlSelf->__PVT___cfu_io_MemToRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegM 
        = vlSelf->__PVT___mem22wb_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2 
        = vlSelf->__PVT___cfu_io_WriteRegM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_ways_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___ex2mem_io1_LoadUnsignedE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_csrWriteE 
        = vlSelf->__PVT___ex2mem_io1_csrWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WritecsrAddrE 
        = vlSelf->__PVT___ex2mem_io1_WritecsrAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___ex2mem_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___ex2mem_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_eBreakE 
        = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSelf->__PVT___mem2mem2_io1_eBreakE = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSelf->__PVT___resultE_T_4 = ((IData)(vlSelf->__PVT___resultE_T_1)
                                    ? vlSelf->__PVT___id2ex_io2_PCPlus4E
                                    : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___ex2mem_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemToRegE 
        = vlSelf->__PVT___dmemreq_io_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_mem_fetch_type 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_mem_fetch_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE 
        = vlSelf->__PVT___dmemreq_io_MemWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrToRegE 
        = vlSelf->__PVT___cfu_io_csrToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___ex2mem_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE 
        = vlSelf->__PVT___dmemreq_io_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w 
        = vlSelf->__PVT___alu_io_data_w;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl 
        = vlSelf->__PVT___muldiv_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ReadcsrAddrE 
        = vlSelf->__PVT___cfu_io_ReadcsrAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_addr 
        = vlSelf->__PVT___csr_io_csr_read_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___ex2mem_io1_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE 
        = vlSelf->__PVT___cfu_io_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegE 
        = vlSelf->__PVT___ex2mem_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE 
        = vlSelf->__PVT___cfu_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl 
        = vlSelf->__PVT___alu_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_PCE 
        = vlSelf->__PVT___ex2mem_io1_PCE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_pc 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E 
        = vlSelf->__PVT___cfu_io_R2E;
    vlSelf->__PVT___csr_src1_T_1 = VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___csr_src1_T));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E 
        = vlSelf->__PVT___cfu_io_R1E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__cpu_ebreak_sign 
        = vlSelf->__PVT___commit_difftest_cpu_ebreak_sign;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_size 
        = vlSelf->__PVT___mtrace_mod_mem_size;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_cached 
        = vlSelf->__PVT___mtrace_mod_mem_cached;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_data 
        = vlSelf->__PVT___csr_io_csr_write_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__pc 
        = vlSelf->__PVT___mtrace_mod_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__data 
        = vlSelf->__PVT___mtrace_mod_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__addr 
        = vlSelf->__PVT___mtrace_mod_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_req 
        = vlSelf->__PVT___mtrace_mod_mem_req;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__mem_write_read 
        = vlSelf->__PVT___mtrace_mod_mem_write_read;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_addr 
        = vlSelf->__PVT___csr_io_csr_write_addr;
    vlSelf->__PVT___csr_io_csr_write_en = ((IData)(vlSelf->__PVT__csrWriteW) 
                                           | (IData)(vlSelf->__PVT__tlb_exception_co0_writeW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_exception_type_i 
        = vlSelf->__PVT___csr_io_exception_type_i;
    vlSelf->__PVT__debug_wb_rf_wdata = vlSelf->__PVT___regfile_io_WD3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3 
        = vlSelf->__PVT___regfile_io_WD3;
    vlSelf->__PVT___debug_wb_rf_wen_T_2 = ((IData)(vlSelf->__PVT__RegWriteW)
                                            ? 0xfU : 0U);
    vlSelf->__PVT___regfile_io_WE3 = ((IData)(vlSelf->__PVT__RegWriteW) 
                                      & (IData)(vlSelf->__PVT___commit_difftest_data_ok_ok));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW 
        = vlSelf->__PVT___cfu_io_RegWriteW;
    vlSelf->__PVT__debug_wb_rf_wnum = vlSelf->__PVT___regfile_io_A3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3 
        = vlSelf->__PVT___regfile_io_A3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW 
        = vlSelf->__PVT___cfu_io_WriteRegW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__pc 
        = vlSelf->__PVT___commit_difftest_pc;
    vlSelf->__PVT___csr_io_pc = ((IData)(vlSelf->__PVT___PCW_Reg_T)
                                  ? vlSelf->__PVT___mem22wb_io_PCW
                                  : vlSelf->__PVT__PCW_Reg);
    vlSelf->__PVT___commit_difftest_inst_commit = ((IData)(vlSelf->__PVT___PCW_Reg_T) 
                                                   & (vlSelf->__PVT__pcw_reg 
                                                      != vlSelf->__PVT___mem22wb_io_PCW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_bht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__ex_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__ex_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__ex_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_in_lookup_data;
    vlSelf->__PVT___pht_tobeE_T_7 = ((1U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                      ? (IData)(vlSelf->__PVT___pht_tobeE_T_2)
                                      : (IData)(vlSelf->__PVT___pht_tobeE_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem2_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem2_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem2_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem2_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__wb_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__wb_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__wb_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__wb_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__wb_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__wb_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pc 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data;
    vlSelf->__PVT___GEN_13 = VL_EXTEND_II(21,3, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_6));
    vlSelf->__PVT___GEN_12 = VL_EXTEND_II(21,4, (IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCPlus4D 
        = vlSelf->__PVT___id2ex_io_PCPlus4D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCD 
        = vlSelf->__PVT___id2ex_io_PCD;
    vlSelf->__PVT___ExceptionTypeD_Out_T_4 = ((IData)(vlSelf->__PVT___ExceptionTypeD_Out_T_1)
                                               ? 0x100000U
                                               : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2D 
        = vlSelf->__PVT___id2ex_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1D 
        = vlSelf->__PVT___id2ex_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WritecsrAddrD 
        = vlSelf->__PVT___id2ex_io_WritecsrAddrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ReadcsrAddrD 
        = vlSelf->__PVT___id2ex_io_ReadcsrAddrD;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D 
        = vlSelf->__PVT___cfu_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D 
        = vlSelf->__PVT___cfu_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2 
        = vlSelf->__PVT___regfile_io_A2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1 
        = vlSelf->__PVT___regfile_io_A1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD 
        = vlSelf->__PVT___cu_io1_InstrD;
    VL_ASSIGN_W(2048,vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, vlSelf->__PVT___commit_difftest_gpr_wire);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in;
    vlSelf->__PVT___stage_fec_1_pc_next_T_1 = (4ULL 
                                               + vlSelf->__PVT__stage_fec_1_pc);
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 4U, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 8U, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 0xcU, 4U))));
    vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3 
        = (1U & VL_REDXOR_32((0xfU & VL_SEL_IQII(64, vlSelf->__PVT__branch_prediction_with_blockram_io_pc, 0x10U, 4U))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pc;
    vlSelf->__PVT___GEN_14 = VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT__int_with_timer_int));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_csrWriteE 
        = vlSelf->__PVT___mem2mem2_io1_csrWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_eBreakE 
        = vlSelf->__PVT___mem2mem2_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_write_en 
        = vlSelf->__PVT___csr_io_csr_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write;
    vlSelf->__PVT__debug_wb_rf_wen = ((vlSelf->__PVT__reg_pc 
                                       == vlSelf->__PVT___mem22wb_io_PCW)
                                       ? 0U : (IData)(vlSelf->__PVT___debug_wb_rf_wen_T_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3 
        = vlSelf->__PVT___regfile_io_WE3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_pc 
        = vlSelf->__PVT___csr_io_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__inst_commit 
        = vlSelf->__PVT___commit_difftest_inst_commit;
    vlSelf->__PVT__mem_bru_state_io_in_pht = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                               ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                               : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
    vlSelf->__PVT__pht_tobeE = ((2U == (IData)(vlSelf->__PVT__ex_bru_state_io_out_pht))
                                 ? (IData)(vlSelf->__PVT___pht_tobeE_T_3)
                                 : (IData)(vlSelf->__PVT___pht_tobeE_T_7));
    vlSelf->__PVT___ExceptionTypeD_Out_T_7 = (vlSelf->__PVT___ExceptionTypeD_Out_T_4 
                                              | vlSelf->__PVT___GEN_12);
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
    vlSelf->__PVT___stage_fec_2_hascode_0_T_1 = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_3), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_2), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_1), (IData)(vlSelf->__PVT__stage_fec_2_hascode_0_num_array_0))));
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T 
        = ((IData)(vlSelf->__PVT___GEN_14) & (IData)(vlSelf->__PVT___csr_io_csr_status));
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
    vlSelf->__PVT___ExceptionTypeD_Out_T_8 = (vlSelf->__PVT___ExceptionTypeD_Out_T_7 
                                              | vlSelf->__PVT___GEN_13);
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
    vlSelf->__PVT___pht_lookup_value_tobeE_T_12 = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_5)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_2));
    vlSelf->__PVT__ExceptionTypeD_Out = VL_EXTEND_QI(64,21, vlSelf->__PVT___ExceptionTypeD_Out_T_8);
    vlSelf->__PVT___PCJumpD_T_56 = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___PCJumpD_T_54, 
                                                 (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT___if2id_io_InstrD, 0x14U, 0xcU)));
    vlSelf->__PVT___PCJumpD_T_60 = (vlSelf->__PVT__immUJ 
                                    + vlSelf->__PVT___if2id_io_PCD);
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
    vlSelf->__PVT___pht_lookup_value_tobeE_T_14 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
                                                    ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_8)
                                                    : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_12));
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
    vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value 
        = ((3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__ex_bru_state_io_out_lookup_data), 0U, 2U)))
            ? (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_10)
            : (IData)(vlSelf->__PVT___pht_lookup_value_tobeE_T_14));
    vlSelf->__PVT__PCBranchD = (vlSelf->__PVT__immSB 
                                + vlSelf->__PVT___if2id_io_PCD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value;
    vlSelf->__PVT__target_neq_branchD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                         != vlSelf->__PVT__PCBranchD);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT___dmem_io_data_ok = vlSelf->__PVT__data_stage2_stall;
    vlSelf->__PVT___dmem_io_rdata = vlSelf->__PVT__data_sram_rdata;
    vlSelf->__PVT___cfu_io_ForwardcsrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ForwardcsrE;
    vlSelf->__PVT___cfu_io_Forward2D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2D;
    vlSelf->__PVT___cfu_io_Forward1D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1D;
    vlSelf->__PVT___cfu_io_Forward2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2E;
    vlSelf->__PVT___cfu_io_Forward1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E;
    vlSelf->__PVT___dmemreq_io_wr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wr;
    vlSelf->__PVT___dmemreq_io_size = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size;
    vlSelf->__PVT___csr_io_return_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_return_pc;
    vlSelf->__PVT___csr_io_exception = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_exception;
    vlSelf->__PVT___csr_io_csr_read_data = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_data;
    vlSelf->__PVT___regfile_io_RD2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2;
    vlSelf->__PVT___regfile_io_RD1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1;
    vlSelf->__PVT___cu_io_RegDstD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD;
    vlSelf->__PVT___cu_io_ebreakD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ebreakD;
    vlSelf->__PVT___cu_io_MemToRegD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemToRegD;
    vlSelf->__PVT___cu_io_MemWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWriteD;
    vlSelf->__PVT___cu_io_LoadUnsignedD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LoadUnsignedD;
    vlSelf->__PVT___cu_io1_dmem_addr_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal;
    vlSelf->__PVT___cu_io_MemWidthD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWidthD;
    vlSelf->__PVT___cu_io_ALUSrcD_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_0;
    vlSelf->__PVT___cu_io_LinkD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LinkD;
    vlSelf->__PVT___cu_io_csrWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrWriteD;
    vlSelf->__PVT___cu_io_csrToRegD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrToRegD;
    vlSelf->__PVT___cu_io_data_wD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_data_wD;
    vlSelf->__PVT___cu_io_csr_Imm = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csr_Imm;
    vlSelf->__PVT___cu_io1_EretD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_EretD;
    vlSelf->__PVT___cu_io1_BadInstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_BadInstrD;
    vlSelf->__PVT___cu_io1_SysCallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_SysCallD;
    vlSelf->__PVT___cu_io_ALUSrcD_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1;
    vlSelf->__PVT___cu_io_RegWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD;
    vlSelf->__PVT___cu_io_ImmD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD;
    vlSelf->__PVT___cu_io_csr_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csr_control;
    vlSelf->__PVT___cu_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control;
    vlSelf->__PVT___cu_io_muldiv_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal;
    vlSelf->__PVT___cu_io_ALUCtrlD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD;
    vlSelf->__PVT___cu_io_alu_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSelf->__PVT___dmem_io_data_ok;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata 
        = vlSelf->__PVT___dmem_io_rdata;
    vlSelf->__PVT___RD2ForWardE_p_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                          ? vlSelf->__PVT__ResultW
                                          : vlSelf->__PVT___id2ex_io_RD2E);
    vlSelf->__PVT___RD1ForWardE_p_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                          ? vlSelf->__PVT__ResultW
                                          : vlSelf->__PVT___id2ex_io_RD1E);
    vlSelf->__PVT__data_sram_wen = vlSelf->__PVT___dmemreq_io_wr;
    vlSelf->__PVT__data_size = vlSelf->__PVT___dmemreq_io_size;
    vlSelf->__PVT___commit_difftest_debug_pc = ((IData)(vlSelf->__PVT__wb_exception)
                                                 ? vlSelf->__PVT___csr_io_return_pc
                                                 : vlSelf->__PVT___mem22wb_io_Pc_NextW);
    vlSelf->__PVT___stage_fec_2_branch_answer_T_8 = 
        (1U & (~ (IData)(vlSelf->__PVT___csr_io_exception)));
    vlSelf->__PVT__fifo_with_bundle_io_point_flush 
        = vlSelf->__PVT___csr_io_exception;
    vlSelf->__PVT___stage_fec_2_branch_answer_T_7 = vlSelf->__PVT___csr_io_exception;
    vlSelf->__PVT___cfu_io_InException = vlSelf->__PVT___csr_io_exception;
    vlSelf->__PVT___Forward_csr_data_T_1 = ((1U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                             ? vlSelf->__PVT___ex2mem_io_WriteDataM
                                             : vlSelf->__PVT___csr_io_csr_read_data);
    vlSelf->__PVT___BranchR2D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD2);
    vlSelf->__PVT___BranchR1D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD1);
    vlSelf->__PVT___id2ex_io1_RegDstD = vlSelf->__PVT___cu_io_RegDstD;
    vlSelf->__PVT___id2ex_io1_ebreakD = vlSelf->__PVT___cu_io_ebreakD;
    vlSelf->__PVT___id2ex_io1_MemToRegD = vlSelf->__PVT___cu_io_MemToRegD;
    vlSelf->__PVT___id2ex_io1_MemWriteD = vlSelf->__PVT___cu_io_MemWriteD;
    vlSelf->__PVT___id2ex_io1_LoadUnsignedD = vlSelf->__PVT___cu_io_LoadUnsignedD;
    vlSelf->__PVT___cfu_io_dmem_calD = vlSelf->__PVT___cu_io1_dmem_addr_cal;
    vlSelf->__PVT___id2ex_io1_MemWidthD = vlSelf->__PVT___cu_io_MemWidthD;
    vlSelf->__PVT___id2ex_io1_ALUSrcD_0 = vlSelf->__PVT___cu_io_ALUSrcD_0;
    vlSelf->__PVT___id2ex_io1_LinkD = vlSelf->__PVT___cu_io_LinkD;
    vlSelf->__PVT___id2ex_io1_csrWriteD = vlSelf->__PVT___cu_io_csrWriteD;
    vlSelf->__PVT___id2ex_io1_csrToRegD = vlSelf->__PVT___cu_io_csrToRegD;
    vlSelf->__PVT___id2ex_io1_data_wD = vlSelf->__PVT___cu_io_data_wD;
    vlSelf->__PVT___id2ex_io1_csr_Imm = vlSelf->__PVT___cu_io_csr_Imm;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_3 = vlSelf->__PVT___cu_io1_EretD;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T = vlSelf->__PVT___cu_io1_BadInstrD;
    vlSelf->__PVT_____05Fif2id_io_InstrF_T_1 = vlSelf->__PVT___cu_io1_SysCallD;
    vlSelf->__PVT___id2ex_io1_ALUSrcD_1 = vlSelf->__PVT___cu_io_ALUSrcD_1;
    vlSelf->__PVT___id2ex_io1_RegWriteD = vlSelf->__PVT___cu_io_RegWriteD;
    vlSelf->__PVT___id2ex_io_ImmD = vlSelf->__PVT___cu_io_ImmD;
    vlSelf->__PVT___id2ex_io1_csr_control = vlSelf->__PVT___cu_io_csr_control;
    vlSelf->__PVT___id2ex_io1_muldiv_control = vlSelf->__PVT___cu_io_muldiv_control;
    vlSelf->__PVT___id2ex_io1_muldiv_cal = vlSelf->__PVT___cu_io_muldiv_cal;
    vlSelf->__PVT___id2ex_io1_ALUCtrlD = vlSelf->__PVT___cu_io_ALUCtrlD;
    vlSelf->__PVT___id2ex_io1_alu_cal = vlSelf->__PVT___cu_io_alu_cal;
    vlSelf->__PVT___RD2ForWardE_p_T_3 = ((2U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                          ? vlSelf->__PVT__resultE2M_Reg
                                          : vlSelf->__PVT___RD2ForWardE_p_T_1);
    vlSelf->__PVT___RD1ForWardE_p_T_3 = ((2U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                          ? vlSelf->__PVT__resultE2M_Reg
                                          : vlSelf->__PVT___RD1ForWardE_p_T_1);
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len 
        = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__data_size));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__debug_pc 
        = vlSelf->__PVT___commit_difftest_debug_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush 
        = vlSelf->__PVT__fifo_with_bundle_io_point_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException 
        = vlSelf->__PVT___cfu_io_InException;
    vlSelf->__PVT__Forward_csr_data = ((2U == (IData)(vlSelf->__PVT___cfu_io_ForwardcsrE))
                                        ? vlSelf->__PVT___mem2mem2_io_WriteDataM
                                        : vlSelf->__PVT___Forward_csr_data_T_1);
    vlSelf->__PVT___id2ex_io_RD2D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR2D_T_2);
    vlSelf->__PVT___br_io_r2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR2D_T_2);
    vlSelf->__PVT___id2ex_io_RD1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                      ? vlSelf->__PVT__resultE2M_Reg
                                      : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT__BranchR1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___br_io_r1 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegDstD 
        = vlSelf->__PVT___id2ex_io1_RegDstD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ebreakD 
        = vlSelf->__PVT___id2ex_io1_ebreakD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemToRegD 
        = vlSelf->__PVT___id2ex_io1_MemToRegD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWriteD 
        = vlSelf->__PVT___id2ex_io1_MemWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LoadUnsignedD 
        = vlSelf->__PVT___id2ex_io1_LoadUnsignedD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_dmem_calD 
        = vlSelf->__PVT___cfu_io_dmem_calD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWidthD 
        = vlSelf->__PVT___id2ex_io1_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_0 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_0;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LinkD 
        = vlSelf->__PVT___id2ex_io1_LinkD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csrWriteD 
        = vlSelf->__PVT___id2ex_io1_csrWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csrToRegD 
        = vlSelf->__PVT___id2ex_io1_csrToRegD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_data_wD 
        = vlSelf->__PVT___id2ex_io1_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csr_Imm 
        = vlSelf->__PVT___id2ex_io1_csr_Imm;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_11 
        = ((IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T_3)
            ? 0x80000000U : 0U);
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6 
        = ((IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T)
            ? 0x400U : 0U);
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_8 
        = ((IData)(vlSelf->__PVT_____05Fif2id_io_InstrF_T_1)
            ? 0x100U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_1 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegWriteD 
        = vlSelf->__PVT___id2ex_io1_RegWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmD 
        = vlSelf->__PVT___id2ex_io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csr_control 
        = vlSelf->__PVT___id2ex_io1_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSelf->__PVT___id2ex_io1_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSelf->__PVT___id2ex_io1_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUCtrlD 
        = vlSelf->__PVT___id2ex_io1_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal 
        = vlSelf->__PVT___id2ex_io1_alu_cal;
    vlSelf->__PVT__RD2ForWardE_p = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward2E))
                                     ? vlSelf->__PVT__ResultM2_Reg
                                     : vlSelf->__PVT___RD2ForWardE_p_T_3);
    vlSelf->__PVT__RD1ForWardE_p = ((3U == (IData)(vlSelf->__PVT___cfu_io_Forward1E))
                                     ? vlSelf->__PVT__ResultM2_Reg
                                     : vlSelf->__PVT___RD1ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_len 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2D 
        = vlSelf->__PVT___id2ex_io_RD2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2 
        = vlSelf->__PVT___br_io_r2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1D 
        = vlSelf->__PVT___id2ex_io_RD1D;
    vlSelf->__PVT___PCJumpD_T_58 = (vlSelf->__PVT__BranchR1D 
                                    + vlSelf->__PVT___PCJumpD_T_56);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
        = vlSelf->__PVT___br_io_r1;
    vlSelf->__PVT___GEN_15 = VL_EXTEND_II(11,9, (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_8));
    vlSelf->__PVT___ex2mem_io_WriteDataE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                             ? vlSelf->__PVT__RD2ForWardE_r
                                             : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT___ex2mem_io_RtE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                      ? vlSelf->__PVT__RD2ForWardE_r
                                      : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT___dmemreq_io_WriteDataE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                              ? vlSelf->__PVT__RD2ForWardE_r
                                              : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT__RD2ForWardE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                   ? vlSelf->__PVT__RD2ForWardE_r
                                   : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT__RD1ForWardE = ((IData)(vlSelf->__PVT__Forward_Lock1E)
                                   ? vlSelf->__PVT__RD1ForWardE_r
                                   : vlSelf->__PVT__RD1ForWardE_p);
    vlSelf->__PVT__PCJumpD = ((IData)(vlSelf->__PVT__pre_decoder_jr)
                               ? vlSelf->__PVT___PCJumpD_T_58
                               : vlSelf->__PVT___PCJumpD_T_60);
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_9 
        = ((IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_6) 
           | (IData)(vlSelf->__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteDataE 
        = vlSelf->__PVT___ex2mem_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtE 
        = vlSelf->__PVT___ex2mem_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE 
        = vlSelf->__PVT___dmemreq_io_WriteDataE;
    vlSelf->__PVT___muldiv_io_in2 = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_1)
                                      ? vlSelf->__PVT___id2ex_io_ImmE
                                      : vlSelf->__PVT__RD2ForWardE);
    vlSelf->__PVT__Src2E = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_1)
                             ? vlSelf->__PVT___id2ex_io_ImmE
                             : vlSelf->__PVT__RD2ForWardE);
    vlSelf->__PVT__csr_src1 = ((IData)(vlSelf->__PVT___id2ex_io_csr_ImmE)
                                ? VL_EXTEND_QI(64,6, (IData)(vlSelf->__PVT___csr_src1_T_1))
                                : vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT___muldiv_io_in1 = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_0)
                                      ? vlSelf->__PVT___id2ex_io2_PCE
                                      : vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT__Src1E = ((IData)(vlSelf->__PVT___id2ex_io2_ALUSrcE_0)
                             ? vlSelf->__PVT___id2ex_io2_PCE
                             : vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT___addr_cal_io_d_vaddr = (vlSelf->__PVT___id2ex_io_ImmE 
                                           + vlSelf->__PVT__RD1ForWardE);
    vlSelf->__PVT___Pc_targetD_T_2 = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                       ? vlSelf->__PVT__PCJumpD
                                       : 0ULL);
    vlSelf->__PVT__target_neq_jumpD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                       != vlSelf->__PVT__PCJumpD);
    vlSelf->__PVT___GEN_16 = VL_EXTEND_II(32,11, (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in2 
        = vlSelf->__PVT___muldiv_io_in2;
    vlSelf->__PVT___alu_io_in2 = VL_CONCAT_QII(64,32,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src2E, 0x20U, 0x20U), 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src2E, 0U, 0x20U));
    vlSelf->__PVT___CalCsrDataE_T_11 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T_7), 0U))
                                         ? vlSelf->__PVT__csr_src1
                                         : 0ULL);
    vlSelf->__PVT___CalCsrDataE_T_2 = (vlSelf->__PVT__Forward_csr_data 
                                       | vlSelf->__PVT__csr_src1);
    vlSelf->__PVT___CalCsrDataE_T_5 = (~ vlSelf->__PVT__csr_src1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in1 
        = vlSelf->__PVT___muldiv_io_in1;
    vlSelf->__PVT___alu_io_in1 = VL_CONCAT_QII(64,32,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src1E, 0x20U, 0x20U), 
                                               VL_SEL_IQII(64, vlSelf->__PVT__Src1E, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSelf->__PVT___addr_cal_io_d_vaddr;
    vlSelf->__PVT__ex_bru_state_io_in_target_pc = ((IData)(vlSelf->__PVT__pre_decoder_branchD_flag)
                                                    ? vlSelf->__PVT__PCBranchD
                                                    : vlSelf->__PVT___Pc_targetD_T_2);
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12 
        = (vlSelf->__PVT___GEN_16 | vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_11);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2 
        = vlSelf->__PVT___alu_io_in2;
    vlSelf->__PVT___CalCsrDataE_T_9 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T), 0U))
                                        ? vlSelf->__PVT___CalCsrDataE_T_2
                                        : 0ULL);
    vlSelf->__PVT___CalCsrDataE_T_6 = (vlSelf->__PVT__Forward_csr_data 
                                       & vlSelf->__PVT___CalCsrDataE_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
        = vlSelf->__PVT___alu_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__ex_bru_state_io_in_target_pc;
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13 
        = ((0ULL == vlSelf->__PVT__ExceptionTypeD_Out)
            ? VL_EXTEND_QI(64,32, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_12)
            : vlSelf->__PVT__ExceptionTypeD_Out);
    vlSelf->__PVT___CalCsrDataE_T_10 = ((1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT___CalCsrDataE_T_3), 0U))
                                         ? vlSelf->__PVT___CalCsrDataE_T_6
                                         : 0ULL);
    vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 
        = (((0U != (IData)(vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T)) 
            & (IData)(vlSelf->__PVT___csr_io_Int_able))
            ? 1ULL : vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_13);
    vlSelf->__PVT___CalCsrDataE_T_12 = (vlSelf->__PVT___CalCsrDataE_T_9 
                                        | vlSelf->__PVT___CalCsrDataE_T_10);
    vlSelf->__PVT___id2ex_io_ExceptionTypeD = VL_SEL_IQII(64, vlSelf->__PVT_____05Fid2ex_io_ExceptionTypeD_T_14, 0U, 0x20U);
    vlSelf->__PVT___ex2mem_io_CsrWritedataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                               | vlSelf->__PVT___CalCsrDataE_T_11);
    vlSelf->__PVT__CalCsrDataE = (vlSelf->__PVT___CalCsrDataE_T_12 
                                  | vlSelf->__PVT___CalCsrDataE_T_11);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeD 
        = vlSelf->__PVT___id2ex_io_ExceptionTypeD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataE 
        = vlSelf->__PVT___ex2mem_io_CsrWritedataE;
    vlSelf->__PVT___resultE_T_3 = ((IData)(vlSelf->__PVT__csrToRegE)
                                    ? vlSelf->__PVT__CalCsrDataE
                                    : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_write_en = vlSelf->__PVT__inst_write_en;
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
    vlSelf->__PVT__stage_fec_2_inst_jump = (1U & VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x21U));
    vlSelf->__PVT__stage_fec_2_inst_branch = (1U & 
                                              VL_BITSEL_IQII(40, vlSelf->__PVT__inst_sram_rdata_L, 0x20U));
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
    vlSelf->__PVT___dmem_io_data_pending = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
    vlSelf->__PVT___dmem_io_RD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD;
    vlSelf->__PVT___cfu_io_FlushM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM2;
    vlSelf->__PVT___cfu_io_FlushD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
    vlSelf->__PVT___br_io_exe = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
    vlSelf->__PVT___muldiv_io_data_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_data_out;
    vlSelf->__PVT___addr_cal_io_d_cached = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_cached;
    vlSelf->__PVT___addr_cal_io_d_paddr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
    vlSelf->__PVT___alu_io_overflow = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_overflow;
    vlSelf->__PVT___alu_io_result = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD 
        = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__inst_buffer_write_bundle_inst, 0U, 7U));
    vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D 
        = (7U & VL_SEL_IIII(32, vlSelf->__PVT__inst_buffer_write_bundle_inst, 0xcU, 3U));
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
    vlSelf->__PVT___cfu_io_DataPendingM = vlSelf->__PVT___dmem_io_data_pending;
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
    vlSelf->__PVT___mem2_exception_T = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___mem2mem2_io_clr = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT__mem2_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushM2;
    vlSelf->__PVT___pre_decoder_branchD_flag_T = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT__id_bru_state_io_flush = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___if2id_io_clr = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___PCSrcD_T_3 = vlSelf->__PVT___br_io_exe;
    vlSelf->__PVT___resultE_T_5 = ((IData)(vlSelf->__PVT___id2ex_io_muldiv_calE)
                                    ? vlSelf->__PVT___muldiv_io_data_out
                                    : 0ULL);
    vlSelf->__PVT__data_cache = vlSelf->__PVT___addr_cal_io_d_cached;
    vlSelf->__PVT___ex2mem_io_PhyAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
    vlSelf->__PVT___dmemreq_io_VAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
    vlSelf->__PVT___temp_exceptionE_T_11 = ((IData)(vlSelf->__PVT___alu_io_overflow)
                                             ? 0x1000U
                                             : 0U);
    vlSelf->__PVT___resultE_T_2 = ((IData)(vlSelf->__PVT___id2ex_io_alu_calE)
                                    ? vlSelf->__PVT___alu_io_result
                                    : 0ULL);
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr 
        = ((0x67U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD)) 
           & (0U == (IData)(vlSelf->__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSelf->__PVT___cfu_io_DataPendingM;
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
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_cache 
        = vlSelf->__PVT__data_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___ex2mem_io_PhyAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSelf->__PVT___dmemreq_io_VAddrE;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeE = ((0U 
                                                 != vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out)
                                                 ? vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out
                                                 : 
                                                VL_EXTEND_II(32,13, (IData)(vlSelf->__PVT___temp_exceptionE_T_11)));
    vlSelf->__PVT___resultE_T_6 = (vlSelf->__PVT___resultE_T_2 
                                   | vlSelf->__PVT___resultE_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr;
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
    vlSelf->__PVT___id2ex_io_Pc_NextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                          ? vlSelf->__PVT__PCJumpD
                                          : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT__PC_nextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                ? vlSelf->__PVT__PCJumpD
                                : vlSelf->__PVT___PC_nextD_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_cache 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___ex2mem_io_ExceptionTypeE;
    vlSelf->__PVT___resultE_T_7 = (vlSelf->__PVT___resultE_T_6 
                                   | vlSelf->__PVT___resultE_T_4);
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextD 
        = vlSelf->__PVT___id2ex_io_Pc_NextD;
    vlSelf->__PVT__resultE = (vlSelf->__PVT___resultE_T_7 
                              | vlSelf->__PVT___resultE_T_5);
    vlSelf->__PVT___Mem_withRL_Data_T_33 = ((2U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                             ? vlSelf->__PVT___Mem_withRL_Data_T_15
                                             : vlSelf->__PVT___dmem_io_RD);
    vlSelf->__PVT__Mem_withRL_Data = ((1U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                       ? vlSelf->__PVT___Mem_withRL_Data_T_31
                                       : vlSelf->__PVT___Mem_withRL_Data_T_33);
    vlSelf->__PVT___mem22wb_io_ResultM = ((IData)(vlSelf->__PVT___Forward_Lock1E_T_1)
                                           ? vlSelf->__PVT__Mem_withRL_Data
                                           : vlSelf->__PVT__ResultM2_Reg);
    vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___mem2mem2_io_mem_trace_budleM_mem_fetch_type), 1U))
            ? vlSelf->__PVT__Mem_withRL_Data : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultM 
        = vlSelf->__PVT___mem22wb_io_ResultM;
    vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data 
        = (vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_2 
           | vlSelf->__PVT_____05Fmem22wb_io_Mem_trace_budleM_data_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Mem_trace_budleM_data 
        = vlSelf->__PVT___mem22wb_io_Mem_trace_budleM_data;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
    vlSelf->__PVT___cfu_io_StallE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
    vlSelf->__PVT___cfu_io_FlushM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSelf->__PVT___cfu_io_StallM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2;
    vlSelf->__PVT___cfu_io_StallW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW;
    vlSelf->__PVT___cfu_io_FlushE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSelf->__PVT___cfu_io_StallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
    vlSelf->__PVT___cfu_io_FlushW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
    vlSelf->__PVT___dmemreq_io_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
    vlSelf->__PVT___dmemreq_io_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wstrb;
    vlSelf->__PVT___dmemreq_io_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wdata;
    vlSelf->__PVT__branch_prediction_with_blockram_io_bht_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_L;
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
    vlSelf->__PVT__data_sram_addr = vlSelf->__PVT___dmemreq_io_addr;
    vlSelf->__PVT__data_wstrb = vlSelf->__PVT___dmemreq_io_wstrb;
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT___dmemreq_io_wdata;
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
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr 
        = vlSelf->__PVT__data_sram_addr;
    vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data 
        = vlSelf->__PVT__data_sram_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en 
        = vlSelf->__PVT___dmemreq_io_en;
    vlSelf->__PVT__ready_to_branch = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_addr 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_data 
        = vlSelf->__PVT___ex2mem_io_mem_trace_budleE_data;
    vlSelf->__PVT___GEN_0 = ((~ ((((IData)(vlSelf->__PVT__pc_req_wait) 
                                   & (IData)(vlSelf->__PVT__inst_sram_en)) 
                                  | (IData)(vlSelf->__PVT___stage_fec_2_branch_answer_T_7)) 
                                 | ((IData)(vlSelf->__PVT__ready_to_branch) 
                                    & (IData)(vlSelf->__PVT__inst_sram_en)))) 
                             & (IData)(vlSelf->__PVT__pc_req_wait));
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__5\n"); );
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

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSelf->__PVT___cfu_io_StallF = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_target_L;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_hit_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_hit_0;
    vlSelf->__PVT___T_25 = vlSelf->__PVT___cfu_io_StallF;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSelf->__PVT__stage_fec_2_pre_target_0 = vlSelf->__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSelf->__PVT__fifo_with_bundle_io_read_en = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___T_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en 
        = vlSelf->__PVT__fifo_with_bundle_io_read_en;
}

VL_ATTR_COLD void Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___stl_sequent__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out;
    vlSelf->__PVT__branch_prediction_with_blockram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pre_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_L;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out;
    vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pht 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_out_L;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_true_branch_state;
    vlSelf->__PVT__stage1_valid_flush = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                         | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT___pc_next_wait_T = ((IData)(vlSelf->__PVT__ready_to_branch) 
                                      | (IData)(vlSelf->__PVT__stage_fec_2_branch_answer));
    vlSelf->__PVT__stage_fec_1_pc_next = ((IData)(vlSelf->__PVT__stage_fec_2_branch_answer)
                                           ? vlSelf->__PVT__stage_fec_2_pre_target_0
                                           : vlSelf->__PVT___stage_fec_1_pc_next_T_1);
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
    vlSelf->__PVT___Pc_Next_T_1 = ((IData)(vlSelf->__PVT__pc_req_wait)
                                    ? vlSelf->__PVT__pc_next_wait
                                    : vlSelf->__PVT__Pc_Next_normal);
    vlSelf->__PVT___Pc_Next_T_2 = ((IData)(vlSelf->__PVT__ready_to_branch)
                                    ? vlSelf->__PVT__Pc_Next_normal
                                    : vlSelf->__PVT___Pc_Next_T_1);
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
