// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cu.h"

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__55(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__55\n"); );
    // Body
    vlSelf->__PVT__io_csr_Imm = (((0x48U == (IData)(vlSelf->__PVT__ins_code)) 
                                  | (0x46U == (IData)(vlSelf->__PVT__ins_code))) 
                                 | (0x47U == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io1_EretD = (0x4dU == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT__io1_BadInstrD = (0U == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT__io1_SysCallD = (0x4cU == (IData)(vlSelf->__PVT__ins_code));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csr_Imm 
        = vlSelf->__PVT__io_csr_Imm;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_EretD 
        = vlSelf->__PVT__io1_EretD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_BadInstrD 
        = vlSelf->__PVT__io1_BadInstrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_SysCallD 
        = vlSelf->__PVT__io1_SysCallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csr_Imm 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csr_Imm;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_BadInstrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_SysCallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_3 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_EretD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csr_Imm 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csr_Imm;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_11 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_3)
            ? 0x80000000U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_6 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T)
            ? 0x400U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_8 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_1)
            ? 0x100U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_14 
        = VL_EXTEND_II(11,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_8));
}
