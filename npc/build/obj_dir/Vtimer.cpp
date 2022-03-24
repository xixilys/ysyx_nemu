// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtimer.h"
#include "Vtimer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtimer::Vtimer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtimer__Syms(_vcontextp__, _vcname__, this)}
    , rst{vlSymsp->TOP.rst}
    , stop{vlSymsp->TOP.stop}
    , start{vlSymsp->TOP.start}
    , clk{vlSymsp->TOP.clk}
    , bcd1{vlSymsp->TOP.bcd1}
    , bcd2{vlSymsp->TOP.bcd2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtimer::Vtimer(const char* _vcname__)
    : Vtimer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtimer::~Vtimer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtimer___024root___eval_initial(Vtimer___024root* vlSelf);
void Vtimer___024root___eval_settle(Vtimer___024root* vlSelf);
void Vtimer___024root___eval(Vtimer___024root* vlSelf);
QData Vtimer___024root___change_request(Vtimer___024root* vlSelf);
#ifdef VL_DEBUG
void Vtimer___024root___eval_debug_assertions(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG
void Vtimer___024root___final(Vtimer___024root* vlSelf);

static void _eval_initial_loop(Vtimer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtimer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtimer___024root___eval_settle(&(vlSymsp->TOP));
        Vtimer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtimer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/timer.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtimer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtimer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtimer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtimer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtimer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtimer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/timer.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtimer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtimer::final() {
    Vtimer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtimer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtimer::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtimer___024root__traceInitTop(Vtimer___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtimer___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtimer___024root__traceRegister(Vtimer___024root* vlSelf, VerilatedVcd* tracep);

void Vtimer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtimer___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
