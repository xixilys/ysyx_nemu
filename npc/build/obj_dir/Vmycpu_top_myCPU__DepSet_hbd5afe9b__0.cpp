// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_myCPU.h"

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_PCW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_PCW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_write_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_write_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__clock 
        = vlSelf->__PVT__wb_bru_state_clock;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__clock 
        = vlSelf->__PVT__mem2_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__clock 
        = vlSelf->__PVT__ex_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__clock 
        = vlSelf->__PVT__id_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__clock 
        = vlSelf->__PVT___if2id_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_L_clock;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__15(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__15\n"); );
    // Body
    vlSelf->__PVT___if2id_io_InstrD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__16(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__16\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegM;
    vlSelf->__PVT___ex2mem_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RegWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__17(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__17\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_ALUCtrlE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUCtrlE;
    vlSelf->__PVT___id2ex_io_RD2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD2E;
    vlSelf->__PVT___id2ex_io_ImmE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmE;
    vlSelf->__PVT___id2ex_io_RD1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1E;
    vlSelf->__PVT___id2ex_io_R1E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__18(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__18\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_WriteRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegM;
    vlSelf->__PVT___mem2mem2_io_RegWriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RegWriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__19(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__19\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__20(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__20\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_ResultW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultW;
    vlSelf->__PVT___mem22wb_io_WriteRegW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegW;
    vlSelf->__PVT___mem22wb_io_RegWriteW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteW_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__27(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__27\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD 
        = vlSelf->__PVT___cu_io1_InstrD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__28(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__28\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM 
        = vlSelf->__PVT___cfu_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM 
        = vlSelf->__PVT___cfu_io_WriteRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__29(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__29\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl 
        = vlSelf->__PVT___alu_io_ctrl;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E 
        = vlSelf->__PVT___cfu_io_R1E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__30(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__30\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2 
        = vlSelf->__PVT___cfu_io_RegWriteM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2 
        = vlSelf->__PVT___cfu_io_WriteRegM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__31(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__31\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pc 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__32(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__32\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW 
        = vlSelf->__PVT___cfu_io_WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset 
        = vlSelf->__PVT___cfu_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset 
        = vlSelf->__PVT___br_reset;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__36(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__36\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__wb_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__37(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__37\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_CP0WriteW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CP0WriteW;
    vlSelf->__PVT___mem22wb_io_WriteCP0SelW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0SelW;
    vlSelf->__PVT___mem22wb_io_WriteCP0AddrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0AddrW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__40(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__40\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_target_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__41(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__41\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_sel 
        = vlSelf->__PVT___cp0_io_cp0_write_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_addr 
        = vlSelf->__PVT___cp0_io_cp0_write_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__45(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__45\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__46(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__46\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_R2E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__47(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__47\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_MemToRegM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__2(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW 
        = vlSelf->__PVT___cfu_io_RegWriteW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__52(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__52\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R1D 
        = vlSelf->__PVT___id2ex_io_R1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_R2D 
        = vlSelf->__PVT___id2ex_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1 
        = vlSelf->__PVT___regfile_io_A1;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__53(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__53\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___mem2mem2_io1_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM 
        = vlSelf->__PVT___cfu_io_MemToRegM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__54(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__54\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E 
        = vlSelf->__PVT___cfu_io_R2E;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__55(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__55\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteRegM 
        = vlSelf->__PVT___mem22wb_io_WriteRegM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_RegWriteM 
        = vlSelf->__PVT___mem22wb_io_RegWriteM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2 
        = vlSelf->__PVT___cfu_io_MemToRegM2;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_R_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_M_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__clock 
        = vlSelf->__PVT__stage_fec_1_pc_R_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__clock 
        = vlSelf->__PVT__stage_fec_2_pc_L_clock;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__60(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__60\n"); );
    // Body
    vlSelf->__Vdly__int_instanceM = vlSelf->__PVT__int_instanceM;
    vlSelf->__Vdly__inst_tlb_exceptionM = vlSelf->__PVT__inst_tlb_exceptionM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch 
        = vlSelf->__PVT___br_io_branch;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__62(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__62\n"); );
    // Body
    vlSelf->__PVT__branch_prediction_with_blockram_io_lookup_data_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_lookup_data_0;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__64(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__64\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__65(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__65\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__66(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__66\n"); );
    // Body
    vlSelf->__PVT__stage_fec_2_pc_L_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__67(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__67\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__68(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__68\n"); );
    // Body
    vlSelf->__PVT___if2id_io_PCD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__69(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__69\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__wb_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__70(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__70\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_WriteCP0SelM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0SelM;
    vlSelf->__PVT___ex2mem_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___ex2mem_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PCM;
    vlSelf->__PVT___ex2mem_io_WriteCP0AddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0AddrM;
    vlSelf->__PVT___ex2mem_io_CP0WriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CP0WriteM;
    vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteCP0HiLoDataM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__71(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__71\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_muldiv_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_calE;
    vlSelf->__PVT___id2ex_io_alu_calE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_alu_calE;
    vlSelf->__PVT___id2ex_io2_eBreakE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_eBreakE;
    vlSelf->__PVT___id2ex_io2_LinkE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LinkE;
    vlSelf->__PVT___id2ex_io2_MemToRegE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemToRegE;
    vlSelf->__PVT___id2ex_io2_MemWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWriteE;
    vlSelf->__PVT___id2ex_io2_MemWidthE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_MemWidthE;
    vlSelf->__PVT___id2ex_io2_RegWriteE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegWriteE;
    vlSelf->__PVT___id2ex_io2_RegDstE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_RegDstE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_0;
    vlSelf->__PVT___id2ex_io2_PCE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCE;
    vlSelf->__PVT___id2ex_io2_ALUSrcE_1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_ALUSrcE_1;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__72(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__72\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemRLM;
    vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0HiLoDataM;
    vlSelf->__PVT___mem2mem2_io_WriteCP0AddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0AddrM;
    vlSelf->__PVT___mem2mem2_io_CP0WriteM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_CP0WriteM;
    vlSelf->__PVT___mem2mem2_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_MemWidthM;
    vlSelf->__PVT___mem2mem2_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___mem2mem2_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__74(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__74\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_BranchJump_JrW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_BranchJump_JrW;
    vlSelf->__PVT___mem22wb_io_ExceptionTypeW_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ExceptionTypeW_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__81(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__81\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_data 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__83(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__83\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pc 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__84(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__84\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D 
        = vlSelf->__PVT___cfu_io_R2D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D 
        = vlSelf->__PVT___cfu_io_R1D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__85(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__85\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_in 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_pht_ways_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__86(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__86\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io1_eBreakE = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemToRegE 
        = vlSelf->__PVT___dmemreq_io_MemToRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE 
        = vlSelf->__PVT___dmemreq_io_MemWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE 
        = vlSelf->__PVT___dmemreq_io_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE 
        = vlSelf->__PVT___cfu_io_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE 
        = vlSelf->__PVT___cfu_io_WriteRegE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__87(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__87\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH 
        = vlSelf->__PVT___dmem_io_WIDTH;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN 
        = vlSelf->__PVT___dmem_io_SIGN;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_Physisc_Address 
        = vlSelf->__PVT___dmem_io_Physisc_Address;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__88(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__88\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_bht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_exception_type_i 
        = vlSelf->__PVT___cp0_io_exception_type_i;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__89(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__89\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_btb_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_write 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_pht_write;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__93(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__93\n"); );
    // Body
    vlSelf->__PVT___cp0_io_epc = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_epc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__95(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__95\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_CanBranchD 
        = vlSelf->__PVT___cfu_io_CanBranchD;
    vlSelf->__PVT__pre_decoder_branchD_flag = vlSelf->__Vdly__pre_decoder_branchD_flag;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__97(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__97\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_BranchD_Flag 
        = vlSelf->__PVT___cfu_io_BranchD_Flag;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__98(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__98\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__ex_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__99(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__99\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__100(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__100\n"); );
    // Body
    vlSelf->__PVT___if2id_io_PCPlus4D = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4D;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__101(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__101\n"); );
    // Body
    vlSelf->__PVT___id2ex_io2_PCPlus4E = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_PCPlus4E;
    vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeE_Out;
    vlSelf->__PVT___id2ex_io_data_wE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_data_wE;
    vlSelf->__PVT___id2ex_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_muldiv_control;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__102(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__102\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__103(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__103\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_Pc_NextW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_Pc_NextW;
    vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0HiLoDataW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__106(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__106\n"); );
    // Body
    vlSelf->__PVT__fifo_with_bundle_io_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_full;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__107(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__107\n"); );
    // Body
    vlSelf->__PVT___if2id_io_ExceptionTypeD_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeD_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__112(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__112\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__ex_bru_state_io_in_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__114(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__114\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_WriteRegE 
        = vlSelf->__PVT___ex2mem_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___ex2mem_io1_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w 
        = vlSelf->__PVT___alu_io_data_w;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl 
        = vlSelf->__PVT___muldiv_io_ctrl;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__115(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__115\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0HiLoDataM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0HiLoDataM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__117(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__117\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__pc 
        = vlSelf->__PVT___commit_difftest_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_data 
        = vlSelf->__PVT___cp0_io_cp0_write_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_en 
        = vlSelf->__PVT___cp0_io_cp0_write_en;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__6(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__clock 
        = vlSelf->__PVT___mtrace_mod_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__clock 
        = vlSelf->__PVT___commit_difftest_clock;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__120(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__120\n"); );
    // Body
    vlSelf->__PVT___commit_difftest_data_ok_ok = vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__data_ok_ok;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__123(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__123\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_JRD 
        = vlSelf->__PVT___cfu_io_JRD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__124(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__124\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_target_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__125(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__125\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_eBreakW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_eBreakW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__128(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__128\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__130(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__130\n"); );
    // Body
    vlSelf->__PVT__debug_wb_rf_wnum = vlSelf->__PVT___regfile_io_A3;
    vlSelf->__PVT__debug_wb_rf_wdata = vlSelf->__PVT___regfile_io_WD3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3 
        = vlSelf->__PVT___regfile_io_WD3;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3 
        = vlSelf->__PVT___regfile_io_A3;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__131(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__131\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSelf->__PVT___regfile_io_reg_file_alL_out, vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_reg_file_alL_out);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__136(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__136\n"); );
    // Body
    VL_ASSIGN_W(2048,vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__gpr_wire, vlSelf->__PVT___commit_difftest_gpr_wire);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__7(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__reset 
        = vlSelf->__PVT__mem2_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__reset 
        = vlSelf->__PVT__wb_bru_state_reset;
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
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__139(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__139\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_bht 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_hashcode 
        = vlSelf->__PVT__fifo_with_bundle_io_write_in_0_pre_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__141(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__141\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_M_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__142(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__142\n"); );
    // Body
    vlSelf->__PVT__stage_fec_1_pc_R_io_out_pc_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_out_pc_value_out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__143(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__143\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__144(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__144\n"); );
    // Body
    vlSelf->__PVT__mem2_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__mem2_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__mem2_bru_state_io_out_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__mem2_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__mem2_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem2_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__145(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__145\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_target_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_target_pc;
    vlSelf->__PVT__ex_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__146(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__146\n"); );
    // Body
    vlSelf->__PVT__wb_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__14(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__14\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WriteCP0SelE 
        = vlSelf->__PVT___mem2mem2_io1_WriteCP0SelE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_WriteCP0AddrE 
        = vlSelf->__PVT___mem2mem2_io1_WriteCP0AddrE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__156(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__156\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_M_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__157(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__157\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_R_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__158(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__158\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem2_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem2_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem2_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__159(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__159\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__160(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__160\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_target_pc 
        = vlSelf->__PVT__mem_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__mem_bru_state_io_in_hashcode;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__161(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__161\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_PCE 
        = vlSelf->__PVT___mem2mem2_io1_PCE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__162(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__162\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_PCE 
        = vlSelf->__PVT___ex2mem_io1_PCE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__163(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__163\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0AddrM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0AddrM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_CP0WriteM 
        = vlSelf->__PVT___mem22wb_io_CP0WriteM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__164(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__164\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_in_pc_value_in 
        = vlSelf->__PVT__stage_fec_2_pc_L_io_in_pc_value_in;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__17(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__17\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0HiLoDataE 
        = vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__reset 
        = vlSelf->__PVT___cp0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__reset 
        = vlSelf->__PVT__fifo_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__reset 
        = vlSelf->__PVT__branch_prediction_with_blockram_reset;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__9(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__9\n"); );
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__reset 
        = vlSelf->__PVT__id_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__reset 
        = vlSelf->__PVT__ex_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__reset 
        = vlSelf->__PVT__mem_bru_state_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__reset 
        = vlSelf->__PVT__stage_fec_2_pc_R_reset;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__167(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__167\n"); );
    // Body
    vlSelf->__PVT__tlb_exception_cp0_writeM2 = vlSelf->__Vdly__tlb_exception_cp0_writeM2;
    vlSelf->__PVT__int_instanceM2 = vlSelf->__Vdly__int_instanceM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_int_i 
        = vlSelf->__PVT___cp0_io_int_i;
    vlSelf->__PVT__pre_decoder_jump = vlSelf->__Vdly__pre_decoder_jump;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__168(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__168\n"); );
    // Body
    vlSelf->__PVT___cp0_io_cp0_status = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_status;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__171(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__171\n"); );
    // Body
    vlSelf->__PVT__mem_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_bht;
    vlSelf->__PVT__mem_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__172(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__172\n"); );
    // Body
    vlSelf->__PVT__ex_bru_state_io_out_bht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_out_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__173(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__173\n"); );
    // Body
    vlSelf->__PVT__id_bru_state_io_out_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht_lookup_value;
    vlSelf->__PVT__id_bru_state_io_out_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_lookup_data;
    vlSelf->__PVT__id_bru_state_io_out_hashcode = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_hashcode;
    vlSelf->__PVT__id_bru_state_io_out_pht = vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_out_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__174(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__174\n"); );
    // Body
    vlSelf->__PVT___if2id_io_InDelaySlotD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InDelaySlotD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__175(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__175\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_RtM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtM;
    vlSelf->__PVT___ex2mem_io_MemRLM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemRLM;
    vlSelf->__PVT___ex2mem_io_InDelaySlotM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_InDelaySlotM;
    vlSelf->__PVT___ex2mem_io_PhyAddrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__176(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__176\n"); );
    // Body
    vlSelf->__PVT___mem2mem2_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextM;
    vlSelf->__PVT___mem2mem2_io_eBreakM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_eBreakM;
    vlSelf->__PVT___mem2mem2_io_Tlb_ControlM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Tlb_ControlM;
    vlSelf->__PVT___mem2mem2_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___mem2mem2_io_ExceptionTypeM_Out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeM_Out;
    vlSelf->__PVT___mem2mem2_io_InDelaySlotM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_InDelaySlotM;
    vlSelf->__PVT___mem2mem2_io_PCM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PCM;
    vlSelf->__PVT___mem2mem2_io_WriteCP0SelM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteCP0SelM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__177(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__177\n"); );
    // Body
    vlSelf->__PVT___mem22wb_io_InDelaySlotW = vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_InDelaySlotW;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__178(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__178\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_BranchJump_JrD 
        = vlSelf->__PVT___id2ex_io_BranchJump_JrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_NextDelaySlotD 
        = vlSelf->__PVT___if2id_io_NextDelaySlotD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__21(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__21\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem_bru_state_io_in_bht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__23(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__23\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3 
        = vlSelf->__PVT___regfile_io_WE3;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__188(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__188\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_bht 
        = vlSelf->__PVT__mem2_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__mem2_bru_state_io_in_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__189(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__189\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__mem_bru_state_io_in_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__190(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__190\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__ex_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_lookup_data 
        = vlSelf->__PVT__ex_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_hashcode 
        = vlSelf->__PVT__ex_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_pht 
        = vlSelf->__PVT__ex_bru_state_io_in_pht;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__191(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__191\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_InDelaySlotD 
        = vlSelf->__PVT___id2ex_io_InDelaySlotD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_PCD 
        = vlSelf->__PVT___id2ex_io_PCD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WriteCP0AddrD 
        = vlSelf->__PVT___id2ex_io_WriteCP0AddrD;
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
    vlSelf->__PVT___ExceptionTypeD_Out_T_6 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 1U))
                                               ? 4U
                                               : 0U);
    vlSelf->__PVT___ExceptionTypeD_Out_T_5 = ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___if2id_io_ExceptionTypeD_Out), 0U))
                                               ? 8U
                                               : 0U);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__192(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__192\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_RtE 
        = vlSelf->__PVT___mem2mem2_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___mem2mem2_io_PhyAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_WriteRegE 
        = vlSelf->__PVT___mem2mem2_io_WriteRegE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemRLE 
        = vlSelf->__PVT___mem2mem2_io1_MemRLE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_InDelaySlotE 
        = vlSelf->__PVT___mem2mem2_io1_InDelaySlotE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_RegWriteE 
        = vlSelf->__PVT___mem2mem2_io1_RegWriteE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__193(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__193\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_eBreakE 
        = vlSelf->__PVT___ex2mem_io1_eBreakE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___ex2mem_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_MemToRegE 
        = vlSelf->__PVT___ex2mem_io1_MemToRegE;
    vlSelf->__PVT___resultE_T_6 = ((IData)(vlSelf->__PVT___resultE_T_2)
                                    ? vlSelf->__PVT___id2ex_io2_PCPlus4E
                                    : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__194(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__194\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_tlb_write_en 
        = vlSelf->__PVT___cp0_io_cp0_tlb_write_en;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_WriteCP0SelM 
        = vlSelf->__PVT___mem22wb_io_WriteCP0SelM;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__25(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__25\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_in_branchjump_jr 
        = vlSelf->__PVT___cp0_io_in_branchjump_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_in_delayslot 
        = vlSelf->__PVT___cp0_io_in_delayslot;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_pc 
        = vlSelf->__PVT___cp0_io_pc;
    vlSelf->__PVT__debug_wb_rf_wen = ((vlSelf->__PVT__reg_pc 
                                       == vlSelf->__PVT___mem22wb_io_PCW)
                                       ? 0U : (IData)(vlSelf->__PVT___debug_wb_rf_wen_T_2));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__196(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__196\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_eBreakE 
        = vlSelf->__PVT___mem2mem2_io1_eBreakE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__26(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__26\n"); );
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

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__30(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__30\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSelf->__PVT__mem_bru_state_io_in_pht_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSelf->__PVT___cfu_io_FlushM2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM2;
    vlSelf->__PVT___cfu_io_FlushD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_9 
        = ((9U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_9
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_8);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__br_Stall) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__dmem_addr_cal_Stall));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__11(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__11\n"); );
    // Body
    vlSelf->__PVT___cu_io_MemWidthD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWidthD;
    vlSelf->__PVT___pre_decoder_branchD_flag_T = vlSelf->__PVT___cfu_io_FlushD;
    vlSelf->__PVT___if2id_io_clr = vlSelf->__PVT___cfu_io_FlushD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_10 
        = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_10
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_9);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__12(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__12\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0a58f77d__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f45abac__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d823016__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa2d56a0__0;
    CData/*31:0*/ __Vtemp_h4b719866__0;
    VlWide<3>/*95:0*/ __Vtemp_hb4337f3c__0;
    VlWide<3>/*95:0*/ __Vtemp_hf1890241__0;
    CData/*31:0*/ __Vtemp_h4b7237fd__0;
    VlWide<3>/*95:0*/ __Vtemp_hc26969fd__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ba921ca__0;
    CData/*31:0*/ __Vtemp_h4b71c5d3__0;
    VlWide<3>/*95:0*/ __Vtemp_h41634c3b__0;
    CData/*31:0*/ __Vtemp_h8d0a1d40__0;
    VlWide<3>/*95:0*/ __Vtemp_h6c457ae8__0;
    CData/*31:0*/ __Vtemp_h8d0a0d72__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf5d0bdf__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3fe6b20__0;
    CData/*31:0*/ __Vtemp_h8d09bea6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3ea3ce2b__0;
    // Body
    vlSelf->__PVT___id2ex_io1_MemWidthD = vlSelf->__PVT___cu_io_MemWidthD;
    vlSelf->__PVT___ex2mem_io_RtE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                      ? vlSelf->__PVT__RD2ForWardE_r
                                      : vlSelf->__PVT__RD2ForWardE_p);
    vlSelf->__PVT___dmemreq_io_WriteDataE = ((IData)(vlSelf->__PVT__Forward_Lock2E)
                                              ? vlSelf->__PVT__RD2ForWardE_r
                                              : vlSelf->__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr 
        = vlSelf->__PVT___if2id_io_clr;
    vlSelf->__PVT___dmem_io_rdata = vlSelf->__PVT__data_sram_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_11 
        = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_11
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_10);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_RtE 
        = vlSelf->__PVT___ex2mem_io_RtE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_MemWidthD 
        = vlSelf->__PVT___id2ex_io1_MemWidthD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE 
        = vlSelf->__PVT___dmemreq_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata 
        = vlSelf->__PVT___dmem_io_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_12 
        = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_12
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_11);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    VL_CONCAT_WQI(65,33,32, __Vtemp_h0a58f77d__0, VL_EXTEND_QI(33,32, 
                                                               VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x20U)), 0U);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_74, __Vtemp_h0a58f77d__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_70 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x20U));
    VL_CONCAT_WIQ(65,9,56, __Vtemp_h1f45abac__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_30, __Vtemp_h1f45abac__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h2d823016__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_h2d823016__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_26 
        = VL_CONCAT_QIQ(57,9,48, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_55 
        = VL_CONCAT_QII(49,17,32, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_22 
        = VL_CONCAT_QIQ(49,9,40, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_51 
        = VL_CONCAT_QII(33,17,16, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_47 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_18 
        = VL_CONCAT_QII(41,9,32, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_14 
        = VL_CONCAT_QII(33,9,24, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_10 
        = VL_CONCAT_III(25,9,16, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_2 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_6 
        = VL_CONCAT_III(17,9,8, VL_EXTEND_II(9,8, (0xffU 
                                                   & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_816 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_856 
        = VL_EXTEND_QI(33,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_253 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x38U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_521 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x18U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_648 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x30U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_768 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x10U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_190 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x30U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_458 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x10U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_593 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_713 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 0x10U)));
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_127 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x28U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_395 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 8U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_9 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
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
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_11 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
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
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_64 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_332 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_3 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
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
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_7 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
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
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_8 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_10 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_2 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_6 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_1 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_5 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_4 
        = VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                        VL_CONCAT_III(6,1,5, (1U & 
                                              VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                      VL_CONCAT_III(5,1,4, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                    VL_CONCAT_III(4,1,3, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                  VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U))))))));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_13 
        = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_13
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_12 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_12)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_13 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_13)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_9 
        = VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(11,1,10, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(10,1,9, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(9,1,8, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_9)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_11 
        = VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(11,1,10, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(10,1,9, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(9,1,8, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_11)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_3 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_3))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_7 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_7))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_8 
        = VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(11,1,10, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(10,1,9, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(9,1,8, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_8)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_10 
        = VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(11,1,10, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(10,1,9, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(9,1,8, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_10)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_2 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_2))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_6 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_6))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_1 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_1))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_5 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_5))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_4 
        = VL_CONCAT_III(14,1,13, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                    VL_CONCAT_III(11,1,10, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                  VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_4))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_cached 
        = (4U == (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr, 0x1dU, 3U)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_14 
        = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_14
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_13);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallM_T_1 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM) 
                       | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallF_T_5 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T) 
            | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_812 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_12), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_12))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_852 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_13), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_13))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_9 
        = VL_CONCAT_III(24,1,23, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(23,1,22, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(22,1,21, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(21,1,20, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_9), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_9))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_11 
        = VL_CONCAT_III(24,1,23, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(23,1,22, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(22,1,21, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(21,1,20, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_11), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_11))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_3 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_3), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_3)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_7 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_7), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_7)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_8 
        = VL_CONCAT_III(24,1,23, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(23,1,22, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(22,1,21, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(21,1,20, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_8), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_8))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_10 
        = VL_CONCAT_III(24,1,23, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(23,1,22, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(22,1,21, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(21,1,20, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_10), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_10))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_2 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_2), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_2)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_6 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_6), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_6)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_1 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_1), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_1)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_5 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_5), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_5)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_4 
        = VL_CONCAT_III(28,1,27, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                        VL_CONCAT_III(27,1,26, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                      VL_CONCAT_III(26,1,25, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                    VL_CONCAT_III(25,1,24, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                  VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_4), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_4)))))))));
    vlSelf->__PVT___addr_cal_io_d_cached = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_cached;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_15 
        = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_15
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM) 
               & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallM_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallF_T_5))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_814 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_812, 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_854 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_852, 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_645 
        = VL_CONCAT_QIQ(64,1,63, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_QIQ(63,1,62, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_QIQ(62,1,61, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_QIQ(61,1,60, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_9), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_9), 
                                                                                VL_CONCAT_QII(40,24,16, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_9, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x30U, 0x10U)))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_765 
        = VL_CONCAT_QIQ(64,1,63, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_QIQ(63,1,62, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_QIQ(62,1,61, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_QIQ(61,1,60, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_11), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_11), 
                                                                                VL_CONCAT_QII(40,24,16, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_11, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x10U, 0x10U)))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_248 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_3), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_3), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_3)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_516 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_7), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_7), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_7)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_590 
        = VL_CONCAT_QIQ(64,1,63, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_QIQ(63,1,62, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_QIQ(62,1,61, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_QIQ(61,1,60, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_8), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_8), 
                                                                                VL_CONCAT_QII(40,24,16, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_8, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 0x10U)))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_710 
        = VL_CONCAT_QIQ(64,1,63, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_QIQ(63,1,62, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_QIQ(62,1,61, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_QIQ(61,1,60, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_10), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_10), 
                                                                                VL_CONCAT_QII(40,24,16, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_10, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 0x10U)))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_185 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_2), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_2), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_2)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_453 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_6), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_6), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_6)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_122 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_1), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_1), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_1)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_390 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_5), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_5), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_5)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_59 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_327 
        = VL_CONCAT_QIQ(56,1,55, (1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                        VL_CONCAT_QIQ(55,1,54, (1U 
                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                      VL_CONCAT_QIQ(54,1,53, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                    VL_CONCAT_QIQ(53,1,52, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                  VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_lo_4), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_lo_4), vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD_lo_4)))))))));
    vlSelf->__PVT___ex2mem_io_PhyAddrE = vlSelf->__PVT___addr_cal_io_d_paddr;
    vlSelf->__PVT__data_cache = vlSelf->__PVT___addr_cal_io_d_cached;
    vlSelf->__PVT___cfu_io_StallE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_16 
        = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_16
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_15);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW) 
              & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM) 
                 | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_817 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_814
            : VL_EXTEND_QQ(64,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_816));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_857 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_SIGN)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_854
            : VL_EXTEND_QQ(64,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_856));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_250 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_248, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x38U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_518 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_516, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x18U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_650 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_590
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_770 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_710
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_187 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_185, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x30U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_455 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_453, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x10U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_124 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_122, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x28U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_392 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_390, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 8U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_61 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_59, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0x20U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_329 
        = VL_CONCAT_QQI(64,56,8, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_327, 
                        (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_PhyAddrE 
        = vlSelf->__PVT___ex2mem_io_PhyAddrE;
    vlSelf->__PVT___cfu_io_FlushM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSelf->__PVT___commit_cache_reg_T = vlSelf->__PVT___cfu_io_StallE;
    vlSelf->__PVT___cfu_io_StallD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_17 
        = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_17
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_16);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra 
        = (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE, 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_858 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__third_ra)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_817
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_857);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_652 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_593)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_650);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_772 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_713)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_770);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_255 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_64))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_61);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_523 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_332))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_329);
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_cache 
        = vlSelf->__PVT__data_cache;
    vlSelf->__PVT___if2id_io_en = vlSelf->__PVT___cfu_io_StallD;
    vlSelf->__PVT___dmemreq_io_en = ((~ ((((IData)(vlSelf->__PVT__ex_exception) 
                                           | (IData)(vlSelf->__PVT__mem_exception)) 
                                          | (IData)(vlSelf->__PVT__mem2_exception)) 
                                         | (IData)(vlSelf->__PVT__wb_exception))) 
                                     & (IData)(vlSelf->__PVT___commit_cache_reg_T));
    vlSelf->__PVT___PCSrcD_T_1 = vlSelf->__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_18 
        = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_18
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_27 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_80 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xfU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_76 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_70
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 3U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_61 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_47
            : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 2U : 1U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_32 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_6
            : VL_EXTEND_II(17,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_2)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_654 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_645
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_652);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_774 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_765
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_772);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_257 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_124
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_255);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_525 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_392
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_523);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_cache 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSelf->__PVT___if2id_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en 
        = vlSelf->__PVT___dmemreq_io_en;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_19 
        = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_19
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_18);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_25 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xf0U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23)));
    VL_EXTEND_WQ(65,33, __Vtemp_hfa2d56a0__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_76);
    __Vtemp_h4b719866__0 = (4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_hb4337f3c__0, __Vtemp_h4b719866__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_74, __Vtemp_hfa2d56a0__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_78, __Vtemp_hb4337f3c__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xcU : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_63 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_51
            : VL_EXTEND_QI(33,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_61));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 4U : VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_1)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_34 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_10
            : VL_EXTEND_II(25,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_656 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_648)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_654);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_776 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_768)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_774);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_259 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_127))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_257);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_527 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_395))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_525);
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_cache 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_20 
        = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_20
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_19);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_65 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_55
            : VL_EXTEND_QQ(49,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_63));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_5 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 8U : VL_EXTEND_II(4,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_3)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_36 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_14
            : VL_EXTEND_QI(33,25, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_34));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_777 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__third_ra)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_656
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_776);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_261 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_187
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_259);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_529 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_455
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_527);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_21 
        = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_21
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_20);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_21 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19)));
    VL_EXTEND_WQ(65,49, __Vtemp_hf1890241__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_65);
    __Vtemp_h4b7237fd__0 = (6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_hc26969fd__0, __Vtemp_h4b7237fd__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_hf1890241__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_67, __Vtemp_hc26969fd__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_7 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x10U : VL_EXTEND_II(5,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_5)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_38 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_18
            : VL_EXTEND_QQ(41,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_263 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_190))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_261);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_531 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_458))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_529);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_22 
        = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_22
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_21);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_9 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x20U : VL_EXTEND_II(6,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_7)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_40 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_22
            : VL_EXTEND_QQ(49,41, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_265 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_250
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_263);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_533 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_518
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_531);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_23 
        = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_23
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_22);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_11 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x40U : VL_EXTEND_II(7,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_9)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_42 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_26
            : VL_EXTEND_QQ(57,49, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_40));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_267 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_253))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_265);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_535 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_1))
            ? VL_EXTEND_QI(64,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_521))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_533);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_24 
        = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_24
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_23);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_13 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x80U : VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_11)));
    VL_EXTEND_WQ(65,57, __Vtemp_h9ba921ca__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_42);
    __Vtemp_h4b71c5d3__0 = (7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h41634c3b__0, __Vtemp_h4b71c5d3__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_30, __Vtemp_h9ba921ca__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_44, __Vtemp_h41634c3b__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_536 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__third_ra)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_267
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_535);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_25 
        = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_25
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_24);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_0 
        = VL_EXTEND_II(2,1, (0x40U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LinkD 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | (2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_data_wD 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                      | ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                         | ((0x2aU 
                                             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                            | ((0x29U 
                                                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                               | ((0x28U 
                                                   == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                  | (0x27U 
                                                     == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))))))))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_29 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                      | ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                         | ((0x26U 
                                             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                            | ((0x25U 
                                                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                               | ((0x24U 
                                                   == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                  | (0x23U 
                                                     == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))))))))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_14 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_29 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_13));
    __Vtemp_h8d0a1d40__0 = (1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h6c457ae8__0, __Vtemp_h8d0a1d40__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_67, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_44);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_82, __Vtemp_h6c457ae8__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_860 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_777
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_536);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_26 
        = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_26
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_25);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_59 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                      | ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                         | ((0x34U 
                                             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                            | ((0x33U 
                                                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                               | ((0x32U 
                                                   == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                  | ((0x31U 
                                                      == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                                     | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_29))))))))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_16 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 1U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_31 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_29));
    __Vtemp_h8d0a0d72__0 = (2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_hdf5d0bdf__0, __Vtemp_h8d0a0d72__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_78, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_82);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_84, __Vtemp_hdf5d0bdf__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_862 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_858
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_860);
    vlSelf->__PVT___cu_io_data_wD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_data_wD;
    vlSelf->__PVT___cu_io_LinkD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_LinkD;
    vlSelf->__PVT___cu_io_ALUSrcD_0 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_0;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_27 
        = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_27
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_26);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 4U : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_16)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wstrb 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_31));
    VL_EXTEND_WQ(65,64, __Vtemp_hc3fe6b20__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_80);
    __Vtemp_h8d09bea6__0 = (3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h3ea3ce2b__0, __Vtemp_h8d09bea6__0, __Vtemp_hc3fe6b20__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_84);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_86, __Vtemp_h3ea3ce2b__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_WIDTH))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_rdata
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT___io_RD_T_862);
    vlSelf->__PVT___id2ex_io1_ALUSrcD_0 = vlSelf->__PVT___cu_io_ALUSrcD_0;
    vlSelf->__PVT___id2ex_io1_LinkD = vlSelf->__PVT___cu_io_LinkD;
    vlSelf->__PVT___id2ex_io1_data_wD = vlSelf->__PVT___cu_io_data_wD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_28 
        = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_28
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_27);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                          | ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                             | ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                | ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                                   | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_RegWriteD_T_89))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 8U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wdata 
        = VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_86, 0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_data_wD 
        = vlSelf->__PVT___id2ex_io1_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_LinkD 
        = vlSelf->__PVT___id2ex_io1_LinkD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_0 
        = vlSelf->__PVT___id2ex_io1_ALUSrcD_0;
    vlSelf->__PVT___dmemreq_io_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wstrb;
    vlSelf->__PVT___dmem_io_RD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_RD;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_29 
        = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_29
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_28);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20)));
    vlSelf->__PVT___cu_io_RegWriteD = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegWriteD;
    vlSelf->__PVT__data_wstrb = vlSelf->__PVT___dmemreq_io_wstrb;
    vlSelf->__PVT___dmemreq_io_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wdata;
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_30 
        = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_30
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_29);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x20U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22));
    vlSelf->__PVT___id2ex_io1_RegWriteD = vlSelf->__PVT___cu_io_RegWriteD;
    vlSelf->__PVT__data_sram_wdata = vlSelf->__PVT___dmemreq_io_wdata;
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_31 
        = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_31
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_30);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x40U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_wstrb 
        = vlSelf->__PVT__data_wstrb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegWriteD 
        = vlSelf->__PVT___id2ex_io1_RegWriteD;
    vlSelf->__PVT___mtrace_mod_data = vlSelf->__PVT__data_sram_wdata;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3) 
             & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___io_RD1_T_3))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_127);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3) 
             & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))) 
            & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_95);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_32 
        = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_32
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x80U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_data_wstrb 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_wstrb;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_wdata 
        = vlSelf->__PVT__data_sram_wdata;
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_33 
        = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_33
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_32);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100U : VL_EXTEND_II(16,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28)));
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_data_wstrb 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_data_wstrb;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_wdata 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_wdata;
    vlSelf->__PVT___regfile_io_RD2 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2;
    vlSelf->__PVT___regfile_io_RD1 = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1;
    vlSelf->__PVT___Mem_withRL_Data_T_33 = ((2U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                             ? vlSelf->__PVT___Mem_withRL_Data_T_15
                                             : vlSelf->__PVT___dmem_io_RD);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_34 
        = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_34
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_33);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x200U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30));
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wdata 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_wdata;
    vlSelf->__PVT___BranchR2D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD2);
    vlSelf->__PVT___BranchR1D_T_2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 1U))
                                      ? vlSelf->__PVT__ResultM2_Reg
                                      : vlSelf->__PVT___regfile_io_RD1);
    vlSelf->__PVT__Mem_withRL_Data = ((1U == (IData)(vlSelf->__PVT___mem2mem2_io_MemRLM))
                                       ? vlSelf->__PVT___Mem_withRL_Data_T_31
                                       : vlSelf->__PVT___Mem_withRL_Data_T_33);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_35 
        = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_35
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_34);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_34 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x400U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32));
    vlSelf->__PVT__BranchR1D = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___br_io_r1 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward1D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR1D_T_2);
    vlSelf->__PVT___br_io_r2 = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT___cfu_io_Forward2D), 0U))
                                 ? vlSelf->__PVT__resultE2M_Reg
                                 : vlSelf->__PVT___BranchR2D_T_2);
    vlSelf->__PVT___mem22wb_io_ResultM = ((IData)(vlSelf->__PVT___Forward_Lock1E_T_1)
                                           ? vlSelf->__PVT__Mem_withRL_Data
                                           : vlSelf->__PVT__ResultM2_Reg);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_36 
        = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_36
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_35);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_36 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_34));
    vlSelf->__PVT___PCJumpD_T_3 = (vlSelf->__PVT__BranchR1D 
                                   + vlSelf->__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2 
        = vlSelf->__PVT___br_io_r2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
        = vlSelf->__PVT___br_io_r1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_ResultM 
        = vlSelf->__PVT___mem22wb_io_ResultM;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_37 
        = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_37
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_36);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_38 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x800U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_36));
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
    vlSelf->__PVT__PCJumpD = ((IData)(vlSelf->__PVT__pre_decoder_jr)
                               ? vlSelf->__PVT___PCJumpD_T_3
                               : vlSelf->__PVT___PCJumpD_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_38 
        = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_38
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_37);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control 
        = VL_EXTEND_II(24,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result 
        = VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T), 
                        VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_1), 
                                      VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_4), 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_7), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_8), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_9))))));
    vlSelf->__PVT__target_neq_jumpD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                       != vlSelf->__PVT__PCJumpD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_39 
        = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_39
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_38);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal 
        = (0U != vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch));
    vlSelf->__PVT___cu_io_muldiv_control = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_40 
        = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_40
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_39);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset)) 
           & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7.__PVT__btb_data_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0.__PVT__io_doutb;
    vlSelf->__PVT___id2ex_io1_muldiv_control = vlSelf->__PVT___cu_io_muldiv_control;
    vlSelf->__PVT___cu_io_muldiv_cal = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_41 
        = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_41
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_40);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7.__PVT__btb_data_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSelf->__PVT___id2ex_io1_muldiv_control;
    vlSelf->__PVT___id2ex_io1_muldiv_cal = vlSelf->__PVT___cu_io_muldiv_cal;
    vlSelf->__PVT___br_io_exe = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_42 
        = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_42
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_41);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSelf->__PVT___id2ex_io1_muldiv_cal;
    vlSelf->__PVT___PCSrcD_T_3 = vlSelf->__PVT___br_io_exe;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_43 
        = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_43
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_42);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_4_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_3_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_7_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5.__PVT__io_rdata;
    vlSelf->__PVT___PC_nextD_T_2 = ((IData)(vlSelf->__PVT___PCSrcD_T_3)
                                     ? vlSelf->__PVT__PCBranchD
                                     : vlSelf->__PVT___if2id_io_PCPlus4D);
    vlSelf->__PVT__target_addr_error = (((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                         & (IData)(vlSelf->__PVT__target_neq_jumpD)) 
                                        | ((IData)(vlSelf->__PVT___PCSrcD_T_3) 
                                           & (IData)(vlSelf->__PVT__target_neq_branchD)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_44 
        = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_44
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_43);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_2_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_6_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_6_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_5_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_5_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_4_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_4_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_3_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_3_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_2_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_2_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_0_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_1_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_1_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_7_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_7_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_6_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_6_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_5_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_5_io_rdata;
    vlSelf->__PVT__PC_nextD = ((IData)(vlSelf->__PVT__pre_decoder_jump)
                                ? vlSelf->__PVT__PCJumpD
                                : vlSelf->__PVT___PC_nextD_T_2);
    vlSelf->__PVT__fifo_with_bundle_io_point_write_en 
        = ((IData)(vlSelf->__PVT___PCSrcD_T_1) & ((
                                                   ((IData)(vlSelf->__PVT__pre_decoder_jump) 
                                                    | (IData)(vlSelf->__PVT___PCSrcD_T_3)) 
                                                   != (IData)(vlSelf->__PVT__id_true_branch_state)) 
                                                  | (IData)(vlSelf->__PVT__target_addr_error)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_45 
        = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_45
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_44);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_42));
    vlSelf->__PVT__ready_to_branch = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSelf->__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_46 
        = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_46
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_45);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points)) 
            & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_length_points) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_length_points))) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_47 
        = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_47
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_46);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_44));
    vlSelf->__PVT__fifo_with_bundle_io_empty = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_48 
        = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_48
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_47);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_49 
        = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_49
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_48);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_50 
        = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_50
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_49);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_51 
        = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_51
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_50);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_52 
        = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_52
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_51);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_53 
        = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_53
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_52);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_54 
        = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_54
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_53);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_55 
        = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_55
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_54);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_56 
        = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_56
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_55);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_57 
        = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_57
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_56);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_58 
        = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_58
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_57);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_59 
        = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_59
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_60 
        = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_60
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_61 
        = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_61
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_62 
        = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_62
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_63 
        = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_63
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_64 
        = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_64
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_63);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_190 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_62 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_190 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_62 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_190 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_62 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_190 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_62 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_65 
        = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_65
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_64);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_191 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_63 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_191 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_63 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_191 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_63 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_191 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_63 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_66 
        = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_66
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_65);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_192 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_191));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_64 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_63));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_192 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_191));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_64 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_63));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_192 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_191));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_64 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_63));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_192 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_191));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_64 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_63));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_67 
        = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_67
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_66);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_193 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_192));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_65 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_64));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_193 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_192));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_65 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_64));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_193 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_192));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_65 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_64));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_193 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_192));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_65 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_64));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_68 
        = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_68
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_67);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_194 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_193));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_66 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_65));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_194 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_193));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_66 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_65));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_194 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_193));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_66 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_65));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_194 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_193));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_66 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_65));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_69 
        = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_69
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_68);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_195 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_194));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_67 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_66));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_195 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_194));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_67 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_66));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_195 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_194));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_67 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_66));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_195 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_194));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_67 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_66));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_70 
        = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_70
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_69);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_196 
        = ((0x44U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_68)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_195));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_68 
        = ((0x44U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_68)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_196 
        = ((0x44U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_68)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_195));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_68 
        = ((0x44U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_68)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_71 
        = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_71
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_70);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_197 
        = ((0x45U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_69)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_196));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_69 
        = ((0x45U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_69)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_197 
        = ((0x45U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_69)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_196));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_69 
        = ((0x45U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_69)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_72 
        = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_72
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_71);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_198 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_70)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_197));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_70 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_70)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_69));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_198 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_70)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_197));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_70 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_70)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_69));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_73 
        = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_73
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_72);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_199 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_71)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_198));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_71 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_71)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_70));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_199 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_71)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_198));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_71 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_71)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_70));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_74 
        = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_74
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_73);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_200 
        = ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_72)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_199));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_72 
        = ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_72)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_71));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_200 
        = ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_72)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_199));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_72 
        = ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_72)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_71));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_75 
        = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_75
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_74);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_201 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_73)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_200));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_73 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_73)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_72));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_201 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_73)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_200));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_73 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_73)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_72));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_76 
        = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_76
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_75);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_202 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_74)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_201));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_74 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_74)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_202 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_74)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_201));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_74 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_74)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_77 
        = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_77
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_76);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_203 
        = ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_75)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_202));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_75 
        = ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_75)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_203 
        = ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_75)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_202));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_75 
        = ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_75)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_78 
        = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_78
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_77);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_204 
        = ((0x4cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_76)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_203));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_76 
        = ((0x4cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_76)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_204 
        = ((0x4cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_76)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_203));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_76 
        = ((0x4cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_76)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_79 
        = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_79
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_78);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_205 
        = ((0x4dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_77)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_204));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_77 
        = ((0x4dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_77)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_205 
        = ((0x4dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_77)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_204));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_77 
        = ((0x4dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_77)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_80 
        = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_80
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_79);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_206 
        = ((0x4eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_78)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_205));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_78 
        = ((0x4eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_78)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_206 
        = ((0x4eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_78)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_205));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_78 
        = ((0x4eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_78)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_81 
        = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_81
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_80);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_207 
        = ((0x4fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_79)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_206));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_79 
        = ((0x4fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_79)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_207 
        = ((0x4fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_79)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_206));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_79 
        = ((0x4fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_79)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_82 
        = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_82
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_81);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_208 
        = ((0x50U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_80)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_207));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_80 
        = ((0x50U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_80)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_79));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_208 
        = ((0x50U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_80)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_207));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_80 
        = ((0x50U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_80)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_79));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_83 
        = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_83
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_82);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_209 
        = ((0x51U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_81)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_208));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_81 
        = ((0x51U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_81)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_80));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_209 
        = ((0x51U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_81)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_208));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_81 
        = ((0x51U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_81)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_80));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_84 
        = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_84
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_83);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_210 
        = ((0x52U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_82)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_209));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_82 
        = ((0x52U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_82)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_81));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_210 
        = ((0x52U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_82)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_209));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_82 
        = ((0x52U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_82)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_81));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_85 
        = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_85
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_84);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_211 
        = ((0x53U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_83)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_210));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_83 
        = ((0x53U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_83)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_82));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_211 
        = ((0x53U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_83)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_210));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_83 
        = ((0x53U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_83)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_82));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_86 
        = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_86
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_85);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_212 
        = ((0x54U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_84)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_211));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_84 
        = ((0x54U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_84)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_212 
        = ((0x54U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_84)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_211));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_84 
        = ((0x54U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_84)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_87 
        = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_87
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_86);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_213 
        = ((0x55U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_85)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_212));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_85 
        = ((0x55U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_85)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_213 
        = ((0x55U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_85)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_212));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_85 
        = ((0x55U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_85)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_88 
        = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_88
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_87);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_214 
        = ((0x56U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_86)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_213));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_86 
        = ((0x56U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_86)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_85));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_214 
        = ((0x56U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_86)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_213));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_86 
        = ((0x56U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_86)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_85));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_89 
        = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_89
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_88);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_215 
        = ((0x57U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_87)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_214));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_87 
        = ((0x57U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_87)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_86));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_215 
        = ((0x57U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_87)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_214));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_87 
        = ((0x57U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_87)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_86));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_90 
        = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_90
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_89);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_216 
        = ((0x58U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_88)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_215));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_88 
        = ((0x58U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_88)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_87));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_216 
        = ((0x58U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_88)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_215));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_88 
        = ((0x58U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_88)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_87));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_91 
        = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_91
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_90);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_217 
        = ((0x59U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_89)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_216));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_89 
        = ((0x59U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_89)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_88));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_217 
        = ((0x59U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_89)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_216));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_89 
        = ((0x59U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_89)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_88));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_92 
        = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_92
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_91);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_218 
        = ((0x5aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_90)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_217));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_90 
        = ((0x5aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_90)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_218 
        = ((0x5aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_90)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_217));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_90 
        = ((0x5aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_90)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_93 
        = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_93
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_92);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_219 
        = ((0x5bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_91)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_218));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_91 
        = ((0x5bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_91)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_219 
        = ((0x5bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_91)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_218));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_91 
        = ((0x5bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_91)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_94 
        = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_94
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_93);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_220 
        = ((0x5cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_92)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_219));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_92 
        = ((0x5cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_92)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_220 
        = ((0x5cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_92)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_219));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_92 
        = ((0x5cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_92)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_95 
        = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_95
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_94);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_221 
        = ((0x5dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_93)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_220));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_93 
        = ((0x5dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_93)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_221 
        = ((0x5dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_93)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_220));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_93 
        = ((0x5dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_93)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_96 
        = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_96
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_95);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_222 
        = ((0x5eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_94)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_221));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_94 
        = ((0x5eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_94)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_222 
        = ((0x5eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_94)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_221));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_94 
        = ((0x5eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_94)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_97 
        = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_97
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_96);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_223 
        = ((0x5fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_95)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_222));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_95 
        = ((0x5fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_95)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_223 
        = ((0x5fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_95)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_222));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_95 
        = ((0x5fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_95)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_98 
        = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_98
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_97);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_224 
        = ((0x60U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_96)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_223));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_96 
        = ((0x60U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_96)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_95));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_224 
        = ((0x60U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_96)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_223));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_96 
        = ((0x60U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_96)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_95));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_99 
        = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_99
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_98);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_225 
        = ((0x61U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_97)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_224));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_97 
        = ((0x61U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_97)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_96));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_225 
        = ((0x61U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_97)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_224));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_97 
        = ((0x61U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_97)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_96));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_100 
        = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_100
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_99);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_226 
        = ((0x62U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_98)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_225));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_98 
        = ((0x62U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_98)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_97));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_226 
        = ((0x62U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_98)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_225));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_98 
        = ((0x62U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_98)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_97));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_101 
        = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_101
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_100);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_227 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_99)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_226));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_99 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_99)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_98));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_227 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_99)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_226));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_99 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_99)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_98));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_102 
        = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_102
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_101);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_228 
        = ((0x64U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_100)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_227));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_100 
        = ((0x64U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_100)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_228 
        = ((0x64U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_100)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_227));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_100 
        = ((0x64U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_100)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_103 
        = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_103
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_102);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_229 
        = ((0x65U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_101)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_228));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_101 
        = ((0x65U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_101)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_229 
        = ((0x65U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_101)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_228));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_101 
        = ((0x65U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_101)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_104 
        = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_104
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_103);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_230 
        = ((0x66U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_102)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_229));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_102 
        = ((0x66U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_102)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_101));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_230 
        = ((0x66U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_102)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_229));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_102 
        = ((0x66U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_102)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_101));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_105 
        = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_105
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_104);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_231 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_103)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_230));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_103 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_103)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_102));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_231 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_103)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_230));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_103 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_103)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_102));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_106 
        = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_106
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_105);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_232 
        = ((0x68U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_104)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_231));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_104 
        = ((0x68U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_104)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_103));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_232 
        = ((0x68U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_104)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_231));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_104 
        = ((0x68U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_104)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_103));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__201(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__201\n"); );
    // Body
    vlSelf->__PVT___ex2mem_io_Pc_NextM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextM;
    vlSelf->__PVT___ex2mem_io_BranchJump_JrM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_BranchJump_JrM;
    vlSelf->__PVT___ex2mem_io_MemWidthM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_MemWidthM;
    vlSelf->__PVT___ex2mem_io_LoadUnsignedM = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_LoadUnsignedM;
    vlSelf->__PVT___ex2mem_io_ExceptionTypeM_Out = vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeM_Out;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__202(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__202\n"); );
    // Body
    vlSelf->__PVT___id2ex_io_Pc_NextE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_Pc_NextE;
    vlSelf->__PVT___id2ex_io2_BranchJump_JrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_BranchJump_JrE;
    vlSelf->__PVT___id2ex_io2_InDelaySlotE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_InDelaySlotE;
    vlSelf->__PVT___id2ex_io2_WriteCP0SelE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WriteCP0SelE;
    vlSelf->__PVT___id2ex_io2_WriteCP0AddrE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_WriteCP0AddrE;
    vlSelf->__PVT___id2ex_io2_LoadUnsignedE = vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io2_LoadUnsignedE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__33(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__33\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_ExceptionTypeE 
        = vlSelf->__PVT___mem2mem2_io_ExceptionTypeE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__208(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__208\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_WriteCP0SelD 
        = vlSelf->__PVT___id2ex_io_WriteCP0SelD;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__209(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__209\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___mem2mem2_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_Tlb_Control 
        = vlSelf->__PVT___mem2mem2_io1_Tlb_Control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___mem2mem2_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_MemWidthE 
        = vlSelf->__PVT___mem2mem2_io1_MemWidthE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___mem2mem2_io1_LoadUnsignedE;
    vlSelf->__PVT___mem2mem2_io1_CP0WriteE = (1U & 
                                              ((IData)(vlSelf->__PVT___Forward_for_epc_T) 
                                               | VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___ex2mem_io_Tlb_ControlM), 2U)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__210(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__210\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_Pc_NextE 
        = vlSelf->__PVT___ex2mem_io_Pc_NextE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_BranchJump_JrE 
        = vlSelf->__PVT___ex2mem_io1_BranchJump_JrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_InDelaySlotE 
        = vlSelf->__PVT___ex2mem_io1_InDelaySlotE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WriteCP0SelE 
        = vlSelf->__PVT___ex2mem_io1_WriteCP0SelE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_WriteCP0AddrE 
        = vlSelf->__PVT___ex2mem_io1_WriteCP0AddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io1_LoadUnsignedE 
        = vlSelf->__PVT___ex2mem_io1_LoadUnsignedE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__211(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__211\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_aw_bht_addr 
        = vlSelf->__PVT__branch_prediction_with_blockram_io_aw_bht_addr;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__212(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__212\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io1_CP0WriteE 
        = vlSelf->__PVT___mem2mem2_io1_CP0WriteE;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__13(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___combo__TOP__mycpu_top__u_riscv_cpu__13\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__reset 
        = vlSelf->__PVT___mtrace_mod_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__reset 
        = vlSelf->__PVT___commit_difftest_reset;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__213(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__213\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mtrace_mod.__PVT__pc 
        = vlSelf->__PVT___mtrace_mod_pc;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__214(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___sequent__TOP__mycpu_top__u_riscv_cpu__214\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__cpu_ebreak_sign 
        = vlSelf->__PVT___commit_difftest_cpu_ebreak_sign;
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__38(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__38\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___commit_difftest.__PVT__inst_commit 
        = vlSelf->__PVT___commit_difftest_inst_commit;
}
