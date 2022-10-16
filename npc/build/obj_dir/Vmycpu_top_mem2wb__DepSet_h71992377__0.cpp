// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mem2wb.h"

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__0(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__0\n"); );
    // Body
    vlSelf->__Vdly__PCW = vlSelf->__PVT__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__1(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCW = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCW = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCW = vlSelf->__PVT__io_PCM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__2(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__2\n"); );
    // Body
    vlSelf->__PVT__PCW = vlSelf->__Vdly__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__3(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__3\n"); );
    // Body
    vlSelf->__PVT__io_PCW = vlSelf->__PVT__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__4(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__4\n"); );
    // Body
    vlSelf->__Vdly__CP0WriteW = vlSelf->__PVT__CP0WriteW;
    vlSelf->__Vdly__ResultW = vlSelf->__PVT__ResultW;
    vlSelf->__Vdly__WriteRegW = vlSelf->__PVT__WriteRegW;
    vlSelf->__Vdly__RegWriteW = vlSelf->__PVT__RegWriteW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__5(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ResultW = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ResultW = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ResultW = vlSelf->__PVT__io_ResultM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RegWriteW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RegWriteW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RegWriteW = vlSelf->__PVT__io_RegWriteM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteRegW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteRegW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteRegW = vlSelf->__PVT__io_WriteRegM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__6(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__6\n"); );
    // Body
    vlSelf->__PVT__ResultW = vlSelf->__Vdly__ResultW;
    vlSelf->__PVT__WriteRegW = vlSelf->__Vdly__WriteRegW;
    vlSelf->__PVT__RegWriteW = vlSelf->__Vdly__RegWriteW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__7(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__7\n"); );
    // Body
    vlSelf->__PVT__io_ResultW = vlSelf->__PVT__ResultW;
    vlSelf->__PVT__io_RegWriteW_Out = vlSelf->__PVT__RegWriteW;
    vlSelf->__PVT__io_WriteRegW = vlSelf->__PVT__WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__8(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__8\n"); );
    // Body
    vlSelf->__Vdly__Mem_trace_budleReg_len = vlSelf->__PVT__Mem_trace_budleReg_len;
    vlSelf->__Vdly__Mem_trace_budleReg_addr = vlSelf->__PVT__Mem_trace_budleReg_addr;
    vlSelf->__Vdly__Mem_trace_budleReg_data = vlSelf->__PVT__Mem_trace_budleReg_data;
    vlSelf->__Vdly__Mem_trace_budleReg_pc = vlSelf->__PVT__Mem_trace_budleReg_pc;
    vlSelf->__Vdly__ebreak_Reg = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__pc_nextReg;
    vlSelf->__Vdly__BranchJump_JrW_Reg = vlSelf->__PVT__BranchJump_JrW_Reg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__9(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ebreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ebreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ebreak_Reg = vlSelf->__PVT__io_eBreakM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = vlSelf->__PVT__io_Mem_trace_budleM_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = vlSelf->__PVT__io_Mem_trace_budleM_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = vlSelf->__PVT__io_Mem_trace_budleM_addr;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = vlSelf->__PVT__io_Mem_trace_budleM_len;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type 
            = vlSelf->__PVT__io_Mem_trace_budleM_mem_fetch_type;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__io_Pc_NextM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = vlSelf->__PVT__io_BranchJump_JrM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__10(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__10\n"); );
    // Body
    vlSelf->__PVT__Mem_trace_budleReg_len = vlSelf->__Vdly__Mem_trace_budleReg_len;
    vlSelf->__PVT__Mem_trace_budleReg_addr = vlSelf->__Vdly__Mem_trace_budleReg_addr;
    vlSelf->__PVT__Mem_trace_budleReg_data = vlSelf->__Vdly__Mem_trace_budleReg_data;
    vlSelf->__PVT__Mem_trace_budleReg_pc = vlSelf->__Vdly__Mem_trace_budleReg_pc;
    vlSelf->__PVT__ebreak_Reg = vlSelf->__Vdly__ebreak_Reg;
    vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__pc_nextReg = vlSelf->__Vdly__pc_nextReg;
    vlSelf->__PVT__BranchJump_JrW_Reg = vlSelf->__Vdly__BranchJump_JrW_Reg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__11(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__11\n"); );
    // Body
    vlSelf->__PVT__io_eBreakW = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__PVT__io_Mem_trace_budleW_pc = vlSelf->__PVT__Mem_trace_budleReg_pc;
    vlSelf->__PVT__io_Mem_trace_budleW_data = vlSelf->__PVT__Mem_trace_budleReg_data;
    vlSelf->__PVT__io_Mem_trace_budleW_addr = vlSelf->__PVT__Mem_trace_budleReg_addr;
    vlSelf->__PVT__io_Mem_trace_budleW_len = vlSelf->__PVT__Mem_trace_budleReg_len;
    vlSelf->__PVT__io_Mem_trace_budleW_mem_fetch_type 
        = vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__io_Pc_NextW = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_BranchJump_JrW = vlSelf->__PVT__BranchJump_JrW_Reg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__12(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__12\n"); );
    // Body
    vlSelf->__Vdly__InDelaySlotW = vlSelf->__PVT__InDelaySlotW;
    vlSelf->__Vdly__WriteCP0SelW = vlSelf->__PVT__WriteCP0SelW;
    vlSelf->__Vdly__WriteCP0AddrW = vlSelf->__PVT__WriteCP0AddrW;
    vlSelf->__Vdly__ExceptionTypeW = vlSelf->__PVT__ExceptionTypeW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__13(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__13\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__InDelaySlotW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__InDelaySlotW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__InDelaySlotW = vlSelf->__PVT__io_InDelaySlotM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0AddrW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0AddrW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0AddrW = vlSelf->__PVT__io_WriteCP0AddrM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0SelW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0SelW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0SelW = vlSelf->__PVT__io_WriteCP0SelM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionTypeW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionTypeW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionTypeW = vlSelf->__PVT__io_ExceptionTypeM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__14(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__14\n"); );
    // Body
    vlSelf->__PVT__WriteCP0SelW = vlSelf->__Vdly__WriteCP0SelW;
    vlSelf->__PVT__WriteCP0AddrW = vlSelf->__Vdly__WriteCP0AddrW;
    vlSelf->__PVT__ExceptionTypeW = vlSelf->__Vdly__ExceptionTypeW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__15(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__15\n"); );
    // Body
    vlSelf->__PVT__io_WriteCP0AddrW = vlSelf->__PVT__WriteCP0AddrW;
    vlSelf->__PVT__io_WriteCP0SelW = vlSelf->__PVT__WriteCP0SelW;
    vlSelf->__PVT__io_ExceptionTypeW_Out = vlSelf->__PVT__ExceptionTypeW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__16(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__16\n"); );
    // Body
    vlSelf->__Vdly__WriteCP0HiLoDataW = vlSelf->__PVT__WriteCP0HiLoDataW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__17(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__17\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteCP0HiLoDataW = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteCP0HiLoDataW = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteCP0HiLoDataW = vlSelf->__PVT__io_WriteCP0HiLoDataM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__CP0WriteW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__CP0WriteW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__CP0WriteW = vlSelf->__PVT__io_CP0WriteM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__18(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__18\n"); );
    // Body
    vlSelf->__PVT__InDelaySlotW = vlSelf->__Vdly__InDelaySlotW;
    vlSelf->__PVT__WriteCP0HiLoDataW = vlSelf->__Vdly__WriteCP0HiLoDataW;
    vlSelf->__PVT__CP0WriteW = vlSelf->__Vdly__CP0WriteW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__19(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__19\n"); );
    // Body
    vlSelf->__PVT__io_InDelaySlotW = vlSelf->__PVT__InDelaySlotW;
    vlSelf->__PVT__io_WriteCP0HiLoDataW = vlSelf->__PVT__WriteCP0HiLoDataW;
    vlSelf->__PVT__io_CP0WriteW = vlSelf->__PVT__CP0WriteW;
}
