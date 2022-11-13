// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cu.h"

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__35(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__35\n"); );
    // Body
    vlSelf->__PVT___io_csr_control_T_15 = ((0x4aU == (IData)(vlSelf->__PVT__ins_code))
                                            ? 1U : (IData)(vlSelf->__PVT___io_csr_control_T_13));
    vlSelf->__PVT___io_csr_control_T_17 = ((0x47U == (IData)(vlSelf->__PVT__ins_code))
                                            ? 1U : (IData)(vlSelf->__PVT___io_csr_control_T_15));
    vlSelf->__PVT__io_csr_control = VL_EXTEND_II(6,4, (IData)(vlSelf->__PVT___io_csr_control_T_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csr_control 
        = vlSelf->__PVT__io_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csr_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csr_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csr_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csr_control;
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__36(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__36\n"); );
    // Body
    vlSelf->__PVT__io_data_wD = ((0x12U == (IData)(vlSelf->__PVT__ins_code)) 
                                 | ((0x11U == (IData)(vlSelf->__PVT__ins_code)) 
                                    | ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                       | ((5U == (IData)(vlSelf->__PVT__ins_code)) 
                                          | ((0x3dU 
                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                             | ((0x3cU 
                                                 == (IData)(vlSelf->__PVT__ins_code)) 
                                                | ((0x3bU 
                                                    == (IData)(vlSelf->__PVT__ins_code)) 
                                                   | ((0x3aU 
                                                       == (IData)(vlSelf->__PVT__ins_code)) 
                                                      | ((0x39U 
                                                          == (IData)(vlSelf->__PVT__ins_code)) 
                                                         | ((0x2bU 
                                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                                            | ((0x2bU 
                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                               | ((0x2aU 
                                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                                  | ((0x29U 
                                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                                     | ((0x28U 
                                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                                        | (0x27U 
                                                                           == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
    vlSelf->__PVT__io1_EretD = (0x4dU == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT__io1_BadInstrD = (0U == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT__io1_SysCallD = (0x4cU == (IData)(vlSelf->__PVT__ins_code));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_data_wD 
        = vlSelf->__PVT__io_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_EretD 
        = vlSelf->__PVT__io1_EretD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_BadInstrD 
        = vlSelf->__PVT__io1_BadInstrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_SysCallD 
        = vlSelf->__PVT__io1_SysCallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_data_wD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_BadInstrD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_SysCallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_3 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_EretD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_data_wD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_data_wD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_11 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_3)
            ? 0x80000000U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_6 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T)
            ? 0x400U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_8 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_1)
            ? 0x100U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_15 
        = VL_EXTEND_II(11,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_8));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__72(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__72\n"); );
    // Body
    vlSelf->__PVT__inst_type = (7U & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 0U, 3U));
    vlSelf->__PVT___io_ImmD_T_3 = (4U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_2 = (3U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_RegWriteD_T_29 = ((0x30U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x2bU 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x2fU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x2eU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x2dU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x2cU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x2bU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x2aU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x29U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x28U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x27U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x26U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x25U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x24U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (0x23U 
                                                                                == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
    vlSelf->__PVT___io_ImmD_T_4 = (6U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T = (1U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_1 = (2U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ALUSrcD_1_T_4 = (((IData)(vlSelf->__PVT___io_ImmD_T_1) 
                                         | (IData)(vlSelf->__PVT___io_ImmD_T_4)) 
                                        | (IData)(vlSelf->__PVT___io_ImmD_T));
    vlSelf->__PVT___io_ImmD_T_9 = ((IData)(vlSelf->__PVT___io_ImmD_T_4)
                                    ? vlSelf->__PVT__immUJ
                                    : 0U);
    vlSelf->__PVT___io_ImmD_T_8 = ((IData)(vlSelf->__PVT___io_ImmD_T_3)
                                    ? vlSelf->__PVT__immSB
                                    : 0ULL);
    vlSelf->__PVT___io_ImmD_T_7 = ((IData)(vlSelf->__PVT___io_ImmD_T_2)
                                    ? vlSelf->__PVT__immS
                                    : 0ULL);
    vlSelf->__PVT___io_RegWriteD_T_59 = ((2U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x3dU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x3cU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x3bU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x3aU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x39U 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x38U 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x37U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x36U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x35U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x34U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x33U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x32U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((0x31U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_29))))))))))))))));
    vlSelf->__PVT___io_ImmD_T_5 = ((IData)(vlSelf->__PVT___io_ImmD_T)
                                    ? vlSelf->__PVT__immU
                                    : 0ULL);
    vlSelf->__PVT___io_ImmD_T_6 = ((IData)(vlSelf->__PVT___io_ImmD_T_1)
                                    ? vlSelf->__PVT__immI
                                    : 0ULL);
    vlSelf->__PVT__io_ALUSrcD_1 = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_ALUSrcD_1_T_4));
    vlSelf->__PVT___GEN_0 = VL_EXTEND_QI(64,20, vlSelf->__PVT___io_ImmD_T_9);
    vlSelf->__PVT___io_RegWriteD_T_89 = ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0xfU == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0xeU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0xdU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((9U 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0xbU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0xaU 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((9U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((8U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((7U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((6U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((5U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((4U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_59))))))))))))))));
    vlSelf->__PVT___io_ImmD_T_10 = (vlSelf->__PVT___io_ImmD_T_5 
                                    | vlSelf->__PVT___io_ImmD_T_6);
    vlSelf->__PVT___io_RegWriteD_T_119 = ((0x47U == (IData)(vlSelf->__PVT__ins_code)) 
                                          | ((0x48U 
                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                             | ((0x4bU 
                                                 == (IData)(vlSelf->__PVT__ins_code)) 
                                                | ((0x4aU 
                                                    == (IData)(vlSelf->__PVT__ins_code)) 
                                                   | ((0x49U 
                                                       == (IData)(vlSelf->__PVT__ins_code)) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->__PVT__ins_code)) 
                                                         | ((0x40U 
                                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                                            | ((0x41U 
                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                               | ((0x17U 
                                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                                  | ((0x16U 
                                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                                     | ((0x15U 
                                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                                        | ((0x14U 
                                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                                           | ((0x13U 
                                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                                              | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_89))))))))))))))));
    vlSelf->__PVT___io_ImmD_T_11 = (vlSelf->__PVT___io_ImmD_T_10 
                                    | vlSelf->__PVT___io_ImmD_T_7);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUSrcD_1 
        = vlSelf->__PVT__io_ALUSrcD_1;
    vlSelf->__PVT__io_RegWriteD = ((0x46U == (IData)(vlSelf->__PVT__ins_code)) 
                                   | (IData)(vlSelf->__PVT___io_RegWriteD_T_119));
    vlSelf->__PVT___io_ImmD_T_12 = (vlSelf->__PVT___io_ImmD_T_11 
                                    | vlSelf->__PVT___io_ImmD_T_8);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUSrcD_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUSrcD_1;
    vlSelf->__PVT__io_ImmD = (vlSelf->__PVT___io_ImmD_T_12 
                              | vlSelf->__PVT___GEN_0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_RegWriteD 
        = vlSelf->__PVT__io_RegWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_RegWriteD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_RegWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ImmD 
        = vlSelf->__PVT__io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_RegWriteD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_RegWriteD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmD;
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__79(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__79\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_38 = ((0x2eU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x800U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_36));
    vlSelf->__PVT__io_muldiv_control = VL_EXTEND_II(24,16, (IData)(vlSelf->__PVT___io_muldiv_control_T_38));
    vlSelf->__PVT__io_muldiv_cal = (0U != vlSelf->__PVT__io_muldiv_control);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_control 
        = vlSelf->__PVT__io_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_cal 
        = vlSelf->__PVT__io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_cal;
}
