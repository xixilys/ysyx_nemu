// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_ex2mem.h"

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__0(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__0\n"); );
    // Body
    vlSelf->__Vdly__Tlb_Control_Reg = vlSelf->__PVT__Tlb_Control_Reg;
    vlSelf->__Vdly__WriteReg_Reg = vlSelf->__PVT__WriteReg_Reg;
    vlSelf->__Vdly__RegWrite_Reg = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__Vdly__MemToReg_Reg = vlSelf->__PVT__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__1(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RegWrite_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RegWrite_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RegWrite_Reg = vlSelf->__PVT__io1_RegWriteE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteReg_Reg = vlSelf->__PVT__io_WriteRegE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemToReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemToReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemToReg_Reg = vlSelf->__PVT__io1_MemToRegE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__2(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__2\n"); );
    // Body
    vlSelf->__PVT__WriteReg_Reg = vlSelf->__Vdly__WriteReg_Reg;
    vlSelf->__PVT__RegWrite_Reg = vlSelf->__Vdly__RegWrite_Reg;
    vlSelf->__PVT__MemToReg_Reg = vlSelf->__Vdly__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__3(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__3\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteM = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__PVT__io_WriteRegM = vlSelf->__PVT__WriteReg_Reg;
    vlSelf->__PVT__io_MemToRegM = vlSelf->__PVT__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__4(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__4\n"); );
    // Body
    vlSelf->__Vdly__eBreak_Reg = vlSelf->__PVT__eBreak_Reg;
    vlSelf->__Vdly__mem_trace_budleReg_len = vlSelf->__PVT__mem_trace_budleReg_len;
    vlSelf->__Vdly__mem_trace_budleReg_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__Vdly__mem_trace_budleReg_data = vlSelf->__PVT__mem_trace_budleReg_data;
    vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__pc_nextReg;
    vlSelf->__Vdly__BranchJump_JrM_Reg = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__Vdly__RtM_Reg = vlSelf->__PVT__RtM_Reg;
    vlSelf->__Vdly__MemRLM_Reg = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__Vdly__InDelaySlot_Reg = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__Vdly__PhyAddr_Reg = vlSelf->__PVT__PhyAddr_Reg;
    vlSelf->__Vdly__MemWidth_Reg = vlSelf->__PVT__MemWidth_Reg;
    vlSelf->__Vdly__LoadUnsigned_Reg = vlSelf->__PVT__LoadUnsigned_Reg;
    vlSelf->__Vdly__ExceptionType_Reg = vlSelf->__PVT__ExceptionType_Reg;
    vlSelf->__Vdly__WriteCP0Sel_Reg = vlSelf->__PVT__WriteCP0Sel_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__5(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__eBreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__eBreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__eBreak_Reg = vlSelf->__PVT__io1_eBreakE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__LoadUnsigned_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__LoadUnsigned_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__LoadUnsigned_Reg = vlSelf->__PVT__io1_LoadUnsignedE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemWidth_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemWidth_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemWidth_Reg = vlSelf->__PVT__io1_MemWidthE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PhyAddr_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PhyAddr_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PhyAddr_Reg = vlSelf->__PVT__io_PhyAddrE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__InDelaySlot_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__InDelaySlot_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__InDelaySlot_Reg = vlSelf->__PVT__io1_InDelaySlotE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemRLM_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemRLM_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemRLM_Reg = vlSelf->__PVT__io1_MemRLE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RtM_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RtM_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RtM_Reg = vlSelf->__PVT__io_RtE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = vlSelf->__PVT__io1_BranchJump_JrE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__io_Pc_NextE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_data = vlSelf->__PVT__io_mem_trace_budleE_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type 
            = vlSelf->__PVT__io_mem_trace_budleE_mem_fetch_type;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = vlSelf->__PVT__io_mem_trace_budleE_addr;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_len = vlSelf->__PVT__io_mem_trace_budleE_len;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = vlSelf->__PVT__io1_WriteCP0SelE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionType_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionType_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionType_Reg = vlSelf->__PVT__io_ExceptionTypeE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Tlb_Control_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Tlb_Control_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Tlb_Control_Reg = vlSelf->__PVT__io1_Tlb_Control;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__6(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__6\n"); );
    // Body
    vlSelf->__PVT__WriteCP0Sel_Reg = vlSelf->__Vdly__WriteCP0Sel_Reg;
    vlSelf->__PVT__Tlb_Control_Reg = vlSelf->__Vdly__Tlb_Control_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__7(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__7\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0SelM = vlSelf->__PVT__WriteCP0Sel_Reg;
    vlSelf->__PVT__io_Tlb_ControlM = vlSelf->__PVT__Tlb_Control_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__8(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__8\n"); );
    // Body
    vlSelf->__Vdly__mem_trace_budleReg_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__Vdly__PC_Reg = vlSelf->__PVT__PC_Reg;
    vlSelf->__Vdly__WriteCP0Addr_Reg = vlSelf->__PVT__WriteCP0Addr_Reg;
    vlSelf->__Vdly__CP0Write_Reg = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__Vdly__WriteCP0HiLoData_Reg = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__9(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = vlSelf->__PVT__io_mem_trace_budleE_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PC_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PC_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PC_Reg = vlSelf->__PVT__io1_PCE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = vlSelf->__PVT__io1_WriteCP0AddrE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__CP0Write_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__CP0Write_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__CP0Write_Reg = vlSelf->__PVT__io1_CP0WriteE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = vlSelf->__PVT__io_WriteCP0HiLoDataE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__10(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__10\n"); );
    // Body
    vlSelf->__PVT__PC_Reg = vlSelf->__Vdly__PC_Reg;
    vlSelf->__PVT__WriteCP0Addr_Reg = vlSelf->__Vdly__WriteCP0Addr_Reg;
    vlSelf->__PVT__CP0Write_Reg = vlSelf->__Vdly__CP0Write_Reg;
    vlSelf->__PVT__WriteCP0HiLoData_Reg = vlSelf->__Vdly__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__11(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__11\n"); );
    // Body
    vlSelf->__PVT__io_PCM = vlSelf->__PVT__PC_Reg;
    vlSelf->__PVT__io_WriteCP0AddrM = vlSelf->__PVT__WriteCP0Addr_Reg;
    vlSelf->__PVT__io_CP0WriteM = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__12(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__12\n"); );
    // Body
    vlSelf->__PVT__eBreak_Reg = vlSelf->__Vdly__eBreak_Reg;
    vlSelf->__PVT__mem_trace_budleReg_len = vlSelf->__Vdly__mem_trace_budleReg_len;
    vlSelf->__PVT__mem_trace_budleReg_addr = vlSelf->__Vdly__mem_trace_budleReg_addr;
    vlSelf->__PVT__mem_trace_budleReg_pc = vlSelf->__Vdly__mem_trace_budleReg_pc;
    vlSelf->__PVT__pc_nextReg = vlSelf->__Vdly__pc_nextReg;
    vlSelf->__PVT__PhyAddr_Reg = vlSelf->__Vdly__PhyAddr_Reg;
    vlSelf->__PVT__LoadUnsigned_Reg = vlSelf->__Vdly__LoadUnsigned_Reg;
    vlSelf->__PVT__ExceptionType_Reg = vlSelf->__Vdly__ExceptionType_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__13(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__13\n"); );
    // Body
    vlSelf->__PVT__io_eBreakM = vlSelf->__PVT__eBreak_Reg;
    vlSelf->__PVT__io_LoadUnsignedM = vlSelf->__PVT__LoadUnsigned_Reg;
    vlSelf->__PVT__io_PhyAddrM = vlSelf->__PVT__PhyAddr_Reg;
    vlSelf->__PVT__io_Pc_NextM = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_mem_trace_budleM_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__PVT__io_mem_trace_budleM_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__PVT__io_mem_trace_budleM_len = vlSelf->__PVT__mem_trace_budleReg_len;
    vlSelf->__PVT__io_ExceptionTypeM_Out = vlSelf->__PVT__ExceptionType_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__14(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__14\n"); );
    // Body
    vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__mem_trace_budleReg_data = vlSelf->__Vdly__mem_trace_budleReg_data;
    vlSelf->__PVT__BranchJump_JrM_Reg = vlSelf->__Vdly__BranchJump_JrM_Reg;
    vlSelf->__PVT__RtM_Reg = vlSelf->__Vdly__RtM_Reg;
    vlSelf->__PVT__MemRLM_Reg = vlSelf->__Vdly__MemRLM_Reg;
    vlSelf->__PVT__InDelaySlot_Reg = vlSelf->__Vdly__InDelaySlot_Reg;
    vlSelf->__PVT__MemWidth_Reg = vlSelf->__Vdly__MemWidth_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__15(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___ex2mem__15\n"); );
    // Body
    vlSelf->__PVT__io_MemWidthM = vlSelf->__PVT__MemWidth_Reg;
    vlSelf->__PVT__io_InDelaySlotM = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__PVT__io_MemRLM = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__PVT__io_RtM = vlSelf->__PVT__RtM_Reg;
    vlSelf->__PVT__io_BranchJump_JrM = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__PVT__io_mem_trace_budleM_data = vlSelf->__PVT__mem_trace_budleReg_data;
    vlSelf->__PVT__io_mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__0(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__0\n"); );
    // Body
    vlSelf->__Vdly__MemRLM_Reg = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__Vdly__RtM_Reg = vlSelf->__PVT__RtM_Reg;
    vlSelf->__Vdly__WriteReg_Reg = vlSelf->__PVT__WriteReg_Reg;
    vlSelf->__Vdly__RegWrite_Reg = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__Vdly__MemToReg_Reg = vlSelf->__PVT__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__1(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RegWrite_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RegWrite_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RegWrite_Reg = vlSelf->__PVT__io1_RegWriteE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteReg_Reg = vlSelf->__PVT__io_WriteRegE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemToReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemToReg_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemToReg_Reg = vlSelf->__PVT__io1_MemToRegE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__2(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__2\n"); );
    // Body
    vlSelf->__PVT__WriteReg_Reg = vlSelf->__Vdly__WriteReg_Reg;
    vlSelf->__PVT__RegWrite_Reg = vlSelf->__Vdly__RegWrite_Reg;
    vlSelf->__PVT__MemToReg_Reg = vlSelf->__Vdly__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__3(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__3\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteM = vlSelf->__PVT__RegWrite_Reg;
    vlSelf->__PVT__io_WriteRegM = vlSelf->__PVT__WriteReg_Reg;
    vlSelf->__PVT__io_MemToRegM = vlSelf->__PVT__MemToReg_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__4(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__4\n"); );
    // Body
    vlSelf->__Vdly__mem_trace_budleReg_len = vlSelf->__PVT__mem_trace_budleReg_len;
    vlSelf->__Vdly__mem_trace_budleReg_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__Vdly__mem_trace_budleReg_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__pc_nextReg;
    vlSelf->__Vdly__eBreak_Reg = vlSelf->__PVT__eBreak_Reg;
    vlSelf->__Vdly__BranchJump_JrM_Reg = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__Vdly__ExceptionType_Reg = vlSelf->__PVT__ExceptionType_Reg;
    vlSelf->__Vdly__InDelaySlot_Reg = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__Vdly__WriteCP0Sel_Reg = vlSelf->__PVT__WriteCP0Sel_Reg;
    vlSelf->__Vdly__mem_trace_budleReg_data = vlSelf->__PVT__mem_trace_budleReg_data;
    vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__Vdly__WriteCP0HiLoData_Reg = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__5(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0Sel_Reg = vlSelf->__PVT__io1_WriteCP0SelE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__InDelaySlot_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__InDelaySlot_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__InDelaySlot_Reg = vlSelf->__PVT__io1_InDelaySlotE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionType_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionType_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionType_Reg = vlSelf->__PVT__io_ExceptionTypeE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__BranchJump_JrM_Reg = vlSelf->__PVT__io1_BranchJump_JrE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__eBreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__eBreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__eBreak_Reg = vlSelf->__PVT__io1_eBreakE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__io_Pc_NextE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_pc = vlSelf->__PVT__io_mem_trace_budleE_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_addr = vlSelf->__PVT__io_mem_trace_budleE_addr;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_len = vlSelf->__PVT__io_mem_trace_budleE_len;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_data = vlSelf->__PVT__io_mem_trace_budleE_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type 
            = vlSelf->__PVT__io_mem_trace_budleE_mem_fetch_type;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemRLM_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemRLM_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemRLM_Reg = vlSelf->__PVT__io1_MemRLE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0HiLoData_Reg = vlSelf->__PVT__io_WriteCP0HiLoDataE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__6(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__6\n"); );
    // Body
    vlSelf->__PVT__mem_trace_budleReg_data = vlSelf->__Vdly__mem_trace_budleReg_data;
    vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__Vdly__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__MemRLM_Reg = vlSelf->__Vdly__MemRLM_Reg;
    vlSelf->__PVT__WriteCP0HiLoData_Reg = vlSelf->__Vdly__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__7(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__7\n"); );
    // Body
    vlSelf->__PVT__io_mem_trace_budleM_data = vlSelf->__PVT__mem_trace_budleReg_data;
    vlSelf->__PVT__io_mem_trace_budleM_mem_fetch_type 
        = vlSelf->__PVT__mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__io_MemRLM = vlSelf->__PVT__MemRLM_Reg;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = vlSelf->__PVT__WriteCP0HiLoData_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__8(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__8\n"); );
    // Body
    vlSelf->__Vdly__Tlb_Control_Reg = vlSelf->__PVT__Tlb_Control_Reg;
    vlSelf->__Vdly__PC_Reg = vlSelf->__PVT__PC_Reg;
    vlSelf->__Vdly__WriteCP0Addr_Reg = vlSelf->__PVT__WriteCP0Addr_Reg;
    vlSelf->__Vdly__CP0Write_Reg = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__Vdly__LoadUnsigned_Reg = vlSelf->__PVT__LoadUnsigned_Reg;
    vlSelf->__Vdly__PhyAddr_Reg = vlSelf->__PVT__PhyAddr_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__9(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PC_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PC_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PC_Reg = vlSelf->__PVT__io1_PCE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Tlb_Control_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Tlb_Control_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Tlb_Control_Reg = vlSelf->__PVT__io1_Tlb_Control;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__CP0Write_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__CP0Write_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__CP0Write_Reg = vlSelf->__PVT__io1_CP0WriteE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0Addr_Reg = vlSelf->__PVT__io1_WriteCP0AddrE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__LoadUnsigned_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__LoadUnsigned_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__LoadUnsigned_Reg = vlSelf->__PVT__io1_LoadUnsignedE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PhyAddr_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PhyAddr_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PhyAddr_Reg = vlSelf->__PVT__io_PhyAddrE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__10(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__10\n"); );
    // Body
    vlSelf->__PVT__WriteCP0Addr_Reg = vlSelf->__Vdly__WriteCP0Addr_Reg;
    vlSelf->__PVT__CP0Write_Reg = vlSelf->__Vdly__CP0Write_Reg;
    vlSelf->__PVT__LoadUnsigned_Reg = vlSelf->__Vdly__LoadUnsigned_Reg;
    vlSelf->__PVT__PhyAddr_Reg = vlSelf->__Vdly__PhyAddr_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__11(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__11\n"); );
    // Body
    vlSelf->__PVT__io_CP0WriteM = vlSelf->__PVT__CP0Write_Reg;
    vlSelf->__PVT__io_WriteCP0AddrM = vlSelf->__PVT__WriteCP0Addr_Reg;
    vlSelf->__PVT__io_LoadUnsignedM = vlSelf->__PVT__LoadUnsigned_Reg;
    vlSelf->__PVT__io_PhyAddrM = vlSelf->__PVT__PhyAddr_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__12(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__12\n"); );
    // Body
    vlSelf->__Vdly__MemWidth_Reg = vlSelf->__PVT__MemWidth_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__13(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__13\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RtM_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RtM_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RtM_Reg = vlSelf->__PVT__io_RtE;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__MemWidth_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__MemWidth_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__MemWidth_Reg = vlSelf->__PVT__io1_MemWidthE;
    }
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__14(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__14\n"); );
    // Body
    vlSelf->__PVT__RtM_Reg = vlSelf->__Vdly__RtM_Reg;
    vlSelf->__PVT__MemWidth_Reg = vlSelf->__Vdly__MemWidth_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__15(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__15\n"); );
    // Body
    vlSelf->__PVT__io_RtM = vlSelf->__PVT__RtM_Reg;
    vlSelf->__PVT__io_MemWidthM = vlSelf->__PVT__MemWidth_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__16(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__16\n"); );
    // Body
    vlSelf->__PVT__mem_trace_budleReg_len = vlSelf->__Vdly__mem_trace_budleReg_len;
    vlSelf->__PVT__mem_trace_budleReg_addr = vlSelf->__Vdly__mem_trace_budleReg_addr;
    vlSelf->__PVT__mem_trace_budleReg_pc = vlSelf->__Vdly__mem_trace_budleReg_pc;
    vlSelf->__PVT__pc_nextReg = vlSelf->__Vdly__pc_nextReg;
    vlSelf->__PVT__PC_Reg = vlSelf->__Vdly__PC_Reg;
    vlSelf->__PVT__WriteCP0Sel_Reg = vlSelf->__Vdly__WriteCP0Sel_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__17(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__17\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0SelM = vlSelf->__PVT__WriteCP0Sel_Reg;
    vlSelf->__PVT__io_PCM = vlSelf->__PVT__PC_Reg;
    vlSelf->__PVT__io_Pc_NextM = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_mem_trace_budleM_pc = vlSelf->__PVT__mem_trace_budleReg_pc;
    vlSelf->__PVT__io_mem_trace_budleM_addr = vlSelf->__PVT__mem_trace_budleReg_addr;
    vlSelf->__PVT__io_mem_trace_budleM_len = vlSelf->__PVT__mem_trace_budleReg_len;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__18(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__18\n"); );
    // Body
    vlSelf->__PVT__eBreak_Reg = vlSelf->__Vdly__eBreak_Reg;
    vlSelf->__PVT__Tlb_Control_Reg = vlSelf->__Vdly__Tlb_Control_Reg;
    vlSelf->__PVT__BranchJump_JrM_Reg = vlSelf->__Vdly__BranchJump_JrM_Reg;
    vlSelf->__PVT__ExceptionType_Reg = vlSelf->__Vdly__ExceptionType_Reg;
    vlSelf->__PVT__InDelaySlot_Reg = vlSelf->__Vdly__InDelaySlot_Reg;
}

VL_INLINE_OPT void Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__19(Vmycpu_top_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_ex2mem___sequent__TOP__mycpu_top__u_riscv_cpu___mem2mem2__19\n"); );
    // Body
    vlSelf->__PVT__io_InDelaySlotM = vlSelf->__PVT__InDelaySlot_Reg;
    vlSelf->__PVT__io_ExceptionTypeM_Out = vlSelf->__PVT__ExceptionType_Reg;
    vlSelf->__PVT__io_BranchJump_JrM = vlSelf->__PVT__BranchJump_JrM_Reg;
    vlSelf->__PVT__io_Tlb_ControlM = vlSelf->__PVT__Tlb_Control_Reg;
    vlSelf->__PVT__io_eBreakM = vlSelf->__PVT__eBreak_Reg;
}
