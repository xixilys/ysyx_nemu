// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfourbitalu.h"
#include "Vfourbitalu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfourbitalu::Vfourbitalu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfourbitalu__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , x{vlSymsp->TOP.x}
    , out{vlSymsp->TOP.out}
    , overflower{vlSymsp->TOP.overflower}
    , zero{vlSymsp->TOP.zero}
    , carry_flag{vlSymsp->TOP.carry_flag}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfourbitalu::Vfourbitalu(const char* _vcname__)
    : Vfourbitalu(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfourbitalu::~Vfourbitalu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfourbitalu___024root___eval_initial(Vfourbitalu___024root* vlSelf);
void Vfourbitalu___024root___eval_settle(Vfourbitalu___024root* vlSelf);
void Vfourbitalu___024root___eval(Vfourbitalu___024root* vlSelf);
QData Vfourbitalu___024root___change_request(Vfourbitalu___024root* vlSelf);
#ifdef VL_DEBUG
void Vfourbitalu___024root___eval_debug_assertions(Vfourbitalu___024root* vlSelf);
#endif  // VL_DEBUG
void Vfourbitalu___024root___final(Vfourbitalu___024root* vlSelf);

static void _eval_initial_loop(Vfourbitalu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfourbitalu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfourbitalu___024root___eval_settle(&(vlSymsp->TOP));
        Vfourbitalu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfourbitalu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/fourbitalu.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfourbitalu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfourbitalu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfourbitalu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfourbitalu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfourbitalu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfourbitalu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/fourbitalu.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfourbitalu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfourbitalu::final() {
    Vfourbitalu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfourbitalu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfourbitalu::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vfourbitalu___024root__traceInitTop(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfourbitalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfourbitalu___024root*>(voidSelf);
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfourbitalu___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vfourbitalu___024root__traceRegister(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep);

void Vfourbitalu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vfourbitalu___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
