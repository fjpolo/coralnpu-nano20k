// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreMiniAxi.h for the primary calling header

#include "VCoreMiniAxi__pch.h"
#include "VCoreMiniAxi__Syms.h"
#include "VCoreMiniAxi___024unit.h"

void VCoreMiniAxi___024unit___ctor_var_reset(VCoreMiniAxi___024unit* vlSelf);

VCoreMiniAxi___024unit::VCoreMiniAxi___024unit(VCoreMiniAxi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCoreMiniAxi___024unit___ctor_var_reset(this);
}

void VCoreMiniAxi___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCoreMiniAxi___024unit::~VCoreMiniAxi___024unit() {
}
