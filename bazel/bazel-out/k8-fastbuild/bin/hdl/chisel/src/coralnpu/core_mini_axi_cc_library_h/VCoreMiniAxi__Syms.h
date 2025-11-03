// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOREMINIAXI__SYMS_H_
#define VERILATED_VCOREMINIAXI__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCoreMiniAxi.h"

// INCLUDE MODULE CLASSES
#include "VCoreMiniAxi___024root.h"
#include "VCoreMiniAxi___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCoreMiniAxi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCoreMiniAxi* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCoreMiniAxi___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_CoreMiniAxi__axiSlave__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__alu_0__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__alu_1__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__alu_2__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__alu_3__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__bru_0__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__bru_1__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__bru_2__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__bru_3__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__csr__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__fRegfile__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__fetch__instructionBuffer__circularBuffer__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__fetch__instructionBuffer__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__floatCore__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__lsu__ctrl__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__lsu__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__mlu__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__regfile__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__core__score__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__dtcmArbiter__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__ebus2axi__readAddrQ__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__ebus2axi__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__ebus2axi__writeAddrQ__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__ebus2axi__writeDataQ__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__fabricMux__verification_Assert;
    VerilatedScope __Vscope_CoreMiniAxi__itcmArbiter__verification_Assert;

    // CONSTRUCTORS
    VCoreMiniAxi__Syms(VerilatedContext* contextp, const char* namep, VCoreMiniAxi* modelp);
    ~VCoreMiniAxi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
