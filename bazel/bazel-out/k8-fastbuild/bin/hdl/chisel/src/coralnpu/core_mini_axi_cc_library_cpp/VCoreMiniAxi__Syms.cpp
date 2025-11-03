// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCoreMiniAxi__pch.h"
#include "VCoreMiniAxi.h"
#include "VCoreMiniAxi___024root.h"
#include "VCoreMiniAxi___024unit.h"

// FUNCTIONS
VCoreMiniAxi__Syms::~VCoreMiniAxi__Syms()
{
}

VCoreMiniAxi__Syms::VCoreMiniAxi__Syms(VerilatedContext* contextp, const char* namep, VCoreMiniAxi* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(17107);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_CoreMiniAxi__axiSlave__verification_Assert.configure(this, name(), "CoreMiniAxi.axiSlave.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__alu_0__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.alu_0.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__alu_1__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.alu_1.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__alu_2__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.alu_2.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__alu_3__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.alu_3.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__bru_0__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.bru_0.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__bru_1__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.bru_1.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__bru_2__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.bru_2.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__bru_3__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.bru_3.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__csr__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.csr.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__fRegfile__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.fRegfile.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__fetch__instructionBuffer__circularBuffer__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.fetch.instructionBuffer.circularBuffer.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__fetch__instructionBuffer__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.fetch.instructionBuffer.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__floatCore__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.floatCore.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__lsu__ctrl__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.lsu.ctrl.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__lsu__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.lsu.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__mlu__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.mlu.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__regfile__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.regfile.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__core__score__verification_Assert.configure(this, name(), "CoreMiniAxi.core.score.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__dtcmArbiter__verification_Assert.configure(this, name(), "CoreMiniAxi.dtcmArbiter.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__ebus2axi__readAddrQ__verification_Assert.configure(this, name(), "CoreMiniAxi.ebus2axi.readAddrQ.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__ebus2axi__verification_Assert.configure(this, name(), "CoreMiniAxi.ebus2axi.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__ebus2axi__writeAddrQ__verification_Assert.configure(this, name(), "CoreMiniAxi.ebus2axi.writeAddrQ.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__ebus2axi__writeDataQ__verification_Assert.configure(this, name(), "CoreMiniAxi.ebus2axi.writeDataQ.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__fabricMux__verification_Assert.configure(this, name(), "CoreMiniAxi.fabricMux.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CoreMiniAxi__itcmArbiter__verification_Assert.configure(this, name(), "CoreMiniAxi.itcmArbiter.verification_Assert", "verification_Assert", -12, VerilatedScope::SCOPE_OTHER);
}
