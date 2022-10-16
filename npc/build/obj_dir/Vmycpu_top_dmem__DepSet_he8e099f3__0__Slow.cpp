// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dmem.h"

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__0(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__0\n"); );
    // Body
    vlSelf->__PVT__third_ra = (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__io_Physisc_Address, 2U));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__1(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__1\n"); );
    // Body
    vlSelf->__PVT__ra = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_Physisc_Address, 0U, 2U));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__2(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__2\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_1 = VL_CONCAT_III(3,2,1, (IData)(vlSelf->__PVT__ra), (IData)(vlSelf->__PVT__io_SIGN));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__3(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__3\n"); );
    // Body
    vlSelf->__PVT__io_data_pending = (1U & (~ (IData)(vlSelf->__PVT__io_data_ok)));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__4(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__4\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_816 = VL_EXTEND_QI(33,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 0x20U));
    vlSelf->__PVT___io_RD_T_856 = VL_EXTEND_QI(33,32, 
                                               VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x20U));
    vlSelf->__PVT___io_RD_T_253 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x38U, 8U)));
    vlSelf->__PVT___io_RD_T_521 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x18U, 8U)));
    vlSelf->__PVT___io_RD_T_648 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x30U, 0x10U)));
    vlSelf->__PVT___io_RD_T_768 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 0x10U)));
    vlSelf->__PVT___io_RD_T_190 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x30U, 8U)));
    vlSelf->__PVT___io_RD_T_458 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 8U)));
    vlSelf->__PVT___io_RD_T_593 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 0x10U)));
    vlSelf->__PVT___io_RD_T_713 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x10U)));
    vlSelf->__PVT__io_RD_lo_lo_12 = VL_CONCAT_III(8,1,7, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                  VL_CONCAT_III(7,1,6, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                VL_CONCAT_III(6,1,5, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                              VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)))))))));
    vlSelf->__PVT__io_RD_lo_lo_13 = VL_CONCAT_III(8,1,7, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                  VL_CONCAT_III(7,1,6, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                VL_CONCAT_III(6,1,5, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                              VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)))))))));
    vlSelf->__PVT___io_RD_T_127 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x28U, 8U)));
    vlSelf->__PVT___io_RD_T_395 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 8U, 8U)));
    vlSelf->__PVT__io_RD_lo_lo_lo_9 = VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_11 = VL_CONCAT_III(6,1,5, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                     VL_CONCAT_III(5,1,4, 
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                   VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__5(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__5\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_64 = VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 8U)));
    vlSelf->__PVT___io_RD_T_332 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 8U)));
    vlSelf->__PVT__io_RD_lo_lo_lo_3 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_7 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_8 = VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_10 = VL_CONCAT_III(6,1,5, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                     VL_CONCAT_III(5,1,4, 
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                   VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_2 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_6 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_1 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_5 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo = VL_CONCAT_III(7,1,6, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                  VL_CONCAT_III(6,1,5, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                VL_CONCAT_III(5,1,4, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                              VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_4 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__6(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__6\n"); );
    // Body
    vlSelf->__PVT__io_RD_lo_12 = VL_CONCAT_III(16,1,15, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                               VL_CONCAT_III(15,1,14, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                             VL_CONCAT_III(14,1,13, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                           VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_12)))))))));
    vlSelf->__PVT__io_RD_lo_13 = VL_CONCAT_III(16,1,15, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                               VL_CONCAT_III(15,1,14, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                             VL_CONCAT_III(14,1,13, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                           VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_13)))))))));
    vlSelf->__PVT__io_RD_lo_lo_9 = VL_CONCAT_III(12,1,11, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                 VL_CONCAT_III(11,1,10, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                               VL_CONCAT_III(10,1,9, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                             VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_9)))))));
    vlSelf->__PVT__io_RD_lo_lo_11 = VL_CONCAT_III(12,1,11, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                  VL_CONCAT_III(11,1,10, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                VL_CONCAT_III(10,1,9, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                              VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_11)))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__7(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__7\n"); );
    // Body
    vlSelf->__PVT__io_RD_lo_lo_3 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3))))))));
    vlSelf->__PVT__io_RD_lo_lo_7 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_7))))))));
    vlSelf->__PVT__io_RD_lo_lo_8 = VL_CONCAT_III(12,1,11, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                 VL_CONCAT_III(11,1,10, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                               VL_CONCAT_III(10,1,9, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                             VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_8)))))));
    vlSelf->__PVT__io_RD_lo_lo_10 = VL_CONCAT_III(12,1,11, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                  VL_CONCAT_III(11,1,10, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                VL_CONCAT_III(10,1,9, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                              VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_10)))))));
    vlSelf->__PVT__io_RD_lo_lo_2 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2))))))));
    vlSelf->__PVT__io_RD_lo_lo_6 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_6))))))));
    vlSelf->__PVT__io_RD_lo_lo_1 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1))))))));
    vlSelf->__PVT__io_RD_lo_lo_5 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5))))))));
    vlSelf->__PVT__io_RD_lo_lo = VL_CONCAT_III(14,1,13, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                               VL_CONCAT_III(13,1,12, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                             VL_CONCAT_III(12,1,11, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                           VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo))))))));
    vlSelf->__PVT__io_RD_lo_lo_4 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__8(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__8\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_812 = VL_CONCAT_III(32,1,31, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                VL_CONCAT_III(31,1,30, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                              VL_CONCAT_III(30,1,29, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                            VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__io_RD_lo_lo_12), (IData)(vlSelf->__PVT__io_RD_lo_12))))))))));
    vlSelf->__PVT___io_RD_T_852 = VL_CONCAT_III(32,1,31, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                VL_CONCAT_III(31,1,30, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                              VL_CONCAT_III(30,1,29, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                            VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__io_RD_lo_lo_13), (IData)(vlSelf->__PVT__io_RD_lo_13))))))))));
    vlSelf->__PVT__io_RD_lo_9 = VL_CONCAT_III(24,1,23, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                              VL_CONCAT_III(23,1,22, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                            VL_CONCAT_III(22,1,21, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                          VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_9), (IData)(vlSelf->__PVT__io_RD_lo_lo_9))))))));
    vlSelf->__PVT__io_RD_lo_11 = VL_CONCAT_III(24,1,23, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                               VL_CONCAT_III(23,1,22, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                             VL_CONCAT_III(22,1,21, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                           VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_11), (IData)(vlSelf->__PVT__io_RD_lo_lo_11))))))));
    vlSelf->__PVT__io_RD_lo_3 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3), (IData)(vlSelf->__PVT__io_RD_lo_lo_3)))))))));
    vlSelf->__PVT__io_RD_lo_7 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_7), (IData)(vlSelf->__PVT__io_RD_lo_lo_7)))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__9(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__9\n"); );
    // Body
    vlSelf->__PVT__io_RD_lo_8 = VL_CONCAT_III(24,1,23, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                              VL_CONCAT_III(23,1,22, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                            VL_CONCAT_III(22,1,21, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                          VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_8), (IData)(vlSelf->__PVT__io_RD_lo_lo_8))))))));
    vlSelf->__PVT__io_RD_lo_10 = VL_CONCAT_III(24,1,23, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                               VL_CONCAT_III(23,1,22, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                             VL_CONCAT_III(22,1,21, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                           VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_10), (IData)(vlSelf->__PVT__io_RD_lo_lo_10))))))));
    vlSelf->__PVT__io_RD_lo_2 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2), (IData)(vlSelf->__PVT__io_RD_lo_lo_2)))))))));
    vlSelf->__PVT__io_RD_lo_6 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_6), (IData)(vlSelf->__PVT__io_RD_lo_lo_6)))))))));
    vlSelf->__PVT__io_RD_lo_1 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1), (IData)(vlSelf->__PVT__io_RD_lo_lo_1)))))))));
    vlSelf->__PVT__io_RD_lo_5 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5), (IData)(vlSelf->__PVT__io_RD_lo_lo_5)))))))));
    vlSelf->__PVT__io_RD_lo = VL_CONCAT_III(28,1,27, 
                                            (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                            VL_CONCAT_III(27,1,26, 
                                                          (1U 
                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                          VL_CONCAT_III(26,1,25, 
                                                                        (1U 
                                                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                        VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo), (IData)(vlSelf->__PVT__io_RD_lo_lo)))))))));
    vlSelf->__PVT__io_RD_lo_4 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4), (IData)(vlSelf->__PVT__io_RD_lo_lo_4)))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__10(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__10\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_814 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___io_RD_T_812, 
                                                VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 0x20U));
    vlSelf->__PVT___io_RD_T_854 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___io_RD_T_852, 
                                                VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x20U));
    vlSelf->__PVT___io_RD_T_645 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_9), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_9), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_9, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x30U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_765 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_11), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_11), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_11, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_248 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x3fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_3), vlSelf->__PVT__io_RD_lo_3)))))))));
    vlSelf->__PVT___io_RD_T_516 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_7), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_7), vlSelf->__PVT__io_RD_lo_7)))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__11(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__11\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_590 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_8), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_8), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_8, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_710 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_10), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_10), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_10, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_185 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x37U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_2), vlSelf->__PVT__io_RD_lo_2)))))))));
    vlSelf->__PVT___io_RD_T_453 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_6), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_6), vlSelf->__PVT__io_RD_lo_6)))))))));
    vlSelf->__PVT___io_RD_T_122 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x2fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_1), vlSelf->__PVT__io_RD_lo_1)))))))));
    vlSelf->__PVT___io_RD_T_390 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_5), vlSelf->__PVT__io_RD_lo_5)))))))));
    vlSelf->__PVT___io_RD_T_59 = VL_CONCAT_QIQ(56,1,55, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                               VL_CONCAT_QIQ(55,1,54, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                             VL_CONCAT_QIQ(54,1,53, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                           VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x27U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo), vlSelf->__PVT__io_RD_lo)))))))));
    vlSelf->__PVT___io_RD_T_327 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_4), vlSelf->__PVT__io_RD_lo_4)))))))));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__12(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__12\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_817 = ((IData)(vlSelf->__PVT__io_SIGN)
                                    ? vlSelf->__PVT___io_RD_T_814
                                    : VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_RD_T_816));
    vlSelf->__PVT___io_RD_T_857 = ((IData)(vlSelf->__PVT__io_SIGN)
                                    ? vlSelf->__PVT___io_RD_T_854
                                    : VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_RD_T_856));
    vlSelf->__PVT___io_RD_T_250 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_248, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x38U, 8U)));
    vlSelf->__PVT___io_RD_T_518 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_516, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x18U, 8U)));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__13(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__13\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_650 = ((1U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_590
                                    : 0ULL);
    vlSelf->__PVT___io_RD_T_770 = ((1U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_710
                                    : 0ULL);
    vlSelf->__PVT___io_RD_T_187 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_185, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x30U, 8U)));
    vlSelf->__PVT___io_RD_T_455 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_453, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 8U)));
    vlSelf->__PVT___io_RD_T_124 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_122, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x28U, 8U)));
    vlSelf->__PVT___io_RD_T_392 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_390, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 8U, 8U)));
    vlSelf->__PVT___io_RD_T_61 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_59, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x20U, 8U)));
    vlSelf->__PVT___io_RD_T_329 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_327, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 8U)));
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__14(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__14\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_858 = ((IData)(vlSelf->__PVT__third_ra)
                                    ? vlSelf->__PVT___io_RD_T_817
                                    : vlSelf->__PVT___io_RD_T_857);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__15(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__15\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_652 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_593)
                                    : vlSelf->__PVT___io_RD_T_650);
    vlSelf->__PVT___io_RD_T_772 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_713)
                                    : vlSelf->__PVT___io_RD_T_770);
    vlSelf->__PVT___io_RD_T_255 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_64))
                                    : vlSelf->__PVT___io_RD_T_61);
    vlSelf->__PVT___io_RD_T_523 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_332))
                                    : vlSelf->__PVT___io_RD_T_329);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__16(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__16\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_654 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_645
                                    : vlSelf->__PVT___io_RD_T_652);
    vlSelf->__PVT___io_RD_T_774 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_765
                                    : vlSelf->__PVT___io_RD_T_772);
    vlSelf->__PVT___io_RD_T_257 = ((3U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_124
                                    : vlSelf->__PVT___io_RD_T_255);
    vlSelf->__PVT___io_RD_T_525 = ((3U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_392
                                    : vlSelf->__PVT___io_RD_T_523);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__17(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__17\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_656 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_648)
                                    : vlSelf->__PVT___io_RD_T_654);
    vlSelf->__PVT___io_RD_T_776 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_768)
                                    : vlSelf->__PVT___io_RD_T_774);
    vlSelf->__PVT___io_RD_T_259 = ((2U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_127))
                                    : vlSelf->__PVT___io_RD_T_257);
    vlSelf->__PVT___io_RD_T_527 = ((2U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_395))
                                    : vlSelf->__PVT___io_RD_T_525);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__18(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__18\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_777 = ((IData)(vlSelf->__PVT__third_ra)
                                    ? vlSelf->__PVT___io_RD_T_656
                                    : vlSelf->__PVT___io_RD_T_776);
    vlSelf->__PVT___io_RD_T_261 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_187
                                    : vlSelf->__PVT___io_RD_T_259);
    vlSelf->__PVT___io_RD_T_529 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_455
                                    : vlSelf->__PVT___io_RD_T_527);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__19(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__19\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_263 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_190))
                                    : vlSelf->__PVT___io_RD_T_261);
    vlSelf->__PVT___io_RD_T_531 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_458))
                                    : vlSelf->__PVT___io_RD_T_529);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__20(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__20\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_265 = ((7U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_250
                                    : vlSelf->__PVT___io_RD_T_263);
    vlSelf->__PVT___io_RD_T_533 = ((7U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_518
                                    : vlSelf->__PVT___io_RD_T_531);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__21(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__21\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_267 = ((6U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_253))
                                    : vlSelf->__PVT___io_RD_T_265);
    vlSelf->__PVT___io_RD_T_535 = ((6U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_521))
                                    : vlSelf->__PVT___io_RD_T_533);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__22(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__22\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_536 = ((IData)(vlSelf->__PVT__third_ra)
                                    ? vlSelf->__PVT___io_RD_T_267
                                    : vlSelf->__PVT___io_RD_T_535);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__23(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__23\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_860 = ((1U == (IData)(vlSelf->__PVT__io_WIDTH))
                                    ? vlSelf->__PVT___io_RD_T_777
                                    : vlSelf->__PVT___io_RD_T_536);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__24(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__24\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_862 = ((2U == (IData)(vlSelf->__PVT__io_WIDTH))
                                    ? vlSelf->__PVT___io_RD_T_858
                                    : vlSelf->__PVT___io_RD_T_860);
}

VL_ATTR_COLD void Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__25(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___settle__TOP__mycpu_top__u_riscv_cpu___dmem__25\n"); );
    // Body
    vlSelf->__PVT__io_RD = ((3U == (IData)(vlSelf->__PVT__io_WIDTH))
                             ? vlSelf->__PVT__io_rdata
                             : vlSelf->__PVT___io_RD_T_862);
}

VL_ATTR_COLD void Vmycpu_top_dmem___ctor_var_reset(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_data_ok = 0;
    vlSelf->__PVT__io_rdata = 0;
    vlSelf->__PVT__io_Physisc_Address = 0;
    vlSelf->__PVT__io_WIDTH = 0;
    vlSelf->__PVT__io_SIGN = 0;
    vlSelf->__PVT__io_RD = 0;
    vlSelf->__PVT__io_data_pending = 0;
    vlSelf->__PVT__ra = 0;
    vlSelf->__PVT__third_ra = 0;
    vlSelf->__PVT___io_RD_T_1 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo = 0;
    vlSelf->__PVT__io_RD_lo_lo = 0;
    vlSelf->__PVT__io_RD_lo = 0;
    vlSelf->__PVT___io_RD_T_59 = 0;
    vlSelf->__PVT___io_RD_T_61 = 0;
    vlSelf->__PVT___io_RD_T_64 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_1 = 0;
    vlSelf->__PVT__io_RD_lo_lo_1 = 0;
    vlSelf->__PVT__io_RD_lo_1 = 0;
    vlSelf->__PVT___io_RD_T_122 = 0;
    vlSelf->__PVT___io_RD_T_124 = 0;
    vlSelf->__PVT___io_RD_T_127 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_2 = 0;
    vlSelf->__PVT__io_RD_lo_lo_2 = 0;
    vlSelf->__PVT__io_RD_lo_2 = 0;
    vlSelf->__PVT___io_RD_T_185 = 0;
    vlSelf->__PVT___io_RD_T_187 = 0;
    vlSelf->__PVT___io_RD_T_190 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_3 = 0;
    vlSelf->__PVT__io_RD_lo_lo_3 = 0;
    vlSelf->__PVT__io_RD_lo_3 = 0;
    vlSelf->__PVT___io_RD_T_248 = 0;
    vlSelf->__PVT___io_RD_T_250 = 0;
    vlSelf->__PVT___io_RD_T_253 = 0;
    vlSelf->__PVT___io_RD_T_255 = 0;
    vlSelf->__PVT___io_RD_T_257 = 0;
    vlSelf->__PVT___io_RD_T_259 = 0;
    vlSelf->__PVT___io_RD_T_261 = 0;
    vlSelf->__PVT___io_RD_T_263 = 0;
    vlSelf->__PVT___io_RD_T_265 = 0;
    vlSelf->__PVT___io_RD_T_267 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_4 = 0;
    vlSelf->__PVT__io_RD_lo_lo_4 = 0;
    vlSelf->__PVT__io_RD_lo_4 = 0;
    vlSelf->__PVT___io_RD_T_327 = 0;
    vlSelf->__PVT___io_RD_T_329 = 0;
    vlSelf->__PVT___io_RD_T_332 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_5 = 0;
    vlSelf->__PVT__io_RD_lo_lo_5 = 0;
    vlSelf->__PVT__io_RD_lo_5 = 0;
    vlSelf->__PVT___io_RD_T_390 = 0;
    vlSelf->__PVT___io_RD_T_392 = 0;
    vlSelf->__PVT___io_RD_T_395 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_6 = 0;
    vlSelf->__PVT__io_RD_lo_lo_6 = 0;
    vlSelf->__PVT__io_RD_lo_6 = 0;
    vlSelf->__PVT___io_RD_T_453 = 0;
    vlSelf->__PVT___io_RD_T_455 = 0;
    vlSelf->__PVT___io_RD_T_458 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_7 = 0;
    vlSelf->__PVT__io_RD_lo_lo_7 = 0;
    vlSelf->__PVT__io_RD_lo_7 = 0;
    vlSelf->__PVT___io_RD_T_516 = 0;
    vlSelf->__PVT___io_RD_T_518 = 0;
    vlSelf->__PVT___io_RD_T_521 = 0;
    vlSelf->__PVT___io_RD_T_523 = 0;
    vlSelf->__PVT___io_RD_T_525 = 0;
    vlSelf->__PVT___io_RD_T_527 = 0;
    vlSelf->__PVT___io_RD_T_529 = 0;
    vlSelf->__PVT___io_RD_T_531 = 0;
    vlSelf->__PVT___io_RD_T_533 = 0;
    vlSelf->__PVT___io_RD_T_535 = 0;
    vlSelf->__PVT___io_RD_T_536 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_8 = 0;
    vlSelf->__PVT__io_RD_lo_lo_8 = 0;
    vlSelf->__PVT__io_RD_lo_8 = 0;
    vlSelf->__PVT___io_RD_T_590 = 0;
    vlSelf->__PVT___io_RD_T_593 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_9 = 0;
    vlSelf->__PVT__io_RD_lo_lo_9 = 0;
    vlSelf->__PVT__io_RD_lo_9 = 0;
    vlSelf->__PVT___io_RD_T_645 = 0;
    vlSelf->__PVT___io_RD_T_648 = 0;
    vlSelf->__PVT___io_RD_T_650 = 0;
    vlSelf->__PVT___io_RD_T_652 = 0;
    vlSelf->__PVT___io_RD_T_654 = 0;
    vlSelf->__PVT___io_RD_T_656 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_10 = 0;
    vlSelf->__PVT__io_RD_lo_lo_10 = 0;
    vlSelf->__PVT__io_RD_lo_10 = 0;
    vlSelf->__PVT___io_RD_T_710 = 0;
    vlSelf->__PVT___io_RD_T_713 = 0;
    vlSelf->__PVT__io_RD_lo_lo_lo_11 = 0;
    vlSelf->__PVT__io_RD_lo_lo_11 = 0;
    vlSelf->__PVT__io_RD_lo_11 = 0;
    vlSelf->__PVT___io_RD_T_765 = 0;
    vlSelf->__PVT___io_RD_T_768 = 0;
    vlSelf->__PVT___io_RD_T_770 = 0;
    vlSelf->__PVT___io_RD_T_772 = 0;
    vlSelf->__PVT___io_RD_T_774 = 0;
    vlSelf->__PVT___io_RD_T_776 = 0;
    vlSelf->__PVT___io_RD_T_777 = 0;
    vlSelf->__PVT__io_RD_lo_lo_12 = 0;
    vlSelf->__PVT__io_RD_lo_12 = 0;
    vlSelf->__PVT___io_RD_T_812 = 0;
    vlSelf->__PVT___io_RD_T_814 = 0;
    vlSelf->__PVT___io_RD_T_816 = 0;
    vlSelf->__PVT___io_RD_T_817 = 0;
    vlSelf->__PVT__io_RD_lo_lo_13 = 0;
    vlSelf->__PVT__io_RD_lo_13 = 0;
    vlSelf->__PVT___io_RD_T_852 = 0;
    vlSelf->__PVT___io_RD_T_854 = 0;
    vlSelf->__PVT___io_RD_T_856 = 0;
    vlSelf->__PVT___io_RD_T_857 = 0;
    vlSelf->__PVT___io_RD_T_858 = 0;
    vlSelf->__PVT___io_RD_T_860 = 0;
    vlSelf->__PVT___io_RD_T_862 = 0;
}
