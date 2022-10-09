// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top___024root.h"

void Vmycpu_top___024root___ctor_var_reset(Vmycpu_top___024root* vlSelf);

Vmycpu_top___024root::Vmycpu_top___024root(Vmycpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , __Vm_mtaskstate_17(1U)
    , __Vm_mtaskstate_33(5U)
    , __Vm_mtaskstate_45(3U)
    , __Vm_mtaskstate_34(2U)
    , __Vm_mtaskstate_56(9U)
    , __Vm_mtaskstate_63(2U)
    , __Vm_mtaskstate_86(8U)
    , __Vm_mtaskstate_19(1U)
    , __Vm_mtaskstate_43(1U)
    , __Vm_mtaskstate_28(2U)
    , __Vm_mtaskstate_62(3U)
    , __Vm_mtaskstate_12(3U)
    , __Vm_mtaskstate_81(3U)
    , __Vm_mtaskstate_91(6U)
    , __Vm_mtaskstate_67(7U)
    , __Vm_mtaskstate_20(1U)
    , __Vm_mtaskstate_46(1U)
    , __Vm_mtaskstate_50(3U)
    , __Vm_mtaskstate_58(0xaU)
    , __Vm_mtaskstate_53(8U)
    , __Vm_mtaskstate_74(2U)
    , __Vm_mtaskstate_77(4U)
    , __Vm_mtaskstate_96(9U)
    , __Vm_mtaskstate_18(1U)
    , __Vm_mtaskstate_26(2U)
    , __Vm_mtaskstate_25(2U)
    , __Vm_mtaskstate_57(0xaU)
    , __Vm_mtaskstate_85(2U)
    , __Vm_mtaskstate_64(5U)
    , __Vm_mtaskstate_71(3U)
    , __Vm_mtaskstate_83(2U)
    , __Vm_mtaskstate_99(7U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_35(1U)
    , __Vm_mtaskstate_44(2U)
    , __Vm_mtaskstate_27(2U)
    , __Vm_mtaskstate_60(1U)
    , __Vm_mtaskstate_54(9U)
    , __Vm_mtaskstate_84(1U)
    , __Vm_mtaskstate_76(2U)
    , __Vm_mtaskstate_78(8U)
    , __Vm_mtaskstate_98(8U)
    , __Vm_mtaskstate_14(1U)
    , __Vm_mtaskstate_42(2U)
    , __Vm_mtaskstate_52(2U)
    , __Vm_mtaskstate_29(2U)
    , __Vm_mtaskstate_94(1U)
    , __Vm_mtaskstate_55(6U)
    , __Vm_mtaskstate_68(4U)
    , __Vm_mtaskstate_80(5U)
    , __Vm_mtaskstate_90(1U)
    , __Vm_mtaskstate_22(1U)
    , __Vm_mtaskstate_41(2U)
    , __Vm_mtaskstate_51(2U)
    , __Vm_mtaskstate_40(1U)
    , __Vm_mtaskstate_23(3U)
    , __Vm_mtaskstate_69(2U)
    , __Vm_mtaskstate_79(3U)
    , __Vm_mtaskstate_73(4U)
    , __Vm_mtaskstate_88(2U)
    , __Vm_mtaskstate_61(1U)
    , __Vm_mtaskstate_49(3U)
    , __Vm_mtaskstate_31(2U)
    , __Vm_mtaskstate_100(1U)
    , __Vm_mtaskstate_65(7U)
    , __Vm_mtaskstate_82(3U)
    , __Vm_mtaskstate_59(1U)
    , __Vm_mtaskstate_47(5U)
    , __Vm_mtaskstate_39(1U)
    , __Vm_mtaskstate_38(1U)
    , __Vm_mtaskstate_66(9U)
    , __Vm_mtaskstate_70(2U)
    , __Vm_mtaskstate_72(5U)
    , __Vm_mtaskstate_93(3U)
    , __Vm_mtaskstate_97(0xaU)
    , __Vm_mtaskstate_102(0x11U)
    , __Vm_mtaskstate_32(3U)
    , __Vm_mtaskstate_37(3U)
    , __Vm_mtaskstate_24(1U)
    , __Vm_mtaskstate_30(9U)
    , __Vm_mtaskstate_89(1U)
    , __Vm_mtaskstate_75(4U)
    , __Vm_mtaskstate_92(6U)
    , __Vm_mtaskstate_95(8U)
    , __Vm_mtaskstate_final(0xaU)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top___024root___ctor_var_reset(this);
}

void Vmycpu_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top___024root::~Vmycpu_top___024root() {
}
