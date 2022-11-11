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
        VL_IN8(__PVT__io1_LinkD,0,0);
        VL_OUT8(__PVT__io2_LinkE,0,0);
        CData/*0:0*/ __PVT__decoder_port_reg_LinkD;
        CData/*0:0*/ __Vdly__decoder_port_reg_LinkD;
        VL_OUT64(__PVT__io2_PCPlus4E,63,0);
        VL_IN64(__PVT__io_PCPlus4D,63,0);
        QData/*63:0*/ __PVT__PCPlus4E_Reg;
        QData/*63:0*/ __Vdly__PCPlus4E_Reg;
        VL_IN64(__PVT__io_Pc_NextD,63,0);
        VL_IN64(__PVT__io_RD2D,63,0);
        VL_OUT8(__PVT__io2_MemWriteE,0,0);
        VL_OUT8(__PVT__io2_ALUSrcE_0,0,0);
        VL_OUT8(__PVT__io2_ALUSrcE_1,0,0);
        VL_OUT8(__PVT__io2_LoadUnsignedE,0,0);
        VL_OUT8(__PVT__io2_csrWriteE,0,0);
        VL_OUT8(__PVT__io2_BranchJump_JrE,1,0);
        VL_OUT8(__PVT__io_R2E,4,0);
        VL_OUT8(__PVT__io_R1E,4,0);
        VL_OUT8(__PVT__io_data_wE,0,0);
        VL_OUT8(__PVT__io_alu_calE,0,0);
        VL_OUT8(__PVT__io_csr_controlE,5,0);
        CData/*4:0*/ __PVT__R2E_Reg;
        CData/*4:0*/ __PVT__R1E_Reg;
        CData/*1:0*/ __PVT__BranchJump_JrE_Reg;
        CData/*0:0*/ __PVT__decoder_port_reg_MemWriteD;
        CData/*1:0*/ __PVT__decoder_port_reg_ALUSrcD_0;
        CData/*1:0*/ __PVT__decoder_port_reg_ALUSrcD_1;
        CData/*0:0*/ __PVT__decoder_port_reg_csrWriteD;
        CData/*0:0*/ __PVT__decoder_port_reg_LoadUnsignedD;
        CData/*0:0*/ __PVT__decoder_port_reg_data_wD;
        CData/*0:0*/ __PVT__decoder_port_reg_alu_cal;
        CData/*5:0*/ __PVT__decoder_port_reg_csr_control;
        CData/*4:0*/ __Vdly__R2E_Reg;
        CData/*4:0*/ __Vdly__R1E_Reg;
        CData/*1:0*/ __Vdly__BranchJump_JrE_Reg;
        CData/*0:0*/ __Vdly__decoder_port_reg_MemWriteD;
        CData/*1:0*/ __Vdly__decoder_port_reg_ALUSrcD_0;
        CData/*1:0*/ __Vdly__decoder_port_reg_ALUSrcD_1;
        CData/*0:0*/ __Vdly__decoder_port_reg_csrWriteD;
        CData/*0:0*/ __Vdly__decoder_port_reg_LoadUnsignedD;
        CData/*0:0*/ __Vdly__decoder_port_reg_data_wD;
        CData/*0:0*/ __Vdly__decoder_port_reg_alu_cal;
        CData/*5:0*/ __Vdly__decoder_port_reg_csr_control;
        VL_OUT16(__PVT__io2_ReadcsrAddrE,11,0);
        SData/*11:0*/ __PVT__ReadcsrAddrE_Reg;
        SData/*11:0*/ __Vdly__ReadcsrAddrE_Reg;
        VL_OUT(__PVT__io2_ALUCtrlE,23,0);
        IData/*23:0*/ __PVT__decoder_port_reg_ALUCtrlD;
        IData/*23:0*/ __Vdly__decoder_port_reg_ALUCtrlD;
        VL_OUT64(__PVT__io2_PCE,63,0);
        VL_OUT64(__PVT__io_RD1E,63,0);
        VL_OUT64(__PVT__io_RD2E,63,0);
        VL_OUT64(__PVT__io_ImmE,63,0);
        QData/*63:0*/ __PVT__RD1E_Reg;
        QData/*63:0*/ __PVT__RD2E_Reg;
        QData/*63:0*/ __PVT__ImmE_Reg;
        QData/*63:0*/ __PVT__PCE_Reg;
        QData/*63:0*/ __Vdly__RD1E_Reg;
        QData/*63:0*/ __Vdly__RD2E_Reg;
        QData/*63:0*/ __Vdly__ImmE_Reg;
        QData/*63:0*/ __Vdly__PCE_Reg;
        VL_IN8(__PVT__io1_MemWriteD,0,0);
        VL_IN8(__PVT__io1_ALUSrcD_1,1,0);
        VL_IN8(__PVT__io1_LoadUnsignedD,0,0);
    };
    struct {
        VL_IN8(__PVT__io1_alu_cal,0,0);
        VL_IN8(__PVT__io1_csr_control,5,0);
        VL_IN8(__PVT__io_R2D,4,0);
        VL_IN8(__PVT__io_R1D,4,0);
        VL_IN8(__PVT__io_BranchJump_JrD,1,0);
        VL_IN16(__PVT__io_ReadcsrAddrD,11,0);
        VL_IN(__PVT__io1_ALUCtrlD,23,0);
        VL_IN64(__PVT__io_ImmD,63,0);
        VL_IN64(__PVT__io_PCD,63,0);
        VL_IN8(__PVT__io1_ALUSrcD_0,1,0);
        VL_IN8(__PVT__io1_csrWriteD,0,0);
        VL_IN8(__PVT__io1_data_wD,0,0);
        VL_IN64(__PVT__io_RD1D,63,0);
        VL_IN8(__PVT__io1_muldiv_cal,0,0);
        VL_IN(__PVT__io1_muldiv_control,23,0);
        VL_OUT(__PVT__io_muldiv_control,23,0);
        IData/*23:0*/ __PVT__decoder_port_reg_muldiv_control;
        IData/*23:0*/ __Vdly__decoder_port_reg_muldiv_control;
        VL_IN8(__PVT__io1_csrToRegD,0,0);
        VL_IN(__PVT__io_ExceptionTypeD,31,0);
        VL_OUT8(__PVT__io2_MemWidthE,1,0);
        VL_OUT8(__PVT__io_csrToRegE_Out,0,0);
        CData/*0:0*/ __PVT__decoder_port_reg_csrToRegD;
        CData/*1:0*/ __PVT__decoder_port_reg_MemWidthD;
        CData/*0:0*/ __Vdly__decoder_port_reg_csrToRegD;
        CData/*1:0*/ __Vdly__decoder_port_reg_MemWidthD;
        VL_OUT(__PVT__io_ExceptionTypeE_Out,31,0);
        IData/*31:0*/ __PVT__ExceptionTypeE_Reg;
        IData/*31:0*/ __Vdly__ExceptionTypeE_Reg;
        VL_OUT64(__PVT__io_Pc_NextE,63,0);
        QData/*63:0*/ __PVT__Pc_NextReg;
        QData/*63:0*/ __Vdly__Pc_NextReg;
        VL_OUT8(__PVT__io2_MemToRegE,0,0);
        VL_OUT8(__PVT__io2_eBreakE,0,0);
        CData/*0:0*/ __PVT__decoder_port_reg_MemToRegD;
        CData/*0:0*/ __PVT__decoder_port_reg_ebreakD;
        CData/*0:0*/ __Vdly__decoder_port_reg_MemToRegD;
        CData/*0:0*/ __Vdly__decoder_port_reg_ebreakD;
        VL_IN8(__PVT__io1_MemToRegD,0,0);
        VL_IN8(__PVT__io1_ebreakD,0,0);
        VL_IN8(__PVT__io1_RegDstD,4,0);
        VL_OUT8(__PVT__io2_RegWriteE,0,0);
        VL_OUT8(__PVT__io2_RegDstE,4,0);
        CData/*0:0*/ __PVT__decoder_port_reg_RegWriteD;
        CData/*4:0*/ __PVT__decoder_port_reg_RegDstD;
        CData/*0:0*/ __Vdly__decoder_port_reg_RegWriteD;
        CData/*4:0*/ __Vdly__decoder_port_reg_RegDstD;
        VL_IN8(__PVT__io1_RegWriteD,0,0);
        VL_IN8(__PVT__io1_csr_Imm,0,0);
        VL_OUT8(__PVT__io_muldiv_calE,0,0);
        VL_OUT8(__PVT__io_csr_ImmE,0,0);
        CData/*0:0*/ __PVT__decoder_port_reg_muldiv_cal;
        CData/*0:0*/ __PVT__decoder_port_reg_csr_Imm;
        CData/*0:0*/ __Vdly__decoder_port_reg_muldiv_cal;
        CData/*0:0*/ __Vdly__decoder_port_reg_csr_Imm;
        VL_OUT16(__PVT__io2_WritecsrAddrE,11,0);
        VL_IN16(__PVT__io_WritecsrAddrD,11,0);
        SData/*11:0*/ __PVT__WritecsrAddrE_Reg;
        SData/*11:0*/ __Vdly__WritecsrAddrE_Reg;
        VL_IN8(__PVT__io1_MemWidthD,1,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_en,0,0);
        VL_IN8(__PVT__io_clr,0,0);
        VL_IN8(__PVT__clock,0,0);
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
