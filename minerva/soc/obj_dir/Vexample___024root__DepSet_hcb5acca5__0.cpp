// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexample.h for the primary calling header

#include "verilated.h"

#include "Vexample___024root.h"

VlCoroutine Vexample___024root___eval_initial__TOP__0(Vexample___024root* vlSelf);

void Vexample___024root___eval_initial(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_initial\n"); );
    // Body
    Vexample___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_INLINE_OPT VlCoroutine Vexample___024root___eval_initial__TOP__0(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_initial__TOP__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(2ULL, "example.v", 
                                       19);
    VL_FINISH_MT("example.v", 19, "");
}

void Vexample___024root___eval_act(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vexample___024root___nba_sequent__TOP__0(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->data_out = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->data_in));
}

void Vexample___024root___eval_nba(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vexample___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vexample___024root___eval_triggers__act(Vexample___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexample___024root___dump_triggers__act(Vexample___024root* vlSelf);
#endif  // VL_DEBUG
void Vexample___024root___timing_resume(Vexample___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexample___024root___dump_triggers__nba(Vexample___024root* vlSelf);
#endif  // VL_DEBUG

void Vexample___024root___eval(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vexample___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vexample___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("example.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vexample___024root___timing_resume(vlSelf);
                Vexample___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vexample___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("example.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vexample___024root___eval_nba(vlSelf);
        }
    }
}

void Vexample___024root___timing_resume(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vexample___024root___eval_debug_assertions(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->data_in & 0xfeU))) {
        Verilated::overWidthError("data_in");}
}
#endif  // VL_DEBUG
