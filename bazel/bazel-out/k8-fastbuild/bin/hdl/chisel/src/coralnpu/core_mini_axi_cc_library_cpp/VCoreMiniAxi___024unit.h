// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCoreMiniAxi.h for the primary calling header

#ifndef VERILATED_VCOREMINIAXI___024UNIT_H_
#define VERILATED_VCOREMINIAXI___024UNIT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class VCoreMiniAxi__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCoreMiniAxi___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCoreMiniAxi__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCoreMiniAxi___024unit(VCoreMiniAxi__Syms* symsp, const char* v__name);
    ~VCoreMiniAxi___024unit();
    VL_UNCOPYABLE(VCoreMiniAxi___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
