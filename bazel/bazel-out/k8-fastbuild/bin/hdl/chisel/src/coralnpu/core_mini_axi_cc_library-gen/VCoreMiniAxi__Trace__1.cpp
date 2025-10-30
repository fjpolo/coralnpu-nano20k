// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_sc.h"
#include "VCoreMiniAxi__Syms.h"


void VCoreMiniAxi___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreMiniAxi___024root__trace_cleanup\n"); );
    // Init
    VCoreMiniAxi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreMiniAxi___024root*>(voidSelf);
    VCoreMiniAxi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2cU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
