// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_csr.h"

VL_ATTR_COLD void Vmycpu_top_csr___eval_initial__TOP__mycpu_top__u_riscv_cpu___csr(Vmycpu_top_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_csr___eval_initial__TOP__mycpu_top__u_riscv_cpu___csr\n"); );
}

VL_ATTR_COLD void Vmycpu_top_csr___stl_sequent__TOP__mycpu_top__u_riscv_cpu___csr__0(Vmycpu_top_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_csr___stl_sequent__TOP__mycpu_top__u_riscv_cpu___csr__0\n"); );
    // Body
    vlSelf->__PVT___csr_count_T_4 = (1ULL + vlSelf->__PVT__csr_count);
    vlSelf->__PVT__io_Int_able = (1U & ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__csr_status, 1U)) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__csr_status, 0U)));
    vlSelf->__PVT__io_csr_status = VL_EXTEND_II(7,6, 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__csr_status, 0xaU, 6U)));
    vlSelf->__PVT___timer_int_T = (0ULL != vlSelf->__PVT__csr_compare);
    vlSelf->__PVT___timer_int_T_1 = (vlSelf->__PVT__csr_count 
                                     == vlSelf->__PVT__csr_compare);
    vlSelf->__PVT___io_Int_able_T_1 = (1U & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__csr_status, 1U)));
    vlSelf->__PVT___int_signal_T_2 = (0xffU & (VL_SEL_IQII(64, vlSelf->__PVT__csr_status, 8U, 8U) 
                                               & VL_SEL_IQII(64, vlSelf->__PVT__csr_cause, 8U, 8U)));
    vlSelf->__PVT__io_timer_int_has = ((IData)(vlSelf->__PVT___timer_int_T) 
                                       & (IData)(vlSelf->__PVT___timer_int_T_1));
    vlSelf->__PVT__int_signal = (((0U != (IData)(vlSelf->__PVT___int_signal_T_2)) 
                                  & (IData)(vlSelf->__PVT___io_Int_able_T_1)) 
                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__csr_status, 0U));
}

VL_ATTR_COLD void Vmycpu_top_csr___stl_sequent__TOP__mycpu_top__u_riscv_cpu___csr__1(Vmycpu_top_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_csr___stl_sequent__TOP__mycpu_top__u_riscv_cpu___csr__1\n"); );
    // Body
    vlSelf->__PVT___csr_read_data_Wire_T_1 = ((0x341U 
                                               == (IData)(vlSelf->__PVT__io_csr_read_addr))
                                               ? vlSelf->__PVT__csr_epc
                                               : 0ULL);
    vlSelf->__PVT__exception_type = VL_CONCAT_III(32,31,1, 
                                                  (0x7fffffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io_exception_type_i, 1U, 0x1fU)), (IData)(vlSelf->__PVT__int_signal));
    vlSelf->__PVT___csr_status_to_be_T_2 = ((IData)(vlSelf->__PVT__io_csr_write_en) 
                                            & (0x300U 
                                               == (IData)(vlSelf->__PVT__io_csr_write_addr)));
    vlSelf->__PVT___csr_epc_T_3 = ((IData)(vlSelf->__PVT__io_csr_write_en) 
                                   & (0x341U == (IData)(vlSelf->__PVT__io_csr_write_addr)));
    vlSelf->__PVT___csr_mtvec_T_2 = ((IData)(vlSelf->__PVT__io_csr_write_en) 
                                     & (0x305U == (IData)(vlSelf->__PVT__io_csr_write_addr)));
    vlSelf->__PVT___csr_cause_T_2 = ((IData)(vlSelf->__PVT__io_csr_write_en) 
                                     & (0x342U == (IData)(vlSelf->__PVT__io_csr_write_addr)));
    vlSelf->__PVT___csr_read_data_Wire_T_3 = ((0x342U 
                                               == (IData)(vlSelf->__PVT__io_csr_read_addr))
                                               ? vlSelf->__PVT__csr_cause
                                               : vlSelf->__PVT___csr_read_data_Wire_T_1);
    vlSelf->__PVT__commit_exception = (0U != (0x7fffffffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0U, 0x1fU)));
    vlSelf->__PVT___commit_eret_T_1 = VL_EXTEND_II(32,12, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0x14U, 0xcU)));
    vlSelf->__PVT___csr_read_data_Wire_T_5 = ((0x305U 
                                               == (IData)(vlSelf->__PVT__io_csr_read_addr))
                                               ? vlSelf->__PVT__csr_mtvec
                                               : vlSelf->__PVT___csr_read_data_Wire_T_3);
    vlSelf->__PVT__commit_eret = (1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__exception_type, 0x1fU) 
                                        & (~ VL_BITSEL_IIII(32, vlSelf->__PVT___commit_eret_T_1, 0U))));
    vlSelf->__PVT__csr_read_data_Wire = ((0x300U == (IData)(vlSelf->__PVT__io_csr_read_addr))
                                          ? vlSelf->__PVT__csr_status
                                          : vlSelf->__PVT___csr_read_data_Wire_T_5);
    vlSelf->__PVT__io_return_pc = ((IData)(vlSelf->__PVT__commit_eret)
                                    ? vlSelf->__PVT__csr_epc
                                    : vlSelf->__PVT__csr_mtvec);
    vlSelf->__PVT__io_exception = ((IData)(vlSelf->__PVT__commit_exception) 
                                   | (IData)(vlSelf->__PVT__commit_eret));
    vlSelf->__PVT__io_csr_read_data = ((IData)(vlSelf->__PVT__reset)
                                        ? 0ULL : vlSelf->__PVT__csr_read_data_Wire);
}

VL_ATTR_COLD void Vmycpu_top_csr___ctor_var_reset(Vmycpu_top_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_csr___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_csr_read_addr = 0;
    vlSelf->__PVT__io_csr_write_addr = 0;
    vlSelf->__PVT__io_csr_write_data = 0;
    vlSelf->__PVT__io_csr_write_en = 0;
    vlSelf->__PVT__io_timer_int_has = 0;
    vlSelf->__PVT__io_pc = 0;
    vlSelf->__PVT__io_exception_type_i = 0;
    vlSelf->__PVT__io_return_pc = 0;
    vlSelf->__PVT__io_exception = 0;
    vlSelf->__PVT__io_csr_read_data = 0;
    vlSelf->__PVT__io_csr_status = 0;
    vlSelf->__PVT__io_Int_able = 0;
    vlSelf->__PVT__csr_count = 0;
    vlSelf->__PVT__csr_compare = 0;
    vlSelf->__PVT__csr_cause = 0;
    vlSelf->__PVT__csr_status = 0;
    vlSelf->__PVT___csr_status_to_be_T_2 = 0;
    vlSelf->__PVT__csr_epc = 0;
    vlSelf->__PVT__csr_mtvec = 0;
    vlSelf->__PVT__csr_counter_half = 0;
    vlSelf->__PVT___io_Int_able_T_1 = 0;
    vlSelf->__PVT___int_signal_T_2 = 0;
    vlSelf->__PVT__int_signal = 0;
    vlSelf->__PVT__exception_type = 0;
    vlSelf->__PVT__commit_exception = 0;
    vlSelf->__PVT___commit_eret_T_1 = 0;
    vlSelf->__PVT__commit_eret = 0;
    vlSelf->__PVT___csr_read_data_Wire_T_1 = 0;
    vlSelf->__PVT___csr_read_data_Wire_T_3 = 0;
    vlSelf->__PVT___csr_read_data_Wire_T_5 = 0;
    vlSelf->__PVT__csr_read_data_Wire = 0;
    vlSelf->__PVT___csr_count_T_4 = 0;
    vlSelf->__PVT___timer_int_T = 0;
    vlSelf->__PVT___timer_int_T_1 = 0;
    vlSelf->__PVT___csr_epc_T_3 = 0;
    vlSelf->__PVT___csr_mtvec_T_2 = 0;
    vlSelf->__PVT___csr_cause_T_2 = 0;
    vlSelf->__Vdly__csr_status = 0;
    vlSelf->__Vdly__csr_count = 0;
    vlSelf->__Vdly__csr_compare = 0;
    vlSelf->__Vdly__csr_cause = 0;
    vlSelf->__Vdly__csr_epc = 0;
    vlSelf->__Vdly__csr_mtvec = 0;
    vlSelf->__Vdly__csr_counter_half = 0;
}
