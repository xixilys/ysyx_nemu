// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_ID2EX_H_
#define VERILATED_VMYCPU_TOP_ID2EX_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_id2ex final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_clr,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_en,0,0);
        VL_IN8(__PVT__clock,0,0);
        VL_OUT8(__PVT__io_R1E,4,0);
        CData/*4:0*/ __PVT__R1E_Reg;
        CData/*4:0*/ __Vdly__R1E_Reg;
        VL_OUT64(__PVT__io_RD1E,63,0);
        VL_OUT64(__PVT__io_ImmE,63,0);
        QData/*63:0*/ __PVT__RD1E_Reg;
        QData/*63:0*/ __PVT__ImmE_Reg;
        QData/*63:0*/ __Vdly__RD1E_Reg;
        QData/*63:0*/ __Vdly__ImmE_Reg;
        VL_IN64(__PVT__io_RD1D,63,0);
        VL_IN64(__PVT__io_ImmD,63,0);
        VL_IN8(__PVT__io1_ALUSrcD_1,1,0);
        VL_OUT8(__PVT__io2_MemToRegE,0,0);
        VL_OUT8(__PVT__io2_MemWriteE,0,0);
        VL_OUT8(__PVT__io2_ALUSrcE_0,0,0);
        VL_OUT8(__PVT__io2_ALUSrcE_1,0,0);
        VL_OUT8(__PVT__io2_LinkE,0,0);
        VL_OUT8(__PVT__io_R2E,4,0);
        VL_OUT8(__PVT__io_data_wE,0,0);
        CData/*0:0*/ __PVT__MemToRegE_Reg;
        CData/*0:0*/ __PVT__MemWriteE_Reg;
        CData/*1:0*/ __PVT__ALUSrcE_Reg_0;
        CData/*1:0*/ __PVT__ALUSrcE_Reg_1;
        CData/*4:0*/ __PVT__R2E_Reg;
        CData/*0:0*/ __PVT__LinkE_Reg;
        CData/*0:0*/ __PVT__data_WReg;
        CData/*0:0*/ __Vdly__MemToRegE_Reg;
        CData/*0:0*/ __Vdly__MemWriteE_Reg;
        CData/*1:0*/ __Vdly__ALUSrcE_Reg_0;
        CData/*1:0*/ __Vdly__ALUSrcE_Reg_1;
        CData/*4:0*/ __Vdly__R2E_Reg;
        CData/*0:0*/ __Vdly__LinkE_Reg;
        CData/*0:0*/ __Vdly__data_WReg;
        VL_OUT(__PVT__io2_ALUCtrlE,23,0);
        VL_OUT(__PVT__io_muldiv_control,23,0);
        IData/*23:0*/ __PVT__ALUCtrlE_Reg;
        IData/*23:0*/ __PVT__muldiv_Reg;
        IData/*23:0*/ __Vdly__ALUCtrlE_Reg;
        IData/*23:0*/ __Vdly__muldiv_Reg;
        VL_OUT64(__PVT__io2_PCPlus4E,63,0);
        VL_OUT64(__PVT__io2_PCE,63,0);
        VL_OUT64(__PVT__io_RD2E,63,0);
        QData/*63:0*/ __PVT__RD2E_Reg;
        QData/*63:0*/ __PVT__PCE_Reg;
        QData/*63:0*/ __Vdly__RD2E_Reg;
        QData/*63:0*/ __Vdly__PCE_Reg;
        VL_IN8(__PVT__io_InDelaySlotD,0,0);
        VL_IN64(__PVT__io_PCD,63,0);
        VL_IN64(__PVT__io_PCPlus4D,63,0);
        VL_IN(__PVT__io1_ALUCtrlD,23,0);
        QData/*63:0*/ __PVT__PCPlus4E_Reg;
        QData/*63:0*/ __Vdly__PCPlus4E_Reg;
        VL_IN8(__PVT__io_R1D,4,0);
        CData/*1:0*/ __PVT__MemWidthE_Reg;
        CData/*1:0*/ __Vdly__MemWidthE_Reg;
        VL_OUT8(__PVT__io2_MemWidthE,1,0);
        VL_IN8(__PVT__io_R2D,4,0);
        VL_IN8(__PVT__io1_MemWidthD,1,0);
        VL_OUT8(__PVT__io2_LoadUnsignedE,0,0);
        VL_OUT8(__PVT__io2_WriteCP0AddrE,4,0);
    };
    struct {
        VL_OUT8(__PVT__io2_WriteCP0SelE,2,0);
        VL_OUT8(__PVT__io2_InDelaySlotE,0,0);
        VL_OUT8(__PVT__io2_BranchJump_JrE,1,0);
        VL_OUT64(__PVT__io_Pc_NextE,63,0);
        VL_IN8(__PVT__io1_ebreakD,0,0);
        VL_OUT8(__PVT__io2_eBreakE,0,0);
        VL_OUT8(__PVT__io_alu_calE,0,0);
        VL_OUT8(__PVT__io_muldiv_calE,0,0);
        CData/*0:0*/ __PVT__ebreak_Reg;
        CData/*1:0*/ __PVT__alu_mul_cal_Reg;
        CData/*0:0*/ __Vdly__ebreak_Reg;
        CData/*1:0*/ __Vdly__alu_mul_cal_Reg;
        VL_OUT(__PVT__io_ExceptionTypeE_Out,31,0);
        IData/*31:0*/ __PVT__ExceptionTypeE_Reg;
        IData/*31:0*/ __Vdly__ExceptionTypeE_Reg;
        CData/*1:0*/ __PVT___alu_mul_cal_Reg_T_2;
        VL_IN(__PVT__io_ExceptionTypeD,31,0);
        VL_IN8(__PVT__io1_alu_cal,0,0);
        VL_IN8(__PVT__io1_muldiv_cal,0,0);
        VL_IN8(__PVT__io1_MemToRegD,0,0);
        VL_IN8(__PVT__io1_MemWriteD,0,0);
        VL_IN8(__PVT__io1_ALUSrcD_0,1,0);
        VL_IN8(__PVT__io1_LinkD,0,0);
        VL_IN8(__PVT__io1_LoadUnsignedD,0,0);
        VL_IN8(__PVT__io1_data_wD,0,0);
        VL_IN8(__PVT__io_WriteCP0AddrD,4,0);
        VL_IN8(__PVT__io_WriteCP0SelD,2,0);
        VL_IN8(__PVT__io_BranchJump_JrD,1,0);
        CData/*0:0*/ __PVT__LoadUnsignedE_Reg;
        CData/*4:0*/ __PVT__WriteCP0AddrE_Reg;
        CData/*2:0*/ __PVT__WriteCP0SelE_Reg;
        CData/*0:0*/ __PVT__InDelaySlotE_Reg;
        CData/*1:0*/ __PVT__BranchJump_JrE_Reg;
        CData/*0:0*/ __Vdly__LoadUnsignedE_Reg;
        CData/*4:0*/ __Vdly__WriteCP0AddrE_Reg;
        CData/*2:0*/ __Vdly__WriteCP0SelE_Reg;
        CData/*0:0*/ __Vdly__InDelaySlotE_Reg;
        CData/*1:0*/ __Vdly__BranchJump_JrE_Reg;
        VL_IN(__PVT__io1_muldiv_control,23,0);
        VL_IN64(__PVT__io_RD2D,63,0);
        VL_IN64(__PVT__io_Pc_NextD,63,0);
        QData/*63:0*/ __PVT__Pc_NextReg;
        QData/*63:0*/ __Vdly__Pc_NextReg;
        VL_IN8(__PVT__io1_RegWriteD,0,0);
        VL_IN8(__PVT__io1_RegDstD,4,0);
        VL_OUT8(__PVT__io2_RegWriteE,0,0);
        VL_OUT8(__PVT__io2_RegDstE,4,0);
        CData/*0:0*/ __PVT__RegWriteE_Reg;
        CData/*4:0*/ __PVT__RegDstE_Reg;
        CData/*0:0*/ __Vdly__RegWriteE_Reg;
        CData/*4:0*/ __Vdly__RegDstE_Reg;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_id2ex(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_id2ex();
    VL_UNCOPYABLE(Vmycpu_top_id2ex);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
