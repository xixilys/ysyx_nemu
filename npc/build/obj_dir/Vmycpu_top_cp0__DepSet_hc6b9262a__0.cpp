// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cp0.h"

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__5(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__5\n"); );
    // Body
    vlSelf->__PVT__io_timer_int_has = ((IData)(vlSelf->__PVT___timer_int_T) 
                                       & (IData)(vlSelf->__PVT___timer_int_T_1));
    vlSelf->__PVT__cp0_status = vlSelf->__Vdly__cp0_status;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_asid 
        = vlSelf->__PVT__io_asid;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__6(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__6\n"); );
    // Body
    vlSelf->__PVT___int_signal_T_2 = (0xffU & (VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 8U, 8U) 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 8U, 8U)));
    vlSelf->__PVT___io_Int_able_T_1 = (1U & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_timer_int_has 
        = vlSelf->__PVT__io_timer_int_has;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__10(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__10\n"); );
    // Body
    vlSelf->__PVT__int_signal = (((0U != (IData)(vlSelf->__PVT___int_signal_T_2)) 
                                  & (IData)(vlSelf->__PVT___io_Int_able_T_1)) 
                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_Int_able 
        = vlSelf->__PVT__io_Int_able;
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__0(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__0\n"); );
    // Body
    vlSelf->__PVT___cp0_read_data_Wire_T_28 = VL_CONCAT_III(32,8,24, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0x18U, 8U)), 
                                                            VL_EXTEND_II(24,23, 
                                                                         VL_CONCAT_III(23,15,8, 
                                                                                (0x7fffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 8U, 0xfU)), 
                                                                                VL_EXTEND_II(8,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_cp0_write_data, 0U, 5U))))));
    vlSelf->__PVT__write_addr_sel = VL_CONCAT_III(6,5,1, (IData)(vlSelf->__PVT__io_cp0_write_addr), 
                                                  (1U 
                                                   & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__io_cp0_write_sel), 0U)));
    vlSelf->__PVT__exception_type = VL_CONCAT_III(32,31,1, 
                                                  (0x7fffffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io_exception_type_i, 1U, 0x1fU)), (IData)(vlSelf->__PVT__int_signal));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_5 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE) 
           == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_12 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D)) 
              | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM) 
                 == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_10 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM) 
           == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_12 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2)) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_28 
        = VL_EXTEND_II(24,12, (0xfffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_26 
        = VL_EXTEND_II(24,13, (0x1fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_24 
        = VL_EXTEND_II(24,14, (0x3fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_21 
        = VL_EXTEND_II(24,16, (0xffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 8U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_18 
        = VL_EXTEND_II(24,15, (0x7fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 9U, 0xfU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_16 
        = VL_EXTEND_II(24,17, (0x1ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 7U, 0x11U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_14 
        = VL_EXTEND_II(24,18, (0x3ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 6U, 0x12U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_12 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 2U, 0x16U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_10 
        = VL_EXTEND_II(24,21, (0x1fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 3U, 0x15U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_8 
        = VL_EXTEND_II(24,19, (0x7ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 5U, 0x13U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_6 
        = VL_EXTEND_II(24,20, (0xfffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 4U, 0x14U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T 
        = VL_EXTEND_II(24,23, (0x7fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 1U, 0x17U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_38 
        = VL_EXTEND_II(24,10, (0x3ffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0xeU, 0xaU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_35 
        = VL_EXTEND_II(24,8, (0xffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_ctrl, 0x10U, 8U)));
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__1(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__1\n"); );
    // Body
    vlSelf->__PVT___cp0_compare_T_2 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                       & (0x16U == (IData)(vlSelf->__PVT__write_addr_sel)));
    vlSelf->__PVT__commit_exception = ((0U != (0x7fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0U, 0x1fU))) 
                                       & (IData)(vlSelf->__PVT___io_Int_able_T_1));
    vlSelf->__PVT___commit_eret_T_1 = VL_EXTEND_II(32,12, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exception_type, 0x14U, 0xcU)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_45 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_39 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_33 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_13 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE) 
            & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D)) 
               | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE) 
                  == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D)))) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_27 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___jr_Stall_T_8 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_21 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_15 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_9 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_13 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_12)
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_12 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11));
}
