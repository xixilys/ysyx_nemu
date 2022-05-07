// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_control.h for the primary calling header

#include "Vriscv_control___024root.h"
#include "Vriscv_control__Syms.h"

//==========

VL_INLINE_OPT void Vriscv_control___024root___sequent__TOP__1(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___sequent__TOP__1\n"); );
    // Variables
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_13;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_26;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_30;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_31;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_109;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_122;
    // Body
    if (vlSelf->reset) {
        vlSelf->riscv_control__DOT__inscode = 0U;
        vlSelf->riscv_control__DOT__src2 = 0U;
    } else {
        vlSelf->riscv_control__DOT__inscode = ((0x1fc00U 
                                                & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0xfU)) 
                                               | ((0x380U 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)));
        vlSelf->riscv_control__DOT__src2 = (IData)(
                                                   ((0U 
                                                     == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                     ? (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                           >> 0x14U))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                      ? 
                                                     ((vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                       >> 0x1fU)
                                                       ? 
                                                      (0xfffffffffffff000ULL 
                                                       | (QData)((IData)(
                                                                         (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                          >> 0x14U))))
                                                       : (QData)((IData)(
                                                                         (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                          >> 0x14U))))
                                                      : (QData)((IData)(
                                                                        ((2U 
                                                                          == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                             >> 0x14U))
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                                           ? 
                                                                          (0x1fU 
                                                                           & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                              >> 0x14U))
                                                                           : 0U)))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_control__DOT__pc = 0x80000000ULL;
    } else if (((2U == (IData)(vlSelf->riscv_control__DOT__a)) 
                & (6U != (IData)(vlSelf->riscv_control__DOT__instype)))) {
        vlSelf->riscv_control__DOT__pc = vlSelf->riscv_control__DOT___pc_T_5;
    }
    if ((0x1fU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x1eU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x1cU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x1bU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x1dU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    vlSelf->riscv_control__DOT__src1 = ((IData)(vlSelf->reset)
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                     >> 0xfU))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 0xfU))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                       >> 0xfU))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                        >> 0xfU))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                       ? 
                                                      ((0x80000U 
                                                        & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                           >> 0xcU)) 
                                                       | ((0x7f800U 
                                                           & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                              >> 1U)) 
                                                          | ((0x400U 
                                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                 >> 0xaU)) 
                                                             | (0x3ffU 
                                                                & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                   >> 0x15U)))))
                                                       : 0U)))))));
    if ((0xeU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0xfU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x10U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x11U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x12U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x13U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x14U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x15U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x16U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x17U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x18U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x19U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0x1aU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((7U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((9U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((5U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((8U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((4U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((1U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((2U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0xaU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((6U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((3U == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0xbU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0xcU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    if ((0xdU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13 
            = ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127);
    }
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0 
        = ((0U == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? ((1U == (IData)(vlSelf->riscv_control__DOT__a))
                ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                    ? ((1U == (IData)(vlSelf->riscv_control__DOT__instype))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20
                        : 0ULL) : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
                : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127)
            : 0ULL);
    vlSelf->io_inscode = vlSelf->riscv_control__DOT__inscode;
    vlSelf->io_src2 = vlSelf->riscv_control__DOT__src2;
    vlSelf->riscv_control__DOT___pc_T_5 = (4ULL + vlSelf->riscv_control__DOT__pc);
    vlSelf->io_pc = vlSelf->riscv_control__DOT__pc;
    vlSelf->io_src1 = vlSelf->riscv_control__DOT__src1;
    if (vlSelf->reset) {
        vlSelf->riscv_control__DOT__a = 0U;
        vlSelf->riscv_control__DOT__instype = 0U;
    } else {
        vlSelf->riscv_control__DOT__a = ((IData)(vlSelf->riscv_control__DOT__wrap_wrap)
                                          ? 0U : (IData)(vlSelf->riscv_control__DOT___wrap_value_T_1));
        vlSelf->riscv_control__DOT__instype = ((IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test)
                                                ? 0U
                                                : (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5));
    }
    riscv_control__DOT__exu_instance__DOT___GEN_13 
        = ((0xdU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13
            : ((0xcU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12
                : ((0xbU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11
                    : ((0xaU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10
                        : ((9U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9
                            : ((8U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8
                                : ((7U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7
                                    : ((6U == (0x1fU 
                                               & vlSelf->riscv_control__DOT__src1))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6
                                        : ((5U == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__src1))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__src1))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__src1))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__src1))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__src1))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1
                                                      : vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0)))))))))))));
    vlSelf->riscv_control__DOT__dest = ((IData)(vlSelf->reset)
                                         ? 0U : ((0U 
                                                  == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                     >> 7U))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 7U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                    ? 
                                                   ((0xfe0U 
                                                     & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                          >> 7U)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                     ? 
                                                    ((0x1000U 
                                                      & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                 >> 7U)))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                         >> 7U))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                          >> 7U))
                                                       : 0U)))))));
    riscv_control__DOT__exu_instance__DOT___GEN_26 
        = ((0x1aU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26
            : ((0x19U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25
                : ((0x18U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24
                    : ((0x17U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23
                        : ((0x16U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22
                            : ((0x15U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21
                                : ((0x14U == (0x1fU 
                                              & vlSelf->riscv_control__DOT__src1))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20
                                    : ((0x13U == (0x1fU 
                                                  & vlSelf->riscv_control__DOT__src1))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & vlSelf->riscv_control__DOT__src1))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__src1))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__src1))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__src1))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__src1))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14
                                                      : riscv_control__DOT__exu_instance__DOT___GEN_13)))))))))))));
    vlSelf->riscv_control__DOT__wrap_wrap = (2U == (IData)(vlSelf->riscv_control__DOT__a));
    vlSelf->riscv_control__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->riscv_control__DOT__a)));
    vlSelf->io_instype = vlSelf->riscv_control__DOT__instype;
    vlSelf->io_trap_flag = (6U == (IData)(vlSelf->riscv_control__DOT__instype));
    riscv_control__DOT__exu_instance__DOT___GEN_30 
        = ((0x1eU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30
            : ((0x1dU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29
                : ((0x1cU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28
                    : ((0x1bU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27
                        : riscv_control__DOT__exu_instance__DOT___GEN_26))));
    vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
        = ((IData)(vlSelf->reset) ? 0U : vlSelf->io_mem_instrution);
    vlSelf->io_dest = vlSelf->riscv_control__DOT__dest;
    riscv_control__DOT__exu_instance__DOT___GEN_109 
        = ((0xdU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13
            : ((0xcU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12
                : ((0xbU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11
                    : ((0xaU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10
                        : ((9U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9
                            : ((8U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8
                                : ((7U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7
                                    : ((6U == (0x1fU 
                                               & vlSelf->riscv_control__DOT__dest))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6
                                        : ((5U == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__dest))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__dest))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__dest))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__dest))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__dest))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1
                                                      : vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0)))))))))))));
    riscv_control__DOT__exu_instance__DOT___GEN_31 
        = ((0x1fU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
            : riscv_control__DOT__exu_instance__DOT___GEN_30);
    riscv_control__DOT__exu_instance__DOT___GEN_122 
        = ((0x1aU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26
            : ((0x19U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25
                : ((0x18U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24
                    : ((0x17U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23
                        : ((0x16U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22
                            : ((0x15U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21
                                : ((0x14U == (0x1fU 
                                              & vlSelf->riscv_control__DOT__dest))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20
                                    : ((0x13U == (0x1fU 
                                                  & vlSelf->riscv_control__DOT__dest))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & vlSelf->riscv_control__DOT__dest))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__dest))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__dest))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__dest))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__dest))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14
                                                      : riscv_control__DOT__exu_instance__DOT___GEN_109)))))))))))));
    vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20 
        = ((0x13U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
            ? (riscv_control__DOT__exu_instance__DOT___GEN_31 
               + (QData)((IData)(vlSelf->riscv_control__DOT__src2)))
            : ((0x113U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
                ? (QData)((IData)(VL_LTS_IQQ(1,64,64, 
                                             ((0x1fU 
                                               == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__src1))
                                               ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
                                               : riscv_control__DOT__exu_instance__DOT___GEN_30), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->riscv_control__DOT__src2 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv_control__DOT__src2))))))
                : ((0x193U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
                    ? (QData)((IData)((riscv_control__DOT__exu_instance__DOT___GEN_31 
                                       < (QData)((IData)(vlSelf->riscv_control__DOT__src2)))))
                    : 0ULL)));
    vlSelf->io_riscv_instruction = vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg;
    vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test 
        = ((0x33U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
           | (0x3bU == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)));
    vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5 
        = (((0x67U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
            | (0x13U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
            ? 1U : (((3U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                     | (0x23U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
                     ? 2U : ((0x63U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))
                              ? 3U : (((0x37U == (0x7fU 
                                                  & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
                                       ? 4U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))
                                                ? 5U
                                                : (
                                                   (0x100073U 
                                                    == vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)
                                                    ? 6U
                                                    : 0xfU))))));
    vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126 
        = ((0x1eU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30
            : ((0x1dU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29
                : ((0x1cU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28
                    : ((0x1bU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27
                        : riscv_control__DOT__exu_instance__DOT___GEN_122))));
    vlSelf->riscv_control__DOT__idu_instance__DOT__instype 
        = ((IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test)
            ? 0U : (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5));
    if ((0x1fU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->io_answer = vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31;
        vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127 
            = vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31;
    } else {
        vlSelf->io_answer = vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126;
        vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127 
            = vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126;
    }
}

void Vriscv_control___024root___eval(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_control___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vriscv_control___024root___change_request_1(Vriscv_control___024root* vlSelf);

VL_INLINE_OPT QData Vriscv_control___024root___change_request(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___change_request\n"); );
    // Body
    return (Vriscv_control___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv_control___024root___change_request_1(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_control___024root___eval_debug_assertions(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
