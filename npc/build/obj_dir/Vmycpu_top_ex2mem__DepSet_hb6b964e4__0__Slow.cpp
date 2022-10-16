// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_ex2mem.h"

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__0(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__0\n"); );
    // Body
    vlSelf->__PVT__io_eBreakM = vlSelf->__PVT__eBreak_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__1(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__1\n"); );
    // Body
    vlSelf->__PVT__io_LoadUnsignedM = vlSelf->__PVT__LoadUnsigned_Reg;
    vlSelf->__PVT__io_MemWidthM = vlSelf->__PVT__MemWidth_Reg;
    vlSelf->__PVT__io_PhyAddrM = vlSelf->__PVT__PhyAddr_Reg;
    vlSelf->__PVT__io_InDelaySlotM = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__PVT__io_MemRLM = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__PVT__io_RtM = vlSelf->__PVT__RtM_Reg;
    vlSelf->__PVT__io_BranchJump_JrM = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__PVT__io_Pc_NextM = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_mem_trace_budleM_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__PVT__io_mem_trace_budleM_data = vlSelf->__PVT__mem_trace_budleReg_data;
    vlSelf->__PVT__io_mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__io_mem_trace_budleM_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__PVT__io_mem_trace_budleM_len = vlSelf->__PVT__mem_trace_budleReg_len;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__2(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__2\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0SelM = vlSelf->__PVT__WriteCP0Sel_Reg;
    vlSelf->__PVT__io_ExceptionTypeM_Out = vlSelf->__PVT__ExceptionType_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__3(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__3\n"); );
    // Body
    vlSelf->__PVT__io_Tlb_ControlM = vlSelf->__PVT__Tlb_Control_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__4(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__4\n"); );
    // Body
    vlSelf->__PVT__io_PCM = vlSelf->__PVT__PC_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__5(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__5\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0AddrM = vlSelf->__PVT__WriteCP0Addr_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__6(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__6\n"); );
    // Body
    vlSelf->__PVT__io_CP0WriteM = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__7(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___ex2mem__7\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteM = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__PVT__io_WriteRegM = vlSelf->__PVT__WriteReg_Reg;
    vlSelf->__PVT__io_MemToRegM = vlSelf->__PVT__MemToReg_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__0(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__0\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0SelM = vlSelf->__PVT__WriteCP0Sel_Reg;
    vlSelf->__PVT__io_PCM = vlSelf->__PVT__PC_Reg;
    vlSelf->__PVT__io_InDelaySlotM = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__PVT__io_ExceptionTypeM_Out = vlSelf->__PVT__ExceptionType_Reg;
    vlSelf->__PVT__io_BranchJump_JrM = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__PVT__io_Tlb_ControlM = vlSelf->__PVT__Tlb_Control_Reg;
    vlSelf->__PVT__io_eBreakM = vlSelf->__PVT__eBreak_Reg;
    vlSelf->__PVT__io_Pc_NextM = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_mem_trace_budleM_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__PVT__io_mem_trace_budleM_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__PVT__io_mem_trace_budleM_len = vlSelf->__PVT__mem_trace_budleReg_len;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__1(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__1\n"); );
    // Body
    vlSelf->__PVT__io_mem_trace_budleM_data = vlSelf->__PVT__mem_trace_budleReg_data;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__2(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__2\n"); );
    // Body
    vlSelf->__PVT__io_mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__3(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__3\n"); );
    // Body
    vlSelf->__PVT__io_MemRLM = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__4(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__4\n"); );
    // Body
    vlSelf->__PVT__io_CP0WriteM = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__PVT__io_WriteCP0AddrM = vlSelf->__PVT__WriteCP0Addr_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__5(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__5\n"); );
    // Body
    vlSelf->__PVT__io_RtM = vlSelf->__PVT__RtM_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__6(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__6\n"); );
    // Body
    vlSelf->__PVT__io_MemWidthM = vlSelf->__PVT__MemWidth_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__7(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__7\n"); );
    // Body
    vlSelf->__PVT__io_LoadUnsignedM = vlSelf->__PVT__LoadUnsigned_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__8(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__8\n"); );
    // Body
    vlSelf->__PVT__io_PhyAddrM = vlSelf->__PVT__PhyAddr_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__9(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__9\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteM = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__PVT__io_WriteRegM = vlSelf->__PVT__WriteReg_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__10(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___settle__TOP__mycpu_top__u_riscv_cpu___mem2mem2__10\n"); );
    // Body
    vlSelf->__PVT__io_MemToRegM = vlSelf->__PVT__MemToReg_Reg;
}

VL_ATTR_COLD void Vmycpu_top_ex2mem___ctor_var_reset(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io1_RegWriteE = 0;
    vlSelf->__PVT__io1_MemToRegE = 0;
    vlSelf->__PVT__io1_LoadUnsignedE = 0;
    vlSelf->__PVT__io1_MemWidthE = 0;
    vlSelf->__PVT__io1_CP0WriteE = 0;
    vlSelf->__PVT__io1_WriteCP0AddrE = 0;
    vlSelf->__PVT__io1_WriteCP0SelE = 0;
    vlSelf->__PVT__io1_PCE = 0;
    vlSelf->__PVT__io1_InDelaySlotE = 0;
    vlSelf->__PVT__io1_MemRLE = 0;
    vlSelf->__PVT__io1_BranchJump_JrE = 0;
    vlSelf->__PVT__io1_Tlb_Control = 0;
    vlSelf->__PVT__io1_eBreakE = 0;
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_clr = 0;
    vlSelf->__PVT__io_WriteRegE = 0;
    vlSelf->__PVT__io_PhyAddrE = 0;
    vlSelf->__PVT__io_WriteCP0HiLoDataE = 0;
    vlSelf->__PVT__io_ExceptionTypeE = 0;
    vlSelf->__PVT__io_RtE = 0;
    vlSelf->__PVT__io_Pc_NextE = 0;
    vlSelf->__PVT__io_mem_trace_budleE_pc = 0;
    vlSelf->__PVT__io_mem_trace_budleE_data = 0;
    vlSelf->__PVT__io_mem_trace_budleE_mem_fetch_type = 0;
    vlSelf->__PVT__io_mem_trace_budleE_addr = 0;
    vlSelf->__PVT__io_mem_trace_budleE_len = 0;
    vlSelf->__PVT__io_RegWriteM = 0;
    vlSelf->__PVT__io_MemToRegM = 0;
    vlSelf->__PVT__io_WriteRegM = 0;
    vlSelf->__PVT__io_LoadUnsignedM = 0;
    vlSelf->__PVT__io_MemWidthM = 0;
    vlSelf->__PVT__io_PhyAddrM = 0;
    vlSelf->__PVT__io_CP0WriteM = 0;
    vlSelf->__PVT__io_WriteCP0AddrM = 0;
    vlSelf->__PVT__io_WriteCP0SelM = 0;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = 0;
    vlSelf->__PVT__io_PCM = 0;
    vlSelf->__PVT__io_InDelaySlotM = 0;
    vlSelf->__PVT__io_ExceptionTypeM_Out = 0;
    vlSelf->__PVT__io_MemRLM = 0;
    vlSelf->__PVT__io_RtM = 0;
    vlSelf->__PVT__io_BranchJump_JrM = 0;
    vlSelf->__PVT__io_Tlb_ControlM = 0;
    vlSelf->__PVT__io_eBreakM = 0;
    vlSelf->__PVT__io_Pc_NextM = 0;
    vlSelf->__PVT__io_mem_trace_budleM_pc = 0;
    vlSelf->__PVT__io_mem_trace_budleM_data = 0;
    vlSelf->__PVT__io_mem_trace_budleM_mem_fetch_type = 0;
    vlSelf->__PVT__io_mem_trace_budleM_addr = 0;
    vlSelf->__PVT__io_mem_trace_budleM_len = 0;
    vlSelf->__PVT__RegWrite_Reg = 0;
    vlSelf->__PVT__MemToReg_Reg = 0;
    vlSelf->__PVT__WriteReg_Reg = 0;
    vlSelf->__PVT__LoadUnsigned_Reg = 0;
    vlSelf->__PVT__MemWidth_Reg = 0;
    vlSelf->__PVT__PhyAddr_Reg = 0;
    vlSelf->__PVT__CP0Write_Reg = 0;
    vlSelf->__PVT__WriteCP0Addr_Reg = 0;
    vlSelf->__PVT__WriteCP0Sel_Reg = 0;
    vlSelf->__PVT__WriteCP0HiLoData_Reg = 0;
    vlSelf->__PVT__PC_Reg = 0;
    vlSelf->__PVT__InDelaySlot_Reg = 0;
    vlSelf->__PVT__ExceptionType_Reg = 0;
    vlSelf->__PVT__MemRLM_Reg = 0;
    vlSelf->__PVT__RtM_Reg = 0;
    vlSelf->__PVT__BranchJump_JrM_Reg = 0;
    vlSelf->__PVT__Tlb_Control_Reg = 0;
    vlSelf->__PVT__eBreak_Reg = 0;
    vlSelf->__PVT__pc_nextReg = 0;
    vlSelf->__PVT__mem_trace_budleReg_pc = 0;
    vlSelf->__PVT__mem_trace_budleReg_data = 0;
    vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type = 0;
    vlSelf->__PVT__mem_trace_budleReg_addr = 0;
    vlSelf->__PVT__mem_trace_budleReg_len = 0;
    vlSelf->__Vdly__RegWrite_Reg = 0;
    vlSelf->__Vdly__MemToReg_Reg = 0;
    vlSelf->__Vdly__WriteReg_Reg = 0;
    vlSelf->__Vdly__LoadUnsigned_Reg = 0;
    vlSelf->__Vdly__MemWidth_Reg = 0;
    vlSelf->__Vdly__PhyAddr_Reg = 0;
    vlSelf->__Vdly__CP0Write_Reg = 0;
    vlSelf->__Vdly__WriteCP0Addr_Reg = 0;
    vlSelf->__Vdly__WriteCP0Sel_Reg = 0;
    vlSelf->__Vdly__WriteCP0HiLoData_Reg = 0;
    vlSelf->__Vdly__PC_Reg = 0;
    vlSelf->__Vdly__InDelaySlot_Reg = 0;
    vlSelf->__Vdly__ExceptionType_Reg = 0;
    vlSelf->__Vdly__MemRLM_Reg = 0;
    vlSelf->__Vdly__RtM_Reg = 0;
    vlSelf->__Vdly__BranchJump_JrM_Reg = 0;
    vlSelf->__Vdly__Tlb_Control_Reg = 0;
    vlSelf->__Vdly__eBreak_Reg = 0;
    vlSelf->__Vdly__pc_nextReg = 0;
    vlSelf->__Vdly__mem_trace_budleReg_pc = 0;
    vlSelf->__Vdly__mem_trace_budleReg_data = 0;
    vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type = 0;
    vlSelf->__Vdly__mem_trace_budleReg_addr = 0;
    vlSelf->__Vdly__mem_trace_budleReg_len = 0;
}
